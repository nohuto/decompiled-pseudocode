/*
 * XREFs of ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x1801943B8
 * Callers:
 *     ?CalculateInContactDelta@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1801BDBD4 (-CalculateInContactDelta@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 *     ?CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1801BDDE0 (-CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 *     ?GetNaturalEndpoint@CScrollAnimation@@QEBAMXZ @ 0x1801BE254 (-GetNaturalEndpoint@CScrollAnimation@@QEBAMXZ.c)
 *     ?CalculateInContactValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x1801BF260 (-CalculateInContactValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueSt.c)
 *     ?CalculateInertiaValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x1801BF380 (-CalculateInertiaValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStac.c)
 *     ?StartInContactWorker@CInteractionTrackerPositionAnimation@@MEAAXXZ @ 0x1801BF670 (-StartInContactWorker@CInteractionTrackerPositionAnimation@@MEAAXXZ.c)
 *     ?StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAXMPEAVCExpressionValueStack@@_K_N@Z @ 0x1801BF740 (-StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAXMPEAVCExpressionValueStack@@_K_N@.c)
 *     ?CalculateInContactValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x1801BF920 (-CalculateInContactValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack.c)
 *     ?CalculateInertiaValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x1801BFA30 (-CalculateInertiaValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack@@.c)
 *     ?StartInContactWorker@CInteractionTrackerScaleAnimation@@MEAAXXZ @ 0x1801BFC60 (-StartInContactWorker@CInteractionTrackerScaleAnimation@@MEAAXXZ.c)
 *     _lambda_b08b79b307586b4cb04ea7780a7f8202_::operator() @ 0x1801CBB88 (_lambda_b08b79b307586b4cb04ea7780a7f8202_--operator().c)
 * Callees:
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x180193928 (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?HasActiveInertiaForce@CScrollAnimation@@QEBA_NXZ @ 0x1801BE2C0 (-HasActiveInertiaForce@CScrollAnimation@@QEBA_NXZ.c)
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
          && CScrollAnimation::HasActiveInertiaForce(*(CScrollAnimation **)(v5 + 480)) )
        {
          return CScrollAnimation::GetForceEngineCurrentValue(*(CScrollAnimation **)(a1 + 480));
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
           && CScrollAnimation::HasActiveInertiaForce(*(CScrollAnimation **)(v6 + 496)) )
    {
      return CScrollAnimation::GetForceEngineCurrentValue(*(CScrollAnimation **)(a1 + 496));
    }
    else
    {
      return *(float *)(a1 + 68);
    }
  }
  else if ( CInteractionTracker::AreInteractionAnimationsAlive((CInteractionTracker *)a1)
         && CScrollAnimation::HasActiveInertiaForce(*(CScrollAnimation **)(v7 + 488)) )
  {
    return CScrollAnimation::GetForceEngineCurrentValue(*(CScrollAnimation **)(a1 + 488));
  }
  else
  {
    return *(float *)(a1 + 64);
  }
}
