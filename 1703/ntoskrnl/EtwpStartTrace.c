/*
 * XREFs of EtwpStartTrace @ 0x14045C080
 * Callers:
 *     NtTraceControl @ 0x14047FD70 (NtTraceControl.c)
 *     EtwWmitraceWorker @ 0x14070EB94 (EtwWmitraceWorker.c)
 * Callees:
 *     KeReleaseMutex @ 0x1400DDCF0 (KeReleaseMutex.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     EtwpStartLogger @ 0x1405509F8 (EtwpStartLogger.c)
 */

__int64 __fastcall EtwpStartTrace(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject(&EtwpStartTraceMutex, Executive, 0, 0, 0LL);
  LODWORD(a2) = EtwpStartLogger(a1, a2);
  KeReleaseMutex(&EtwpStartTraceMutex, 0);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)a2;
}
