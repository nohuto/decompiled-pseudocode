/*
 * XREFs of ?PrepareForCalculation@CInteractionTrackerScaleAnimation@@MEAAXPEA_N@Z @ 0x1801BFC20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CInteractionTrackerScaleAnimation::PrepareForCalculation(LARGE_INTEGER *this, bool *a2)
{
  QueryPerformanceCounter(this + 73);
  CScrollAnimation::PrepareForCalculation((CScrollAnimation *)this, a2);
}
