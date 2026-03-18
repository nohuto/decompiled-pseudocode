/*
 * XREFs of CmpCopyValue @ 0x1406FDA54
 * Callers:
 *     CmpCopyKeyPartial @ 0x1405DFB94 (CmpCopyKeyPartial.c)
 *     CmpPromoteSingleKeyFromKeyNodeStacks @ 0x1406EF510 (CmpPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpMergeKeyValues @ 0x1406FE0DC (CmpMergeKeyValues.c)
 *     CmpSyncKeyValues @ 0x1406FEB90 (CmpSyncKeyValues.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     CmpGetValueData @ 0x1404A6CE0 (CmpGetValueData.c)
 *     CmpSetValueDataNew @ 0x1405152B4 (CmpSetValueDataNew.c)
 *     HvFreeCell @ 0x14051584C (HvFreeCell.c)
 *     CmpFreeValueData @ 0x140516980 (CmpFreeValueData.c)
 *     CmpCopyCell @ 0x14054F92C (CmpCopyCell.c)
 */

__int64 __fastcall CmpCopyValue(__int64 a1, __int64 a2, ULONG_PTR a3, unsigned int a4)
{
  __int64 (__fastcall *v5)(__int64, __int64, ULONG_PTR *); // rax
  unsigned int v7; // esi
  __int64 v9; // rax
  __int64 v10; // r13
  unsigned int v11; // esi
  unsigned int v12; // ebx
  unsigned int v13; // r15d
  unsigned int v14; // eax
  bool ValueData; // al
  ULONG_PTR v16; // rcx
  PVOID v17; // rbx
  unsigned int v18; // ebx
  __int64 v19; // rax
  int *v21; // rax
  unsigned int v22; // ebx
  int v23; // ebx
  __int64 v24; // rax
  unsigned int v25; // [rsp+40h] [rbp-20h] BYREF
  unsigned int BugCheckParameter3; // [rsp+44h] [rbp-1Ch] BYREF
  ULONG_PTR BugCheckParameter3_4; // [rsp+48h] [rbp-18h] BYREF
  __int64 v28; // [rsp+50h] [rbp-10h] BYREF
  PVOID P; // [rsp+58h] [rbp-8h] BYREF
  unsigned int v30; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v31; // [rsp+A8h] [rbp+48h]

  v31 = a2;
  HIDWORD(BugCheckParameter3_4) = 0;
  v5 = *(__int64 (__fastcall **)(__int64, __int64, ULONG_PTR *))(a1 + 8);
  LODWORD(BugCheckParameter3_4) = -1;
  v7 = a2;
  v9 = v5(a1, a2, &BugCheckParameter3_4);
  v10 = v9;
  if ( v9 )
  {
    v12 = *(_DWORD *)(v9 + 4);
    v13 = v12 + 0x80000000;
    if ( v12 < 0x80000000 )
      v13 = *(_DWORD *)(v9 + 4);
    v28 = v9 + 8;
    v30 = *(_DWORD *)(v9 + 8);
    v25 = v13;
    v11 = CmpCopyCell(a1, v7, a3, a4);
    if ( v11 == -1 || !v13 )
      goto LABEL_34;
    if ( v13 <= 4 )
    {
      v21 = (int *)v28;
      if ( v12 < 0x80000000
        && (v22 = *(_DWORD *)v28,
            (*(void (__fastcall **)(__int64, ULONG_PTR *))(a1 + 16))(a1, &BugCheckParameter3_4),
            (v21 = (int *)(*(__int64 (__fastcall **)(__int64, _QWORD, ULONG_PTR *))(a1 + 8))(
                            a1,
                            v22,
                            &BugCheckParameter3_4)) == 0LL)
        || (v23 = *v21,
            (*(void (__fastcall **)(__int64, ULONG_PTR *))(a1 + 16))(a1, &BugCheckParameter3_4),
            (v24 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, ULONG_PTR *))(a3 + 8))(a3, v11, &BugCheckParameter3_4)) == 0) )
      {
        HvFreeCell(a3, v11);
        return 0xFFFFFFFFLL;
      }
      *(_DWORD *)(v24 + 8) = v23;
      *(_DWORD *)(v24 + 4) = v13 + 0x80000000;
      (*(void (__fastcall **)(ULONG_PTR, ULONG_PTR *))(a3 + 16))(a3, &BugCheckParameter3_4);
      v10 = 0LL;
      goto LABEL_34;
    }
    v14 = v13 - 16345;
    if ( (*(_DWORD *)(a1 + 212) < 4u || v14 > 0x7FFFC026) && (*(_DWORD *)(a3 + 212) < 4u || v14 > 0x7FFFC026) )
    {
      v18 = CmpCopyCell(a1, v30, a3, a4);
    }
    else
    {
      v28 = 0xFFFFFFFFLL;
      ValueData = CmpGetValueData(a1, v31, v10, &v25, (__int64)&P, (__int64)&v30, (__int64)&v28);
      v16 = a3;
      if ( !ValueData )
      {
LABEL_13:
        HvFreeCell(v16, v11);
        v11 = -1;
LABEL_34:
        if ( v10 )
          (*(void (__fastcall **)(__int64, ULONG_PTR *))(a1 + 16))(a1, &BugCheckParameter3_4);
        return v11;
      }
      v17 = P;
      v13 = v25;
      if ( (int)CmpSetValueDataNew(a3, (char *)P, v25, a4, &BugCheckParameter3) < 0 )
      {
        if ( (_BYTE)v30 == 1 )
          ExFreePoolWithTag(v17, 0);
        else
          (*(void (__fastcall **)(__int64, __int64 *))(a1 + 16))(a1, &v28);
        v16 = a3;
        goto LABEL_13;
      }
      if ( (_BYTE)v30 == 1 )
        ExFreePoolWithTag(v17, 0);
      else
        (*(void (__fastcall **)(__int64, __int64 *))(a1 + 16))(a1, &v28);
      v18 = BugCheckParameter3;
    }
    if ( v18 != -1 )
    {
      (*(void (__fastcall **)(__int64, ULONG_PTR *))(a1 + 16))(a1, &BugCheckParameter3_4);
      v19 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, ULONG_PTR *))(a3 + 8))(a3, v11, &BugCheckParameter3_4);
      if ( !v19 )
      {
        HvFreeCell(a3, v11);
        CmpFreeValueData(a3, v18, v13);
        return 0xFFFFFFFFLL;
      }
      *(_DWORD *)(v19 + 8) = v18;
      *(_DWORD *)(v19 + 4) = v13;
      (*(void (__fastcall **)(ULONG_PTR, ULONG_PTR *))(a3 + 16))(a3, &BugCheckParameter3_4);
      return v11;
    }
    HvFreeCell(a3, v11);
    v11 = -1;
    goto LABEL_34;
  }
  return (unsigned int)-1;
}
