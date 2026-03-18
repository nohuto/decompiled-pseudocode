/*
 * XREFs of ?GetInertiaStartVelocity@CScrollAnimation@@QEBAMXZ @ 0x180188CD0
 * Callers:
 *     ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAA?AUInertiaCallbackValues@@XZ @ 0x18016B210 (-CalculateInertiaCallbackValues@CInteractionTracker@@AEAA-AUInertiaCallbackValues@@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

float __fastcall CScrollAnimation::GetInertiaStartVelocity(CScrollAnimation *this)
{
  return *(float *)((*(__int64 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 280LL))(this) + 48);
}
