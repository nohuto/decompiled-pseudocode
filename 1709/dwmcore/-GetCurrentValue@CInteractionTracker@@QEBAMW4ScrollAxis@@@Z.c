/*
 * XREFs of ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18016B958
 * Callers:
 *     ?CalculateInContactDelta@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x180188770 (-CalculateInContactDelta@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 *     ?CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x180188974 (-CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 *     ?GetNaturalEndpoint@CScrollAnimation@@QEBAMXZ @ 0x180188DF0 (-GetNaturalEndpoint@CScrollAnimation@@QEBAMXZ.c)
 *     ?CalculateInContactValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x180189C50 (-CalculateInContactValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueSt.c)
 *     ?CalculateInertiaValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x180189D60 (-CalculateInertiaValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStac.c)
 *     ?StartInContactWorker@CInteractionTrackerPositionAnimation@@MEAAXXZ @ 0x18018A050 (-StartInContactWorker@CInteractionTrackerPositionAnimation@@MEAAXXZ.c)
 *     ?StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAXMPEAVCExpressionValueStack@@_K_N@Z @ 0x18018A0D0 (-StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAXMPEAVCExpressionValueStack@@_K_N@.c)
 *     ?CalculateInContactValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x18018A280 (-CalculateInContactValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack.c)
 *     ?CalculateInertiaValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x18018A380 (-CalculateInertiaValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack@@.c)
 *     ?StartInContactWorker@CInteractionTrackerScaleAnimation@@MEAAXXZ @ 0x18018A5B0 (-StartInContactWorker@CInteractionTrackerScaleAnimation@@MEAAXXZ.c)
 *     _lambda_8380e597ab6a1cbcc934487904c94e86_::operator() @ 0x180192434 (_lambda_8380e597ab6a1cbcc934487904c94e86_--operator().c)
 * Callees:
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@AEBA_NXZ @ 0x18016AFB8 (-AreInteractionAnimationsAlive@CInteractionTracker@@AEBA_NXZ.c)
 *     ?HasActiveInertiaForce@CScrollAnimation@@QEBA_NXZ @ 0x180188E5C (-HasActiveInertiaForce@CScrollAnimation@@QEBA_NXZ.c)
 */

float __fastcall CInteractionTracker::GetCurrentValue(__int64 a1, int a2)
{
  int v3; // edx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  if ( a2 )
  {
    v3 = a2 - 1;
    if ( v3 )
    {
      if ( v3 == 1 )
      {
        if ( CInteractionTracker::AreInteractionAnimationsAlive((CInteractionTracker *)a1)
          && CScrollAnimation::HasActiveInertiaForce(*(CScrollAnimation **)(v5 + 384)) )
        {
          return CScrollAnimation::GetForceEngineCurrentValue(*(CScrollAnimation **)(a1 + 384));
        }
        else
        {
          return *(float *)(a1 + 112);
        }
      }
      else
      {
        return 0.0;
      }
    }
    else if ( CInteractionTracker::AreInteractionAnimationsAlive((CInteractionTracker *)a1)
           && CScrollAnimation::HasActiveInertiaForce(*(CScrollAnimation **)(v6 + 400)) )
    {
      return CScrollAnimation::GetForceEngineCurrentValue(*(CScrollAnimation **)(a1 + 400));
    }
    else
    {
      return *(float *)(a1 + 68);
    }
  }
  else if ( CInteractionTracker::AreInteractionAnimationsAlive((CInteractionTracker *)a1)
         && CScrollAnimation::HasActiveInertiaForce(*(CScrollAnimation **)(v7 + 392)) )
  {
    return CScrollAnimation::GetForceEngineCurrentValue(*(CScrollAnimation **)(a1 + 392));
  }
  else
  {
    return *(float *)(a1 + 64);
  }
}
