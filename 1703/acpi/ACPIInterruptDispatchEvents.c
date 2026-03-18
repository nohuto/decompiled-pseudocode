/*
 * XREFs of ACPIInterruptDispatchEvents @ 0x1C00021F0
 * Callers:
 *     ACPIInterruptServiceRoutineDPC @ 0x1C002BD70 (ACPIInterruptServiceRoutineDPC.c)
 * Callees:
 *     AcpiDiagTraceUnexpectedGpe @ 0x1C0002318 (AcpiDiagTraceUnexpectedGpe.c)
 *     ACPIWriteGpeStatusRegister @ 0x1C00204B0 (ACPIWriteGpeStatusRegister.c)
 *     ACPIReadGpeStatusRegister @ 0x1C0020520 (ACPIReadGpeStatusRegister.c)
 */

void ACPIInterruptDispatchEvents()
{
  unsigned int v0; // ebp
  unsigned int v1; // ebx
  char v2; // al
  __int64 v3; // rdx
  unsigned __int8 v4; // r14
  char v5; // si
  __int64 v6; // rdx
  __int64 v7; // rdi

  v0 = *((unsigned __int16 *)AcpiInformation + 51);
  KeAcquireSpinLockAtDpcLevel(&GpeTableLock);
  v1 = 0;
  if ( v0 )
  {
    v7 = 0LL;
    do
    {
      v2 = ACPIReadGpeStatusRegister(v1);
      v4 = v2 & *((_BYTE *)GpeCurEnable + v7);
      v5 = v2 & ~*((_BYTE *)GpeHandlerRegistered + v7);
      if ( v5 )
      {
        LOBYTE(v3) = v2 & ~*((_BYTE *)GpeHandlerRegistered + v7);
        AcpiDiagTraceUnexpectedGpe(v1, v3);
        LOBYTE(v6) = v5;
        ACPIWriteGpeStatusRegister(v1, v6);
      }
      *((_BYTE *)GpePending + v7) |= v4;
      *((_BYTE *)GpeRunMethod + v7) |= v4;
      *((_BYTE *)GpeCurEnable + v7) &= ~v4;
      if ( (v4 & (unsigned __int8)~*((_BYTE *)GpeIsLevel + v7)) != 0 )
      {
        LOBYTE(v3) = v4 & ~*((_BYTE *)GpeIsLevel + v7);
        ACPIWriteGpeStatusRegister(v1, v3);
      }
      ++v1;
      ++v7;
    }
    while ( v1 < v0 );
  }
  AcpiGpeWorkDone = 1;
  if ( !AcpiGpeDpcScheduled && !AcpiGpeDpcRunning )
  {
    AcpiGpeDpcScheduled = 1;
    KeInsertQueueDpc(&AcpiGpeDpc, 0LL, 0LL);
  }
  KeReleaseSpinLockFromDpcLevel(&GpeTableLock);
}
