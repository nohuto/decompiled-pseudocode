/*
 * XREFs of HvpMarkCellDirty @ 0x14047D0F4
 * Callers:
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x14044C0DC (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpLightWeightCreateSetValueData @ 0x14044C4B0 (CmpLightWeightCreateSetValueData.c)
 *     CmpLightWeightPrepareSetKeyUserFlags @ 0x14044C664 (CmpLightWeightPrepareSetKeyUserFlags.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x14044C6E4 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpClearKeyAccessBits @ 0x14045205C (CmpClearKeyAccessBits.c)
 *     CmpMarkIndexDirty @ 0x140472FC8 (CmpMarkIndexDirty.c)
 *     CmpMarkKeyDirty @ 0x1404735A4 (CmpMarkKeyDirty.c)
 *     CmpSetValueKeyExisting @ 0x1404737F8 (CmpSetValueKeyExisting.c)
 *     CmpMarkValueDataDirty @ 0x140473AF8 (CmpMarkValueDataDirty.c)
 *     CmpAddSubKeyEx @ 0x140473D00 (CmpAddSubKeyEx.c)
 *     CmpAddToLeaf @ 0x1404740BC (CmpAddToLeaf.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x1404746C0 (CmpValidateHiveSecurityDescriptors.c)
 *     CmDeleteValueKey @ 0x140474FC8 (CmDeleteValueKey.c)
 *     CmpCreateChild @ 0x140475B90 (CmpCreateChild.c)
 *     HvMarkCellDirty @ 0x1404768D8 (HvMarkCellDirty.c)
 *     CmpSetSecurityDescriptorInfo @ 0x140476DE8 (CmpSetSecurityDescriptorInfo.c)
 *     HvpIsFreeNeighbor @ 0x140477A80 (HvpIsFreeNeighbor.c)
 *     CmpSetValueKeyNew @ 0x140477B34 (CmpSetValueKeyNew.c)
 *     HvpFindFreeCellInBin @ 0x14047A2B0 (HvpFindFreeCellInBin.c)
 *     CmSetValueKey @ 0x14047B690 (CmSetValueKey.c)
 *     CmpCheckLeaf @ 0x14047FD10 (CmpCheckLeaf.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140481B84 (CmpUpdateKeyNodeAccessBits.c)
 *     CmEnumerateKey @ 0x140482020 (CmEnumerateKey.c)
 *     CmpCheckValueList @ 0x1404A9D70 (CmpCheckValueList.c)
 *     CmpCheckKey @ 0x1404AA8A0 (CmpCheckKey.c)
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 *     CmpVEExecuteOpenLogic @ 0x1404B85E0 (CmpVEExecuteOpenLogic.c)
 *     CmpTransMgrFreeVolatileData @ 0x1405691F0 (CmpTransMgrFreeVolatileData.c)
 *     CmpCheckAndFixSecurityCellsRefcount @ 0x1405877FC (CmpCheckAndFixSecurityCellsRefcount.c)
 *     CmpInsertSecurityCellList @ 0x1405912C8 (CmpInsertSecurityCellList.c)
 *     CmpUpdateHiveRootCellFlags @ 0x140595330 (CmpUpdateHiveRootCellFlags.c)
 *     CmpTransMgrCommitUoW @ 0x1405A5398 (CmpTransMgrCommitUoW.c)
 *     CmpCommitSetValueKeyUoW @ 0x1405A55BC (CmpCommitSetValueKeyUoW.c)
 *     CmpCommitAddKeyUoW @ 0x1405A590C (CmpCommitAddKeyUoW.c)
 *     CmpCopySyncTree2 @ 0x1405A5E80 (CmpCopySyncTree2.c)
 *     CmpSyncKeyValues @ 0x1405A62E4 (CmpSyncKeyValues.c)
 *     CmpMarkKeyValuesDirty @ 0x1405A6874 (CmpMarkKeyValuesDirty.c)
 *     CmpCommitDeleteValueKeyUoW @ 0x1405A6C70 (CmpCommitDeleteValueKeyUoW.c)
 *     CmpCommitSetSecurityUoW @ 0x1405A6FC8 (CmpCommitSetSecurityUoW.c)
 *     CmpMarkCurrentValueDirty @ 0x1405BF128 (CmpMarkCurrentValueDirty.c)
 *     CmpMarkCurrentProfileDirty @ 0x1405C3490 (CmpMarkCurrentProfileDirty.c)
 *     CmpSelectLeaf @ 0x1405E819C (CmpSelectLeaf.c)
 *     CmpPromoteSingleKeyFromKeyNodeStacks @ 0x14068B0D4 (CmpPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmMoveKey @ 0x14068C890 (CmMoveKey.c)
 *     CmRenameKey @ 0x14068CE58 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x14068DC84 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x14068E12C (CmSetLastWriteTimeKey.c)
 *     CmpSetValueKeyTombstone @ 0x14068EFD0 (CmpSetValueKeyTombstone.c)
 *     CmpDoBuildVirtualStack @ 0x140691818 (CmpDoBuildVirtualStack.c)
 *     CmpReplicateKeyToVirtual @ 0x1406924F8 (CmpReplicateKeyToVirtual.c)
 *     CmpCopySaclToVirtualKey @ 0x140693140 (CmpCopySaclToVirtualKey.c)
 *     HvRefreshHive @ 0x140696DF0 (HvRefreshHive.c)
 *     CmpMarkKeyParentDirty @ 0x1406999D8 (CmpMarkKeyParentDirty.c)
 *     CmpMarkAllChildrenDirty @ 0x14069B498 (CmpMarkAllChildrenDirty.c)
 *     CmpMarkEntireIndexDirty @ 0x14069B540 (CmpMarkEntireIndexDirty.c)
 *     CmpRemoveSubKeyCellNoCellRef @ 0x14069B6B0 (CmpRemoveSubKeyCellNoCellRef.c)
 *     CmpSplitLeaf @ 0x14069B95C (CmpSplitLeaf.c)
 *     CmRestoreKey @ 0x14069C888 (CmRestoreKey.c)
 *     CmpCommitRenameKeyUoW @ 0x14069E7D0 (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x14069F4B0 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x14069F714 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14069F8B8 (CmpLightWeightPrepareRenameKeyUoW.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x14069FBE4 (CmpLightWeightPrepareSetSecDescUoW.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140016B40 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140016CF0 (ExReleaseFastMutexUnsafe.c)
 *     HvpReleaseHCell @ 0x1400811F0 (HvpReleaseHCell.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     HvpMarkDirty @ 0x14047D1F0 (HvpMarkDirty.c)
 *     HvpGetCellMap @ 0x14047D620 (HvpGetCellMap.c)
 */

char __fastcall HvpMarkCellDirty(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, char a3)
{
  ULONG_PTR v4; // rdi
  __int64 v6; // rax
  char v7; // di
  int v9; // [rsp+50h] [rbp+8h] BYREF
  int v10; // [rsp+54h] [rbp+Ch]

  v9 = -1;
  v10 = 0;
  v4 = (unsigned int)BugCheckParameter3;
  if ( (*(_DWORD *)(BugCheckParameter2 + 144) & 1) != 0 || (BugCheckParameter3 & 0x80000000) != 0LL )
    return 1;
  if ( !a3 )
    ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(BugCheckParameter2 + 2840));
  v6 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
         BugCheckParameter2,
         (unsigned int)v4,
         &v9);
  if ( !v6 || v6 == 4 )
  {
    if ( !a3 )
      ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(BugCheckParameter2 + 2840));
  }
  else
  {
    if ( !HvpGetCellMap(BugCheckParameter2, (unsigned int)v4) )
      KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v4, 0x271uLL);
    HvpReleaseHCell(BugCheckParameter2);
    v7 = HvpMarkDirty(BugCheckParameter2);
    if ( !a3 )
      ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(BugCheckParameter2 + 2840));
    if ( v7 )
    {
      *(_BYTE *)(BugCheckParameter2 + 125) = 1;
      return 1;
    }
  }
  return 0;
}
