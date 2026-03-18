/*
 * XREFs of CmpSplitLeaf @ 0x140700588
 * Callers:
 *     CmpSelectLeaf @ 0x1405E55DC (CmpSelectLeaf.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     HvpMarkCellDirty @ 0x1404E3EC4 (HvpMarkCellDirty.c)
 *     HvReallocateCell @ 0x140514F84 (HvReallocateCell.c)
 *     HvFreeCell @ 0x14051584C (HvFreeCell.c)
 *     HvAllocateCell @ 0x140515B84 (HvAllocateCell.c)
 */

__int64 __fastcall CmpSplitLeaf(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        unsigned int a3,
        unsigned int a4)
{
  __int16 *v4; // rsi
  unsigned int v5; // r14d
  __int64 (__fastcall *v7)(ULONG_PTR, ULONG_PTR, __int64 *); // rax
  __int64 v8; // r15
  __int64 v9; // rax
  _WORD *v10; // rbx
  unsigned int v11; // r13d
  __int64 v12; // rax
  unsigned __int16 v13; // cx
  unsigned __int16 v14; // r12
  unsigned int Cell; // eax
  unsigned int v16; // r13d
  __int16 v17; // ax
  int v18; // edx
  int v19; // ebx
  unsigned int v20; // ebx
  int v22; // ecx
  unsigned __int16 v23; // [rsp+30h] [rbp-30h]
  __int64 v24; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v25[2]; // [rsp+40h] [rbp-20h] BYREF
  __int16 *v26; // [rsp+48h] [rbp-18h] BYREF
  _DWORD v27[2]; // [rsp+50h] [rbp-10h] BYREF
  __int64 v28; // [rsp+58h] [rbp-8h]
  unsigned __int16 v29; // [rsp+A0h] [rbp+40h]

  v24 = 0xFFFFFFFFLL;
  v27[0] = -1;
  v4 = 0LL;
  v25[0] = -1;
  v5 = BugCheckParameter3;
  v27[1] = 0;
  v25[1] = 0;
  v7 = *(__int64 (__fastcall **)(ULONG_PTR, ULONG_PTR, __int64 *))(BugCheckParameter2 + 8);
  v8 = a3;
  v26 = 0LL;
  v9 = v7(BugCheckParameter2, BugCheckParameter3, &v24);
  v10 = (_WORD *)v9;
  if ( !v9 )
    return 0xFFFFFFFFLL;
  v11 = *(_DWORD *)(v9 + 4 * v8 + 4);
  v12 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(BugCheckParameter2, v11, v27);
  v28 = v12;
  if ( !v12 )
  {
LABEL_12:
    if ( v10 )
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v24);
    return 0xFFFFFFFFLL;
  }
  v13 = *(_WORD *)(v12 + 2);
  v23 = v13 >> 1;
  v29 = v13 - (v13 >> 1);
  v14 = *(_DWORD *)(BugCheckParameter2 + 212) < 5u ? 4 : 8;
  if ( !HvpMarkCellDirty(BugCheckParameter2, v11, 0)
    || (Cell = HvAllocateCell(BugCheckParameter2, v29 * (unsigned int)v14 + 5, a4, (__int64)&v26, (__int64)v25),
        v4 = v26,
        v16 = Cell,
        Cell == -1) )
  {
LABEL_10:
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v27);
    if ( v4 )
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v25);
    goto LABEL_12;
  }
  v17 = 26732;
  if ( *(_DWORD *)(BugCheckParameter2 + 212) < 5u )
    v17 = 26988;
  *v26 = v17;
  v18 = *((_DWORD *)v10 - 1);
  if ( ((-8 - 4 * (unsigned __int16)v10[1] - v18) & 0xFFFFFFFC) < 4 )
  {
    v19 = -4 - v18;
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v24);
    v26 = 0LL;
    v20 = HvReallocateCell(BugCheckParameter2, v5, v19 + 4, 0, (__int64 *)&v26, &v24);
    if ( v20 == -1 )
    {
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v25);
      v4 = 0LL;
      HvFreeCell(BugCheckParameter2, v16);
      v10 = v26;
      goto LABEL_10;
    }
    if ( v5 != v20 )
    {
      HvFreeCell(BugCheckParameter2, v5);
      v5 = v20;
    }
    v10 = v26;
  }
  memmove(
    v4 + 2,
    (const void *)(v23 * ((-(__int64)(*(_DWORD *)(BugCheckParameter2 + 212) < 5u) & 0xFFFFFFFFFFFFFFFCuLL) + 8) + v28 + 4),
    v29 * (unsigned int)v14);
  *(_WORD *)(v28 + 2) = v23;
  v4[1] = v29;
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v27);
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v25);
  v22 = (unsigned __int16)v10[1];
  if ( (unsigned int)v8 < v22 - 1 )
  {
    memmove(
      &v10[2 * (unsigned int)(v8 + 2) + 2],
      &v10[2 * (unsigned int)(v8 + 1) + 2],
      4LL * (unsigned int)(v22 - v8 - 1));
    LOWORD(v22) = v10[1];
  }
  v10[1] = v22 + 1;
  *(_DWORD *)&v10[2 * (unsigned int)(v8 + 1) + 2] = v16;
  (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v24);
  return v5;
}
