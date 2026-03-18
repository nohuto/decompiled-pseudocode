/*
 * XREFs of ?GetMostRecentCenterPoint@CInteractionTracker@@QEBAMW4ScrollState@@W4ScrollAxis@@@Z @ 0x18016BC78
 * Callers:
 *     ?CalculateCenterPointForAxis@CInteractionTracker@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@W4ScrollAxis@@PEAM@Z @ 0x18016B014 (-CalculateCenterPointForAxis@CInteractionTracker@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollStat.c)
 *     ?CalculateInContactValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x180189C50 (-CalculateInContactValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueSt.c)
 *     ?CalculateInertiaValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x180189D60 (-CalculateInertiaValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStac.c)
 *     ?StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAXMPEAVCExpressionValueStack@@_K_N@Z @ 0x18018A0D0 (-StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAXMPEAVCExpressionValueStack@@_K_N@.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

float __fastcall CInteractionTracker::GetMostRecentCenterPoint(__int64 a1, int a2, int a3)
{
  int v4; // edx
  __int64 v5; // rcx
  const void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = a2 - 1;
  if ( v4 )
  {
    if ( v4 != 1 )
      ModuleFailFastForHRESULT(-2147024809, retaddr);
    v5 = 140LL;
  }
  else
  {
    v5 = 132LL;
  }
  if ( !a3 )
    return *(float *)(v5 + a1);
  if ( a3 != 1 )
    ModuleFailFastForHRESULT(-2147024809, retaddr);
  return *(float *)(v5 + a1 + 4);
}
