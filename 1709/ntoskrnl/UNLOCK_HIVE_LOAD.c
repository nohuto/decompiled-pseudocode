/*
 * XREFs of UNLOCK_HIVE_LOAD @ 0x1404E3B40
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400AF5E8 (CmpLoadKeyCommon.c)
 *     CmpTryToRundownHive @ 0x1400AFAE0 (CmpTryToRundownHive.c)
 *     CmpPerformUnloadKey @ 0x14046E4FC (CmpPerformUnloadKey.c)
 *     CmpCompleteUnloadKey @ 0x14046FBB4 (CmpCompleteUnloadKey.c)
 *     CmLoadAppKey @ 0x1404E13B4 (CmLoadAppKey.c)
 *     CmReleaseLoadKeyContext @ 0x1404E3934 (CmReleaseLoadKeyContext.c)
 *     CmpDoFlushNextHive @ 0x1404E3960 (CmpDoFlushNextHive.c)
 *     CmpLateUnloadHiveWorker @ 0x1404E67A0 (CmpLateUnloadHiveWorker.c)
 *     CmKtmNotification @ 0x1405697C0 (CmKtmNotification.c)
 *     CmShutdownSystem @ 0x14068BC1C (CmShutdownSystem.c)
 *     CmpResolveHiveLoadConflict @ 0x14068ECFC (CmpResolveHiveLoadConflict.c)
 *     CmpLazyCommitWorker @ 0x140693FA0 (CmpLazyCommitWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 */

_QWORD *UNLOCK_HIVE_LOAD()
{
  struct _KTHREAD *CurrentThread; // rbx

  CurrentThread = KeGetCurrentThread();
  CmpLoadHiveLockOwner = 0LL;
  ExReleasePushLockEx((ULONG_PTR)&CmpLoadHiveLock, 0LL);
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
