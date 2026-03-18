/*
 * XREFs of ?VidMmMakeResident@@YAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@IKPEA_K3@Z @ 0x1C00120E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidMmMakeResident(
        struct VIDMM_GLOBAL *a1,
        struct VIDMM_PAGING_QUEUE *a2,
        struct _VIDMM_MULTI_ALLOC **a3,
        unsigned int a4,
        char a5,
        unsigned __int64 *a6,
        unsigned __int64 *a7)
{
  return VIDMM_GLOBAL::MakeResident(a1, a2, a3, a4, a5, a6, a7);
}
