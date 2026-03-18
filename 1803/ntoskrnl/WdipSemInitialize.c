/*
 * XREFs of WdipSemInitialize @ 0x14063916C
 * Callers:
 *     EtwpInitialize @ 0x1408A3474 (EtwpInitialize.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     WdipSemCleanStart @ 0x1406391C0 (WdipSemCleanStart.c)
 *     WdipSemInitializeGlobalState @ 0x14063ABE8 (WdipSemInitializeGlobalState.c)
 */

_QWORD *WdipSemInitialize()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // r8
  __int64 v2; // r9

  WdipSemInitializeGlobalState();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&WdipSemPushLock, 0LL);
  WdipSemCleanStart();
  ExReleasePushLockEx((ULONG_PTR)&WdipSemPushLock, 0LL, v1, v2);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
