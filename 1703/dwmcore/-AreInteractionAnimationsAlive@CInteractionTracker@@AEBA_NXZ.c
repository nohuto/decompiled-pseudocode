/*
 * XREFs of ?AreInteractionAnimationsAlive@CInteractionTracker@@AEBA_NXZ @ 0x18016C43C
 * Callers:
 *     ?ApplyPositionImpulse@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z @ 0x18016C284 (-ApplyPositionImpulse@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z.c)
 *     ?ApplyPositionShift@CInteractionTracker@@AEAAXW4ScrollAxis@@M@Z @ 0x18016C2F8 (-ApplyPositionShift@CInteractionTracker@@AEAAXW4ScrollAxis@@M@Z.c)
 *     ?ApplyScaleImpulse@CInteractionTracker@@AEAA_NMAEBUD2DVector3@@@Z @ 0x18016C3B8 (-ApplyScaleImpulse@CInteractionTracker@@AEAA_NMAEBUD2DVector3@@@Z.c)
 *     ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAA?AUInertiaCallbackValues@@XZ @ 0x18016C49C (-CalculateInertiaCallbackValues@CInteractionTracker@@AEAA-AUInertiaCallbackValues@@XZ.c)
 *     ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x18016C64C (-CheckForIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?GetBoundedEndpoint@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18016CB30 (-GetBoundedEndpoint@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18016CB54 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetCurrentVelocity@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18016CBFC (-GetCurrentVelocity@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetProperty@CInteractionTracker@@MEAAJIPEAVCExpressionValue@@@Z @ 0x18016CF50 (-GetProperty@CInteractionTracker@@MEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?SendPendingCallbacks@CInteractionTracker@@AEAAXXZ @ 0x18016D67C (-SendPendingCallbacks@CInteractionTracker@@AEAAXXZ.c)
 *     ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x18016DF54 (-SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z @ 0x18016E3E0 (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAAXXZ @ 0x18016EC44 (-TransitionToInertia@CInteractionTracker@@AEAAXXZ.c)
 *     ?IsInMotion@CInteractionTrackerPositionAnimation@@UEBA_NXZ @ 0x1801832E0 (-IsInMotion@CInteractionTrackerPositionAnimation@@UEBA_NXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CInteractionTracker::AreInteractionAnimationsAlive(CInteractionTracker *this)
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( *((_QWORD *)this + 46) )
  {
    if ( *((_QWORD *)this + 47) )
      return *((_QWORD *)this + 48) != 0LL;
  }
  return result;
}
