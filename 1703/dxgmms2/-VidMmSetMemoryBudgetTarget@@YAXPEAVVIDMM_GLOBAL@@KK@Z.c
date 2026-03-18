/*
 * XREFs of ?VidMmSetMemoryBudgetTarget@@YAXPEAVVIDMM_GLOBAL@@KK@Z @ 0x1C001EB60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall VidMmSetMemoryBudgetTarget(struct VIDMM_GLOBAL *a1, unsigned int a2, unsigned int a3)
{
  VIDMM_GLOBAL::SetMemoryBudgetTarget(a1, a2, a3);
}
