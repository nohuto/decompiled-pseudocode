/*
 * XREFs of CmpGetSecurityDescriptorNode @ 0x140016054
 * Callers:
 *     CmpCreateHiveRootCell @ 0x14046F4A4 (CmpCreateHiveRootCell.c)
 *     CmpCreateChild @ 0x140475B90 (CmpCreateChild.c)
 *     CmpCopyKeyPartial @ 0x1405A5AF4 (CmpCopyKeyPartial.c)
 *     CmpSyncKeyValues @ 0x1405A62E4 (CmpSyncKeyValues.c)
 *     CmpCommitSetSecurityUoW @ 0x1405A6FC8 (CmpCommitSetSecurityUoW.c)
 *     CmpAssignSecurityDescriptor @ 0x1405EB4CC (CmpAssignSecurityDescriptor.c)
 *     CmpCreateEmptyKey @ 0x140691474 (CmpCreateEmptyKey.c)
 *     CmpCopySaclToVirtualKey @ 0x140693140 (CmpCopySaclToVirtualKey.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x14069FBE4 (CmpLightWeightPrepareSetSecDescUoW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     HvMarkCellDirty @ 0x1404768D8 (HvMarkCellDirty.c)
 *     CmpFindMatchingDescriptorCell @ 0x1404773FC (CmpFindMatchingDescriptorCell.c)
 *     HvFreeCell @ 0x1404778AC (HvFreeCell.c)
 *     HvAllocateCell @ 0x140479BF4 (HvAllocateCell.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140481B84 (CmpUpdateKeyNodeAccessBits.c)
 *     RtlLengthSecurityDescriptor @ 0x1404C0030 (RtlLengthSecurityDescriptor.c)
 *     CmpInsertSecurityCellList @ 0x1405912C8 (CmpInsertSecurityCellList.c)
 */

__int64 __fastcall CmpGetSecurityDescriptorNode(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        void *a4,
        char a5,
        unsigned int *a6)
{
  unsigned int v8; // esi
  unsigned int Cell; // edi
  __int64 v11; // rax
  ULONG v13; // eax
  ULONG v14; // eax
  _DWORD *v15; // rcx
  unsigned int v16; // [rsp+30h] [rbp-28h] BYREF
  _DWORD v17[2]; // [rsp+38h] [rbp-20h] BYREF
  _WORD *v18; // [rsp+40h] [rbp-18h] BYREF

  v17[0] = -1;
  v17[1] = 0;
  v8 = a2;
  if ( !(unsigned __int8)HvMarkCellDirty(BugCheckParameter2, a2, 0LL) )
    return 3221225853LL;
  CmpUpdateKeyNodeAccessBits(BugCheckParameter2, a3, v8);
  if ( !(unsigned __int8)CmpFindMatchingDescriptorCell(BugCheckParameter2, a4, v8 >> 31, &v16, 0LL) )
  {
    if ( KeGetCurrentThread()->PreviousMode
      && (*(_DWORD *)(BugCheckParameter2 + 5360) & 0x20) != 0
      && *(_DWORD *)(BugCheckParameter2 + 3040) > 1u )
    {
      return 3221225506LL;
    }
    v13 = RtlLengthSecurityDescriptor(a4);
    Cell = HvAllocateCell(BugCheckParameter2, v13 + 20, v8 >> 31, (unsigned int)&v18, (__int64)v17);
    if ( Cell == -1 )
      return 3221225626LL;
    v14 = RtlLengthSecurityDescriptor(a4);
    v15 = v18;
    *v18 = 27507;
    v15[3] = 1;
    v15[4] = v14;
    memmove(v15 + 5, a4, v14);
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v17);
    if ( (unsigned __int8)CmpInsertSecurityCellList(BugCheckParameter2) )
      goto LABEL_6;
    HvFreeCell(BugCheckParameter2, Cell);
    return 3221225853LL;
  }
  Cell = v16;
  if ( !(unsigned __int8)HvMarkCellDirty(BugCheckParameter2, v16, 0LL) )
    return 3221225853LL;
  v11 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(BugCheckParameter2, Cell, v17);
  if ( v11 )
  {
    ++*(_DWORD *)(v11 + 12);
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v17);
LABEL_6:
    *a6 = Cell;
    return 0LL;
  }
  return 3221225626LL;
}
