/*
 * XREFs of ?ApplyScaleImpulse@CInteractionTracker@@AEAA_NMAEBUD2DVector2@@@Z @ 0x18016AF3C
 * Callers:
 *     ?ProcessApplyScaleImpulse@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_APPLYSCALEIMPULSE@@@Z @ 0x18016C670 (-ProcessApplyScaleImpulse@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTR.c)
 * Callees:
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@AEBA_NXZ @ 0x18016AFB8 (-AreInteractionAnimationsAlive@CInteractionTracker@@AEBA_NXZ.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAAXXZ @ 0x18016EE90 (-TransitionToInertia@CInteractionTracker@@AEAAXXZ.c)
 *     ?ApplyImpulse@CScrollAnimation@@QEAAXM@Z @ 0x180188740 (-ApplyImpulse@CScrollAnimation@@QEAAXM@Z.c)
 */

char __fastcall CInteractionTracker::ApplyScaleImpulse(
        CInteractionTracker *this,
        float a2,
        const struct D2DVector2 *a3)
{
  int v3; // eax
  char v4; // di

  v3 = *((_DWORD *)this + 38);
  v4 = 0;
  if ( !v3 || (unsigned int)(v3 - 2) <= 1 )
  {
    v4 = 1;
    CInteractionTracker::TransitionToInertia(this);
    if ( CInteractionTracker::AreInteractionAnimationsAlive(this) )
    {
      CScrollAnimation::ApplyImpulse(*((CScrollAnimation **)this + 48), a2);
      *(_QWORD *)((char *)this + 612) = *(_QWORD *)a3;
    }
  }
  return v4;
}
