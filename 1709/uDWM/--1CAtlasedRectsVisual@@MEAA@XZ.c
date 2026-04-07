/*
 * XREFs of ??1CAtlasedRectsVisual@@MEAA@XZ @ 0x1800243D8
 * Callers:
 *     ??1CButton@@MEAA@XZ @ 0x180016624 (--1CButton@@MEAA@XZ.c)
 *     ??_ECAtlasedRectsVisual@@MEAAPEAXI@Z @ 0x180023340 (--_ECAtlasedRectsVisual@@MEAAPEAXI@Z.c)
 *     ??_GCTopLevelAtlasedRectsVisual@@MEAAPEAXI@Z @ 0x180030940 (--_GCTopLevelAtlasedRectsVisual@@MEAAPEAXI@Z.c)
 *     ??1CAnimatedGlassSheet@@UEAA@XZ @ 0x18007DC14 (--1CAnimatedGlassSheet@@UEAA@XZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180020D70 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?RemoveAllAtlasImages@CAtlasedRectsVisual@@QEAAXXZ @ 0x180024274 (-RemoveAllAtlasImages@CAtlasedRectsVisual@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAtlasedRectsVisual::~CAtlasedRectsVisual(CAtlasedRectsVisual *this)
{
  void *v2; // rdx
  void (__fastcall *v3)(WPF::ProcessHeapImpl *, void *); // rax

  *(_QWORD *)this = &CAtlasedRectsVisual::`vftable';
  CAtlasedRectsVisual::RemoveAllAtlasImages(this);
  v2 = (void *)*((_QWORD *)this + 34);
  v3 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
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
