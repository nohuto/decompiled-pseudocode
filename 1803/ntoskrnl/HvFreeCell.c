/*
 * XREFs of HvFreeCell @ 0x14051584C
 * Callers:
 *     CmpGetSecurityDescriptorNode @ 0x140007750 (CmpGetSecurityDescriptorNode.c)
 *     CmpRemoveValueFromList @ 0x1404983C0 (CmpRemoveValueFromList.c)
 *     CmpTransMgrFreeVolatileData @ 0x140498730 (CmpTransMgrFreeVolatileData.c)
 *     CmDeleteValueKey @ 0x14049B18C (CmDeleteValueKey.c)
 *     CmpSetValueKeyExisting @ 0x1404A0DA0 (CmpSetValueKeyExisting.c)
 *     CmSetValueKey @ 0x1404A4924 (CmSetValueKey.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1404E1604 (CmpSetSecurityDescriptorInfo.c)
 *     CmpAddSubKeyEx @ 0x140513418 (CmpAddSubKeyEx.c)
 *     CmpAddToLeaf @ 0x140513600 (CmpAddToLeaf.c)
 *     CmpCreateChild @ 0x140514170 (CmpCreateChild.c)
 *     HvReallocateCell @ 0x140514F84 (HvReallocateCell.c)
 *     CmpFreeKeyByCell @ 0x1405150FC (CmpFreeKeyByCell.c)
 *     CmpSetValueDataNew @ 0x1405152B4 (CmpSetValueDataNew.c)
 *     CmpFreeValue @ 0x1405154A4 (CmpFreeValue.c)
 *     CmpAddValueKeyNew @ 0x1405156B4 (CmpAddValueKeyNew.c)
 *     CmpFreeValueData @ 0x140516980 (CmpFreeValueData.c)
 *     CmpFreeKeyBody @ 0x1405172F0 (CmpFreeKeyBody.c)
 *     CmpRemoveSubKeyFromList @ 0x140517418 (CmpRemoveSubKeyFromList.c)
 *     CmpFreeSecurityDescriptor @ 0x140517750 (CmpFreeSecurityDescriptor.c)
 *     CmpLightWeightCleanupSetValueKeyUoW @ 0x14054F7E4 (CmpLightWeightCleanupSetValueKeyUoW.c)
 *     CmpLightWeightCreateSetValueData @ 0x14054F81C (CmpLightWeightCreateSetValueData.c)
 *     CmpSetValueDataExisting @ 0x140582280 (CmpSetValueDataExisting.c)
 *     CmpCopyKeyPartial @ 0x1405DFB94 (CmpCopyKeyPartial.c)
 *     CmpCommitSetSecurityUoW @ 0x1405F3504 (CmpCommitSetSecurityUoW.c)
 *     CmpCreateHiveRootCell @ 0x14064F024 (CmpCreateHiveRootCell.c)
 *     CmpPromoteSingleKeyFromKeyNodeStacks @ 0x1406EF510 (CmpPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmRenameKey @ 0x1406F1120 (CmRenameKey.c)
 *     CmpCreateEmptyKey @ 0x1406F4C7C (CmpCreateEmptyKey.c)
 *     CmpCopyValue @ 0x1406FDA54 (CmpCopyValue.c)
 *     CmpFreeKeyValues @ 0x1406FDD28 (CmpFreeKeyValues.c)
 *     CmpSyncKeyValues @ 0x1406FEB90 (CmpSyncKeyValues.c)
 *     CmpDuplicateIndex @ 0x1406FF144 (CmpDuplicateIndex.c)
 *     CmpFreeIndexByCell @ 0x1406FF334 (CmpFreeIndexByCell.c)
 *     CmpRemoveSubKeyCellNoCellRef @ 0x1407002C0 (CmpRemoveSubKeyCellNoCellRef.c)
 *     CmpSplitLeaf @ 0x140700588 (CmpSplitLeaf.c)
 *     CmpCommitRenameKeyUoW @ 0x140703A10 (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x140704408 (CmpLightWeightCommitRenameKeyUoW.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x1407045D4 (CmpLightWeightCommitSetSecDescUoW.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     HvpEnlistFreeCell @ 0x1404E41E0 (HvpEnlistFreeCell.c)
 *     HvpGetCellMap @ 0x1404E4320 (HvpGetCellMap.c)
 *     HvpIsFreeNeighbor @ 0x140515A2C (HvpIsFreeNeighbor.c)
 *     HvpRemoveFreeCellHint @ 0x140515BD0 (HvpRemoveFreeCellHint.c)
 */

char __fastcall HvFreeCell(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  volatile signed __int64 *v2; // r15
  ULONG_PTR v3; // rsi
  __int64 v5; // r14
  unsigned int v6; // r13d
  __int64 CellMap; // rax
  _QWORD *v8; // r10
  __int64 v9; // rax
  unsigned int v10; // r12d
  unsigned __int64 v11; // rdi
  unsigned int *v12; // rbx
  unsigned int v13; // esi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v18; // r8
  unsigned int v19; // ecx
  int v20; // eax
  unsigned int v21; // ecx
  __int64 v22; // rdi
  unsigned int v23; // ecx
  unsigned int v24; // edx
  unsigned int v25; // r8d
  unsigned int v26; // r11d
  __int64 v27; // rax
  int v28; // r8d
  unsigned int *v29; // [rsp+30h] [rbp-48h]
  _DWORD v30[2]; // [rsp+90h] [rbp+18h]
  ULONG_PTR BugCheckParameter3a; // [rsp+98h] [rbp+20h]

  v2 = (volatile signed __int64 *)(BugCheckParameter2 + 80);
  v3 = (unsigned int)BugCheckParameter3;
  v5 = 0LL;
  v6 = 0;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2 + 80, 0LL);
  CellMap = HvpGetCellMap(BugCheckParameter2, v3);
  v8 = (_QWORD *)CellMap;
  if ( !CellMap )
    KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v3, 0x629uLL);
  v9 = *(_QWORD *)(CellMap + 8);
  v10 = (unsigned int)v3 >> 31;
  v11 = v9 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( (v9 & 4) != 0 )
  {
    v25 = *(_DWORD *)((v9 & 0xFFFFFFFFFFFFFFF0uLL) + 4);
    v26 = v25 + *(_DWORD *)((v9 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
    while ( v25 < v26 )
    {
      v27 = HvpGetCellMap(BugCheckParameter2, v25);
      *(_QWORD *)(v27 + 8) &= ~4uLL;
      v25 = v28 + 4096;
    }
  }
  v12 = (unsigned int *)(v11 + *v8 + (v3 & 0xFFF));
  *v12 = -*v12;
  do
  {
    if ( (unsigned __int8)HvpIsFreeNeighbor(BugCheckParameter2, (unsigned int)v3 >> 31) != 1 )
      break;
    v18 = v6++;
    if ( v29 > v12 )
    {
      v23 = *v12;
      v24 = *v29;
      v30[v18] = *v29;
      *((_DWORD *)&BugCheckParameter3a + v18) = v23 + v3;
      *v12 = v23 + v24;
    }
    else
    {
      v19 = *v29;
      v20 = v3 - *v29;
      v30[v18] = *v29;
      v21 = *v12 + v19;
      v12 = v29;
      *v29 = v21;
      *((_DWORD *)&BugCheckParameter3a + v18) = v20;
    }
  }
  while ( v6 < 2 );
  v13 = (_DWORD)v12 + (v10 << 31) + *(_DWORD *)(v11 + 4) - v11;
  if ( v6 )
  {
    v22 = v6;
    do
    {
      HvpRemoveFreeCellHint(BugCheckParameter2, *(unsigned int *)((char *)&BugCheckParameter3a + v5), v13);
      v5 += 4LL;
      --v22;
    }
    while ( v22 );
  }
  HvpEnlistFreeCell(BugCheckParameter2, v13, *v12, v10);
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2, v14, v15, v16);
  return KeAbPostRelease((ULONG_PTR)v2);
}
