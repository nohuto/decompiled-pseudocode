/*
 * XREFs of CmpLockRegistryFreezeAware @ 0x1404E3B7C
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400AF5E8 (CmpLoadKeyCommon.c)
 *     CmpTryToRundownHive @ 0x1400AFAE0 (CmpTryToRundownHive.c)
 *     CmpPerformUnloadKey @ 0x14046E4FC (CmpPerformUnloadKey.c)
 *     CmpFlushHive @ 0x1404DD950 (CmpFlushHive.c)
 *     CmLoadAppKey @ 0x1404E13B4 (CmLoadAppKey.c)
 *     CmpDoFlushNextHive @ 0x1404E3960 (CmpDoFlushNextHive.c)
 *     CmpLateUnloadHiveWorker @ 0x1404E67A0 (CmpLateUnloadHiveWorker.c)
 *     ExpWatchProductTypeWork @ 0x1405925B0 (ExpWatchProductTypeWork.c)
 *     NtFlushKey @ 0x14059294C (NtFlushKey.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x1405BF1F4 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpStartRMLogs @ 0x1405D7350 (CmpStartRMLogs.c)
 *     CmpResolveHiveLoadConflict @ 0x14068ECFC (CmpResolveHiveLoadConflict.c)
 *     CmRestoreKey @ 0x14069C888 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x14069E158 (CmpRefreshHive.c)
 * Callees:
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     CmpLockRegistry @ 0x14047E6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpLockRegistryExclusive @ 0x1404E3BCC (CmpLockRegistryExclusive.c)
 */

__int64 __fastcall CmpLockRegistryFreezeAware(char a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD v7[2]; // [rsp+30h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-28h] BYREF

  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  if ( a1 )
    CmpLockRegistryExclusive(v3, v2);
  else
    CmpLockRegistry();
  while ( CmpFreezeThawState == 1 )
  {
    KeResetEvent(&Event);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpFreezeListLock, 0LL);
    if ( *(__int64 **)qword_140386F28 != &CmpFreezeThawWaitListHead )
      __fastfail(3u);
    v7[1] = qword_140386F28;
    v7[0] = &CmpFreezeThawWaitListHead;
    *(_QWORD *)qword_140386F28 = v7;
    qword_140386F28 = (__int64)v7;
    ExReleasePushLockEx((ULONG_PTR)&CmpFreezeListLock, 0LL);
    CmpUnlockRegistry();
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    if ( a1 )
      CmpLockRegistryExclusive(v6, v5);
    else
      CmpLockRegistry();
  }
  return 0LL;
}
