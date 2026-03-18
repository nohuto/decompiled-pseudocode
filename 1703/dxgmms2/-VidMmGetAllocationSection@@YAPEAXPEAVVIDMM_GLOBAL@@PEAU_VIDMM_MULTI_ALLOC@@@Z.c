/*
 * XREFs of ?VidMmGetAllocationSection@@YAPEAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C001EA10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__fastcall VidMmGetAllocationSection(struct VIDMM_GLOBAL *a1, struct _VIDMM_MULTI_ALLOC *a2)
{
  return VIDMM_GLOBAL::GetAllocationSection(a1, a2);
}
