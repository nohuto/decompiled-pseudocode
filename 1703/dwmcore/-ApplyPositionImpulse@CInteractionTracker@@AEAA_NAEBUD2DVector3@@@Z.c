/*
 * XREFs of ?ApplyPositionImpulse@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z @ 0x18016C284
 * Callers:
 *     ?ProcessApplyPositionImpulse@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_APPLYPOSITIONIMPULSE@@@Z @ 0x18012C450 (-ProcessApplyPositionImpulse@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIO.c)
 * Callees:
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@AEBA_NXZ @ 0x18016C43C (-AreInteractionAnimationsAlive@CInteractionTracker@@AEBA_NXZ.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAAXXZ @ 0x18016EC44 (-TransitionToInertia@CInteractionTracker@@AEAAXXZ.c)
 *     ?ApplyImpulse@CScrollAnimation@@QEAAXM@Z @ 0x180181390 (-ApplyImpulse@CScrollAnimation@@QEAAXM@Z.c)
 */

char __fastcall CInteractionTracker::ApplyPositionImpulse(CInteractionTracker *this, const struct D2DVector3 *a2)
{
  int v2; // eax
  char v3; // di

  v2 = *((_DWORD *)this + 35);
  v3 = 0;
  if ( !v2 || (unsigned int)(v2 - 2) <= 1 )
  {
    v3 = 1;
    CInteractionTracker::TransitionToInertia(this);
    if ( CInteractionTracker::AreInteractionAnimationsAlive(this) )
    {
      CScrollAnimation::ApplyImpulse(*((CScrollAnimation **)this + 47), *(float *)a2);
      CScrollAnimation::ApplyImpulse(*((CScrollAnimation **)this + 48), *((float *)a2 + 1));
    }
  }
  return v3;
}
