/*
 * XREFs of ACPIInterruptDispatchEvents @ 0x1C0050348
 * Callers:
 *     ACPIInterruptServiceRoutineDPC @ 0x1C0050670 (ACPIInterruptServiceRoutineDPC.c)
 * Callees:
 *     ACPIWriteGpeStatusRegister @ 0x1C00105AC (ACPIWriteGpeStatusRegister.c)
 *     ACPIReadGpeStatusRegister @ 0x1C0013CA4 (ACPIReadGpeStatusRegister.c)
 *     AcpiDiagTraceUnexpectedGpe @ 0x1C0041FF4 (AcpiDiagTraceUnexpectedGpe.c)
 */

void ACPIInterruptDispatchEvents()
{
  unsigned int v0; // ebp
  unsigned int v1; // ebx
  __int64 v2; // rdi
  char v3; // al
  unsigned __int8 v4; // r14
  char v5; // si

  v0 = *((unsigned __int16 *)AcpiInformation + 51);
  KeAcquireSpinLockAtDpcLevel(&GpeTableLock);
  v1 = 0;
  if ( v0 )
  {
    v2 = 0LL;
    do
    {
      v3 = ACPIReadGpeStatusRegister(v1);
      v4 = v3 & *((_BYTE *)GpeCurEnable + v2);
      v5 = v3 & ~*((_BYTE *)GpeHandlerRegistered + v2);
      if ( v5 )
      {
        AcpiDiagTraceUnexpectedGpe(v1, v3 & ~*((_BYTE *)GpeHandlerRegistered + v2));
        ACPIWriteGpeStatusRegister(v1, v5);
      }
      *((_BYTE *)GpePending + v2) |= v4;
      *((_BYTE *)GpeRunMethod + v2) |= v4;
      *((_BYTE *)GpeCurEnable + v2) &= ~v4;
      if ( (v4 & (unsigned __int8)~*((_BYTE *)GpeIsLevel + v2)) != 0 )
        ACPIWriteGpeStatusRegister(v1, v4 & ~*((_BYTE *)GpeIsLevel + v2));
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
