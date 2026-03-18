/*
 * XREFs of ?InvalidateAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C00748CC
 * Callers:
 *     VidMmInvalidateAllocation @ 0x1C0013EA0 (VidMmInvalidateAllocation.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall VIDMM_GLOBAL::InvalidateAllocation(VIDMM_GLOBAL *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  VIDMM_GLOBAL::InvalidateOneAllocation(this, a2);
}
