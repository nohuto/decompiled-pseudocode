/*
 * XREFs of ?GetBoundedEndpoint@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18016CB30
 * Callers:
 *     ?StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAJMPEAVCExpressionValueStack@@_K_N@Z @ 0x1801833D0 (-StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAJMPEAVCExpressionValueStack@@_K_N@.c)
 * Callees:
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@AEBA_NXZ @ 0x18016C43C (-AreInteractionAnimationsAlive@CInteractionTracker@@AEBA_NXZ.c)
 *     ?GetBoundedEndpoint@CScrollAnimation@@QEBAMXZ @ 0x1801818C8 (-GetBoundedEndpoint@CScrollAnimation@@QEBAMXZ.c)
 */

float __fastcall CInteractionTracker::GetBoundedEndpoint(CInteractionTracker *a1)
{
  float result; // xmm0_4
  __int64 v2; // rcx

  result = 0.0;
  if ( CInteractionTracker::AreInteractionAnimationsAlive(a1) )
    return CScrollAnimation::GetBoundedEndpoint(*(CScrollAnimation **)(v2 + 368));
  return result;
}
