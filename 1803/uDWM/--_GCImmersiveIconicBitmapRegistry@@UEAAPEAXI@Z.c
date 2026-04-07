/*
 * XREFs of ??_GCImmersiveIconicBitmapRegistry@@UEAAPEAXI@Z @ 0x180074A40
 * Callers:
 *     ??1CDesktopManager@@EEAA@XZ @ 0x180074654 (--1CDesktopManager@@EEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ??1CImmersiveIconicBitmapRegistry@@UEAA@XZ @ 0x1800777F4 (--1CImmersiveIconicBitmapRegistry@@UEAA@XZ.c)
 */

CImmersiveIconicBitmapRegistry *__fastcall CImmersiveIconicBitmapRegistry::`scalar deleting destructor'(
        CImmersiveIconicBitmapRegistry *this,
        char a2)
{
  CImmersiveIconicBitmapRegistry::~CImmersiveIconicBitmapRegistry(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CImmersiveIconicBitmapRegistry *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
