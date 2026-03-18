/*
 * XREFs of ?HasActiveInertiaForce@CScrollAnimation@@QEBA_NXZ @ 0x180181AC8
 * Callers:
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18016CB54 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CScrollAnimation::HasActiveInertiaForce(CScrollAnimation *this)
{
  return *(_QWORD *)((*(__int64 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 224LL))(this) + 184) != 0LL;
}
