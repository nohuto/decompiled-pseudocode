/*
 * XREFs of ?VidMmSetMemoryBudgetTarget@@YAXPEAVVIDMM_GLOBAL@@KK@Z @ 0x1C0023000
 * Callers:
 *     <none>
 * Callees:
 *     ?SetMemoryBudgetTarget@VIDMM_GLOBAL@@QEAAXKK@Z @ 0x1C00A37EC (-SetMemoryBudgetTarget@VIDMM_GLOBAL@@QEAAXKK@Z.c)
 */

void __fastcall VidMmSetMemoryBudgetTarget(struct VIDMM_GLOBAL *a1, unsigned int a2, unsigned int a3)
{
  VIDMM_GLOBAL::SetMemoryBudgetTarget(a1, a2, a3);
}
