/*
 * XREFs of HvFreeCell @ 0x1404778AC
 * Callers:
 *     CmpGetSecurityDescriptorNode @ 0x140016054 (CmpGetSecurityDescriptorNode.c)
 *     CmpLightWeightCleanupSetValueKeyUoW @ 0x14044C0A4 (CmpLightWeightCleanupSetValueKeyUoW.c)
 *     CmpLightWeightCreateSetValueData @ 0x14044C4B0 (CmpLightWeightCreateSetValueData.c)
 *     CmpCreateHiveRootCell @ 0x14046F4A4 (CmpCreateHiveRootCell.c)
 *     CmpRemoveValueFromList @ 0x140471FA4 (CmpRemoveValueFromList.c)
 *     CmpFreeSecurityDescriptor @ 0x1404731A0 (CmpFreeSecurityDescriptor.c)
 *     CmpRemoveSubKeyFromList @ 0x140473308 (CmpRemoveSubKeyFromList.c)
 *     CmpSetValueKeyExisting @ 0x1404737F8 (CmpSetValueKeyExisting.c)
 *     CmpFreeKeyBody @ 0x140473C6C (CmpFreeKeyBody.c)
 *     CmpAddSubKeyEx @ 0x140473D00 (CmpAddSubKeyEx.c)
 *     CmpAddToLeaf @ 0x1404740BC (CmpAddToLeaf.c)
 *     CmDeleteValueKey @ 0x140474FC8 (CmDeleteValueKey.c)
 *     CmpFreeKeyByCell @ 0x140475940 (CmpFreeKeyByCell.c)
 *     CmpCreateChild @ 0x140475B90 (CmpCreateChild.c)
 *     CmpFreeValueData @ 0x14047692C (CmpFreeValueData.c)
 *     CmpFreeValue @ 0x140476A50 (CmpFreeValue.c)
 *     HvReallocateCell @ 0x140476BE4 (HvReallocateCell.c)
 *     CmpSetSecurityDescriptorInfo @ 0x140476DE8 (CmpSetSecurityDescriptorInfo.c)
 *     CmpSetValueDataNew @ 0x1404776BC (CmpSetValueDataNew.c)
 *     CmpAddValueKeyNew @ 0x140477BF0 (CmpAddValueKeyNew.c)
 *     CmSetValueKey @ 0x14047B690 (CmSetValueKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x1405691F0 (CmpTransMgrFreeVolatileData.c)
 *     CmpSetValueDataExisting @ 0x1405988A4 (CmpSetValueDataExisting.c)
 *     CmpCopyKeyPartial @ 0x1405A5AF4 (CmpCopyKeyPartial.c)
 *     CmpSyncKeyValues @ 0x1405A62E4 (CmpSyncKeyValues.c)
 *     CmpCopyValue @ 0x1405A651C (CmpCopyValue.c)
 *     CmpFreeKeyValues @ 0x1405A67A8 (CmpFreeKeyValues.c)
 *     CmpCommitSetSecurityUoW @ 0x1405A6FC8 (CmpCommitSetSecurityUoW.c)
 *     CmpPromoteSingleKeyFromKeyNodeStacks @ 0x14068B0D4 (CmpPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmMoveKey @ 0x14068C890 (CmMoveKey.c)
 *     CmRenameKey @ 0x14068CE58 (CmRenameKey.c)
 *     CmpCreateEmptyKey @ 0x140691474 (CmpCreateEmptyKey.c)
 *     CmpDuplicateIndex @ 0x14069A568 (CmpDuplicateIndex.c)
 *     CmpFreeIndexByCell @ 0x14069A758 (CmpFreeIndexByCell.c)
 *     CmpRemoveSubKeyCellNoCellRef @ 0x14069B6B0 (CmpRemoveSubKeyCellNoCellRef.c)
 *     CmpSplitLeaf @ 0x14069B95C (CmpSplitLeaf.c)
 *     CmpCommitRenameKeyUoW @ 0x14069E7D0 (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x14069F008 (CmpLightWeightCommitRenameKeyUoW.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x14069F1D4 (CmpLightWeightCommitSetSecDescUoW.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140016B40 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140016CF0 (ExReleaseFastMutexUnsafe.c)
 *     HvpGetBinContextInitialize @ 0x140080EC0 (HvpGetBinContextInitialize.c)
 *     HvpMapEntryGetBinAddress @ 0x140080F90 (HvpMapEntryGetBinAddress.c)
 *     HvpMapEntryReleaseBinAddress @ 0x1400812E0 (HvpMapEntryReleaseBinAddress.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     HvpIsFreeNeighbor @ 0x140477A80 (HvpIsFreeNeighbor.c)
 *     HvpRemoveFreeCellHint @ 0x14047A0F0 (HvpRemoveFreeCellHint.c)
 *     HvpEnlistFreeCell @ 0x14047CC5C (HvpEnlistFreeCell.c)
 *     HvpGetCellMap @ 0x14047D620 (HvpGetCellMap.c)
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
    if ( v20 <= v11 )
    {
      v11 = v20;
      *((_DWORD *)&BugCheckParameter3a + v5) = v3 - v15;
      *v20 = v15 + v14;
    }
    else
    {
      *((_DWORD *)&BugCheckParameter3a + v5) = v14 + v3;
      *v11 = v14 + v15;
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
