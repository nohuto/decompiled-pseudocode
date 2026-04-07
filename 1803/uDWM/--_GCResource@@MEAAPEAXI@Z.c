/*
 * XREFs of ??_GCResource@@MEAAPEAXI@Z @ 0x180014180
 * Callers:
 *     ??_ECBitmapSource@@MEAAPEAXI@Z @ 0x180013D70 (--_ECBitmapSource@@MEAAPEAXI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??_GCPushTransformInstruction@@EEAAPEAXI@Z @ 0x1800152C0 (--_GCPushTransformInstruction@@EEAAPEAXI@Z.c)
 *     ??1CDrawGeometryInstruction@@EEAA@XZ @ 0x180015434 (--1CDrawGeometryInstruction@@EEAA@XZ.c)
 *     ??1CRenderDataVisual@@MEAA@XZ @ 0x180017CE4 (--1CRenderDataVisual@@MEAA@XZ.c)
 *     ??_GCCanvasVisual@@MEAAPEAXI@Z @ 0x180018560 (--_GCCanvasVisual@@MEAAPEAXI@Z.c)
 *     ??_ECAtlasedImage@@MEAAPEAXI@Z @ 0x18001FD70 (--_ECAtlasedImage@@MEAAPEAXI@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x180025E30 (--1CVisual@@MEAA@XZ.c)
 *     ?SetContent@CVisual@@UEAAJPEAVCResource@@@Z @ 0x180026260 (-SetContent@CVisual@@UEAAJPEAVCResource@@@Z.c)
 *     ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180029840 (-ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180029BD0 (-GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
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
