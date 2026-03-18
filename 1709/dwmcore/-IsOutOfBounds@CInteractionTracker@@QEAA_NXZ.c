/*
 * XREFs of ?IsOutOfBounds@CInteractionTracker@@QEAA_NXZ @ 0x18016C270
 * Callers:
 *     ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x18016B3C0 (-CheckForIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAAXXZ @ 0x18016EE90 (-TransitionToInertia@CInteractionTracker@@AEAAXXZ.c)
 *     ?PrepareForCalculation@CScrollAnimation@@UEAAXPEA_N@Z @ 0x180189040 (-PrepareForCalculation@CScrollAnimation@@UEAAXPEA_N@Z.c)
 * Callees:
 *     ?IsOutOfBounds@CInteractionTracker@@QEAA_NW4ScrollAxis@@@Z @ 0x18016C220 (-IsOutOfBounds@CInteractionTracker@@QEAA_NW4ScrollAxis@@@Z.c)
 */

char __fastcall CInteractionTracker::IsOutOfBounds(CInteractionTracker *this)
{
  float *v1; // rcx
  float *v2; // rcx
  int v3; // r8d
  char v4; // r8

  if ( CInteractionTracker::IsOutOfBounds((float *)this, 0)
    || CInteractionTracker::IsOutOfBounds(v1, 1)
    || CInteractionTracker::IsOutOfBounds(v2, v3 + 2) )
  {
    return 1;
  }
  return v4;
}
