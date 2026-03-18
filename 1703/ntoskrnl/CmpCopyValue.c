/*
 * XREFs of CmpCopyValue @ 0x14058E1DC
 * Callers:
 *     CmpCopyKeyPartial @ 0x140571EDC (CmpCopyKeyPartial.c)
 *     CmpSyncKeyValues @ 0x14058DFA4 (CmpSyncKeyValues.c)
 *     CmpPromoteSingleKeyFromKeyNodeStacks @ 0x140661DD4 (CmpPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpMergeKeyValues @ 0x14066F3AC (CmpMergeKeyValues.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmpSetValueDataNew @ 0x140444C1C (CmpSetValueDataNew.c)
 *     HvFreeCell @ 0x14048C8DC (HvFreeCell.c)
 *     CmpFreeValueData @ 0x1404D15C4 (CmpFreeValueData.c)
 *     CmpGetValueData @ 0x1405031D0 (CmpGetValueData.c)
 *     CmpCopyCell @ 0x14057226C (CmpCopyCell.c)
 */

__int64 __fastcall CmpCopyValue(__int64 a1, __int64 a2, ULONG_PTR a3, unsigned int a4)
{
  __int64 (__fastcall *v5)(__int64, __int64, _DWORD *); // rax
  unsigned int v7; // esi
  __int64 v9; // rax
  __int64 v10; // r13
  unsigned int v11; // ebx
  unsigned int v12; // r15d
  unsigned int v13; // esi
  unsigned int v14; // ebx
  __int64 v15; // rax
  int *v17; // rax
  int v18; // ebx
  __int64 v19; // rax
  bool ValueData; // al
  ULONG_PTR v21; // rcx
  PVOID v22; // rbx
  unsigned int v23; // ebx
  unsigned int v24; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v25; // [rsp+44h] [rbp-1Ch] BYREF
  _DWORD v26[2]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v27; // [rsp+50h] [rbp-10h] BYREF
  PVOID P; // [rsp+58h] [rbp-8h] BYREF
  unsigned int v29; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v30; // [rsp+A8h] [rbp+48h]

  v30 = a2;
  v26[1] = 0;
  v5 = *(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(a1 + 8);
  v26[0] = -1;
  v7 = a2;
  v9 = v5(a1, a2, v26);
  v10 = v9;
  if ( !v9 )
    return (unsigned int)-1;
  v11 = *(_DWORD *)(v9 + 4);
  if ( v11 >= 0x80000000 )
  {
    v12 = v11 + 0x80000000;
    v24 = v11 + 0x80000000;
  }
  else
  {
    v12 = *(_DWORD *)(v9 + 4);
    v24 = v12;
  }
  v27 = v9 + 8;
  v29 = *(_DWORD *)(v9 + 8);
  v13 = CmpCopyCell(a1, v7, a3, a4);
  if ( v13 == -1 || !v12 )
    goto LABEL_20;
  if ( v12 <= 4 )
  {
    v17 = (int *)v27;
    if ( v11 < 0x80000000
      && (v23 = *(_DWORD *)v27,
          (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v26),
          (v17 = (int *)(*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, v23, v26)) == 0LL)
      || (v18 = *v17,
          (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v26),
          (v19 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a3 + 8))(a3, v13, v26)) == 0) )
    {
      HvFreeCell(a3, v13);
      return 0xFFFFFFFFLL;
    }
    *(_DWORD *)(v19 + 8) = v18;
    *(_DWORD *)(v19 + 4) = v12 + 0x80000000;
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a3 + 16))(a3, v26);
    v10 = 0LL;
LABEL_20:
    if ( v10 )
      (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v26);
    return v13;
  }
  if ( (*(_DWORD *)(a1 + 196) < 4u || v12 - 16345 > 0x7FFFC026)
    && (*(_DWORD *)(a3 + 196) < 4u || v12 - 16345 > 0x7FFFC026) )
  {
    v14 = CmpCopyCell(a1, v29, a3, a4);
    goto LABEL_12;
  }
  v27 = 0xFFFFFFFFLL;
  ValueData = CmpGetValueData(a1, v30, v10, &v24, (__int64)&P, (__int64)&v29, (__int64)&v27);
  v21 = a3;
  if ( !ValueData )
  {
LABEL_30:
    HvFreeCell(v21, v13);
    v13 = -1;
    goto LABEL_20;
  }
  v22 = P;
  v12 = v24;
  if ( (int)CmpSetValueDataNew(a3, (char *)P, v24, a4, &v25) < 0 )
  {
    if ( (_BYTE)v29 == 1 )
      ExFreePoolWithTag(v22, 0);
    else
      (*(void (__fastcall **)(__int64, __int64 *))(a1 + 16))(a1, &v27);
    v21 = a3;
    goto LABEL_30;
  }
  if ( (_BYTE)v29 == 1 )
    ExFreePoolWithTag(v22, 0);
  else
    (*(void (__fastcall **)(__int64, __int64 *))(a1 + 16))(a1, &v27);
  v14 = v25;
LABEL_12:
  if ( v14 == -1 )
  {
    HvFreeCell(a3, v13);
    v13 = -1;
    goto LABEL_20;
  }
  (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v26);
  v15 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a3 + 8))(a3, v13, v26);
  if ( v15 )
  {
    *(_DWORD *)(v15 + 8) = v14;
    *(_DWORD *)(v15 + 4) = v12;
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a3 + 16))(a3, v26);
    return v13;
  }
  HvFreeCell(a3, v13);
  CmpFreeValueData(a3, v14, v12);
  return 0xFFFFFFFFLL;
}
