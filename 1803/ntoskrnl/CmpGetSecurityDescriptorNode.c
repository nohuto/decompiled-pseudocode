/*
 * XREFs of CmpGetSecurityDescriptorNode @ 0x140007750
 * Callers:
 *     CmpCreateChild @ 0x140514170 (CmpCreateChild.c)
 *     CmpCopyKeyPartial @ 0x1405DFB94 (CmpCopyKeyPartial.c)
 *     CmpCommitSetSecurityUoW @ 0x1405F3504 (CmpCommitSetSecurityUoW.c)
 *     CmpCreateHiveRootCell @ 0x14064F024 (CmpCreateHiveRootCell.c)
 *     CmpAssignSecurityDescriptor @ 0x140651774 (CmpAssignSecurityDescriptor.c)
 *     CmpCreateEmptyKey @ 0x1406F4C7C (CmpCreateEmptyKey.c)
 *     CmpCopySaclToVirtualKey @ 0x1406F6030 (CmpCopySaclToVirtualKey.c)
 *     CmpSyncKeyValues @ 0x1406FEB90 (CmpSyncKeyValues.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x14070539C (CmpLightWeightPrepareSetSecDescUoW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     HvMarkCellDirty @ 0x1404A0A48 (HvMarkCellDirty.c)
 *     CmpFindMatchingDescriptorCell @ 0x1404A0A60 (CmpFindMatchingDescriptorCell.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1404A339C (CmpUpdateKeyNodeAccessBits.c)
 *     RtlLengthSecurityDescriptor @ 0x1404C7070 (RtlLengthSecurityDescriptor.c)
 *     HvFreeCell @ 0x14051584C (HvFreeCell.c)
 *     HvAllocateCell @ 0x140515B84 (HvAllocateCell.c)
 *     CmpInsertSecurityCellList @ 0x14057CE50 (CmpInsertSecurityCellList.c)
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
  if ( (unsigned __int8)CmpFindMatchingDescriptorCell(BugCheckParameter2, a4, v8 >> 31, &v16, 0LL) )
  {
    Cell = v16;
    if ( (unsigned __int8)HvMarkCellDirty(BugCheckParameter2, v16, 0LL) )
    {
      v11 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
              BugCheckParameter2,
              Cell,
              v17);
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
    return 3221225853LL;
  }
  if ( KeGetCurrentThread()->PreviousMode
    && (*(_DWORD *)(BugCheckParameter2 + 4152) & 0x20) != 0
    && *(_DWORD *)(BugCheckParameter2 + 1864) > 1u )
  {
    return 3221225506LL;
  }
  v13 = RtlLengthSecurityDescriptor(a4);
  Cell = HvAllocateCell(BugCheckParameter2, v13 + 20, v8 >> 31, (unsigned int)&v18, (__int64)v17);
  if ( Cell != -1 )
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
    HvFreeCell(BugCheckParameter2, Cell);
    return 3221225853LL;
  }
  return 3221225626LL;
}
