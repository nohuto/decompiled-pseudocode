/*
 * XREFs of CmpForceFlushWorker @ 0x140694580
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     CmpDoFlushAll @ 0x1401E3C7C (CmpDoFlushAll.c)
 */

_QWORD *CmpForceFlushWorker()
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    CmpDoFlushAll();
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  }
  result = KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  _InterlockedExchange(&CmpForceFlushPending, 0);
  return result;
}
