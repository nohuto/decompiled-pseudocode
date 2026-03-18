/*
 * XREFs of HvpMarkCellDirty @ 0x1404E3EC4
 * Callers:
 *     CmpTransMgrFreeVolatileData @ 0x140498730 (CmpTransMgrFreeVolatileData.c)
 *     CmDeleteValueKey @ 0x14049B18C (CmDeleteValueKey.c)
 *     HvMarkCellDirty @ 0x1404A0A48 (HvMarkCellDirty.c)
 *     CmpMarkKeyDirty @ 0x1404A0B4C (CmpMarkKeyDirty.c)
 *     CmpSetValueKeyExisting @ 0x1404A0DA0 (CmpSetValueKeyExisting.c)
 *     CmpMarkValueDataDirty @ 0x1404A1098 (CmpMarkValueDataDirty.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1404A339C (CmpUpdateKeyNodeAccessBits.c)
 *     CmSetValueKey @ 0x1404A4924 (CmSetValueKey.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1404E1604 (CmpSetSecurityDescriptorInfo.c)
 *     CmpAddSubKeyEx @ 0x140513418 (CmpAddSubKeyEx.c)
 *     CmpAddToLeaf @ 0x140513600 (CmpAddToLeaf.c)
 *     CmpCreateChild @ 0x140514170 (CmpCreateChild.c)
 *     CmpSetValueKeyNew @ 0x1405155F8 (CmpSetValueKeyNew.c)
 *     HvpIsFreeNeighbor @ 0x140515A2C (HvpIsFreeNeighbor.c)
 *     HvpFindFreeCellInBin @ 0x140516170 (HvpFindFreeCellInBin.c)
 *     CmpCheckValueList @ 0x1405163C0 (CmpCheckValueList.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x140516F4C (CmpValidateHiveSecurityDescriptors.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x14054F244 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpLightWeightCreateSetValueData @ 0x14054F81C (CmpLightWeightCreateSetValueData.c)
 *     CmpCheckLeaf @ 0x1405500E0 (CmpCheckLeaf.c)
 *     CmpVEExecuteOpenLogic @ 0x140552590 (CmpVEExecuteOpenLogic.c)
 *     CmpClearKeyAccessBits @ 0x14057027C (CmpClearKeyAccessBits.c)
 *     CmpMarkIndexDirty @ 0x14057076C (CmpMarkIndexDirty.c)
 *     CmpCheckAndFixSecurityCellsRefcount @ 0x140574E9C (CmpCheckAndFixSecurityCellsRefcount.c)
 *     CmpUpdateHiveRootCellFlags @ 0x14057AE60 (CmpUpdateHiveRootCellFlags.c)
 *     CmpInsertSecurityCellList @ 0x14057CE50 (CmpInsertSecurityCellList.c)
 *     CmpCheckKey @ 0x14059FAB0 (CmpCheckKey.c)
 *     CmpDoParseKey @ 0x1405A7800 (CmpDoParseKey.c)
 *     CmpTransMgrCommitUoW @ 0x1405DF1D4 (CmpTransMgrCommitUoW.c)
 *     CmpCommitSetValueKeyUoW @ 0x1405DF3F0 (CmpCommitSetValueKeyUoW.c)
 *     CmpCommitDeleteValueKeyUoW @ 0x1405DF734 (CmpCommitDeleteValueKeyUoW.c)
 *     CmpCommitAddKeyUoW @ 0x1405DF9A8 (CmpCommitAddKeyUoW.c)
 *     CmpSelectLeaf @ 0x1405E55DC (CmpSelectLeaf.c)
 *     CmpCommitSetSecurityUoW @ 0x1405F3504 (CmpCommitSetSecurityUoW.c)
 *     CmpMarkCurrentProfileDirty @ 0x14062CC34 (CmpMarkCurrentProfileDirty.c)
 *     CmpMarkCurrentValueDirty @ 0x1406336C0 (CmpMarkCurrentValueDirty.c)
 *     CmpPromoteSingleKeyFromKeyNodeStacks @ 0x1406EF510 (CmpPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmRenameKey @ 0x1406F1120 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1406F1FB8 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1406F2444 (CmSetLastWriteTimeKey.c)
 *     CmpSetValueKeyTombstone @ 0x1406F31B8 (CmpSetValueKeyTombstone.c)
 *     CmpDoBuildVirtualStack @ 0x1406F5048 (CmpDoBuildVirtualStack.c)
 *     CmpReplicateKeyToVirtual @ 0x1406F5730 (CmpReplicateKeyToVirtual.c)
 *     CmpCopySaclToVirtualKey @ 0x1406F6030 (CmpCopySaclToVirtualKey.c)
 *     CmpCopySyncTree2 @ 0x1406FD2D8 (CmpCopySyncTree2.c)
 *     CmpMarkKeyParentDirty @ 0x1406FDE70 (CmpMarkKeyParentDirty.c)
 *     CmpMarkKeyValuesDirty @ 0x1406FDF0C (CmpMarkKeyValuesDirty.c)
 *     CmpSyncKeyValues @ 0x1406FEB90 (CmpSyncKeyValues.c)
 *     CmpMarkAllChildrenDirty @ 0x140700084 (CmpMarkAllChildrenDirty.c)
 *     CmpMarkEntireIndexDirty @ 0x14070012C (CmpMarkEntireIndexDirty.c)
 *     CmpRemoveSubKeyCellNoCellRef @ 0x1407002C0 (CmpRemoveSubKeyCellNoCellRef.c)
 *     CmpSplitLeaf @ 0x140700588 (CmpSplitLeaf.c)
 *     CmRestoreKey @ 0x140701768 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x14070306C (CmpRefreshHive.c)
 *     CmpCommitRenameKeyUoW @ 0x140703A10 (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x140704968 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x140704BCC (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x140704D74 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x140704F5C (CmpLightWeightPrepareRenameKeyUoW.c)
 *     CmpLightWeightPrepareSetKeyUserFlags @ 0x14070531C (CmpLightWeightPrepareSetKeyUserFlags.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x14070539C (CmpLightWeightPrepareSetSecDescUoW.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     HvpMarkDirty @ 0x1404E3FF0 (HvpMarkDirty.c)
 *     HvpGetCellMap @ 0x1404E4320 (HvpGetCellMap.c)
 */

char __fastcall HvpMarkCellDirty(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, char a3)
{
  ULONG_PTR v3; // rsi
  volatile signed __int64 *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  char v12; // si
  __int64 v13; // r8
  __int64 v14; // r9
  int v16; // [rsp+50h] [rbp+8h] BYREF
  int v17; // [rsp+54h] [rbp+Ch]

  v16 = -1;
  v3 = (unsigned int)BugCheckParameter3;
  v17 = 0;
  if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 1) != 0 || (BugCheckParameter3 & 0x80000000) != 0LL )
    return 1;
  v6 = (volatile signed __int64 *)(BugCheckParameter2 + 80);
  if ( !a3 )
    ExAcquirePushLockExclusiveEx(BugCheckParameter2 + 80, 0LL);
  v7 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
         BugCheckParameter2,
         (unsigned int)v3,
         &v16);
  if ( !v7 || (v9 = v7 - 4, v7 == 4) )
  {
    if ( !a3 )
    {
      if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v6, v8, v9, v10);
      KeAbPostRelease((ULONG_PTR)v6);
    }
  }
  else
  {
    if ( !HvpGetCellMap(BugCheckParameter2, (unsigned int)v3) )
      KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v3, 0x270uLL);
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v16);
    v12 = HvpMarkDirty(BugCheckParameter2);
    if ( !a3 )
    {
      if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v6, v11, v13, v14);
      KeAbPostRelease((ULONG_PTR)v6);
    }
    if ( v12 )
    {
      *(_BYTE *)(BugCheckParameter2 + 141) = 1;
      return 1;
    }
  }
  return 0;
}
