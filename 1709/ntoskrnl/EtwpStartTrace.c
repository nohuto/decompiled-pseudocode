/*
 * XREFs of EtwpStartTrace @ 0x14059D5E4
 * Callers:
 *     NtTraceControl @ 0x14049AB40 (NtTraceControl.c)
 *     EtwWmitraceWorker @ 0x14074A7F4 (EtwWmitraceWorker.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1400760B0 (KeReleaseMutex.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     EtwpStartLogger @ 0x1404ECD4C (EtwpStartLogger.c)
 */

__int64 __fastcall EtwpStartTrace(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject(&EtwpStartTraceMutex, Executive, 0, 0, 0LL);
  LODWORD(a2) = EtwpStartLogger(a1, a2);
  KeReleaseMutex(&EtwpStartTraceMutex, 0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)a2;
}
