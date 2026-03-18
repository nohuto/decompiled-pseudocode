/*
 * XREFs of ?HasImpulse@CInteractionTracker@@QEBA_NXZ @ 0x1801947E4
 * Callers:
 *     ?TransitionToInertia@CInteractionTracker@@AEAAXXZ @ 0x180196F30 (-TransitionToInertia@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     ?HasImpulse@CScrollAnimation@@QEBA_NXZ @ 0x1801BE2FC (-HasImpulse@CScrollAnimation@@QEBA_NXZ.c)
 */

char __fastcall CInteractionTracker::HasImpulse(CInteractionTracker *this)
{
  CScrollAnimation *v2; // rcx
  char v3; // bl
  CScrollAnimation *v4; // rcx
  CScrollAnimation *v5; // rcx

  if ( (*((_BYTE *)this + 676) & 0x10) != 0 )
    return 1;
  v2 = (CScrollAnimation *)*((_QWORD *)this + 61);
  v3 = 0;
  if ( v2 )
  {
    if ( CScrollAnimation::HasImpulse(v2) )
      return 1;
  }
  v4 = (CScrollAnimation *)*((_QWORD *)this + 62);
  if ( v4 )
  {
    if ( CScrollAnimation::HasImpulse(v4) )
      return 1;
  }
  v5 = (CScrollAnimation *)*((_QWORD *)this + 60);
  if ( v5 )
  {
    if ( CScrollAnimation::HasImpulse(v5) )
      return 1;
  }
  return v3;
}
