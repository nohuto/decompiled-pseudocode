/*
 * XREFs of ?HasImpulse@CInteractionTracker@@QEBA_NXZ @ 0x18016D1D8
 * Callers:
 *     ?TransitionToInertia@CInteractionTracker@@AEAAXXZ @ 0x18016EC44 (-TransitionToInertia@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     ?HasImpulse@CScrollAnimation@@QEBA_NXZ @ 0x180181B0C (-HasImpulse@CScrollAnimation@@QEBA_NXZ.c)
 */

char __fastcall CInteractionTracker::HasImpulse(CInteractionTracker *this)
{
  CScrollAnimation *v2; // rcx
  char v3; // bl
  CScrollAnimation *v4; // rcx
  CScrollAnimation *v5; // rcx

  if ( (*((_BYTE *)this + 592) & 4) != 0 )
    return 1;
  v2 = (CScrollAnimation *)*((_QWORD *)this + 47);
  v3 = 0;
  if ( v2 )
  {
    if ( CScrollAnimation::HasImpulse(v2) )
      return 1;
  }
  v4 = (CScrollAnimation *)*((_QWORD *)this + 48);
  if ( v4 )
  {
    if ( CScrollAnimation::HasImpulse(v4) )
      return 1;
  }
  v5 = (CScrollAnimation *)*((_QWORD *)this + 46);
  if ( v5 )
  {
    if ( CScrollAnimation::HasImpulse(v5) )
      return 1;
  }
  return v3;
}
