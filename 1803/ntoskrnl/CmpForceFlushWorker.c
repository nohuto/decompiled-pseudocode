/*
 * XREFs of CmpForceFlushWorker @ 0x1406FBC70
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     CmpDoFlushAll @ 0x1401551E0 (CmpDoFlushAll.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     CmpAttachToRegistryProcess @ 0x1404AC4D0 (CmpAttachToRegistryProcess.c)
 */

_QWORD *CmpForceFlushWorker()
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *result; // rax
  _BYTE v2[48]; // [rsp+20h] [rbp-48h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    CmpAttachToRegistryProcess((__int64)v2);
    CmpDoFlushAll();
    KiUnstackDetachProcess((__int64)v2, 0LL);
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  }
  result = KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  _InterlockedExchange(&CmpForceFlushPending, 0);
  return result;
}
