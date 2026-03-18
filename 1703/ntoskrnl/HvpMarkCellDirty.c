/*
 * XREFs of HvpMarkCellDirty @ 0x14051559C
 * Callers:
 *     CmpClearKeyAccessBits @ 0x14043B7E0 (CmpClearKeyAccessBits.c)
 *     CmpCheckAndFixSecurityCellsRefcount @ 0x140448AD4 (CmpCheckAndFixSecurityCellsRefcount.c)
 *     CmpInsertSecurityCellList @ 0x140455FCC (CmpInsertSecurityCellList.c)
 *     CmpUpdateHiveRootCellFlags @ 0x1404568B4 (CmpUpdateHiveRootCellFlags.c)
 *     HvpIsFreeNeighbor @ 0x14048CA88 (HvpIsFreeNeighbor.c)
 *     HvpFindFreeCellInBin @ 0x14048D670 (HvpFindFreeCellInBin.c)
 *     CmSetValueKey @ 0x14048F4F0 (CmSetValueKey.c)
 *     CmpSetValueKeyNew @ 0x140491818 (CmpSetValueKeyNew.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1404BF12C (CmpSetSecurityDescriptorInfo.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x1404BF6E4 (CmpValidateHiveSecurityDescriptors.c)
 *     HvMarkCellDirty @ 0x1404BFD4C (HvMarkCellDirty.c)
 *     CmpCommitSetValueKeyUoW @ 0x1404CC0FC (CmpCommitSetValueKeyUoW.c)
 *     CmpTransMgrCommitUoW @ 0x1404CDAB8 (CmpTransMgrCommitUoW.c)
 *     CmpTransMgrFreeVolatileData @ 0x1404CE2D0 (CmpTransMgrFreeVolatileData.c)
 *     CmDeleteValueKey @ 0x1404CEB38 (CmDeleteValueKey.c)
 *     CmpCreateChild @ 0x1404D0388 (CmpCreateChild.c)
 *     CmpMarkIndexDirty @ 0x1404D114C (CmpMarkIndexDirty.c)
 *     CmpMarkKeyDirty @ 0x1404D177C (CmpMarkKeyDirty.c)
 *     CmpSetValueKeyExisting @ 0x1404D19D0 (CmpSetValueKeyExisting.c)
 *     CmpMarkValueDataDirty @ 0x1404D1D08 (CmpMarkValueDataDirty.c)
 *     CmpAddSubKeyEx @ 0x1404D2220 (CmpAddSubKeyEx.c)
 *     CmpAddToLeaf @ 0x1404D2940 (CmpAddToLeaf.c)
 *     CmEnumerateKey @ 0x1404FD790 (CmEnumerateKey.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140500654 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpCheckLeaf @ 0x140503C50 (CmpCheckLeaf.c)
 *     CmpCheckValueList @ 0x140504990 (CmpCheckValueList.c)
 *     CmpCheckKey @ 0x140505100 (CmpCheckKey.c)
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 *     CmpVEExecuteOpenLogic @ 0x140538520 (CmpVEExecuteOpenLogic.c)
 *     CmpCommitAddKeyUoW @ 0x140571D00 (CmpCommitAddKeyUoW.c)
 *     CmpCommitDeleteValueKeyUoW @ 0x140573C38 (CmpCommitDeleteValueKeyUoW.c)
 *     CmpSelectLeaf @ 0x140574238 (CmpSelectLeaf.c)
 *     CmpSaveBootControlSet @ 0x14058D508 (CmpSaveBootControlSet.c)
 *     CmpCopySyncTree2 @ 0x14058D990 (CmpCopySyncTree2.c)
 *     CmpSyncKeyValues @ 0x14058DFA4 (CmpSyncKeyValues.c)
 *     CmpMarkKeyValuesDirty @ 0x14058E504 (CmpMarkKeyValuesDirty.c)
 *     CmpMarkKeyParentDirty @ 0x14058E6DC (CmpMarkKeyParentDirty.c)
 *     CmpCommitSetSecurityUoW @ 0x14059B280 (CmpCommitSetSecurityUoW.c)
 *     CmpMarkCurrentValueDirty @ 0x1405BD1FC (CmpMarkCurrentValueDirty.c)
 *     CmpMarkCurrentProfileDirty @ 0x1405D2B18 (CmpMarkCurrentProfileDirty.c)
 *     CmpPromoteSingleKeyFromKeyNodeStacks @ 0x140661DD4 (CmpPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmMoveKey @ 0x1406631AC (CmMoveKey.c)
 *     CmRenameKey @ 0x140663778 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1406645C4 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140664A64 (CmSetLastWriteTimeKey.c)
 *     CmpSetValueKeyTombstone @ 0x1406656A8 (CmpSetValueKeyTombstone.c)
 *     CmpDoBuildVirtualStack @ 0x1406672F8 (CmpDoBuildVirtualStack.c)
 *     CmpReplicateKeyToVirtual @ 0x1406679E8 (CmpReplicateKeyToVirtual.c)
 *     CmpCopySaclToVirtualKey @ 0x140668104 (CmpCopySaclToVirtualKey.c)
 *     HvRefreshHive @ 0x14066C778 (HvRefreshHive.c)
 *     CmpMarkAllChildrenDirty @ 0x140670984 (CmpMarkAllChildrenDirty.c)
 *     CmpMarkEntireIndexDirty @ 0x140670A2C (CmpMarkEntireIndexDirty.c)
 *     CmpRemoveSubKeyCellNoCellRef @ 0x140670B9C (CmpRemoveSubKeyCellNoCellRef.c)
 *     CmpSplitLeaf @ 0x140670E58 (CmpSplitLeaf.c)
 *     CmRestoreKey @ 0x140671810 (CmRestoreKey.c)
 *     CmpCommitRenameKeyUoW @ 0x140673838 (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightCreateSetValueData @ 0x14067470C (CmpLightWeightCreateSetValueData.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x140674910 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x140674B74 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x140674D18 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x140674EFC (CmpLightWeightPrepareRenameKeyUoW.c)
 *     CmpLightWeightPrepareSetKeyUserFlags @ 0x140675228 (CmpLightWeightPrepareSetKeyUserFlags.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x1406752A8 (CmpLightWeightPrepareSetSecDescUoW.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x14067546C (CmpLightWeightPrepareSetValueKeyUoW.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140052AB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140052C30 (ExReleaseFastMutexUnsafe.c)
 *     HvpReleaseHCell @ 0x14008D080 (HvpReleaseHCell.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     HvpGetCellMap @ 0x140515540 (HvpGetCellMap.c)
 *     HvpMarkDirty @ 0x140515690 (HvpMarkDirty.c)
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
  if ( (*(_DWORD *)(BugCheckParameter2 + 144) & 1) != 0 || (unsigned int)BugCheckParameter3 >= 0x80000000 )
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
    if ( !HvpGetCellMap(BugCheckParameter2, v4) )
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
