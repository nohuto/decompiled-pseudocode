/*
 * XREFs of ??_ECAccentBlurBehind@@EEAAPEAXI@Z @ 0x18001A880
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAccentBlurBehind@@EEAA@XZ @ 0x18001ABF0 (--1CAccentBlurBehind@@EEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

CAccentBlurBehind *__fastcall CAccentBlurBehind::`vector deleting destructor'(CAccentBlurBehind *this, char a2)
{
  CAccentBlurBehind::~CAccentBlurBehind(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CAccentBlurBehind *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
