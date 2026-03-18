/*
 * XREFs of ?UnpinAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C00A42AC
 * Callers:
 *     VidMmUnpinAllocation @ 0x1C0023610 (VidMmUnpinAllocation.c)
 * Callees:
 *     ?UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z @ 0x1C0079D04 (-UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::UnpinAllocation(struct VIDMM_ALLOC **this, struct _VIDMM_MULTI_ALLOC *a2)
{
  VIDMM_GLOBAL::UnpinOneAllocation(this, (__int64)a2, 3LL, 0);
}
