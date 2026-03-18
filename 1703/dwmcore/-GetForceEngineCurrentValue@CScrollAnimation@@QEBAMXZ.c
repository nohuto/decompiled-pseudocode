/*
 * XREFs of ?GetForceEngineCurrentValue@CScrollAnimation@@QEBAMXZ @ 0x1801818F0
 * Callers:
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18016CB54 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

float __fastcall CScrollAnimation::GetForceEngineCurrentValue(CScrollAnimation *this)
{
  CMotion *v1; // rax

  v1 = (CMotion *)(*(__int64 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 224LL))(this);
  return CMotion::GetForceEngineCurrentValue(v1);
}
