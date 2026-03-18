/*
 * XREFs of ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800AD960
 * Callers:
 *     ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180007680 (-GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDraw.c)
 *     ??1CDrawingContext@@EEAA@XZ @ 0x18006E594 (--1CDrawingContext@@EEAA@XZ.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x18008DD3C (-UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawLi.c)
 *     ?GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18009CE90 (-GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListC.c)
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800B35A0 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@PEBVCDrawListBrush@@PEAVCRenderingEffectFactory@@@Z @ 0x18017BC04 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@PE.c)
 *     ?GenerateDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180185FF0 (-GenerateDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawLi.c)
 *     ?GenerateDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180190480 (-GenerateDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801C1450 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x1802109EC (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Reset@CDrawListEntryBuilder@@QEAAXXZ @ 0x1800AD784 (-Reset@CDrawListEntryBuilder@@QEAAXXZ.c)
 *     ?Clear@Mesh@@AEAAXXZ @ 0x1800B1BF0 (-Clear@Mesh@@AEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDrawListEntryBuilder::~CDrawListEntryBuilder(CMILRefCountBase **this)
{
  CMILRefCountBase *v2; // rcx
  CMILRefCountBase *v3; // rcx
  CMILRefCountBase *v4; // rcx
  CMILRefCountBase *v5; // rcx
  CMILRefCountBase *v6; // rcx
  void **v7; // rdi
  CMILRefCountBase *v8; // rsi
  void *v9; // r8
  void *v10; // r8
  void *v11; // r8
  void *v12; // r8
  CMILRefCountBase *v13; // rsi
  void *v14; // r8
  void *v15; // r8
  void *v16; // r8
  void *v17; // r8
  CMILRefCountBase *v18; // r8
  CMILRefCountBase *v19; // rcx

  CDrawListEntryBuilder::Reset((CDrawListEntryBuilder *)this);
  v2 = this[307];
  if ( v2 )
  {
    this[307] = 0LL;
    CMILRefCountBase::Release(v2);
  }
  v3 = this[294];
  if ( v3 != this[295] )
  {
    operator delete(v3);
    this[294] = 0LL;
  }
  v4 = this[169];
  if ( v4 != this[170] )
  {
    operator delete(v4);
    this[169] = 0LL;
  }
  v5 = this[45];
  if ( v5 != this[46] )
  {
    operator delete(v5);
    this[45] = 0LL;
  }
  v6 = this[44];
  if ( v6 )
  {
    this[44] = 0LL;
    (*(void (__fastcall **)(CMILRefCountBase *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = (void **)(this + 14);
  Mesh::Clear((Mesh *)(this + 14));
  v8 = this[38];
  if ( v8 )
  {
    v9 = (void *)*((_QWORD *)v8 + 3);
    if ( v9 )
      HeapFree(WPF::g_processHeap, 0, v9);
    v10 = (void *)*((_QWORD *)v8 + 6);
    if ( v10 )
      HeapFree(WPF::g_processHeap, 0, v10);
    v11 = (void *)*((_QWORD *)v8 + 10);
    if ( v11 )
      HeapFree(WPF::g_processHeap, 0, v11);
    v12 = (void *)*((_QWORD *)v8 + 15);
    if ( v12 )
      HeapFree(WPF::g_processHeap, 0, v12);
    operator delete(v8, 0x88uLL);
  }
  v13 = this[36];
  if ( v13 )
  {
    v14 = (void *)*((_QWORD *)v13 + 3);
    if ( v14 )
      HeapFree(WPF::g_processHeap, 0, v14);
    v15 = (void *)*((_QWORD *)v13 + 6);
    if ( v15 )
      HeapFree(WPF::g_processHeap, 0, v15);
    v16 = (void *)*((_QWORD *)v13 + 10);
    if ( v16 )
      HeapFree(WPF::g_processHeap, 0, v16);
    v17 = (void *)*((_QWORD *)v13 + 15);
    if ( v17 )
      HeapFree(WPF::g_processHeap, 0, v17);
    operator delete(v13, 0x88uLL);
  }
  v18 = this[32];
  if ( v18 )
    HeapFree(WPF::g_processHeap, 0, v18);
  if ( this[14] != this[15] )
  {
    operator delete(*v7);
    *v7 = 0LL;
  }
  v19 = this[5];
  if ( v19 != this[6] )
  {
    operator delete(v19);
    this[5] = 0LL;
  }
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(this + 4);
}
