/*
 * XREFs of CmpCopyCell @ 0x14057226C
 * Callers:
 *     CmpCopyKeyPartial @ 0x140571EDC (CmpCopyKeyPartial.c)
 *     CmpSyncKeyValues @ 0x14058DFA4 (CmpSyncKeyValues.c)
 *     CmpCopyValue @ 0x14058E1DC (CmpCopyValue.c)
 *     CmpPromoteSingleKeyFromKeyNodeStacks @ 0x140661DD4 (CmpPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpLightWeightCreateSetValueData @ 0x14067470C (CmpLightWeightCreateSetValueData.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x140674EFC (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     HvAllocateCell @ 0x14048CDA0 (HvAllocateCell.c)
 */

__int64 __fastcall CmpCopyCell(__int64 a1, __int64 a2, ULONG_PTR a3, unsigned int a4)
{
  unsigned int v7; // r14d
  __int64 v8; // rax
  const void *v9; // r15
  unsigned int v10; // ebx
  unsigned int Cell; // eax
  void *v12; // rsi
  _DWORD v14[2]; // [rsp+30h] [rbp-28h] BYREF
  void *v15; // [rsp+38h] [rbp-20h] BYREF
  int v16; // [rsp+60h] [rbp+8h] BYREF
  int v17; // [rsp+64h] [rbp+Ch]

  v14[0] = -1;
  v15 = 0LL;
  v16 = -1;
  v14[1] = 0;
  v17 = 0;
  v7 = -1;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(a1 + 8))(a1, a2, v14);
  v9 = (const void *)v8;
  if ( v8 )
  {
    v10 = -4 - *(_DWORD *)(v8 - 4);
    Cell = HvAllocateCell(a3, v10, a4, (__int64)&v15, (__int64)&v16);
    v12 = v15;
    v7 = Cell;
    if ( Cell != -1 )
      memmove(v15, v9, v10);
    if ( v12 )
      (*(void (__fastcall **)(ULONG_PTR, int *))(a3 + 16))(a3, &v16);
    (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v14);
  }
  return v7;
}
