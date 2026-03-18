/*
 * XREFs of ?GetModifiedRestingValue@CScrollAnimation@@QEBAMXZ @ 0x1801BE234
 * Callers:
 *     ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAA?AUInertiaCallbackValues@@XZ @ 0x180193AFC (-CalculateInertiaCallbackValues@CInteractionTracker@@AEAA-AUInertiaCallbackValues@@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

float __fastcall CScrollAnimation::GetModifiedRestingValue(CScrollAnimation *this)
{
  CMotion *v1; // rax

  v1 = (CMotion *)(*(__int64 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 280LL))(this);
  return CMotion::GetModifiedRestingValue(v1);
}
