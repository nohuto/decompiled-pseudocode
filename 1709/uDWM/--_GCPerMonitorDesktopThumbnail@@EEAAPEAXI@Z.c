/*
 * XREFs of ??_GCPerMonitorDesktopThumbnail@@EEAAPEAXI@Z @ 0x18009B110
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ??1CPerMonitorDesktopThumbnail@@EEAA@XZ @ 0x18009B024 (--1CPerMonitorDesktopThumbnail@@EEAA@XZ.c)
 */

CPerMonitorDesktopThumbnail *__fastcall CPerMonitorDesktopThumbnail::`scalar deleting destructor'(
        CPerMonitorDesktopThumbnail *this,
        char a2)
{
  CPerMonitorDesktopThumbnail::~CPerMonitorDesktopThumbnail(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CPerMonitorDesktopThumbnail *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
