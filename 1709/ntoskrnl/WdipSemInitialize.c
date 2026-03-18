/*
 * XREFs of WdipSemInitialize @ 0x1405ABAE8
 * Callers:
 *     EtwpInitialize @ 0x140840858 (EtwpInitialize.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     WdipSemCleanStart @ 0x1405AB080 (WdipSemCleanStart.c)
 *     WdipSemInitializeGlobalState @ 0x1405ABB3C (WdipSemInitializeGlobalState.c)
 */

_QWORD *WdipSemInitialize()
{
  struct _KTHREAD *CurrentThread; // rax

  WdipSemInitializeGlobalState();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&WdipSemPushLock, 0LL);
  WdipSemCleanStart();
  ExReleasePushLockEx((ULONG_PTR)&WdipSemPushLock, 0LL);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
