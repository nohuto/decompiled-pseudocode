/*
 * XREFs of ?HasImpulse@CInteractionTracker@@QEBA_NXZ @ 0x18016BF8C
 * Callers:
 *     ?TransitionToInertia@CInteractionTracker@@AEAAXXZ @ 0x18016EE90 (-TransitionToInertia@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     ?HasImpulse@CScrollAnimation@@QEBA_NXZ @ 0x180188E80 (-HasImpulse@CScrollAnimation@@QEBA_NXZ.c)
 */

char __fastcall CInteractionTracker::HasImpulse(CInteractionTracker *this)
{
  CScrollAnimation *v2; // rcx
  char v3; // bl
  CScrollAnimation *v4; // rcx
  CScrollAnimation *v5; // rcx

  if ( (*((_BYTE *)this + 620) & 0x10) != 0 )
    return 1;
  v2 = (CScrollAnimation *)*((_QWORD *)this + 49);
  v3 = 0;
  if ( v2 )
  {
    if ( CScrollAnimation::HasImpulse(v2) )
      return 1;
  }
  v4 = (CScrollAnimation *)*((_QWORD *)this + 50);
  if ( v4 )
  {
    if ( CScrollAnimation::HasImpulse(v4) )
      return 1;
  }
  v5 = (CScrollAnimation *)*((_QWORD *)this + 48);
  if ( v5 )
  {
    if ( CScrollAnimation::HasImpulse(v5) )
      return 1;
  }
  return v3;
}
