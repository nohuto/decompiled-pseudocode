/*
 * XREFs of ??_ECCachedVisualImageBrushResource@@MEAAPEAXI@Z @ 0x18003C100
 * Callers:
 *     ??1CDrawGeometryInstruction@@EEAA@XZ @ 0x18001EB14 (--1CDrawGeometryInstruction@@EEAA@XZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x18002C830 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ??1CCachedVisualImageBrushResource@@MEAA@XZ @ 0x18003C154 (--1CCachedVisualImageBrushResource@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

CCachedVisualImageBrushResource *__fastcall CCachedVisualImageBrushResource::`vector deleting destructor'(
        CCachedVisualImageBrushResource *this,
        char a2)
{
  void (__fastcall *v4)(WPF::ProcessHeapImpl *, void *); // rax

  CCachedVisualImageBrushResource::~CCachedVisualImageBrushResource(this);
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
