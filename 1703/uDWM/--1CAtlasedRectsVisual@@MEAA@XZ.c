/*
 * XREFs of ??1CAtlasedRectsVisual@@MEAA@XZ @ 0x180021E48
 * Callers:
 *     ??_GCTopLevelAtlasedRectsVisual@@MEAAPEAXI@Z @ 0x18001A200 (--_GCTopLevelAtlasedRectsVisual@@MEAAPEAXI@Z.c)
 *     ??1CButton@@MEAA@XZ @ 0x1800205F4 (--1CButton@@MEAA@XZ.c)
 *     ??_ECAtlasedRectsVisual@@MEAAPEAXI@Z @ 0x180020C30 (--_ECAtlasedRectsVisual@@MEAAPEAXI@Z.c)
 *     ??1CAnimatedGlassSheet@@UEAA@XZ @ 0x180086814 (--1CAnimatedGlassSheet@@UEAA@XZ.c)
 * Callees:
 *     ?RemoveAllAtlasImages@CAtlasedRectsVisual@@QEAAXXZ @ 0x180021C78 (-RemoveAllAtlasImages@CAtlasedRectsVisual@@QEAAXXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x18002C830 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAtlasedRectsVisual::~CAtlasedRectsVisual(CAtlasedRectsVisual *this)
{
  void *v2; // rdx
  void (__fastcall *v3)(WPF::ProcessHeapImpl *__hidden, void *); // rax

  *(_QWORD *)this = &CAtlasedRectsVisual::`vftable';
  CAtlasedRectsVisual::RemoveAllAtlasImages(this);
  v2 = (void *)*((_QWORD *)this + 34);
  v3 = *(void (__fastcall **)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v3 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v2);
  else
    v3(WPF::g_pProcessHeap, v2);
  if ( *((_QWORD *)this + 30) != *((_QWORD *)this + 31) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *((_QWORD *)this + 30) = 0LL;
  }
  CVisual::~CVisual(this);
}
