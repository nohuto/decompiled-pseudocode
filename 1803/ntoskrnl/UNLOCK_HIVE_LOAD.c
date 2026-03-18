/*
 * XREFs of UNLOCK_HIVE_LOAD @ 0x14049BB10
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400070F8 (CmpLoadKeyCommon.c)
 *     CmpTryToRundownHive @ 0x1400A1F10 (CmpTryToRundownHive.c)
 *     CmpDoFlushNextHive @ 0x14049B930 (CmpDoFlushNextHive.c)
 *     CmReleaseLoadKeyContext @ 0x14049BE14 (CmReleaseLoadKeyContext.c)
 *     CmLoadAppKey @ 0x14049C2A8 (CmLoadAppKey.c)
 *     CmpPerformUnloadKey @ 0x14054D0B4 (CmpPerformUnloadKey.c)
 *     CmpLateUnloadHiveWorker @ 0x14054D5D0 (CmpLateUnloadHiveWorker.c)
 *     CmpCompleteUnloadKey @ 0x14054D8E8 (CmpCompleteUnloadKey.c)
 *     CmKtmNotification @ 0x14054ED10 (CmKtmNotification.c)
 *     CmShutdownSystem @ 0x1406EFFE4 (CmShutdownSystem.c)
 *     CmpResolveHiveLoadConflict @ 0x1406F2EDC (CmpResolveHiveLoadConflict.c)
 *     CmpLazyCommitWorker @ 0x1406F7190 (CmpLazyCommitWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 */

_QWORD *__fastcall UNLOCK_HIVE_LOAD(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbx

  CurrentThread = KeGetCurrentThread();
  CmpLoadHiveLockOwner = 0LL;
  ExReleasePushLockEx((ULONG_PTR)&CmpLoadHiveLock, 0LL, a3, a4);
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
