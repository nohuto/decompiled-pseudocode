/*
 * XREFs of ?GetCurrentVelocity@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18016BA00
 * Callers:
 *     ?GetProperty@CInteractionTracker@@MEAAJIPEAVCExpressionValue@@@Z @ 0x18016BCE0 (-GetProperty@CInteractionTracker@@MEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?CalculateInertiaValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x180189D60 (-CalculateInertiaValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStac.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@AEBA_NXZ @ 0x18016AFB8 (-AreInteractionAnimationsAlive@CInteractionTracker@@AEBA_NXZ.c)
 *     ?GetVelocity@CScrollAnimation@@QEBAMXZ @ 0x180188E3C (-GetVelocity@CScrollAnimation@@QEBAMXZ.c)
 */

float __fastcall CInteractionTracker::GetCurrentVelocity(CInteractionTracker *a1)
{
  float result; // xmm0_4
  int v2; // edx
  _QWORD *v3; // rcx
  int v4; // edx
  CScrollAnimation *v5; // rcx
  const void *retaddr; // [rsp+28h] [rbp+0h]

  result = 0.0;
  if ( CInteractionTracker::AreInteractionAnimationsAlive(a1) )
  {
    if ( v2 )
    {
      v4 = v2 - 1;
      if ( v4 )
      {
        if ( v4 != 1 )
          ModuleFailFastForHRESULT(-2147024809, retaddr);
        v5 = (CScrollAnimation *)v3[48];
      }
      else
      {
        v5 = (CScrollAnimation *)v3[50];
      }
    }
    else
    {
      v5 = (CScrollAnimation *)v3[49];
    }
    return CScrollAnimation::GetVelocity(v5);
  }
  return result;
}
