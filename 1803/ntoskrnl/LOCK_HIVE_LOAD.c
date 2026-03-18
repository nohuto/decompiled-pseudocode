/*
 * XREFs of LOCK_HIVE_LOAD @ 0x14049BCCC
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400070F8 (CmpLoadKeyCommon.c)
 *     CmpTryToRundownHive @ 0x1400A1F10 (CmpTryToRundownHive.c)
 *     CmpDoFlushNextHive @ 0x14049B930 (CmpDoFlushNextHive.c)
 *     CmReleaseLoadKeyContext @ 0x14049BE14 (CmReleaseLoadKeyContext.c)
 *     CmLoadAppKey @ 0x14049C2A8 (CmLoadAppKey.c)
 *     CmpPerformUnloadKey @ 0x14054D0B4 (CmpPerformUnloadKey.c)
 *     CmpLateUnloadHiveWorker @ 0x14054D5D0 (CmpLateUnloadHiveWorker.c)
 *     CmKtmNotification @ 0x14054ED10 (CmKtmNotification.c)
 *     CmShutdownSystem @ 0x1406EFFE4 (CmShutdownSystem.c)
 *     CmpResolveHiveLoadConflict @ 0x1406F2EDC (CmpResolveHiveLoadConflict.c)
 *     CmpLazyCommitWorker @ 0x1406F7190 (CmpLazyCommitWorker.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 */

void LOCK_HIVE_LOAD()
{
  struct _KTHREAD *CurrentThread; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpLoadHiveLock, 0LL);
  CmpLoadHiveLockOwner = (__int64)CurrentThread;
}
