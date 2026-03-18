/*
 * XREFs of ?HasImpulse@CScrollAnimation@@QEBA_NXZ @ 0x1801BE2FC
 * Callers:
 *     ?HasImpulse@CInteractionTracker@@QEBA_NXZ @ 0x1801947E4 (-HasImpulse@CInteractionTracker@@QEBA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CScrollAnimation::HasImpulse(CScrollAnimation *this)
{
  return *(float *)((*(__int64 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 280LL))(this) + 40) != 0.0;
}
