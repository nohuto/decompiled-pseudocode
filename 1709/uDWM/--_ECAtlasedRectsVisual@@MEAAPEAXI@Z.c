/*
 * XREFs of ??_ECAtlasedRectsVisual@@MEAAPEAXI@Z @ 0x180023340
 * Callers:
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x180012E90 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180020D70 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ??1CAtlasedRectsVisual@@MEAA@XZ @ 0x1800243D8 (--1CAtlasedRectsVisual@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

CAtlasedRectsVisual *__fastcall CAtlasedRectsVisual::`vector deleting destructor'(CAtlasedRectsVisual *this, char a2)
{
  void (__fastcall *v4)(WPF::ProcessHeapImpl *, void *); // rax

  CAtlasedRectsVisual::~CAtlasedRectsVisual(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v4 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      v4(WPF::g_pProcessHeap, this);
  }
  return this;
}
