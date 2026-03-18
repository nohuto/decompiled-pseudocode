/*
 * XREFs of CmpGetSecurityDescriptorNode @ 0x14006ECBC
 * Callers:
 *     CmpCreateChild @ 0x1404D0388 (CmpCreateChild.c)
 *     CmpCopyKeyPartial @ 0x140571EDC (CmpCopyKeyPartial.c)
 *     CmpSyncKeyValues @ 0x14058DFA4 (CmpSyncKeyValues.c)
 *     CmpCommitSetSecurityUoW @ 0x14059B280 (CmpCommitSetSecurityUoW.c)
 *     CmpCreateHiveRootCell @ 0x1405D06F4 (CmpCreateHiveRootCell.c)
 *     CmpAssignSecurityDescriptor @ 0x1405D11F4 (CmpAssignSecurityDescriptor.c)
 *     CmpCreateEmptyKey @ 0x140666F54 (CmpCreateEmptyKey.c)
 *     CmpCopySaclToVirtualKey @ 0x140668104 (CmpCopySaclToVirtualKey.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x1406752A8 (CmpLightWeightPrepareSetSecDescUoW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     CmpInsertSecurityCellList @ 0x140455FCC (CmpInsertSecurityCellList.c)
 *     HvFreeCell @ 0x14048C8DC (HvFreeCell.c)
 *     HvAllocateCell @ 0x14048CDA0 (HvAllocateCell.c)
 *     HvMarkCellDirty @ 0x1404BFD4C (HvMarkCellDirty.c)
 *     CmpFindMatchingDescriptorCell @ 0x1404BFD5C (CmpFindMatchingDescriptorCell.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140500654 (CmpUpdateKeyNodeAccessBits.c)
 *     RtlLengthSecurityDescriptor @ 0x14050E880 (RtlLengthSecurityDescriptor.c)
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
  unsigned int v10; // edi
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
  if ( (unsigned __int8)CmpFindMatchingDescriptorCell(BugCheckParameter2, a4, v8 >> 31, &v16, 0LL) )
  {
    v10 = v16;
    if ( (unsigned __int8)HvMarkCellDirty(BugCheckParameter2, v16, 0LL) )
    {
      v11 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
              BugCheckParameter2,
              v10,
              v17);
      if ( v11 )
      {
        ++*(_DWORD *)(v11 + 12);
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v17);
LABEL_6:
        *a6 = v10;
        return 0LL;
      }
      return 3221225626LL;
    }
    return 3221225853LL;
  }
  if ( KeGetCurrentThread()->PreviousMode
    && (*(_DWORD *)(BugCheckParameter2 + 5360) & 0x20) != 0
    && *(_DWORD *)(BugCheckParameter2 + 3040) > 1u )
  {
    return 3221225506LL;
  }
  v13 = RtlLengthSecurityDescriptor(a4);
  v10 = HvAllocateCell(BugCheckParameter2, v13 + 20, v8 >> 31, &v18, v17);
  if ( v10 != -1 )
  {
    v14 = RtlLengthSecurityDescriptor(a4);
    v15 = v18;
    *v18 = 27507;
    v15[3] = 1;
    v15[4] = v14;
    memmove(v15 + 5, a4, v14);
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v17);
    if ( (unsigned __int8)CmpInsertSecurityCellList(BugCheckParameter2) )
      goto LABEL_6;
    HvFreeCell(BugCheckParameter2, v10);
    return 3221225853LL;
  }
  return 3221225626LL;
}
