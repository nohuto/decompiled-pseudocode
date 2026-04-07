/*
 * XREFs of ??_ECVirtualDesktopThumbnailCVI@@UEAAPEAXI@Z @ 0x1800824C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ??1CDesktopThumbnailCVI@@MEAA@XZ @ 0x18009CE70 (--1CDesktopThumbnailCVI@@MEAA@XZ.c)
 */

CVirtualDesktopThumbnailCVI *__fastcall CVirtualDesktopThumbnailCVI::`vector deleting destructor'(
        CVirtualDesktopThumbnailCVI *this,
        char a2)
{
  CDesktopThumbnailCVI::~CDesktopThumbnailCVI(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CVirtualDesktopThumbnailCVI *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
