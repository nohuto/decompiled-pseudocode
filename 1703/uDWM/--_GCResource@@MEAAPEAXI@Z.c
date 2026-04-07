/*
 * XREFs of ??_GCResource@@MEAAPEAXI@Z @ 0x18001E980
 * Callers:
 *     ??_GCPushTransformInstruction@@EEAAPEAXI@Z @ 0x18001E480 (--_GCPushTransformInstruction@@EEAAPEAXI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??_ECBitmapSource@@MEAAPEAXI@Z @ 0x18001E610 (--_ECBitmapSource@@MEAAPEAXI@Z.c)
 *     ??1CDrawGeometryInstruction@@EEAA@XZ @ 0x18001EB14 (--1CDrawGeometryInstruction@@EEAA@XZ.c)
 *     ??1CRenderDataVisual@@MEAA@XZ @ 0x18001F090 (--1CRenderDataVisual@@MEAA@XZ.c)
 *     ??_GCCanvasVisual@@MEAAPEAXI@Z @ 0x180020760 (--_GCCanvasVisual@@MEAAPEAXI@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x180023950 (--1CVisual@@MEAA@XZ.c)
 *     ?SetContent@CVisual@@UEAAJPEAVCResource@@@Z @ 0x180023DD0 (-SetContent@CVisual@@UEAAJPEAVCResource@@@Z.c)
 *     ??_ECAtlasedImage@@MEAAPEAXI@Z @ 0x18002B6B0 (--_ECAtlasedImage@@MEAAPEAXI@Z.c)
 *     ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180030EB0 (-ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180031220 (-GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

CResource *__fastcall CResource::`scalar deleting destructor'(CResource *this, char a2)
{
  void (__fastcall *v4)(WPF::ProcessHeapImpl *__hidden, void *); // rax

  *(_QWORD *)this = &CResource::`vftable';
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 128LL))(
    *((_QWORD *)this + 2),
    *((unsigned int *)this + 6));
  *(_QWORD *)this = &CBaseObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    v4 = *(void (__fastcall **)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v4 == WPF::ProcessHeapImpl::Free )
      HeapFree(g_hProcessHeap, 0, this);
    else
      v4(WPF::g_pProcessHeap, this);
  }
  return this;
}
