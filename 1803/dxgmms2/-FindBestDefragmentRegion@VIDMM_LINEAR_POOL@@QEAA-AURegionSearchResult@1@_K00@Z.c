/*
 * XREFs of ?FindBestDefragmentRegion@VIDMM_LINEAR_POOL@@QEAA?AURegionSearchResult@1@_K00@Z @ 0x1C00BA880
 * Callers:
 *     ?MoveResourcesForAllocationPlacement@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_ALLOC@@_K1W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B30BC (-MoveResourcesForAllocationPlacement@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_ALLOC@@_K1W4VIDMM_DEFRAGMENT_.c)
 * Callees:
 *     memset @ 0x1C0017DC0 (memset.c)
 */

_QWORD *__fastcall VIDMM_LINEAR_POOL::FindBestDefragmentRegion(
        __int64 a1,
        _QWORD *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  _QWORD *v5; // rdi
  _QWORD **v7; // rbx
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // rdx
  char v10; // r14
  _QWORD *v11; // r11
  _QWORD *v12; // r9
  _QWORD *v13; // r8
  unsigned __int64 v14; // r12
  _QWORD **v15; // r15
  _QWORD *v16; // rdi
  _QWORD *v17; // rsi
  unsigned __int64 v18; // rbp
  __int64 v19; // r13
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rbp
  __int64 v22; // rax
  char v23; // cl
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rcx
  _QWORD *v26; // rax
  unsigned __int64 v27; // rax
  unsigned __int64 v29; // [rsp+80h] [rbp+8h]

  v5 = a2;
  memset(a2, 0, 0x20uLL);
  v7 = (_QWORD **)(a1 + 72);
  v29 = -1LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0;
  v11 = 0LL;
  v12 = 0LL;
  v13 = *v7;
  v14 = 0LL;
  v15 = (_QWORD **)*v7;
  if ( *v7 == v7 )
    return v5;
  v16 = 0LL;
  while ( 1 )
  {
    v17 = v13 - 5;
    v18 = v9;
    v19 = *(v13 - 4);
    v20 = *(v13 - 5);
    if ( v20 + v19 > a3 )
      break;
LABEL_27:
    if ( v13 == v7 )
      goto LABEL_28;
  }
  if ( v20 >= a4 )
    goto LABEL_28;
  if ( *((_BYTE *)v17 + 56) != 2 )
  {
    v9 -= v19;
    if ( !v10 )
      v9 = v18;
LABEL_26:
    v13 = (_QWORD *)*v13;
    goto LABEL_27;
  }
  if ( !v10 )
  {
    v15 = (_QWORD **)*v13;
    v10 = 1;
  }
  if ( v15 != v7 )
  {
    while ( 1 )
    {
      v21 = v8;
      if ( v8 >= a5 )
        break;
      v16 = v15 - 5;
      v22 = (__int64)*(v15 - 4);
      v23 = *((_BYTE *)v15 + 16);
      v8 += v22;
      if ( v23 != 2 )
        v8 = v21;
      v24 = v9 + v22;
      if ( v23 != 2 )
        v9 = v24;
    }
  }
  v25 = v8;
  if ( v8 >= a5 )
  {
    v8 -= v19;
    v26 = v16;
    if ( v9 >= v29 )
    {
      v26 = v12;
      v17 = v11;
    }
    v12 = v26;
    if ( v9 >= v29 )
      v25 = v14;
    v27 = v9;
    v11 = v17;
    if ( v9 >= v29 )
      v27 = v29;
    v14 = v25;
    v29 = v27;
    goto LABEL_26;
  }
LABEL_28:
  v5 = a2;
  if ( v11 && v12 )
  {
    *a2 = *v11;
    a2[1] = *v12 + v12[1];
    a2[2] = v14;
    *((_BYTE *)a2 + 24) = 1;
  }
  return v5;
}
