/*
 * XREFs of ?VidMmUpdateContextAllocationCb@@YAJPEAVVIDMM_GLOBAL@@PEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@@Z @ 0x1C0023100
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x1C00A5D4C (-VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z.c)
 */

__int64 __fastcall VidMmUpdateContextAllocationCb(
        struct VIDMM_GLOBAL *a1,
        const struct _DXGKARGCB_UPDATECONTEXTALLOCATION *a2)
{
  return VIDMM_GLOBAL::VidMmUpdateContextAllocationCb(a1, a2, 0);
}
