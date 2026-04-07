/*
 * XREFs of ??_ECIconicBitmapRegistry@@UEAAPEAXI@Z @ 0x180074A00
 * Callers:
 *     ??1CDesktopManager@@EEAA@XZ @ 0x180074654 (--1CDesktopManager@@EEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ??1CIconicBitmapRegistry@@UEAA@XZ @ 0x180076EE4 (--1CIconicBitmapRegistry@@UEAA@XZ.c)
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
