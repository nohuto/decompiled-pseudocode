/*
 * XREFs of CmpRemoveSubKeyCellNoCellRef @ 0x140670B9C
 * Callers:
 *     CmpCheckRegistry2 @ 0x140505E80 (CmpCheckRegistry2.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     HvFreeCell @ 0x14048C8DC (HvFreeCell.c)
 *     HvpMarkCellDirty @ 0x14051559C (HvpMarkCellDirty.c)
 *     CmpFindCellInIndex @ 0x140670030 (CmpFindCellInIndex.c)
 *     CmpRemoveCellFromIndex @ 0x140670B00 (CmpRemoveCellFromIndex.c)
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
  __int16 v14; // r15
  unsigned __int16 v15; // ax
  ULONG_PTR v16; // rdx
  unsigned __int16 v17; // r12
  unsigned int BugCheckParameter3a; // [rsp+20h] [rbp-20h]
  unsigned int BugCheckParameter3_4; // [rsp+24h] [rbp-1Ch]
  _DWORD v22[2]; // [rsp+28h] [rbp-18h] BYREF
  _DWORD v23[2]; // [rsp+30h] [rbp-10h] BYREF
  _DWORD v24[2]; // [rsp+38h] [rbp-8h] BYREF
  unsigned __int16 CellInIndex; // [rsp+80h] [rbp+40h]
  unsigned int v27; // [rsp+98h] [rbp+58h]

  v24[1] = 0;
  v24[0] = -1;
  v23[0] = -1;
  v5 = 1;
  v23[1] = 0;
  v22[0] = -1;
  v22[1] = 0;
  v6 = BugCheckParameter3;
  v7 = 0LL;
  v8 = (*(__int64 (__fastcall **)(ULONG_PTR, ULONG_PTR, _DWORD *))(BugCheckParameter2 + 8))(
         BugCheckParameter2,
         BugCheckParameter3,
         v24);
  if ( v8 )
  {
    if ( !HvpMarkCellDirty(BugCheckParameter2, v6, 0) )
    {
      v5 = 0;
LABEL_34:
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v24);
      return v5;
    }
    v9 = *(_DWORD *)(v8 + 28);
    v27 = v9;
    v10 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                     BugCheckParameter2,
                     v9,
                     v23);
    if ( !v10 )
    {
      v5 = 0;
      goto LABEL_34;
    }
    if ( *v10 == 26994 )
    {
      v11 = 0;
      BugCheckParameter3_4 = (unsigned __int16)v10[1];
      if ( v10[1] )
      {
        v12 = (unsigned int *)(v10 + 2);
        do
        {
          if ( v11 )
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v22);
          BugCheckParameter3a = *v12;
          v13 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                           BugCheckParameter2,
                           *v12,
                           v22);
          v7 = v13;
          if ( !v13 )
            goto LABEL_23;
          CellInIndex = CmpFindCellInIndex(v13, a3);
          if ( CellInIndex < v7[1] )
          {
            v14 = v7[1];
            if ( !HvpMarkCellDirty(BugCheckParameter2, BugCheckParameter3a, 0)
              || v14 == 1 && !HvpMarkCellDirty(BugCheckParameter2, v27, 0) )
            {
              v5 = 0;
              goto LABEL_30;
            }
            CmpRemoveCellFromIndex(v7, CellInIndex);
            if ( v14 == 1 )
            {
              v15 = CmpFindCellInIndex(v10, BugCheckParameter3a);
              CmpRemoveCellFromIndex(v10, v15);
              (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v22);
              v7 = 0LL;
              HvFreeCell(BugCheckParameter2, BugCheckParameter3a);
              if ( !v10[1] )
              {
                (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v23);
                v16 = v27;
                goto LABEL_27;
              }
            }
            break;
          }
          ++v11;
          ++v12;
        }
        while ( v11 < BugCheckParameter3_4 );
      }
    }
    else
    {
      v17 = CmpFindCellInIndex(v10, a3);
      if ( !HvpMarkCellDirty(BugCheckParameter2, v9, 0) )
      {
LABEL_23:
        v5 = 0;
LABEL_32:
        if ( v10 )
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v23);
        goto LABEL_34;
      }
      CmpRemoveCellFromIndex(v10, v17);
      if ( !v10[1] )
      {
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v23);
        v16 = v9;
LABEL_27:
        v10 = 0LL;
        HvFreeCell(BugCheckParameter2, v16);
      }
    }
    if ( (*(_DWORD *)(v8 + 20))-- == 1 )
    {
      *(_DWORD *)(v8 + 28) = -1;
      *(_WORD *)(v8 + 52) = 0;
      *(_DWORD *)(v8 + 56) = 0;
    }
LABEL_30:
    if ( v7 )
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v22);
    goto LABEL_32;
  }
  return 0;
}
