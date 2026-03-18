/*
 * XREFs of ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1C00660F4
 * Callers:
 *     ?VidMmMakeResident@@YAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@IKPEA_K3@Z @ 0x1C0012FC0 (-VidMmMakeResident@@YAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@IKPE.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00622B0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C00677E0 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 * Callees:
 *     VidSchiMarkDeviceAsError @ 0x1C000F4C8 (VidSchiMarkDeviceAsError.c)
 *     ?ReferenceAllocationList@VIDMM_DEVICE@@QEAAJPEAPEAUVIDMM_ALLOC@@_K_NPEA_K@Z @ 0x1C0051EA0 (-ReferenceAllocationList@VIDMM_DEVICE@@QEAAJPEAPEAUVIDMM_ALLOC@@_K_NPEA_K@Z.c)
 *     ?CommitAllocationList@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_ALLOC@@_KPEA_K@Z @ 0x1C0059BF8 (-CommitAllocationList@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_ALLOC@@_KPEA_K@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::MakeResident(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        struct _VIDMM_MULTI_ALLOC **a3,
        __int64 a4,
        char a5,
        unsigned __int64 *a6,
        unsigned __int64 *a7)
{
  __int64 *v11; // rbx

  *a6 = 0LL;
  *a7 = 0LL;
  v11 = (__int64 *)*((_QWORD *)a2 + 17);
  if ( (unsigned int)VIDMM_DEVICE::ReferenceAllocationList((VIDMM_DEVICE *)v11, a3, a4, a5 & 1, a7) != -1073741801 )
    return VIDMM_GLOBAL::CommitAllocationList(this, a2, a3, a4, a6);
  if ( (a5 & 2) != 0 )
    VidSchiMarkDeviceAsError(v11[4], 12);
  return 3221225495LL;
}
