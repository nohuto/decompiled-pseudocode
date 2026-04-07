/*
 * XREFs of ??_GCResource@@MEAAPEAXI@Z @ 0x180024B80
 * Callers:
 *     ??_GCPushTransformInstruction@@EEAAPEAXI@Z @ 0x180014C90 (--_GCPushTransformInstruction@@EEAAPEAXI@Z.c)
 *     ??1CRenderDataVisual@@MEAA@XZ @ 0x180014FF4 (--1CRenderDataVisual@@MEAA@XZ.c)
 *     ??_GCCanvasVisual@@MEAAPEAXI@Z @ 0x180016790 (--_GCCanvasVisual@@MEAAPEAXI@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x1800183B0 (--1CVisual@@MEAA@XZ.c)
 *     ?SetContent@CVisual@@UEAAJPEAVCResource@@@Z @ 0x180018780 (-SetContent@CVisual@@UEAAJPEAVCResource@@@Z.c)
 *     ??_ECAtlasedImage@@MEAAPEAXI@Z @ 0x18001FB20 (--_ECAtlasedImage@@MEAAPEAXI@Z.c)
 *     ??_ECBitmapSource@@MEAAPEAXI@Z @ 0x180025180 (--_ECBitmapSource@@MEAAPEAXI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180029DB0 (-ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002A0B0 (-GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

CResource *__fastcall CResource::`scalar deleting destructor'(CResource *this, char a2)
{
  void (__fastcall *v4)(WPF::ProcessHeapImpl *, void *); // rax

  *(_QWORD *)this = &CResource::`vftable';
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 128LL))(
    *((_QWORD *)this + 2),
    *((unsigned int *)this + 6));
  *(_QWORD *)this = &CBaseObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    v4 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v4 == WPF::ProcessHeapImpl::Free )
      HeapFree(g_hProcessHeap, 0, this);
    else
      v4(WPF::g_pProcessHeap, this);
  }
  return this;
}
