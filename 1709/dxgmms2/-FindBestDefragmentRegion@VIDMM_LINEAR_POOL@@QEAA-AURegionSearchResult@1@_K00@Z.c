/*
 * XREFs of ?FindBestDefragmentRegion@VIDMM_LINEAR_POOL@@QEAA?AURegionSearchResult@1@_K00@Z @ 0x1C00B1F14
 * Callers:
 *     ?MoveResourcesForAllocationPlacement@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_ALLOC@@_K1W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00AAE3C (-MoveResourcesForAllocationPlacement@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_ALLOC@@_K1W4VIDMM_DEFRAGMENT_.c)
 * Callees:
 *     memset @ 0x1C0018400 (memset.c)
 */

_QWORD *__fastcall VIDMM_LINEAR_POOL::FindBestDefragmentRegion(
        __int64 a1,
        _QWORD *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  _QWORD *v5; // rdi
  _QWORD *v7; // r15
  _QWORD *v8; // r10
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  _QWORD *v11; // r11
  _QWORD *v12; // r9
  unsigned __int64 v13; // r12
  _QWORD *v14; // r8
  _QWORD *v15; // rbp
  char v16; // di
  __int64 v17; // r13
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rbx
  unsigned __int64 v21; // [rsp+20h] [rbp-58h]

  v5 = a2;
  memset(a2, 0, 0x20uLL);
  v21 = -1LL;
  v7 = (_QWORD *)(a1 + 72);
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = (_QWORD *)*v7;
  v15 = (_QWORD *)*v7;
  if ( (_QWORD *)*v7 != v7 )
  {
    v16 = 0;
    do
    {
      v17 = *(v14 - 4);
      v18 = v10;
      v19 = *(v14 - 5);
      if ( v19 + v17 > a3 )
      {
        if ( v19 >= a4 )
          break;
        if ( *((_BYTE *)v14 + 16) == 2 )
        {
          if ( !v16 )
          {
            v15 = (_QWORD *)*v14;
            v16 = 1;
          }
          if ( v15 == v7 )
          {
            if ( v9 < a5 )
              break;
          }
          else
          {
            while ( v9 < a5 )
            {
              v8 = v15 - 5;
              if ( *((_BYTE *)v15 + 16) == 2 )
                v9 += v8[1];
              else
                v10 += v8[1];
            }
          }
          if ( v10 < v21 )
          {
            v11 = v14 - 5;
            v21 = v10;
            v12 = v8;
            v13 = v9;
          }
          v9 -= v17;
        }
        else
        {
          v10 -= v17;
          if ( !v16 )
            v10 = v18;
        }
        v14 = (_QWORD *)*v14;
      }
    }
    while ( v14 != v7 );
    v5 = a2;
    if ( v11 && v12 )
    {
      *a2 = *v11;
      a2[1] = *v12 + v12[1];
      a2[2] = v13;
      *((_BYTE *)a2 + 24) = 1;
    }
  }
  return v5;
}
