/*
 * XREFs of VidMmQueryAllocationSizeInSystemMemory @ 0x1C0013150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned __int64 __fastcall VidMmQueryAllocationSizeInSystemMemory(VIDMM_GLOBAL *a1, struct _VIDMM_MULTI_ALLOC *a2)
{
  return VIDMM_GLOBAL::QueryAllocationSizeInSystemMemory(a1, a2);
}
