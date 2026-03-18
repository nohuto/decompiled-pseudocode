/*
 * XREFs of HvReallocateCell @ 0x140476BE4
 * Callers:
 *     CmpRemoveValueFromList @ 0x140471FA4 (CmpRemoveValueFromList.c)
 *     CmpSetValueKeyExisting @ 0x1404737F8 (CmpSetValueKeyExisting.c)
 *     CmpAddToLeaf @ 0x1404740BC (CmpAddToLeaf.c)
 *     CmpAddValueToListEx @ 0x140476AC8 (CmpAddValueToListEx.c)
 *     CmpSetValueDataExisting @ 0x1405988A4 (CmpSetValueDataExisting.c)
 *     CmpSplitLeaf @ 0x14069B95C (CmpSplitLeaf.c)
 *     CmRestoreKey @ 0x14069C888 (CmRestoreKey.c)
 * Callees:
 *     HvpGetCellContextReinitialize @ 0x1400812C8 (HvpGetCellContextReinitialize.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     HvFreeCell @ 0x1404778AC (HvFreeCell.c)
 *     HvpDoAllocateCell @ 0x140479EE0 (HvpDoAllocateCell.c)
 */

__int64 __fastcall HvReallocateCell(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        int a3,
        char a4,
        __int64 *a5,
        __int64 *a6)
{
  unsigned int v6; // r15d
  unsigned int v8; // ebx
  unsigned int v9; // ecx
  int v10; // edx
  __int64 v12; // rax
  const void *v13; // rsi
  unsigned int v14; // r14d
  unsigned int Cell; // ebx
  size_t v16; // r8
  void *v17; // r14
  void *v18; // r14
  __int64 v20; // [rsp+30h] [rbp-20h] BYREF
  __int64 v21; // [rsp+38h] [rbp-18h] BYREF
  void *v22; // [rsp+40h] [rbp-10h]

  v22 = 0LL;
  v6 = BugCheckParameter3;
  v20 = 0xFFFFFFFFLL;
  v8 = (a3 + 11) & 0xFFFFFFF8;
  v21 = 0xFFFFFFFFLL;
  v9 = 0x4000;
  v10 = 0;
  if ( v8 > 0x4000 )
  {
    do
    {
      v9 *= 2;
      ++v10;
    }
    while ( v8 > v9 );
    if ( v10 )
      v8 = v9;
  }
  if ( v8 > 0x100000 )
    return 0xFFFFFFFFLL;
  v12 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter2 + 8))(BugCheckParameter2, v6, &v20);
  v13 = (const void *)v12;
  if ( v12 )
  {
    v14 = -4 - *(_DWORD *)(v12 - 4);
    if ( v8 <= -*(_DWORD *)(v12 - 4) )
    {
      Cell = v6;
      *a5 = v12;
      *a6 = v20;
      HvpGetCellContextReinitialize((__int64)&v20);
    }
    else
    {
      Cell = HvpDoAllocateCell(BugCheckParameter2, (__int64)&v21);
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
        (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v20);
        v13 = 0LL;
        if ( a4 == 1 )
          HvFreeCell(BugCheckParameter2, v6);
        *a5 = (__int64)v17;
        v18 = 0LL;
        *a6 = v21;
        HvpGetCellContextReinitialize((__int64)&v21);
      }
      if ( v13 )
        (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v20);
      if ( v18 )
        (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v21);
    }
  }
  else
  {
    return (unsigned int)-1;
  }
  return Cell;
}
