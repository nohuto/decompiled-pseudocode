/*
 * XREFs of HvFreeCell @ 0x14048C8DC
 * Callers:
 *     CmpGetSecurityDescriptorNode @ 0x14006ECBC (CmpGetSecurityDescriptorNode.c)
 *     CmpSetValueDataNew @ 0x140444C1C (CmpSetValueDataNew.c)
 *     CmpSetValueDataExisting @ 0x140458748 (CmpSetValueDataExisting.c)
 *     CmSetValueKey @ 0x14048F4F0 (CmSetValueKey.c)
 *     CmpAddValueKeyNew @ 0x1404918D4 (CmpAddValueKeyNew.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1404BF12C (CmpSetSecurityDescriptorInfo.c)
 *     CmpTransMgrFreeVolatileData @ 0x1404CE2D0 (CmpTransMgrFreeVolatileData.c)
 *     CmDeleteValueKey @ 0x1404CEB38 (CmDeleteValueKey.c)
 *     CmpRemoveValueFromList @ 0x1404CF298 (CmpRemoveValueFromList.c)
 *     CmpCreateChild @ 0x1404D0388 (CmpCreateChild.c)
 *     CmpFreeKeyByCell @ 0x1404D1394 (CmpFreeKeyByCell.c)
 *     CmpFreeValue @ 0x1404D154C (CmpFreeValue.c)
 *     CmpFreeValueData @ 0x1404D15C4 (CmpFreeValueData.c)
 *     CmpFreeKeyBody @ 0x1404D16E8 (CmpFreeKeyBody.c)
 *     CmpSetValueKeyExisting @ 0x1404D19D0 (CmpSetValueKeyExisting.c)
 *     CmpRemoveSubKeyFromList @ 0x1404D1F10 (CmpRemoveSubKeyFromList.c)
 *     CmpAddSubKeyEx @ 0x1404D2220 (CmpAddSubKeyEx.c)
 *     CmpAddToLeaf @ 0x1404D2940 (CmpAddToLeaf.c)
 *     CmpFreeSecurityDescriptor @ 0x1404D3160 (CmpFreeSecurityDescriptor.c)
 *     HvReallocateCell @ 0x1404D339C (HvReallocateCell.c)
 *     CmpCopyKeyPartial @ 0x140571EDC (CmpCopyKeyPartial.c)
 *     CmpSyncKeyValues @ 0x14058DFA4 (CmpSyncKeyValues.c)
 *     CmpCopyValue @ 0x14058E1DC (CmpCopyValue.c)
 *     CmpFreeKeyValues @ 0x14058E438 (CmpFreeKeyValues.c)
 *     CmpCommitSetSecurityUoW @ 0x14059B280 (CmpCommitSetSecurityUoW.c)
 *     CmpCreateHiveRootCell @ 0x1405D06F4 (CmpCreateHiveRootCell.c)
 *     CmpPromoteSingleKeyFromKeyNodeStacks @ 0x140661DD4 (CmpPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmMoveKey @ 0x1406631AC (CmMoveKey.c)
 *     CmRenameKey @ 0x140663778 (CmRenameKey.c)
 *     CmpCreateEmptyKey @ 0x140666F54 (CmpCreateEmptyKey.c)
 *     CmpDuplicateIndex @ 0x14066FE98 (CmpDuplicateIndex.c)
 *     CmpFreeIndexByCell @ 0x140670088 (CmpFreeIndexByCell.c)
 *     CmpRemoveSubKeyCellNoCellRef @ 0x140670B9C (CmpRemoveSubKeyCellNoCellRef.c)
 *     CmpSplitLeaf @ 0x140670E58 (CmpSplitLeaf.c)
 *     CmpCommitRenameKeyUoW @ 0x140673838 (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightCleanupSetValueKeyUoW @ 0x140673CF8 (CmpLightWeightCleanupSetValueKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x140674188 (CmpLightWeightCommitRenameKeyUoW.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x14067433C (CmpLightWeightCommitSetSecDescUoW.c)
 *     CmpLightWeightCreateSetValueData @ 0x14067470C (CmpLightWeightCreateSetValueData.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140052AB0 (ExAcquireFastMutexUnsafe.c)
 *     HvpGetBinContextInitialize @ 0x14008CF2C (HvpGetBinContextInitialize.c)
 *     HvpMapEntryGetBinAddress @ 0x14008D010 (HvpMapEntryGetBinAddress.c)
 *     HvpMapEntryReleaseBinAddress @ 0x14008D170 (HvpMapEntryReleaseBinAddress.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     HvpIsFreeNeighbor @ 0x14048CA88 (HvpIsFreeNeighbor.c)
 *     HvpRemoveFreeCellHint @ 0x14048CBE0 (HvpRemoveFreeCellHint.c)
 *     HvpEnlistFreeCell @ 0x14048DE38 (HvpEnlistFreeCell.c)
 *     HvpGetCellMap @ 0x140515540 (HvpGetCellMap.c)
 */

void __fastcall HvFreeCell(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v3; // rbp
  __int64 v4; // r15
  __int64 v5; // rsi
  struct _EX_RUNDOWN_REF *CellMap; // rax
  __int64 v7; // rcx
  struct _EX_RUNDOWN_REF *v8; // r13
  unsigned __int64 BinAddress; // rax
  unsigned __int64 v10; // r14
  int *v11; // rbx
  unsigned int v12; // ebp
  __int64 v13; // rcx
  int v14; // ecx
  int v15; // edx
  unsigned int v16; // r8d
  unsigned int v17; // r10d
  __int64 v18; // rax
  int v19; // r8d
  int *v20; // [rsp+30h] [rbp-48h]
  __int16 v21; // [rsp+80h] [rbp+8h] BYREF
  _DWORD v22[2]; // [rsp+90h] [rbp+18h]
  ULONG_PTR BugCheckParameter3a; // [rsp+98h] [rbp+20h]

  v3 = (unsigned int)BugCheckParameter3;
  v4 = 0LL;
  v5 = 0LL;
  HvpGetBinContextInitialize(&v21);
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(BugCheckParameter2 + 2840));
  CellMap = (struct _EX_RUNDOWN_REF *)HvpGetCellMap(BugCheckParameter2, (unsigned int)v3);
  v8 = CellMap;
  if ( !CellMap )
    KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v3, 0x715uLL);
  BinAddress = HvpMapEntryGetBinAddress(v7, CellMap, &v21);
  v10 = BinAddress;
  if ( (v8[1].Count & 4) != 0 )
  {
    v16 = *(_DWORD *)(BinAddress + 4);
    v17 = v16 + *(_DWORD *)(BinAddress + 8);
    while ( v16 < v17 )
    {
      v18 = HvpGetCellMap(BugCheckParameter2, v16);
      *(_QWORD *)(v18 + 8) &= ~4uLL;
      v16 = v19 + 4096;
    }
  }
  v11 = (int *)(v10 + v8->Count + (v3 & 0xFFF));
  *v11 = -*v11;
  do
  {
    if ( (unsigned __int8)HvpIsFreeNeighbor(BugCheckParameter2, (unsigned int)v3 >> 31) != 1 )
      break;
    v14 = *v11;
    v15 = *v20;
    v22[v5] = *v20;
    if ( v20 > v11 )
    {
      *((_DWORD *)&BugCheckParameter3a + v5) = v14 + v3;
      *v11 = v14 + v15;
    }
    else
    {
      v11 = v20;
      *((_DWORD *)&BugCheckParameter3a + v5) = v3 - v15;
      *v20 = v15 + v14;
    }
    v5 = (unsigned int)(v5 + 1);
  }
  while ( (unsigned int)v5 < 2 );
  v12 = (_DWORD)v11 + ((unsigned int)v3 >> 31 << 31) + *(_DWORD *)(v10 + 4) - v10;
  if ( (_DWORD)v5 )
  {
    do
    {
      HvpRemoveFreeCellHint(BugCheckParameter2, *(unsigned int *)((char *)&BugCheckParameter3a + v4));
      v4 += 4LL;
      --v5;
    }
    while ( v5 );
  }
  HvpEnlistFreeCell(BugCheckParameter2, v12, 1);
  HvpMapEntryReleaseBinAddress(v13, v8, &v21);
  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(BugCheckParameter2 + 2840));
}
