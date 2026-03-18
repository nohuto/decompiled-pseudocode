/*
 * XREFs of ?HasImpulse@CScrollAnimation@@QEBA_NXZ @ 0x180181B0C
 * Callers:
 *     ?HasImpulse@CInteractionTracker@@QEBA_NXZ @ 0x18016D1D8 (-HasImpulse@CInteractionTracker@@QEBA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

_BOOL8 __fastcall CScrollAnimation::HasImpulse(CScrollAnimation *this)
{
  return *(float *)((*(__int64 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 224LL))(this) + 40) != 0.0;
}
