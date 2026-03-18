/*
 * XREFs of CmpDeleteHive @ 0x1400AFD08
 * Callers:
 *     CmpInitializeHive @ 0x140470188 (CmpInitializeHive.c)
 *     CmpUnlockHashEntryByKcb @ 0x140472AB8 (CmpUnlockHashEntryByKcb.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x140472D04 (CmpUnlockDeletedHashEntryByKcb.c)
 *     CmpUnlockHashEntry @ 0x140478118 (CmpUnlockHashEntry.c)
 *     CmpDereferenceKeyControlBlock @ 0x140478370 (CmpDereferenceKeyControlBlock.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1404784E0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpWalkOneLevel @ 0x140480060 (CmpWalkOneLevel.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1404B39C0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 *     CmLoadAppKey @ 0x1404E13B4 (CmLoadAppKey.c)
 *     CmpGetNextHive @ 0x1404E1EC8 (CmpGetNextHive.c)
 *     CmpLateUnloadHiveWorker @ 0x1404E67A0 (CmpLateUnloadHiveWorker.c)
 *     CmLoadKey @ 0x140596790 (CmLoadKey.c)
 *     CmpFreeAllMemory @ 0x14068C138 (CmpFreeAllMemory.c)
 *     CmReplaceKey @ 0x14068D9FC (CmReplaceKey.c)
 *     CmpUnfreezeHive @ 0x14068F084 (CmpUnfreezeHive.c)
 *     CmpBlockHiveWrites @ 0x14068F0F0 (CmpBlockHiveWrites.c)
 *     CmpBlockTwoHiveWrites @ 0x14068F1A8 (CmpBlockTwoHiveWrites.c)
 *     CmpUnblockHiveWrites @ 0x14068F308 (CmpUnblockHiveWrites.c)
 *     CmpUnblockTwoHiveWrites @ 0x14068F3D0 (CmpUnblockTwoHiveWrites.c)
 *     CmpDereferenceHive @ 0x1406945DC (CmpDereferenceHive.c)
 *     CmpUnlockHashEntryByIndex @ 0x140694B88 (CmpUnlockHashEntryByIndex.c)
 *     CmpFlushBackupHive @ 0x1406951B8 (CmpFlushBackupHive.c)
 *     HvRefreshHive @ 0x140696DF0 (HvRefreshHive.c)
 *     CmpDestroyTemporaryHive @ 0x14069DC04 (CmpDestroyTemporaryHive.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x14001ED40 (ExDeleteResourceLite.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     CmpFree @ 0x140479E90 (CmpFree.c)
 *     CmpUnlockHiveList @ 0x1404E61E8 (CmpUnlockHiveList.c)
 *     CmpLockHiveListExclusive @ 0x1404E6208 (CmpLockHiveListExclusive.c)
 *     CmpDeleteKcbCache @ 0x1404E64BC (CmpDeleteKcbCache.c)
 *     HvFreeDirtyData @ 0x1404E6528 (HvFreeDirtyData.c)
 */

__int64 __fastcall CmpDeleteHive(PERESOURCE *P)
{
  _QWORD *v1; // rdi
  __int64 v3; // rcx
  _QWORD *v4; // rax
  PERESOURCE v5; // rcx
  PERESOURCE v6; // rcx
  PERESOURCE v7; // rcx

  v1 = P + 341;
  if ( (_QWORD *)*v1 != v1 )
  {
    CmpLockHiveListExclusive();
    v3 = *v1;
    if ( *(_QWORD **)(*v1 + 8LL) != v1 || (v4 = (_QWORD *)v1[1], (_QWORD *)*v4 != v1) )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    CmpUnlockHiveList();
  }
  *(_DWORD *)P = -1160724768;
  HvFreeDirtyData(P);
  CmpDeleteKcbCache(P);
  ExDeleteResourceLite(P[356]);
  v5 = P[354];
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  v6 = P[377];
  if ( v6 )
    ExFreePoolWithTag(v6, 0x624E4D43u);
  v7 = P[379];
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return CmpFree(P);
}
