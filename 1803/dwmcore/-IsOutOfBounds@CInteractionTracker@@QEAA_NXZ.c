/*
 * XREFs of ?IsOutOfBounds@CInteractionTracker@@QEAA_NXZ @ 0x180194A20
 * Callers:
 *     ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x180193CAC (-CheckForIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAAXXZ @ 0x180196F30 (-TransitionToInertia@CInteractionTracker@@AEAAXXZ.c)
 *     ?PrepareForCalculation@CScrollAnimation@@UEAAXPEA_N@Z @ 0x1801BE480 (-PrepareForCalculation@CScrollAnimation@@UEAAXPEA_N@Z.c)
 * Callees:
 *     ?IsOutOfBounds@CInteractionTracker@@QEAA_NW4ScrollAxis@@@Z @ 0x1801949D0 (-IsOutOfBounds@CInteractionTracker@@QEAA_NW4ScrollAxis@@@Z.c)
 */

char __fastcall CInteractionTracker::IsOutOfBounds(CInteractionTracker *this)
{
  float *v1; // rcx
  char IsOutOfBounds; // al
  float *v3; // rcx
  char v4; // r8
  char v5; // al
  char v6; // r8

  if ( CInteractionTracker::IsOutOfBounds((float *)this, 0) )
    return 1;
  IsOutOfBounds = CInteractionTracker::IsOutOfBounds(v1, 1);
  if ( IsOutOfBounds != v4 )
    return 1;
  v5 = CInteractionTracker::IsOutOfBounds(v3, 2);
  if ( v5 != v6 )
    return 1;
  return v6;
}
