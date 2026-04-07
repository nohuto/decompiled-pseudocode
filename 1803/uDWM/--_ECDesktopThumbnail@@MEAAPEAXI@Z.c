/*
 * XREFs of ??_ECDesktopThumbnail@@MEAAPEAXI@Z @ 0x1800A34B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180020D08 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ??1CDesktopThumbnailBase@@MEAA@XZ @ 0x1800A3358 (--1CDesktopThumbnailBase@@MEAA@XZ.c)
 */

CDesktopThumbnail *__fastcall CDesktopThumbnail::`vector deleting destructor'(CDesktopThumbnail *this, char a2)
{
  *(_QWORD *)this = &CDesktopThumbnail::`vftable';
  CDesktopThumbnail::s_pThumbnailNoRef = 0LL;
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 280);
  CDesktopThumbnailBase::~CDesktopThumbnailBase(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CDesktopThumbnail *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
