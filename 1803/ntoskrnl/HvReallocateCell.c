/*
 * XREFs of HvReallocateCell @ 0x140514F84
 * Callers:
 *     CmpRemoveValueFromList @ 0x1404983C0 (CmpRemoveValueFromList.c)
 *     CmpSetValueKeyExisting @ 0x1404A0DA0 (CmpSetValueKeyExisting.c)
 *     CmpAddToLeaf @ 0x140513600 (CmpAddToLeaf.c)
 *     CmpAddValueToListEx @ 0x140514E5C (CmpAddValueToListEx.c)
 *     CmpSetValueDataExisting @ 0x140582280 (CmpSetValueDataExisting.c)
 *     CmpSplitLeaf @ 0x140700588 (CmpSplitLeaf.c)
 *     CmRestoreKey @ 0x140701768 (CmRestoreKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     HvFreeCell @ 0x14051584C (HvFreeCell.c)
 *     HvpDoAllocateCell @ 0x140515D74 (HvpDoAllocateCell.c)
 */

__int64 __fastcall HvReallocateCell(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        int a3,
        char a4,
        __int64 *a5,
        __int64 *a6)
{
  unsigned int v6; // r8d
  int v8; // ecx
  unsigned int v10; // r15d
  unsigned int i; // edi
  __int64 v12; // rax
  const void *v13; // rsi
  unsigned int v14; // r14d
  unsigned int Cell; // edi
  size_t v16; // r8
  void *v17; // r14
  void *v18; // r14
  __int64 v20; // [rsp+30h] [rbp-20h] BYREF
  __int64 v21; // [rsp+38h] [rbp-18h] BYREF
  void *v22; // [rsp+40h] [rbp-10h]

  v22 = 0LL;
  v6 = (a3 + 11) & 0xFFFFFFF8;
  v21 = 0xFFFFFFFFLL;
  v8 = 0;
  v20 = 0xFFFFFFFFLL;
  v10 = BugCheckParameter3;
  for ( i = 0x4000; v6 > i; i *= 2 )
    ++v8;
  if ( !v8 )
    i = v6;
  if ( i > 0x100000 )
    return 0xFFFFFFFFLL;
  v12 = (*(__int64 (__fastcall **)(ULONG_PTR, ULONG_PTR, __int64 *))(BugCheckParameter2 + 8))(
          BugCheckParameter2,
          BugCheckParameter3,
          &v21);
  v13 = (const void *)v12;
  if ( v12 )
  {
    v14 = -4 - *(_DWORD *)(v12 - 4);
    if ( i <= -*(_DWORD *)(v12 - 4) )
    {
      Cell = v10;
      *a5 = v12;
      *a6 = v21;
    }
    else
    {
      Cell = HvpDoAllocateCell(BugCheckParameter2, (__int64)&v20);
      if ( Cell == -1 )
      {
        v18 = v22;
        Cell = -1;
      }
      else
      {
        v16 = v14;
        v17 = v22;
        memmove(v22, v13, v16);
        (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v21);
        v13 = 0LL;
        if ( a4 == 1 )
          HvFreeCell(BugCheckParameter2, v10);
        *a5 = (__int64)v17;
        v18 = 0LL;
        *a6 = v20;
        v20 = 0xFFFFFFFFLL;
      }
      if ( v13 )
        (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v21);
      if ( v18 )
        (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v20);
    }
  }
  else
  {
    return (unsigned int)-1;
  }
  return Cell;
}
