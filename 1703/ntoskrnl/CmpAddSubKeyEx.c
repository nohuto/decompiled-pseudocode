/*
 * XREFs of CmpAddSubKeyEx @ 0x1404D2220
 * Callers:
 *     CmpCreateChild @ 0x1404D0388 (CmpCreateChild.c)
 *     CmpCommitAddKeyUoW @ 0x140571D00 (CmpCommitAddKeyUoW.c)
 *     CmpCopySyncTree2 @ 0x14058D990 (CmpCopySyncTree2.c)
 *     CmpPromoteSingleKeyFromKeyNodeStacks @ 0x140661DD4 (CmpPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmRenameKey @ 0x140663778 (CmRenameKey.c)
 *     CmpDoBuildVirtualStack @ 0x1406672F8 (CmpDoBuildVirtualStack.c)
 *     CmpAddSubKey @ 0x14066FE88 (CmpAddSubKey.c)
 *     CmpCommitRenameKeyUoW @ 0x140673838 (CmpCommitRenameKeyUoW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     HvFreeCell @ 0x14048C8DC (HvFreeCell.c)
 *     HvAllocateCell @ 0x14048CDA0 (HvAllocateCell.c)
 *     CmpAddSubKeyToList @ 0x1404D2404 (CmpAddSubKeyToList.c)
 *     HvpMarkCellDirty @ 0x14051559C (HvpMarkCellDirty.c)
 */

char __fastcall CmpAddSubKeyEx(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 (__fastcall *v6)(ULONG_PTR, __int64, _DWORD *); // rax
  unsigned int v7; // r12d
  int v9; // r13d
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // rdx
  __int64 v13; // r14
  _WORD *v14; // rax
  _WORD *v15; // rbx
  __int16 v16; // ax
  char v17; // di
  unsigned int v18; // eax
  unsigned int v20; // eax
  int v21; // ecx
  int v22; // eax
  __int16 v23; // r13
  unsigned int i; // edx
  __int64 v26; // rcx
  unsigned int Cell; // eax
  unsigned int v28; // [rsp+30h] [rbp-20h]
  unsigned int v29; // [rsp+30h] [rbp-20h]
  _DWORD *v30; // [rsp+38h] [rbp-18h] BYREF
  _DWORD v31[2]; // [rsp+40h] [rbp-10h] BYREF
  _DWORD v32[2]; // [rsp+48h] [rbp-8h] BYREF
  int v33; // [rsp+90h] [rbp+40h]

  v32[1] = 0;
  v32[0] = -1;
  v31[0] = -1;
  v31[1] = 0;
  v6 = *(__int64 (__fastcall **)(ULONG_PTR, __int64, _DWORD *))(BugCheckParameter2 + 8);
  v7 = -1;
  v30 = 0LL;
  v33 = 0;
  v9 = 0;
  v10 = v6(BugCheckParameter2, a2, v32);
  v11 = v10;
  if ( !v10 )
    return 0;
  v12 = a3 >> 31;
  v28 = a3 >> 31;
  v13 = v12;
  if ( *(_DWORD *)(v10 + 4 * v12 + 20) )
  {
    v14 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                     BugCheckParameter2,
                     *(unsigned int *)(v10 + 4 * v12 + 28),
                     v31);
    v15 = v14;
    if ( v14 )
    {
      v16 = *v14;
      v17 = 1;
      if ( v16 != 26220 || v15[1] < 0x1FBu )
      {
        if ( ((v16 - 26732) & 0xFEFF) != 0 || v15[1] < 0x3F5u )
        {
          v9 = 0;
        }
        else
        {
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *, _QWORD))(BugCheckParameter2 + 16))(BugCheckParameter2, v31, 0LL);
          v9 = 0;
          v30 = 0LL;
          Cell = HvAllocateCell(BugCheckParameter2, 12, v28, (__int64)&v30, (__int64)v31);
          v15 = v30;
          v7 = Cell;
          if ( Cell == -1 )
          {
            v17 = 0;
            goto LABEL_11;
          }
          *v30 = 92530;
          *((_DWORD *)v15 + 1) = *(_DWORD *)(v11 + 4 * v13 + 28);
          *(_DWORD *)(v11 + 4 * v13 + 28) = Cell;
        }
LABEL_8:
        v18 = *(_DWORD *)(v11 + 4 * v13 + 28);
        v7 = -1;
        goto LABEL_9;
      }
      if ( (unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(v11 + 4 * v13 + 28)) )
      {
        for ( i = 0; i < (unsigned __int16)v15[1]; *(_DWORD *)&v15[2 * v26 + 2] = *(_DWORD *)&v15[4 * v26 + 2] )
          v26 = i++;
        *v15 = 26988;
        goto LABEL_8;
      }
    }
    v17 = 0;
  }
  else
  {
    v17 = 1;
    if ( *(_DWORD *)(BugCheckParameter2 + 196) < 5u )
    {
      v22 = 12;
      v23 = 26220;
    }
    else
    {
      v20 = 1;
      v21 = 1012;
      if ( a4 )
        v20 = a4;
      if ( v20 < 0x3F4 )
        v21 = v20;
      v22 = 8 * v21 + 4;
      v23 = 26732;
    }
    v18 = HvAllocateCell(BugCheckParameter2, v22, (unsigned int)v12, (__int64)&v30, (__int64)v31);
    v15 = v30;
    v7 = v18;
    if ( v18 != -1 )
    {
      *(_WORD *)v30 = v23;
      v9 = 0;
      v15[1] = 0;
      v33 = 1;
LABEL_9:
      v29 = v18;
      if ( (unsigned __int8)CmpAddSubKeyToList(BugCheckParameter2) )
      {
        ++*(_DWORD *)(v11 + 4 * v13 + 20);
        *(_DWORD *)(v11 + 4 * v13 + 28) = v29;
      }
      else
      {
        v17 = 0;
        v9 = v33;
      }
      goto LABEL_11;
    }
    v17 = 0;
    v9 = 0;
  }
LABEL_11:
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v32);
  if ( v15 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v31);
  if ( v9 )
    HvFreeCell(BugCheckParameter2, v7);
  return v17;
}
