/*
 * XREFs of ?Release@CCubicBezierChopper@CThemeAnimationScheduleHelper@@UEAAKXZ @ 0x180091AA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ??1CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAA@XZ @ 0x180091018 (--1CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAA@XZ.c)
 */

__int64 __fastcall CThemeAnimationScheduleHelper::CCubicBezierChopper::Release(
        CThemeAnimationScheduleHelper::CCubicBezierChopper *this)
{
  if ( (*((_DWORD *)this + 2))-- != 1 )
    return *((unsigned int *)this + 2);
  CThemeAnimationScheduleHelper::CCubicBezierChopper::~CCubicBezierChopper(this);
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CThemeAnimationScheduleHelper::CCubicBezierChopper *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return 0LL;
}
