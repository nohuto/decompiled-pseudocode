/*
 * XREFs of CmpFindSubKeyInRoot @ 0x14047FAD0
 * Callers:
 *     CmpMarkIndexDirty @ 0x140472FC8 (CmpMarkIndexDirty.c)
 *     CmpRemoveSubKeyFromList @ 0x140473308 (CmpRemoveSubKeyFromList.c)
 *     CmpWalkOneLevel @ 0x140480060 (CmpWalkOneLevel.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1405BC634 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpSelectLeaf @ 0x1405E819C (CmpSelectLeaf.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     CmpCompareInIndex @ 0x140481810 (CmpCompareInIndex.c)
 */

__int64 __fastcall CmpFindSubKeyInRoot(__int64 a1, __int64 a2, int a3, unsigned int *a4)
{
  unsigned int v4; // ebp
  unsigned int v5; // r14d
  __int64 v9; // rbx
  unsigned int v10; // r12d
  __int64 v11; // rax
  int v12; // esi
  int v13; // eax
  int v14; // eax
  void (__fastcall *v15)(__int64, int *); // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  int v18; // esi
  int v19; // eax
  int v20; // eax
  unsigned int v22; // ebx
  __int64 v23; // rax
  int v24; // eax
  int v25; // [rsp+70h] [rbp+8h] BYREF
  int v26; // [rsp+74h] [rbp+Ch]
  __int64 v27; // [rsp+78h] [rbp+10h]

  v27 = a2;
  v4 = *(unsigned __int16 *)(a2 + 2) - 1;
  v25 = -1;
  v5 = 0;
  v26 = 0;
  while ( 1 )
  {
    v9 = v5 + ((v4 - v5) >> 1);
    v10 = *(_DWORD *)(a2 + 4 * v9 + 4);
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, v10, &v25);
    v12 = v11;
    if ( !v11 )
      goto LABEL_27;
    v13 = CmpCompareInIndex(a1, a3, (unsigned int)*(unsigned __int16 *)(v11 + 2) - 1, v11, (__int64)a4);
    if ( v13 == 2 )
      goto LABEL_28;
    if ( !v13 )
      goto LABEL_17;
    if ( v13 >= 0 )
    {
      v5 += (v4 - v5) >> 1;
    }
    else
    {
      v14 = CmpCompareInIndex(a1, a3, 0, v12, (__int64)a4);
      if ( v14 == 2 )
        goto LABEL_28;
      if ( v14 >= 0 )
        goto LABEL_17;
      v4 = v5 + ((v4 - v5) >> 1);
    }
    v15 = *(void (__fastcall **)(__int64, int *))(a1 + 16);
    if ( v4 - v5 <= 1 )
      break;
    v15(a1, &v25);
    a2 = v27;
  }
  v15(a1, &v25);
  v16 = v27;
  v10 = *(_DWORD *)(v27 + 4LL * v5 + 4);
  v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, v10, &v25);
  v18 = v17;
  if ( v17 )
  {
    v19 = CmpCompareInIndex(a1, a3, (unsigned int)*(unsigned __int16 *)(v17 + 2) - 1, v17, (__int64)a4);
    if ( v19 == 2 )
      goto LABEL_28;
    if ( !v19 )
    {
      *a4 = v10;
      LODWORD(v9) = v5;
      goto LABEL_18;
    }
    if ( v19 < 0 )
    {
      v20 = CmpCompareInIndex(a1, a3, 0, v18, (__int64)a4);
      if ( v20 != 2 )
      {
        LODWORD(v9) = v5;
        if ( v20 >= 0 )
        {
LABEL_17:
          *a4 = v10;
LABEL_18:
          (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v25);
          return (unsigned int)v9;
        }
        goto LABEL_25;
      }
      goto LABEL_28;
    }
    (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v25);
    v22 = *(_DWORD *)(v16 + 4LL * v4 + 4);
    v23 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, v22, &v25);
    if ( v23 )
    {
      v24 = CmpCompareInIndex(a1, a3, (unsigned int)*(unsigned __int16 *)(v23 + 2) - 1, v23, (__int64)a4);
      if ( v24 != 2 )
      {
        if ( v24 <= 0 )
        {
          *a4 = v22;
          LODWORD(v9) = v4;
          goto LABEL_18;
        }
        LODWORD(v9) = v4;
LABEL_25:
        *a4 = -1;
        goto LABEL_18;
      }
LABEL_28:
      LODWORD(v9) = 0x80000000;
      goto LABEL_25;
    }
  }
LABEL_27:
  *a4 = -1;
  return 0x80000000LL;
}
