/*
 * XREFs of ?GetForceEngineCurrentValue@CScrollAnimation@@QEBAMXZ @ 0x180188CB0
 * Callers:
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18016B958 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

float __fastcall CScrollAnimation::GetForceEngineCurrentValue(CScrollAnimation *this)
{
  CMotion *v1; // rax

  v1 = (CMotion *)(*(__int64 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 280LL))(this);
  return CMotion::GetForceEngineCurrentValue(v1);
}
