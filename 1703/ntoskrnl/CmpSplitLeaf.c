/*
 * XREFs of CmpSplitLeaf @ 0x140670E58
 * Callers:
 *     CmpSelectLeaf @ 0x140574238 (CmpSelectLeaf.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     HvFreeCell @ 0x14048C8DC (HvFreeCell.c)
 *     HvAllocateCell @ 0x14048CDA0 (HvAllocateCell.c)
 *     HvReallocateCell @ 0x1404D339C (HvReallocateCell.c)
 *     HvpMarkCellDirty @ 0x14051559C (HvpMarkCellDirty.c)
 */

__int64 __fastcall CmpSplitLeaf(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v4; // rsi
  unsigned int v5; // r15d
  __int64 (__fastcall *v7)(ULONG_PTR, ULONG_PTR, ULONG_PTR *); // rax
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r13
  unsigned __int16 v13; // r12
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // r12
  unsigned int Cell; // eax
  __int16 v17; // ax
  int v18; // edx
  int v19; // ebx
  unsigned int v20; // ebx
  __int64 v22; // rdx
  int v23; // ecx
  unsigned __int16 v24; // [rsp+30h] [rbp-30h]
  unsigned int BugCheckParameter3a; // [rsp+34h] [rbp-2Ch]
  ULONG_PTR BugCheckParameter3_4; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v27[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v28; // [rsp+48h] [rbp-18h] BYREF
  _DWORD v29[4]; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int16 v30; // [rsp+A0h] [rbp+40h]

  BugCheckParameter3_4 = 0xFFFFFFFFLL;
  v29[0] = -1;
  v4 = 0LL;
  v27[0] = -1;
  v5 = BugCheckParameter3;
  v29[1] = 0;
  v27[1] = 0;
  v7 = *(__int64 (__fastcall **)(ULONG_PTR, ULONG_PTR, ULONG_PTR *))(BugCheckParameter2 + 8);
  v8 = a3;
  v28 = 0LL;
  v9 = v7(BugCheckParameter2, BugCheckParameter3, &BugCheckParameter3_4);
  v10 = v9;
  if ( !v9 )
    return 0xFFFFFFFFLL;
  BugCheckParameter3a = *(_DWORD *)(v9 + 4 * v8 + 4);
  v11 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
          BugCheckParameter2,
          BugCheckParameter3a,
          v29);
  v12 = v11;
  if ( !v11 )
  {
LABEL_12:
    if ( v10 )
      (*(void (__fastcall **)(ULONG_PTR, ULONG_PTR *))(BugCheckParameter2 + 16))(
        BugCheckParameter2,
        &BugCheckParameter3_4);
    return 0xFFFFFFFFLL;
  }
  v13 = *(_WORD *)(v11 + 2);
  v14 = v13 >> 1;
  v15 = v13 - (v13 >> 1);
  v24 = v14;
  v30 = *(_DWORD *)(BugCheckParameter2 + 196) < 5u ? 4 : 8;
  if ( !HvpMarkCellDirty(BugCheckParameter2, BugCheckParameter3a, 0)
    || (Cell = HvAllocateCell(BugCheckParameter2, v15 * (unsigned int)v30 + 5, a4, (__int64)&v28, (__int64)v27),
        v4 = v28,
        BugCheckParameter3a = Cell,
        Cell == -1) )
  {
LABEL_10:
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v29);
    if ( v4 )
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v27);
    goto LABEL_12;
  }
  v17 = 26732;
  if ( *(_DWORD *)(BugCheckParameter2 + 196) < 5u )
    v17 = 26988;
  *(_WORD *)v28 = v17;
  v18 = *(_DWORD *)(v10 - 4);
  if ( ((-8 - 4 * *(unsigned __int16 *)(v10 + 2) - v18) & 0xFFFFFFFC) < 4 )
  {
    v19 = -4 - v18;
    (*(void (__fastcall **)(ULONG_PTR, ULONG_PTR *))(BugCheckParameter2 + 16))(
      BugCheckParameter2,
      &BugCheckParameter3_4);
    v28 = 0LL;
    v20 = HvReallocateCell(BugCheckParameter2, v5, v19 + 4, 0, &v28, (__int64 *)&BugCheckParameter3_4);
    if ( v20 == -1 )
    {
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v27);
      v4 = 0LL;
      HvFreeCell(BugCheckParameter2, BugCheckParameter3a);
      v10 = v28;
      goto LABEL_10;
    }
    if ( v5 != v20 )
    {
      HvFreeCell(BugCheckParameter2, v5);
      v5 = v20;
    }
    v10 = v28;
  }
  v22 = 8LL * v24 + 4;
  if ( *(_DWORD *)(BugCheckParameter2 + 196) < 5u )
    v22 = 4LL * v24 + 4;
  memmove((void *)(v4 + 4), (const void *)(v12 + v22), v30 * (unsigned __int64)v15);
  *(_WORD *)(v12 + 2) = v24;
  *(_WORD *)(v4 + 2) = v15;
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v29);
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v27);
  v23 = *(unsigned __int16 *)(v10 + 2);
  if ( (unsigned int)v8 < v23 - 1 )
    memmove(
      (void *)(v10 + 4 * ((unsigned int)(v8 + 2) + 1LL)),
      (const void *)(v10 + 4 * ((unsigned int)(v8 + 1) + 1LL)),
      4LL * (unsigned int)(v23 - v8 - 1));
  ++*(_WORD *)(v10 + 2);
  *(_DWORD *)(v10 + 4LL * (unsigned int)(v8 + 1) + 4) = BugCheckParameter3a;
  (*(void (__fastcall **)(ULONG_PTR, ULONG_PTR *))(BugCheckParameter2 + 16))(BugCheckParameter2, &BugCheckParameter3_4);
  return v5;
}
