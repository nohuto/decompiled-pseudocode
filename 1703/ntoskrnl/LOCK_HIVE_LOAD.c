/*
 * XREFs of LOCK_HIVE_LOAD @ 0x1404D85E4
 * Callers:
 *     CmpTryToRundownHive @ 0x14007EC54 (CmpTryToRundownHive.c)
 *     CmpLoadKeyCommon @ 0x14007EF3C (CmpLoadKeyCommon.c)
 *     CmKtmNotification @ 0x14042C540 (CmKtmNotification.c)
 *     CmpPerformUnloadKey @ 0x1404CB738 (CmpPerformUnloadKey.c)
 *     CmpLateUnloadHiveWorker @ 0x1404CC580 (CmpLateUnloadHiveWorker.c)
 *     CmReleaseLoadKeyContext @ 0x1404D58DC (CmReleaseLoadKeyContext.c)
 *     CmLoadAppKey @ 0x1404D59A0 (CmLoadAppKey.c)
 *     CmpDoFlushNextHive @ 0x1404D8270 (CmpDoFlushNextHive.c)
 *     CmShutdownSystem @ 0x14066270C (CmShutdownSystem.c)
 *     CmpResolveHiveLoadConflict @ 0x1406653F8 (CmpResolveHiveLoadConflict.c)
 *     CmpLazyCommitWorker @ 0x140669230 (CmpLazyCommitWorker.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 */

void LOCK_HIVE_LOAD()
{
  struct _KTHREAD *CurrentThread; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpLoadHiveLock, 0LL);
  CmpLoadHiveLockOwner = (__int64)CurrentThread;
}
