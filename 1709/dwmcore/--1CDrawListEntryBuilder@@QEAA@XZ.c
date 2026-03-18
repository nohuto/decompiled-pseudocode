/*
 * XREFs of ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x180063320
 * Callers:
 *     ?GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180022A30 (-GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListC.c)
 *     ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180028FA0 (-GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDraw.c)
 *     ??1CDrawingContext@@MEAA@XZ @ 0x18004096C (--1CDrawingContext@@MEAA@XZ.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180046EB0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006A670 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x18006F088 (-UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectS.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@@Z @ 0x18015275C (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@@Z.c)
 *     ?GenerateDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18015CFF0 (-GenerateDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawLi.c)
 *     ?GenerateDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801679F0 (-GenerateDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?Reset@CDrawListEntryBuilder@@QEAAXXZ @ 0x180061838 (-Reset@CDrawListEntryBuilder@@QEAAXXZ.c)
 *     ?Clear@Mesh@@AEAAXXZ @ 0x18006474C (-Clear@Mesh@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDrawListEntryBuilder::~CDrawListEntryBuilder(CDrawListEntryBuilder *this)
{
  __int64 v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  __int64 v6; // rcx
  _QWORD *v7; // rdi
  void *v8; // r8
  void *v9; // r8
  void *v10; // r8
  void *v11; // r8
  _QWORD *v12; // rdi
  void *v13; // r8
  void *v14; // r8
  void *v15; // r8
  void *v16; // r8
  void *v17; // r8
  void *v18; // rcx
  void *v19; // rcx

  CDrawListEntryBuilder::Reset(this);
  v2 = *((_QWORD *)this + 307);
  if ( v2 )
  {
    *((_QWORD *)this + 307) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  v3 = (void *)*((_QWORD *)this + 294);
  if ( v3 != *((void **)this + 295) )
  {
    WPF::ProcessHeapImpl::Free(v3);
    *((_QWORD *)this + 294) = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 169);
  if ( v4 != *((void **)this + 170) )
  {
    WPF::ProcessHeapImpl::Free(v4);
    *((_QWORD *)this + 169) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 45);
  if ( v5 != *((void **)this + 46) )
  {
    WPF::ProcessHeapImpl::Free(v5);
    *((_QWORD *)this + 45) = 0LL;
  }
  v6 = *((_QWORD *)this + 44);
  if ( v6 )
  {
    *((_QWORD *)this + 44) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  Mesh::Clear((CDrawListEntryBuilder *)((char *)this + 112));
  v7 = (_QWORD *)*((_QWORD *)this + 38);
  if ( v7 )
  {
    v8 = (void *)v7[2];
    if ( v8 )
      HeapFree(WPF::g_processHeap, 0, v8);
    v9 = (void *)v7[5];
    if ( v9 )
      HeapFree(WPF::g_processHeap, 0, v9);
    v10 = (void *)v7[9];
    if ( v10 )
      HeapFree(WPF::g_processHeap, 0, v10);
    v11 = (void *)v7[14];
    if ( v11 )
      HeapFree(WPF::g_processHeap, 0, v11);
    HeapFree(WPF::g_processHeap, 0, v7);
  }
  v12 = (_QWORD *)*((_QWORD *)this + 36);
  if ( v12 )
  {
    v13 = (void *)v12[2];
    if ( v13 )
      HeapFree(WPF::g_processHeap, 0, v13);
    v14 = (void *)v12[5];
    if ( v14 )
      HeapFree(WPF::g_processHeap, 0, v14);
    v15 = (void *)v12[9];
    if ( v15 )
      HeapFree(WPF::g_processHeap, 0, v15);
    v16 = (void *)v12[14];
    if ( v16 )
      HeapFree(WPF::g_processHeap, 0, v16);
    HeapFree(WPF::g_processHeap, 0, v12);
  }
  v17 = (void *)*((_QWORD *)this + 32);
  if ( v17 )
    HeapFree(WPF::g_processHeap, 0, v17);
  v18 = (void *)*((_QWORD *)this + 14);
  if ( v18 != *((void **)this + 15) )
  {
    WPF::ProcessHeapImpl::Free(v18);
    *((_QWORD *)this + 14) = 0LL;
  }
  v19 = (void *)*((_QWORD *)this + 5);
  if ( v19 != *((void **)this + 6) )
  {
    WPF::ProcessHeapImpl::Free(v19);
    *((_QWORD *)this + 5) = 0LL;
  }
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((char *)this + 32);
}
