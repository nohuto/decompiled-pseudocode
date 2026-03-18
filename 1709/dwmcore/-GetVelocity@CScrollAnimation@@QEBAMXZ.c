/*
 * XREFs of ?GetVelocity@CScrollAnimation@@QEBAMXZ @ 0x180188E3C
 * Callers:
 *     ?GetCurrentVelocity@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18016BA00 (-GetCurrentVelocity@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x18016D2E4 (-SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 *     ?StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAXMPEAVCExpressionValueStack@@_K_N@Z @ 0x18018A0D0 (-StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAXMPEAVCExpressionValueStack@@_K_N@.c)
 *     ?StartInertiaWorker@CInteractionTrackerScaleAnimation@@MEAAXMPEAVCExpressionValueStack@@_K_N@Z @ 0x18018A620 (-StartInertiaWorker@CInteractionTrackerScaleAnimation@@MEAAXMPEAVCExpressionValueStack@@_K_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

float __fastcall CScrollAnimation::GetVelocity(CScrollAnimation *this)
{
  CMotion *v1; // rax

  v1 = (CMotion *)(*(__int64 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 280LL))(this);
  return CMotion::GetCurrentVelocity(v1);
}
