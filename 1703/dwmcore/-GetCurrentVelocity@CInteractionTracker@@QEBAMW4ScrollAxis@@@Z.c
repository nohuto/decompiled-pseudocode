/*
 * XREFs of ?GetCurrentVelocity@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18016CBFC
 * Callers:
 *     ?GetProperty@CInteractionTracker@@MEAAJIPEAVCExpressionValue@@@Z @ 0x18016CF50 (-GetProperty@CInteractionTracker@@MEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?CalculateInertiaValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x180182CF0 (-CalculateInertiaValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStac.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@AEBA_NXZ @ 0x18016C43C (-AreInteractionAnimationsAlive@CInteractionTracker@@AEBA_NXZ.c)
 *     ?GetVelocity@CScrollAnimation@@QEBAMXZ @ 0x180181AA8 (-GetVelocity@CScrollAnimation@@QEBAMXZ.c)
 */

float __fastcall CInteractionTracker::GetCurrentVelocity(CInteractionTracker *a1)
{
  float result; // xmm0_4
  int v2; // edx
  _QWORD *v3; // rcx
  int v4; // edx
  CScrollAnimation *v5; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = 0.0;
  if ( CInteractionTracker::AreInteractionAnimationsAlive(a1) )
  {
    if ( v2 )
    {
      v4 = v2 - 1;
      if ( v4 )
      {
        if ( v4 != 1 )
        {
          ModuleFailFastForHRESULT(-2147024809, retaddr);
          __debugbreak();
        }
        v5 = (CScrollAnimation *)v3[46];
      }
      else
      {
        v5 = (CScrollAnimation *)v3[48];
      }
    }
    else
    {
      v5 = (CScrollAnimation *)v3[47];
    }
    return CScrollAnimation::GetVelocity(v5);
  }
  return result;
}
