/*
 * XREFs of ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18016CB54
 * Callers:
 *     ?CalculateInContactDelta@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1801813C0 (-CalculateInContactDelta@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 *     ?CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1801815B4 (-CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 *     ?GetNaturalEndpoint@CScrollAnimation@@QEBAMXZ @ 0x180181A20 (-GetNaturalEndpoint@CScrollAnimation@@QEBAMXZ.c)
 *     ?CalculateInContactValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x180182B70 (-CalculateInContactValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueSt.c)
 *     ?CalculateInertiaValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x180182CF0 (-CalculateInertiaValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStac.c)
 *     ?GetCenterPoint@CInteractionTrackerPositionAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x180182F00 (-GetCenterPoint@CInteractionTrackerPositionAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 *     ?StartInContactWorker@CInteractionTrackerPositionAnimation@@MEAAXXZ @ 0x180183350 (-StartInContactWorker@CInteractionTrackerPositionAnimation@@MEAAXXZ.c)
 *     ?StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAJMPEAVCExpressionValueStack@@_K_N@Z @ 0x1801833D0 (-StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAJMPEAVCExpressionValueStack@@_K_N@.c)
 *     ?StartInContactWorker@CInteractionTrackerScaleAnimation@@MEAAXXZ @ 0x1801838E0 (-StartInContactWorker@CInteractionTrackerScaleAnimation@@MEAAXXZ.c)
 *     _lambda_2ee6e74848a4ca29603542c81c185b92_::operator() @ 0x180188754 (_lambda_2ee6e74848a4ca29603542c81c185b92_--operator().c)
 * Callees:
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@AEBA_NXZ @ 0x18016C43C (-AreInteractionAnimationsAlive@CInteractionTracker@@AEBA_NXZ.c)
 *     ?HasActiveInertiaForce@CScrollAnimation@@QEBA_NXZ @ 0x180181AC8 (-HasActiveInertiaForce@CScrollAnimation@@QEBA_NXZ.c)
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
          && CScrollAnimation::HasActiveInertiaForce(*(CScrollAnimation **)(v5 + 368)) )
        {
          return CScrollAnimation::GetForceEngineCurrentValue(*(CScrollAnimation **)(a1 + 368));
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
           && CScrollAnimation::HasActiveInertiaForce(*(CScrollAnimation **)(v6 + 384)) )
    {
      return CScrollAnimation::GetForceEngineCurrentValue(*(CScrollAnimation **)(a1 + 384));
    }
    else
    {
      return *(float *)(a1 + 68);
    }
  }
  else if ( CInteractionTracker::AreInteractionAnimationsAlive((CInteractionTracker *)a1)
         && CScrollAnimation::HasActiveInertiaForce(*(CScrollAnimation **)(v7 + 376)) )
  {
    return CScrollAnimation::GetForceEngineCurrentValue(*(CScrollAnimation **)(a1 + 376));
  }
  else
  {
    return *(float *)(a1 + 64);
  }
}
