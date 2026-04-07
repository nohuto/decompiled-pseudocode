/*
 * XREFs of ??_ECIconicBitmapRegistry@@UEAAPEAXI@Z @ 0x180078250
 * Callers:
 *     ??1CDesktopManager@@EEAA@XZ @ 0x180077EA0 (--1CDesktopManager@@EEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ??1CIconicBitmapRegistry@@UEAA@XZ @ 0x180079C40 (--1CIconicBitmapRegistry@@UEAA@XZ.c)
 */

CIconicBitmapRegistry *__fastcall CIconicBitmapRegistry::`vector deleting destructor'(
        CIconicBitmapRegistry *this,
        char a2)
{
  CIconicBitmapRegistry::~CIconicBitmapRegistry(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CIconicBitmapRegistry *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
