/*
 * XREFs of ?HasActiveInertiaForce@CScrollAnimation@@QEBA_NXZ @ 0x180188E5C
 * Callers:
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18016B958 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CScrollAnimation::HasActiveInertiaForce(CScrollAnimation *this)
{
  return *(_QWORD *)((*(__int64 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 280LL))(this) + 136) != 0LL;
}
