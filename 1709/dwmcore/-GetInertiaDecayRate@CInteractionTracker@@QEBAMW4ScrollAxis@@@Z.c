/*
 * XREFs of ?GetInertiaDecayRate@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18016BA54
 * Callers:
 *     ?StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAXMPEAVCExpressionValueStack@@_K_N@Z @ 0x18018A0D0 (-StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAXMPEAVCExpressionValueStack@@_K_N@.c)
 *     ?StartInertiaWorker@CInteractionTrackerScaleAnimation@@MEAAXMPEAVCExpressionValueStack@@_K_N@Z @ 0x18018A620 (-StartInertiaWorker@CInteractionTrackerScaleAnimation@@MEAAXMPEAVCExpressionValueStack@@_K_N@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall CInteractionTracker::GetInertiaDecayRate(float *a1, int a2)
{
  float result; // xmm0_4
  int v3; // edx

  result = 0.0;
  if ( !a2 )
    return a1[25];
  v3 = a2 - 1;
  if ( !v3 )
    return a1[26];
  if ( v3 == 1 )
    return a1[37];
  return result;
}
