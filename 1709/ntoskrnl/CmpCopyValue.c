/*
 * XREFs of CmpCopyValue @ 0x1405A651C
 * Callers:
 *     CmpCopyKeyPartial @ 0x1405A5AF4 (CmpCopyKeyPartial.c)
 *     CmpSyncKeyValues @ 0x1405A62E4 (CmpSyncKeyValues.c)
 *     CmpPromoteSingleKeyFromKeyNodeStacks @ 0x14068B0D4 (CmpPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpMergeKeyValues @ 0x140699A74 (CmpMergeKeyValues.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     CmpCopyCell @ 0x1404767FC (CmpCopyCell.c)
 *     CmpFreeValueData @ 0x14047692C (CmpFreeValueData.c)
 *     CmpSetValueDataNew @ 0x1404776BC (CmpSetValueDataNew.c)
 *     HvFreeCell @ 0x1404778AC (HvFreeCell.c)
 *     CmpGetValueData @ 0x14047E060 (CmpGetValueData.c)
 */

__int64 __fastcall CmpCopyValue(__int64 a1, __int64 a2, ULONG_PTR a3, int a4)
{
  __int64 (__fastcall *v5)(__int64, __int64, _DWORD *); // rax
  __int64 v8; // rax
  __int64 v9; // r13
  unsigned int v10; // ebx
  unsigned int v11; // r15d
  unsigned int *v12; // r12
  unsigned int v13; // esi
  unsigned int v14; // ebx
  __int64 v15; // rax
  unsigned int v17; // ebx
  __int64 v18; // rax
  bool ValueData; // al
  ULONG_PTR v20; // rcx
  PVOID v21; // rbx
  unsigned int v22; // ebx
  unsigned int v23; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v24; // [rsp+44h] [rbp-1Ch] BYREF
  _DWORD v25[2]; // [rsp+48h] [rbp-18h] BYREF
  _DWORD v26[2]; // [rsp+50h] [rbp-10h] BYREF
  PVOID P; // [rsp+58h] [rbp-8h] BYREF
  unsigned int v28; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v29; // [rsp+A8h] [rbp+48h]
  int v30; // [rsp+B8h] [rbp+58h]

  v30 = a4;
  v29 = a2;
  v25[1] = 0;
  v5 = *(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(a1 + 8);
  v25[0] = -1;
  v8 = v5(a1, a2, v25);
  v9 = v8;
  if ( !v8 )
    return (unsigned int)-1;
  v10 = *(_DWORD *)(v8 + 4);
  if ( v10 >= 0x80000000 )
  {
    v11 = v10 + 0x80000000;
    v23 = v10 + 0x80000000;
  }
  else
  {
    v11 = *(_DWORD *)(v8 + 4);
    v23 = v11;
  }
  v12 = (unsigned int *)(v8 + 8);
  v28 = *(_DWORD *)(v8 + 8);
  v13 = CmpCopyCell(a1, v29, a3, a4);
  if ( v13 == -1 || !v11 )
    goto LABEL_20;
  if ( v11 <= 4 )
  {
    if ( v10 < 0x80000000
      && (v22 = *v12,
          (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v25),
          (v12 = (unsigned int *)(*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, v22, v25)) == 0LL)
      || (v17 = *v12,
          (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v25),
          (v18 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a3 + 8))(a3, v13, v25)) == 0) )
    {
      HvFreeCell(a3, v13);
      return 0xFFFFFFFFLL;
    }
    *(_DWORD *)(v18 + 8) = v17;
    *(_DWORD *)(v18 + 4) = v11 + 0x80000000;
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a3 + 16))(a3, v25);
    v9 = 0LL;
LABEL_20:
    if ( v9 )
      (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v25);
    return v13;
  }
  if ( *(_DWORD *)(a1 + 196) >= 4u && v11 - 16345 <= 0x7FFFC026
    || *(_DWORD *)(a3 + 196) >= 4u && v11 - 16345 <= 0x7FFFC026 )
  {
    v26[1] = 0;
    v26[0] = -1;
    ValueData = CmpGetValueData(a1, v29, v9, &v23, (__int64)&P, (__int64)&v28, (__int64)v26);
    v20 = a3;
    if ( !ValueData )
    {
LABEL_30:
      HvFreeCell(v20, v13);
      v13 = -1;
      goto LABEL_20;
    }
    v21 = P;
    v11 = v23;
    if ( (int)CmpSetValueDataNew(a3, (char *)P, v23, v30, &v24) < 0 )
    {
      if ( (_BYTE)v28 == 1 )
        ExFreePoolWithTag(v21, 0);
      else
        (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v26);
      goto LABEL_29;
    }
    if ( (_BYTE)v28 == 1 )
      ExFreePoolWithTag(v21, 0);
    else
      (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v26);
    v14 = v24;
  }
  else
  {
    v14 = CmpCopyCell(a1, v28, a3, v30);
  }
  if ( v14 == -1 )
  {
LABEL_29:
    v20 = a3;
    goto LABEL_30;
  }
  (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v25);
  v15 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a3 + 8))(a3, v13, v25);
  if ( v15 )
  {
    *(_DWORD *)(v15 + 8) = v14;
    *(_DWORD *)(v15 + 4) = v11;
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a3 + 16))(a3, v25);
    return v13;
  }
  HvFreeCell(a3, v13);
  CmpFreeValueData(a3, v14, v11);
  return 0xFFFFFFFFLL;
}
