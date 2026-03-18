/*
 * XREFs of ?HasImpulse@CScrollAnimation@@QEBA_NXZ @ 0x180188E80
 * Callers:
 *     ?HasImpulse@CInteractionTracker@@QEBA_NXZ @ 0x18016BF8C (-HasImpulse@CInteractionTracker@@QEBA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CScrollAnimation::HasImpulse(CScrollAnimation *this)
{
  return *(float *)((*(__int64 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 280LL))(this) + 40) != 0.0;
}
