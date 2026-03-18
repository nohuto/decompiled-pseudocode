/*
 * XREFs of ?PrepareForCalculation@CInteractionTrackerScaleAnimation@@MEAAXPEA_N@Z @ 0x1801838A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CInteractionTrackerScaleAnimation::PrepareForCalculation(LARGE_INTEGER *this, bool *a2)
{
  QueryPerformanceCounter(this + 70);
  CScrollAnimation::PrepareForCalculation((CScrollAnimation *)this, a2);
}
