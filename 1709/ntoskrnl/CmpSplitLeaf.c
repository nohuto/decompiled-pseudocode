/*
 * XREFs of CmpSplitLeaf @ 0x14069B95C
 * Callers:
 *     CmpSelectLeaf @ 0x1405E819C (CmpSelectLeaf.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     HvReallocateCell @ 0x140476BE4 (HvReallocateCell.c)
 *     HvFreeCell @ 0x1404778AC (HvFreeCell.c)
 *     HvAllocateCell @ 0x140479BF4 (HvAllocateCell.c)
 *     HvpMarkCellDirty @ 0x14047D0F4 (HvpMarkCellDirty.c)
 */

__int64 __fastcall CmpSplitLeaf(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        unsigned int a3,
        unsigned int a4)
{
  __int16 *v4; // rsi
  unsigned int v5; // r12d
  __int64 (__fastcall *v7)(ULONG_PTR, ULONG_PTR, __int64 *); // rax
  __int64 v8; // r15
  __int64 v9; // rax
  _WORD *v10; // rbx
  unsigned int v11; // r14d
  __int64 v12; // rax
  unsigned __int16 v13; // ax
  unsigned __int16 v14; // r13
  unsigned int v15; // r14d
  unsigned int Cell; // eax
  __int16 v17; // ax
  int v18; // edx
  int v19; // ebx
  unsigned int v20; // ebx
  size_t v22; // r8
  __int64 v23; // r14
  const void *v24; // rdx
  int v25; // ecx
  unsigned int BugCheckParameter3a; // [rsp+30h] [rbp-30h]
  unsigned int BugCheckParameter3b; // [rsp+30h] [rbp-30h]
  __int64 v28; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v29[2]; // [rsp+40h] [rbp-20h] BYREF
  __int16 *v30; // [rsp+48h] [rbp-18h] BYREF
  _DWORD v31[2]; // [rsp+50h] [rbp-10h] BYREF
  __int64 v32; // [rsp+58h] [rbp-8h]
  unsigned __int16 v33; // [rsp+A0h] [rbp+40h]

  v28 = 0xFFFFFFFFLL;
  v31[0] = -1;
  v4 = 0LL;
  v29[0] = -1;
  v5 = BugCheckParameter3;
  v31[1] = 0;
  v29[1] = 0;
  v7 = *(__int64 (__fastcall **)(ULONG_PTR, ULONG_PTR, __int64 *))(BugCheckParameter2 + 8);
  v8 = a3;
  v30 = 0LL;
  v9 = v7(BugCheckParameter2, BugCheckParameter3, &v28);
  v10 = (_WORD *)v9;
  if ( !v9 )
    return 0xFFFFFFFFLL;
  v11 = *(_DWORD *)(v9 + 4 * v8 + 4);
  v12 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(BugCheckParameter2, v11, v31);
  v32 = v12;
  if ( !v12 )
  {
LABEL_12:
    if ( v10 )
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v28);
    return 0xFFFFFFFFLL;
  }
  v13 = *(_WORD *)(v12 + 2);
  v14 = v13 >> 1;
  v33 = v13 - (v13 >> 1);
  BugCheckParameter3a = *(_DWORD *)(BugCheckParameter2 + 196);
  if ( !HvpMarkCellDirty(BugCheckParameter2, v11, 0)
    || (v15 = v33 * (BugCheckParameter3a < 5 ? 4 : 8),
        Cell = HvAllocateCell(BugCheckParameter2, v15 + 5, a4, (__int64)&v30, (__int64)v29),
        v4 = v30,
        BugCheckParameter3b = Cell,
        Cell == -1) )
  {
LABEL_10:
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v31);
    if ( v4 )
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v29);
    goto LABEL_12;
  }
  v17 = 26732;
  if ( *(_DWORD *)(BugCheckParameter2 + 196) < 5u )
    v17 = 26988;
  *v30 = v17;
  v18 = *((_DWORD *)v10 - 1);
  if ( ((-8 - 4 * (unsigned __int16)v10[1] - v18) & 0xFFFFFFFC) < 4 )
  {
    v19 = -4 - v18;
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v28);
    v30 = 0LL;
    v20 = HvReallocateCell(BugCheckParameter2, v5, v19 + 4, 0, (__int64 *)&v30, &v28);
    if ( v20 == -1 )
    {
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v29);
      v4 = 0LL;
      HvFreeCell(BugCheckParameter2, BugCheckParameter3b);
      v10 = v30;
      goto LABEL_10;
    }
    if ( v5 != v20 )
    {
      HvFreeCell(BugCheckParameter2, v5);
      v5 = v20;
    }
    v10 = v30;
  }
  v22 = v15;
  v23 = v32;
  if ( *(_DWORD *)(BugCheckParameter2 + 196) < 5u )
    v24 = (const void *)(v32 + 4 * (v14 + 1LL));
  else
    v24 = (const void *)(v32 + 4 + 8LL * v14);
  memmove(v4 + 2, v24, v22);
  *(_WORD *)(v23 + 2) = v14;
  v4[1] = v33;
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v31);
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v29);
  v25 = (unsigned __int16)v10[1];
  if ( (unsigned int)v8 < v25 - 1 )
    memmove(
      &v10[2 * (unsigned int)(v8 + 2) + 2],
      &v10[2 * (unsigned int)(v8 + 1) + 2],
      4LL * (unsigned int)(v25 - v8 - 1));
  ++v10[1];
  *(_DWORD *)&v10[2 * (unsigned int)(v8 + 1) + 2] = BugCheckParameter3b;
  (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v28);
  return v5;
}
