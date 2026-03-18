/*
 * XREFs of CmpLockRegistryFreezeAware @ 0x14049BC3C
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400070F8 (CmpLoadKeyCommon.c)
 *     CmpTryToRundownHive @ 0x1400A1F10 (CmpTryToRundownHive.c)
 *     CmpDoFlushNextHive @ 0x14049B930 (CmpDoFlushNextHive.c)
 *     CmLoadAppKey @ 0x14049C2A8 (CmLoadAppKey.c)
 *     CmpFlushHive @ 0x14049D2A8 (CmpFlushHive.c)
 *     CmpPerformUnloadKey @ 0x14054D0B4 (CmpPerformUnloadKey.c)
 *     CmpLateUnloadHiveWorker @ 0x14054D5D0 (CmpLateUnloadHiveWorker.c)
 *     ExpWatchProductTypeWork @ 0x140579DB0 (ExpWatchProductTypeWork.c)
 *     NtFlushKey @ 0x14057A130 (NtFlushKey.c)
 *     CmpStartRMLogs @ 0x1405E1974 (CmpStartRMLogs.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x14063378C (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpResolveHiveLoadConflict @ 0x1406F2EDC (CmpResolveHiveLoadConflict.c)
 *     CmRestoreKey @ 0x140701768 (CmRestoreKey.c)
 * Callees:
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 *     CmpLockRegistryExclusive @ 0x14049BC8C (CmpLockRegistryExclusive.c)
 *     CmpLockRegistry @ 0x1404A71E0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpLockRegistryFreezeAware(char a1)
{
  __int64 v3; // r8
  __int64 v4; // r9
  _QWORD v5[2]; // [rsp+30h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-28h] BYREF

  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  if ( a1 )
    CmpLockRegistryExclusive();
  else
    CmpLockRegistry();
  while ( CmpFreezeThawState == 1 )
  {
    KeResetEvent(&Event);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpFreezeListLock, 0LL);
    if ( *(__int64 **)qword_1403CA468 != &CmpFreezeThawWaitListHead )
      __fastfail(3u);
    v5[1] = qword_1403CA468;
    v5[0] = &CmpFreezeThawWaitListHead;
    *(_QWORD *)qword_1403CA468 = v5;
    qword_1403CA468 = (__int64)v5;
    ExReleasePushLockEx((ULONG_PTR)&CmpFreezeListLock, 0LL, v3, v4);
    CmpUnlockRegistry();
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    if ( a1 )
      CmpLockRegistryExclusive();
    else
      CmpLockRegistry();
  }
  return 0LL;
}
