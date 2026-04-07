/*
 * XREFs of ??_GCTextCache@@UEAAPEAXI@Z @ 0x1800782D0
 * Callers:
 *     ??1CDesktopManager@@EEAA@XZ @ 0x180077EA0 (--1CDesktopManager@@EEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ??1CTextCache@@UEAA@XZ @ 0x18007F990 (--1CTextCache@@UEAA@XZ.c)
 */

CTextCache *__fastcall CTextCache::`scalar deleting destructor'(CTextCache *this, char a2)
{
  CTextCache::~CTextCache(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CTextCache *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
