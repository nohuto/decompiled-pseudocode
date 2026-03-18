/*
 * XREFs of ?ConvertToInputType@@YA?AW4InputType@@KI@Z @ 0x180025834
 * Callers:
 *     ?EvaluateHitTestAttributesAndInputType@CHitTestContext@@AEAAXW4DIT_HITTESTATTRIBUTES@@K@Z @ 0x180026654 (-EvaluateHitTestAttributesAndInputType@CHitTestContext@@AEAAXW4DIT_HITTESTATTRIBUTES@@K@Z.c)
 *     ?CalculateFrameTargets@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1801CE680 (-CalculateFrameTargets@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?ProcessFrameInputPostTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1801CF714 (-ProcessFrameInputPostTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1801CF874 (-ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?TargetPointer@CManipulationManager@@AEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAX@Z @ 0x1801D0D0C (-TargetPointer@CManipulationManager@@AEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEA.c)
 *     ?ProcessInput@CInteractionProcessor@@QEAAJAEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEAUIManipulationResource@@PEA_N@Z @ 0x1801D5660 (-ProcessInput@CInteractionProcessor@@QEAAJAEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEAUIManipulatio.c)
 *     ?GetPointerTarget@CGestureTargetingManager@@SAJAEBUtagPOINTER_INFO@@PEBUIManipulationContext@@PEAUTargetingInfo@@@Z @ 0x1801DCFF4 (-GetPointerTarget@CGestureTargetingManager@@SAJAEBUtagPOINTER_INFO@@PEBUIManipulationContext@@PE.c)
 *     ?ProcessInput@CGestureTargetingManager@@SAJPEBUIManipulationContext@@AEBUtagPOINTER_INFO@@@Z @ 0x1801DD490 (-ProcessInput@CGestureTargetingManager@@SAJPEBUIManipulationContext@@AEBUtagPOINTER_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConvertToInputType(int a1, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v7; // ecx

  if ( !a1 )
    return 0LL;
  v2 = a1 - 1;
  if ( !v2 )
    return 1LL;
  v3 = v2 - 1;
  if ( !v3 )
    return 2LL;
  v4 = v3 - 1;
  if ( !v4 )
    return 4LL;
  v5 = v4 - 1;
  if ( !v5 )
    return (unsigned int)((a2 & 0x180000) != 0) + 5;
  v7 = v5 - 1;
  if ( v7 )
  {
    if ( v7 == 1 )
      return 7LL;
    return 0LL;
  }
  return 3LL;
}
