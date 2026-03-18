/*
 * XREFs of ?GetVelocity@CScrollAnimation@@QEBAMXZ @ 0x180181AA8
 * Callers:
 *     ?GetCurrentVelocity@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18016CBFC (-GetCurrentVelocity@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?SelectInertiaModifier@CScrollAnimation@@QEAAPEAUIAccelerator@@XZ @ 0x180181E40 (-SelectInertiaModifier@CScrollAnimation@@QEAAPEAUIAccelerator@@XZ.c)
 *     ?StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAJMPEAVCExpressionValueStack@@_K_N@Z @ 0x1801833D0 (-StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAJMPEAVCExpressionValueStack@@_K_N@.c)
 *     ?StartInertiaWorker@CInteractionTrackerScaleAnimation@@MEAAJMPEAVCExpressionValueStack@@_K_N@Z @ 0x180183950 (-StartInertiaWorker@CInteractionTrackerScaleAnimation@@MEAAJMPEAVCExpressionValueStack@@_K_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

float __fastcall CScrollAnimation::GetVelocity(CScrollAnimation *this)
{
  CMotion *v1; // rax

  v1 = (CMotion *)(*(__int64 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 224LL))(this);
  return CMotion::GetCurrentVelocity(v1);
}
