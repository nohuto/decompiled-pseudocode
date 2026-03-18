/*
 * XREFs of WdipSemUpdate @ 0x1407A10E8
 * Callers:
 *     WdiUpdateSem @ 0x1402ACDC0 (WdiUpdateSem.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     WdipSemCleanStart @ 0x1406391C0 (WdipSemCleanStart.c)
 *     WdipSemInitializeGlobalState @ 0x14063ABE8 (WdipSemInitializeGlobalState.c)
 *     WdipSemShutdown @ 0x1407A13A0 (WdipSemShutdown.c)
 */

__int64 WdipSemUpdate()
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v1; // ebx
  __int64 v2; // r8
  __int64 v3; // r9

  if ( !WdipSemInitialized )
    WdipSemInitializeGlobalState();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&WdipSemPushLock, 0LL);
  if ( WdipSemEnabled )
    WdipSemShutdown();
  v1 = WdipSemCleanStart();
  ExReleasePushLockEx((ULONG_PTR)&WdipSemPushLock, 0LL, v2, v3);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v1;
}
