/*
 * XREFs of ?IsInertiaEnabledForAxis@InteractionSourceManager@@QEBA_NW4ScrollAxis@@@Z @ 0x1801CA004
 * Callers:
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x18019552C (-SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 *     ?StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAXMPEAVCExpressionValueStack@@_K_N@Z @ 0x1801BF740 (-StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAXMPEAVCExpressionValueStack@@_K_N@.c)
 *     ?StartInertiaWorker@CInteractionTrackerScaleAnimation@@MEAAXMPEAVCExpressionValueStack@@_K_N@Z @ 0x1801BFD10 (-StartInertiaWorker@CInteractionTrackerScaleAnimation@@MEAAXMPEAVCExpressionValueStack@@_K_N@Z.c)
 * Callees:
 *     ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x1801947C0 (-HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@AEBAPEAVCManipulation@@XZ @ 0x1801CAAA8 (-TryGetActiveManipulation@InteractionSourceManager@@AEBAPEAVCManipulation@@XZ.c)
 */

char __fastcall InteractionSourceManager::IsInertiaEnabledForAxis(InteractionSourceManager *a1, int a2)
{
  __int64 v2; // rbx
  InteractionSourceManager *v3; // r10

  v2 = a2;
  if ( InteractionSourceManager::HasActiveManipulation(a1) )
    return *((_BYTE *)InteractionSourceManager::TryGetActiveManipulation(v3) + 8 * v2 + 452) & 1;
  else
    return 1;
}
