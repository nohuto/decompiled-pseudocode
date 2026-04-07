/*
 * XREFs of ??_GCDCompDesktopThumbnailCVI@@UEAAPEAXI@Z @ 0x180082F80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ??1CDesktopThumbnailCVI@@MEAA@XZ @ 0x1800A33E8 (--1CDesktopThumbnailCVI@@MEAA@XZ.c)
 */

CDCompDesktopThumbnailCVI *__fastcall CDCompDesktopThumbnailCVI::`scalar deleting destructor'(
        CDCompDesktopThumbnailCVI *this,
        char a2)
{
  CDesktopThumbnailCVI::~CDesktopThumbnailCVI(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CDCompDesktopThumbnailCVI *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
