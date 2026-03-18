/*
 * XREFs of ACPIInterruptDispatchEvents @ 0x1C002AD48
 * Callers:
 *     ACPIInterruptServiceRoutineDPC @ 0x1C002B080 (ACPIInterruptServiceRoutineDPC.c)
 * Callees:
 *     AcpiDiagTraceUnexpectedGpe @ 0x1C0007F88 (AcpiDiagTraceUnexpectedGpe.c)
 *     ACPIReadGpeStatusRegister @ 0x1C00349A4 (ACPIReadGpeStatusRegister.c)
 *     ACPIWriteGpeStatusRegister @ 0x1C0034ADC (ACPIWriteGpeStatusRegister.c)
 */

void ACPIInterruptDispatchEvents()
{
  unsigned int v0; // ebp
  unsigned int v1; // ebx
  __int64 v2; // rdi
  char v3; // al
  __int64 v4; // rdx
  unsigned __int8 v5; // r14
  char v6; // si
  __int64 v7; // rdx

  v0 = *((unsigned __int16 *)AcpiInformation + 51);
  KeAcquireSpinLockAtDpcLevel(&GpeTableLock);
  v1 = 0;
  if ( v0 )
  {
    v2 = 0LL;
    do
    {
      v3 = ACPIReadGpeStatusRegister(v1);
      v5 = v3 & *((_BYTE *)GpeCurEnable + v2);
      v6 = v3 & ~*((_BYTE *)GpeHandlerRegistered + v2);
      if ( v6 )
      {
        AcpiDiagTraceUnexpectedGpe(v1, v3 & ~*((_BYTE *)GpeHandlerRegistered + v2));
        LOBYTE(v7) = v6;
        ACPIWriteGpeStatusRegister(v1, v7);
      }
      *((_BYTE *)GpePending + v2) |= v5;
      *((_BYTE *)GpeRunMethod + v2) |= v5;
      *((_BYTE *)GpeCurEnable + v2) &= ~v5;
      if ( (v5 & (unsigned __int8)~*((_BYTE *)GpeIsLevel + v2)) != 0 )
      {
        LOBYTE(v4) = v5 & ~*((_BYTE *)GpeIsLevel + v2);
        ACPIWriteGpeStatusRegister(v1, v4);
      }
      ++v1;
      ++v2;
    }
    while ( v1 < v0 );
  }
  AcpiGpeWorkDone = 1;
  if ( !AcpiGpeDpcRunning && !AcpiGpeDpcScheduled )
  {
    AcpiGpeDpcScheduled = 1;
    KeInsertQueueDpc(&AcpiGpeDpc, 0LL, 0LL);
  }
  KeReleaseSpinLockFromDpcLevel(&GpeTableLock);
}
