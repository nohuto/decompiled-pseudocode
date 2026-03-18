/*
 * XREFs of ?IsInertiaEnabledForAxis@CInteractionTracker@@QEAA_NW4ScrollAxis@@@Z @ 0x18016C1E4
 * Callers:
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x18016D2E4 (-SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 *     ?StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAXMPEAVCExpressionValueStack@@_K_N@Z @ 0x18018A0D0 (-StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAXMPEAVCExpressionValueStack@@_K_N@.c)
 *     ?StartInertiaWorker@CInteractionTrackerScaleAnimation@@MEAAXMPEAVCExpressionValueStack@@_K_N@Z @ 0x18018A620 (-StartInertiaWorker@CInteractionTrackerScaleAnimation@@MEAAXMPEAVCExpressionValueStack@@_K_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CInteractionTracker::IsInertiaEnabledForAxis(__int64 a1, int a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)(a1 + 544);
  return !v2 || (*(_BYTE *)(a2 + v2 + 428) & 2) != 0;
}
