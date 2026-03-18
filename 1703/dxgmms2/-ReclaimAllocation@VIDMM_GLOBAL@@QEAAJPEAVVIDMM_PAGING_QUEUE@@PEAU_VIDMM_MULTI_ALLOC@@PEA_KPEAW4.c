/*
 * XREFs of ?ReclaimAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C0062CC4
 * Callers:
 *     ?VidMmReclaimAllocation@@YAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C00122B0 (-VidMmReclaimAllocation@@YAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PE.c)
 * Callees:
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C005E460 (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ReclaimAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        __int64 **a3,
        unsigned __int64 *a4,
        enum _D3DDDI_RECLAIM_RESULT *a5)
{
  int v5; // r10d
  int v7; // r8d

  v5 = dword_1C003C3CC;
  if ( dword_1C003C3CC == -1 )
    v5 = *((_DWORD *)this + 8) >= 0x5022u ? 2 : 0;
  if ( a5 )
  {
    v7 = *((_DWORD *)this + 1616);
    if ( (v7 & 0x10000) != 0 && (*(_DWORD *)(**a3 + 92) & 2) != 0 )
      *a5 = D3DDDI_RECLAIM_RESULT_NOT_COMMITTED;
    else
      *a5 = ((unsigned __int8)v7 >> 3) & 1;
  }
  if ( !v5 )
    return 0LL;
  if ( v5 == 2 && a2 )
    return VIDMM_GLOBAL::ReclaimOneAllocation(this, a2, a3, a4, a5);
  return 3221225473LL;
}
