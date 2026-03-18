/*
 * XREFs of ?IsOutOfBounds@CInteractionTracker@@QEAA_NXZ @ 0x18016D2D0
 * Callers:
 *     ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x18016C64C (-CheckForIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAAXXZ @ 0x18016EC44 (-TransitionToInertia@CInteractionTracker@@AEAAXXZ.c)
 *     ?PrepareForCalculation@CScrollAnimation@@UEAAXPEA_N@Z @ 0x180181CF0 (-PrepareForCalculation@CScrollAnimation@@UEAAXPEA_N@Z.c)
 * Callees:
 *     ?IsOutOfBounds@CInteractionTracker@@QEAA_NW4ScrollAxis@@@Z @ 0x18016D27C (-IsOutOfBounds@CInteractionTracker@@QEAA_NW4ScrollAxis@@@Z.c)
 */

char __fastcall CInteractionTracker::IsOutOfBounds(CInteractionTracker *this)
{
  char IsOutOfBounds; // al
  float *v2; // rcx
  int v3; // r9d
  float *v4; // rcx
  char v5; // r8

  IsOutOfBounds = CInteractionTracker::IsOutOfBounds((float *)this, 0);
  LOBYTE(v3) = 1;
  if ( IsOutOfBounds
    || (unsigned __int8)CInteractionTracker::IsOutOfBounds(v2, 1)
    || (unsigned __int8)CInteractionTracker::IsOutOfBounds(v4, v3 + 1) )
  {
    return v3;
  }
  return v5;
}
