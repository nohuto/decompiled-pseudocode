/*
 * XREFs of ?GetInertiaDecayRate@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18016CC50
 * Callers:
 *     ?StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAJMPEAVCExpressionValueStack@@_K_N@Z @ 0x1801833D0 (-StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAJMPEAVCExpressionValueStack@@_K_N@.c)
 *     ?StartInertiaWorker@CInteractionTrackerScaleAnimation@@MEAAJMPEAVCExpressionValueStack@@_K_N@Z @ 0x180183950 (-StartInertiaWorker@CInteractionTrackerScaleAnimation@@MEAAJMPEAVCExpressionValueStack@@_K_N@Z.c)
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
    return a1[34];
  return result;
}
