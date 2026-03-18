/*
 * XREFs of ?VidMmGetMemoryBudgetTarget@@YAXPEAVVIDMM_GLOBAL@@PEAK1@Z @ 0x1C001EA20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall VidMmGetMemoryBudgetTarget(struct VIDMM_GLOBAL *a1, unsigned int *a2, unsigned int *a3)
{
  VIDMM_GLOBAL::GetMemoryBudgetTarget(a1, a2, a3);
}
