/*
 * XREFs of ?GetInitialValue@CScrollAnimation@@AEBAMXZ @ 0x180181930
 * Callers:
 *     ?SelectInertiaModifier@CScrollAnimation@@QEAAPEAUIAccelerator@@XZ @ 0x180181E40 (-SelectInertiaModifier@CScrollAnimation@@QEAAPEAUIAccelerator@@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

float __fastcall CScrollAnimation::GetInitialValue(CScrollAnimation *this)
{
  return *(float *)((*(__int64 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 224LL))(this) + 44);
}
