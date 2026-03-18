/*
 * XREFs of CmpDeleteHive @ 0x14054D76C
 * Callers:
 *     CmpUnlockDeletedHashEntryByKcb @ 0x14049ABD4 (CmpUnlockDeletedHashEntryByKcb.c)
 *     CmLoadAppKey @ 0x14049C2A8 (CmLoadAppKey.c)
 *     CmpGetNextHive @ 0x14049CD7C (CmpGetNextHive.c)
 *     CmpUnlockHashEntry @ 0x14049D070 (CmpUnlockHashEntry.c)
 *     CmpDereferenceKeyControlBlock @ 0x1404A86C0 (CmpDereferenceKeyControlBlock.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1404A8840 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpWalkOneLevel @ 0x1404AA800 (CmpWalkOneLevel.c)
 *     CmpLateUnloadHiveWorker @ 0x14054D5D0 (CmpLateUnloadHiveWorker.c)
 *     CmpUnlockHashEntryByKcb @ 0x14054DE30 (CmpUnlockHashEntryByKcb.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405A5560 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1405A7800 (CmpDoParseKey.c)
 *     CmpUnblockTwoHiveWrites @ 0x1405BFE38 (CmpUnblockTwoHiveWrites.c)
 *     CmpUnblockHiveWrites @ 0x1405C007C (CmpUnblockHiveWrites.c)
 *     CmpBlockHiveWrites @ 0x1405C0380 (CmpBlockHiveWrites.c)
 *     CmpBlockTwoHiveWrites @ 0x1405C041C (CmpBlockTwoHiveWrites.c)
 *     CmpDereferenceHive @ 0x1405EE0B4 (CmpDereferenceHive.c)
 *     CmpUnfreezeHive @ 0x1406F326C (CmpUnfreezeHive.c)
 *     CmpDestroyHive @ 0x1406F76D8 (CmpDestroyHive.c)
 *     CmpUnlockHashEntryByIndex @ 0x1406FA74C (CmpUnlockHashEntryByIndex.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     CmpReleaseGlobalQuota @ 0x140514098 (CmpReleaseGlobalQuota.c)
 *     CmpDeleteKcbCache @ 0x14054D828 (CmpDeleteKcbCache.c)
 *     HvFreeDirtyData @ 0x14054D894 (HvFreeDirtyData.c)
 */

void __fastcall CmpDeleteHive(_QWORD *P)
{
  _QWORD *v1; // rdi
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  _QWORD *v6; // rax
  void *v7; // rcx
  void *v8; // rcx

  v1 = P + 200;
  if ( (_QWORD *)*v1 != v1 )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
    v5 = *v1;
    if ( *(_QWORD **)(*v1 + 8LL) != v1 || (v6 = (_QWORD *)v1[1], (_QWORD *)*v6 != v1) )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL, v3, v4);
  }
  *(_DWORD *)P = -1160724768;
  HvFreeDirtyData(P);
  CmpDeleteKcbCache(P);
  v7 = (void *)P[230];
  if ( v7 )
    ExFreePoolWithTag(v7, 0x624E4D43u);
  v8 = (void *)P[232];
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  CmpReleaseGlobalQuota(0x12F8u);
  ExFreePoolWithTag(P, 0);
}
