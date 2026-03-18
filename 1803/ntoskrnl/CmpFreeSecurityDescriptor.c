/*
 * XREFs of CmpFreeSecurityDescriptor @ 0x140517750
 * Callers:
 *     CmpCreateChild @ 0x140514170 (CmpCreateChild.c)
 *     CmpFreeKeyByCell @ 0x1405150FC (CmpFreeKeyByCell.c)
 *     CmpCopySaclToVirtualKey @ 0x1406F6030 (CmpCopySaclToVirtualKey.c)
 *     CmpSyncKeyValues @ 0x1406FEB90 (CmpSyncKeyValues.c)
 * Callees:
 *     CmpRemoveSecurityCellList @ 0x1400CE6D8 (CmpRemoveSecurityCellList.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     HvFreeCell @ 0x14051584C (HvFreeCell.c)
 */

__int64 __fastcall CmpFreeSecurityDescriptor(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 v5; // rbp
  unsigned int v6; // esi
  __int64 v7; // rax
  int v8; // eax
  int v9; // [rsp+40h] [rbp+8h] BYREF
  int v10; // [rsp+44h] [rbp+Ch]
  int v11; // [rsp+50h] [rbp+18h] BYREF
  int v12; // [rsp+54h] [rbp+1Ch]

  v11 = -1;
  v9 = -1;
  v12 = 0;
  v10 = 0;
  v3 = 0LL;
  result = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, a2, &v11);
  v5 = result;
  if ( result )
  {
    v6 = *(_DWORD *)(result + 44);
    if ( v6 != -1 )
    {
      v7 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, v6, &v9);
      v3 = v7;
      if ( v7 )
      {
        v8 = *(_DWORD *)(v7 + 12);
        if ( v8 == 1 )
        {
          (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v9);
          v3 = 0LL;
          CmpRemoveSecurityCellList(BugCheckParameter2, v6);
          HvFreeCell(BugCheckParameter2, v6);
        }
        else
        {
          *(_DWORD *)(v3 + 12) = v8 - 1;
        }
        *(_DWORD *)(v5 + 44) = -1;
      }
    }
    result = (*(__int64 (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v11);
    if ( v3 )
      return (*(__int64 (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v9);
  }
  return result;
}
