/*
 * XREFs of CmpAddSubKeyEx @ 0x140473D00
 * Callers:
 *     CmpCreateChild @ 0x140475B90 (CmpCreateChild.c)
 *     CmpCommitAddKeyUoW @ 0x1405A590C (CmpCommitAddKeyUoW.c)
 *     CmpCopySyncTree2 @ 0x1405A5E80 (CmpCopySyncTree2.c)
 *     CmpPromoteSingleKeyFromKeyNodeStacks @ 0x14068B0D4 (CmpPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmRenameKey @ 0x14068CE58 (CmRenameKey.c)
 *     CmpDoBuildVirtualStack @ 0x140691818 (CmpDoBuildVirtualStack.c)
 *     CmpAddSubKey @ 0x14069A550 (CmpAddSubKey.c)
 *     CmpCommitRenameKeyUoW @ 0x14069E7D0 (CmpCommitRenameKeyUoW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     CmpAddSubKeyToList @ 0x140473EEC (CmpAddSubKeyToList.c)
 *     HvFreeCell @ 0x1404778AC (HvFreeCell.c)
 *     HvAllocateCell @ 0x140479BF4 (HvAllocateCell.c)
 *     HvpMarkCellDirty @ 0x14047D0F4 (HvpMarkCellDirty.c)
 */

char __fastcall CmpAddSubKeyEx(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 (__fastcall *v6)(ULONG_PTR, __int64, _DWORD *); // rax
  unsigned int Cell; // r12d
  __int64 v9; // r15
  __int64 v10; // r13
  _WORD *v11; // rax
  _WORD *v12; // rbx
  char v13; // di
  int v14; // r14d
  int v16; // eax
  unsigned int v17; // ecx
  int v18; // edx
  unsigned int v19; // eax
  unsigned int i; // edx
  __int64 v22; // rcx
  unsigned int v23; // [rsp+30h] [rbp-20h]
  __int16 v24; // [rsp+30h] [rbp-20h]
  _DWORD *v25; // [rsp+38h] [rbp-18h] BYREF
  _DWORD v26[2]; // [rsp+40h] [rbp-10h] BYREF
  _DWORD v27[2]; // [rsp+48h] [rbp-8h] BYREF
  int v28; // [rsp+90h] [rbp+40h]

  v27[1] = 0;
  v27[0] = -1;
  v26[0] = -1;
  v26[1] = 0;
  v6 = *(__int64 (__fastcall **)(ULONG_PTR, __int64, _DWORD *))(BugCheckParameter2 + 8);
  Cell = -1;
  v25 = 0LL;
  v28 = 0;
  v9 = v6(BugCheckParameter2, a2, v27);
  if ( !v9 )
    return 0;
  v10 = a3 >> 31;
  if ( *(_DWORD *)(v9 + 4 * v10 + 20) )
  {
    v11 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                     BugCheckParameter2,
                     *(unsigned int *)(v9 + 4 * v10 + 28),
                     v26);
    v12 = v11;
    if ( v11 )
    {
      v13 = 1;
      if ( *v11 != 26220 || v11[1] < 0x1FBu )
      {
        if ( ((*v11 - 26732) & 0xFEFF) == 0 && v11[1] >= 0x3F5u )
        {
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *, _QWORD))(BugCheckParameter2 + 16))(BugCheckParameter2, v26, 0LL);
          v25 = 0LL;
          Cell = HvAllocateCell(BugCheckParameter2, 12, v10, (unsigned int)&v25, (__int64)v26);
          if ( Cell == -1 )
          {
            v13 = 0;
            v12 = v25;
LABEL_36:
            v14 = v28;
            goto LABEL_10;
          }
          v12 = v25;
          *v25 = 92530;
          *((_DWORD *)v12 + 1) = *(_DWORD *)(v9 + 4 * v10 + 28);
          *(_DWORD *)(v9 + 4 * v10 + 28) = Cell;
        }
        goto LABEL_7;
      }
      if ( (unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(v9 + 4 * v10 + 28)) )
      {
        for ( i = 0; i < (unsigned __int16)v12[1]; *(_DWORD *)&v12[2 * v22 + 2] = *(_DWORD *)&v12[4 * v22 + 2] )
          v22 = i++;
        *v12 = 26988;
LABEL_7:
        Cell = -1;
        v23 = *(_DWORD *)(v9 + 4 * v10 + 28);
        goto LABEL_8;
      }
    }
    v13 = 0;
    v14 = 0;
    goto LABEL_10;
  }
  v13 = 1;
  if ( *(_DWORD *)(BugCheckParameter2 + 196) < 5u )
  {
    v18 = 12;
    v24 = 26220;
  }
  else
  {
    v24 = 26732;
    v16 = 1012;
    v17 = 1;
    if ( a4 )
      v17 = a4;
    if ( v17 < 0x3F4 )
      v16 = v17;
    v18 = 8 * v16 + 4;
  }
  v19 = HvAllocateCell(BugCheckParameter2, v18, v10, (unsigned int)&v25, (__int64)v26);
  v12 = v25;
  Cell = v19;
  if ( v19 == -1 )
  {
    v13 = 0;
    v14 = 0;
    goto LABEL_10;
  }
  *(_WORD *)v25 = v24;
  v12[1] = 0;
  v28 = 1;
  v23 = v19;
LABEL_8:
  if ( !(unsigned __int8)CmpAddSubKeyToList(BugCheckParameter2) )
  {
    v13 = 0;
    goto LABEL_36;
  }
  ++*(_DWORD *)(v9 + 4 * v10 + 20);
  *(_DWORD *)(v9 + 4 * v10 + 28) = v23;
  v14 = 0;
LABEL_10:
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v27);
  if ( v12 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v26);
  if ( v14 )
    HvFreeCell(BugCheckParameter2, Cell);
  return v13;
}
