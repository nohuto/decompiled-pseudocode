/*
 * XREFs of ?IsInertiaEnabledForAxis@CInteractionTracker@@QEAA_NW4ScrollAxis@@@Z @ 0x180181CD0
 * Callers:
 *     ?SelectInertiaModifier@CScrollAnimation@@QEAAPEAUIAccelerator@@XZ @ 0x180181E40 (-SelectInertiaModifier@CScrollAnimation@@QEAAPEAUIAccelerator@@XZ.c)
 *     ?StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAJMPEAVCExpressionValueStack@@_K_N@Z @ 0x1801833D0 (-StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAJMPEAVCExpressionValueStack@@_K_N@.c)
 *     ?StartInertiaWorker@CInteractionTrackerScaleAnimation@@MEAAJMPEAVCExpressionValueStack@@_K_N@Z @ 0x180183950 (-StartInertiaWorker@CInteractionTrackerScaleAnimation@@MEAAJMPEAVCExpressionValueStack@@_K_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CInteractionTracker::IsInertiaEnabledForAxis(__int64 a1, int a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)(a1 + 512);
  return !v2 || (*(_BYTE *)(a2 + v2 + 420) & 2) != 0;
}
