/*
 * XREFs of ??_ECCachedVisualImageBrushResource@@MEAAPEAXI@Z @ 0x18000CEF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCachedVisualImageBrushResource@@MEAA@XZ @ 0x18000CF44 (--1CCachedVisualImageBrushResource@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180020D70 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

CCachedVisualImageBrushResource *__fastcall CCachedVisualImageBrushResource::`vector deleting destructor'(
        CCachedVisualImageBrushResource *this,
        char a2)
{
  void (__fastcall *v4)(WPF::ProcessHeapImpl *__hidden, void *); // rax

  CCachedVisualImageBrushResource::~CCachedVisualImageBrushResource(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = *(void (__fastcall **)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v4 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      v4(WPF::g_pProcessHeap, this);
  }
  return this;
}
