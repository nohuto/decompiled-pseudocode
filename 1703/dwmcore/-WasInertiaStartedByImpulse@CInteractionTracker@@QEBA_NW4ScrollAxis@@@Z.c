/*
 * XREFs of ?WasInertiaStartedByImpulse@CInteractionTracker@@QEBA_NW4ScrollAxis@@@Z @ 0x18016EE8C
 * Callers:
 *     ?GetCenterPoint@CInteractionTrackerPositionAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x180182F00 (-GetCenterPoint@CInteractionTrackerPositionAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 * Callees:
 *     ?WasInertiaStartedByImpulse@CScrollAnimation@@QEBA_NXZ @ 0x180182AAC (-WasInertiaStartedByImpulse@CScrollAnimation@@QEBA_NXZ.c)
 */

bool __fastcall CInteractionTracker::WasInertiaStartedByImpulse(__int64 a1)
{
  CScrollAnimation *v1; // rcx
  char v2; // bl

  v1 = *(CScrollAnimation **)(a1 + 368);
  v2 = 0;
  if ( v1 )
    return CScrollAnimation::WasInertiaStartedByImpulse(v1);
  return v2;
}
