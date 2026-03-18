/*
 * XREFs of CmpRemoveSubKeyCellNoCellRef @ 0x14069B6B0
 * Callers:
 *     CmpCheckRegistry2 @ 0x1404AB5E0 (CmpCheckRegistry2.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     HvFreeCell @ 0x1404778AC (HvFreeCell.c)
 *     HvpMarkCellDirty @ 0x14047D0F4 (HvpMarkCellDirty.c)
 *     CmpFindCellInIndex @ 0x14069A700 (CmpFindCellInIndex.c)
 *     CmpRemoveCellFromIndex @ 0x14069B614 (CmpRemoveCellFromIndex.c)
 */

char __fastcall CmpRemoveSubKeyCellNoCellRef(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, int a3)
{
  char v5; // di
  unsigned int v6; // esi
  _WORD *v7; // r13
  __int64 v8; // r14
  unsigned int v9; // r15d
  _WORD *v10; // rsi
  unsigned int v11; // r15d
  unsigned int *v12; // r12
  _WORD *v13; // rax
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // r12
  unsigned int BugCheckParameter3a; // [rsp+20h] [rbp-30h]
  unsigned int BugCheckParameter3_4; // [rsp+24h] [rbp-2Ch]
  unsigned int v20; // [rsp+28h] [rbp-28h]
  _DWORD v21[2]; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v22[2]; // [rsp+38h] [rbp-18h] BYREF
  _DWORD v23[4]; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int16 v24; // [rsp+90h] [rbp+40h]
  unsigned __int16 CellInIndex; // [rsp+A8h] [rbp+58h]

  v23[1] = 0;
  v23[0] = -1;
  v22[0] = -1;
  v5 = 1;
  v22[1] = 0;
  v21[0] = -1;
  v21[1] = 0;
  v6 = BugCheckParameter3;
  v7 = 0LL;
  v8 = (*(__int64 (__fastcall **)(ULONG_PTR, ULONG_PTR, _DWORD *))(BugCheckParameter2 + 8))(
         BugCheckParameter2,
         BugCheckParameter3,
         v23);
  if ( v8 )
  {
    if ( !HvpMarkCellDirty(BugCheckParameter2, v6, 0) )
    {
      v5 = 0;
LABEL_33:
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v23);
      return v5;
    }
    v9 = *(_DWORD *)(v8 + 28);
    BugCheckParameter3a = v9;
    v10 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                     BugCheckParameter2,
                     v9,
                     v22);
    if ( !v10 )
    {
      v5 = 0;
      goto LABEL_33;
    }
    if ( *v10 == 26994 )
    {
      v11 = 0;
      v20 = (unsigned __int16)v10[1];
      if ( v10[1] )
      {
        v12 = (unsigned int *)(v10 + 2);
        do
        {
          if ( v11 )
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v21);
          BugCheckParameter3_4 = *v12;
          v13 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                           BugCheckParameter2,
                           *v12,
                           v21);
          v7 = v13;
          if ( !v13 )
            goto LABEL_22;
          CellInIndex = CmpFindCellInIndex(v13, a3);
          v24 = v7[1];
          if ( CellInIndex < v24 )
          {
            if ( !HvpMarkCellDirty(BugCheckParameter2, BugCheckParameter3_4, 0)
              || (v9 = BugCheckParameter3a, v24 == 1) && !HvpMarkCellDirty(BugCheckParameter2, BugCheckParameter3a, 0) )
            {
              v5 = 0;
              goto LABEL_29;
            }
            CmpRemoveCellFromIndex(v7, CellInIndex);
            if ( v24 == 1 )
            {
              v14 = CmpFindCellInIndex(v10, BugCheckParameter3_4);
              CmpRemoveCellFromIndex(v10, v14);
              (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v21);
              v7 = 0LL;
              HvFreeCell(BugCheckParameter2, BugCheckParameter3_4);
              goto LABEL_25;
            }
            break;
          }
          ++v11;
          ++v12;
        }
        while ( v11 < v20 );
      }
    }
    else
    {
      v15 = CmpFindCellInIndex(v10, a3);
      if ( !HvpMarkCellDirty(BugCheckParameter2, v9, 0) )
      {
LABEL_22:
        v5 = 0;
LABEL_31:
        if ( v10 )
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v22);
        goto LABEL_33;
      }
      CmpRemoveCellFromIndex(v10, v15);
LABEL_25:
      if ( !v10[1] )
      {
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v22);
        v10 = 0LL;
        HvFreeCell(BugCheckParameter2, v9);
      }
    }
    if ( (*(_DWORD *)(v8 + 20))-- == 1 )
    {
      *(_DWORD *)(v8 + 28) = -1;
      *(_WORD *)(v8 + 52) = 0;
      *(_DWORD *)(v8 + 56) = 0;
    }
LABEL_29:
    if ( v7 )
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v21);
    goto LABEL_31;
  }
  return 0;
}
