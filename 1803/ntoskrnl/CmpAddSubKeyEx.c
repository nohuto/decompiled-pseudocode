/*
 * XREFs of CmpAddSubKeyEx @ 0x140513418
 * Callers:
 *     CmpCreateChild @ 0x140514170 (CmpCreateChild.c)
 *     CmpCommitAddKeyUoW @ 0x1405DF9A8 (CmpCommitAddKeyUoW.c)
 *     CmpPromoteSingleKeyFromKeyNodeStacks @ 0x1406EF510 (CmpPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmRenameKey @ 0x1406F1120 (CmRenameKey.c)
 *     CmpDoBuildVirtualStack @ 0x1406F5048 (CmpDoBuildVirtualStack.c)
 *     CmpCopySyncTree2 @ 0x1406FD2D8 (CmpCopySyncTree2.c)
 *     CmpAddSubKey @ 0x1406FF12C (CmpAddSubKey.c)
 *     CmpCommitRenameKeyUoW @ 0x140703A10 (CmpCommitRenameKeyUoW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     HvpMarkCellDirty @ 0x1404E3EC4 (HvpMarkCellDirty.c)
 *     CmpAddSubKeyToList @ 0x140513844 (CmpAddSubKeyToList.c)
 *     HvFreeCell @ 0x14051584C (HvFreeCell.c)
 *     HvAllocateCell @ 0x140515B84 (HvAllocateCell.c)
 */

char __fastcall CmpAddSubKeyEx(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 (__fastcall *v6)(ULONG_PTR, __int64, _DWORD *); // rax
  unsigned int Cell; // r12d
  __int64 v9; // r15
  __int64 v10; // r13
  _WORD *v11; // rax
  _WORD *v12; // rbx
  __int16 v13; // ax
  char v14; // di
  unsigned int v15; // eax
  int v16; // r14d
  int v18; // eax
  unsigned int v19; // ecx
  int v20; // edx
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
      v13 = *v11;
      v14 = 1;
      if ( v13 != 26220 || v12[1] < 0x1FBu )
      {
        if ( ((v13 - 26732) & 0xFEFF) == 0 && v12[1] >= 0x3F5u )
        {
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *, _QWORD))(BugCheckParameter2 + 16))(BugCheckParameter2, v26, 0LL);
          v25 = 0LL;
          Cell = HvAllocateCell(BugCheckParameter2, 12, v10, (unsigned int)&v25, (__int64)v26);
          if ( Cell == -1 )
          {
            v14 = 0;
            v12 = v25;
LABEL_36:
            v16 = v28;
            goto LABEL_10;
          }
          v12 = v25;
          *v25 = 92530;
          *((_DWORD *)v12 + 1) = *(_DWORD *)(v9 + 4 * v10 + 28);
          *(_DWORD *)(v9 + 4 * v10 + 28) = Cell;
        }
        goto LABEL_7;
      }
      if ( HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(v9 + 4 * v10 + 28), 0) )
      {
        for ( i = 0; i < (unsigned __int16)v12[1]; *(_DWORD *)&v12[2 * v22 + 2] = *(_DWORD *)&v12[4 * v22 + 2] )
          v22 = i++;
        *v12 = 26988;
LABEL_7:
        v15 = *(_DWORD *)(v9 + 4 * v10 + 28);
        Cell = -1;
        goto LABEL_8;
      }
    }
    v14 = 0;
    v16 = 0;
    goto LABEL_10;
  }
  v14 = 1;
  if ( *(_DWORD *)(BugCheckParameter2 + 212) < 5u )
  {
    v20 = 12;
    v24 = 26220;
  }
  else
  {
    v24 = 26732;
    v18 = 1012;
    v19 = 1;
    if ( a4 )
      v19 = a4;
    if ( v19 < 0x3F4 )
      v18 = v19;
    v20 = 8 * v18 + 4;
  }
  v15 = HvAllocateCell(BugCheckParameter2, v20, v10, (unsigned int)&v25, (__int64)v26);
  v12 = v25;
  Cell = v15;
  if ( v15 == -1 )
  {
    v14 = 0;
    v16 = 0;
    goto LABEL_10;
  }
  *(_WORD *)v25 = v24;
  v12[1] = 0;
  v28 = 1;
LABEL_8:
  v23 = v15;
  if ( !(unsigned __int8)CmpAddSubKeyToList(BugCheckParameter2) )
  {
    v14 = 0;
    goto LABEL_36;
  }
  ++*(_DWORD *)(v9 + 4 * v10 + 20);
  *(_DWORD *)(v9 + 4 * v10 + 28) = v23;
  v16 = 0;
LABEL_10:
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v27);
  if ( v12 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v26);
  if ( v16 )
    HvFreeCell(BugCheckParameter2, Cell);
  return v14;
}
