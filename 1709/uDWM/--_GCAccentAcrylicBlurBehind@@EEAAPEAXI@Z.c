/*
 * XREFs of ??_GCAccentAcrylicBlurBehind@@EEAAPEAXI@Z @ 0x1800758A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ??1CAccentAcrylicBlurBehind@@EEAA@XZ @ 0x1800757F0 (--1CAccentAcrylicBlurBehind@@EEAA@XZ.c)
 */

CAccentAcrylicBlurBehind *__fastcall CAccentAcrylicBlurBehind::`scalar deleting destructor'(
        CAccentAcrylicBlurBehind *this,
        char a2)
{
  CAccentAcrylicBlurBehind::~CAccentAcrylicBlurBehind(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CAccentAcrylicBlurBehind *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
