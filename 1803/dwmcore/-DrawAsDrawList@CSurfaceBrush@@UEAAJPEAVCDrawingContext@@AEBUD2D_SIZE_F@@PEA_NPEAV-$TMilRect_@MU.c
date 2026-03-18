/*
 * XREFs of ?DrawAsDrawList@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180099B40
 * Callers:
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18004A1F0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z @ 0x180007DA8 (-DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18009C9E0 (-DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilR.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::DrawAsDrawList(
        CCompositionSurfaceBitmap *this,
        COverlayContext **a2,
        struct D2D_SIZE_F *a3,
        __int64 a4,
        int a5,
        struct CDrawListCache *a6)
{
  int (__fastcall ***v7)(_QWORD, GUID *, struct ISwapChainContent **); // rcx
  int v10; // eax
  unsigned int v11; // ebx
  struct ISwapChainContent *v12; // rcx
  int v14; // eax
  struct ISwapChainContent *v15; // [rsp+30h] [rbp-28h] BYREF
  bool v16; // [rsp+60h] [rbp+8h] BYREF

  v15 = 0LL;
  v7 = (int (__fastcall ***)(_QWORD, GUID *, struct ISwapChainContent **))*((_QWORD *)this + 12);
  if ( !v7 || (**v7)(v7, &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2, &v15) < 0 )
    goto LABEL_3;
  v16 = 0;
  v14 = CDrawingContext::DrawAsOverlay(a2, v15, &v16);
  v11 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x170u);
    goto LABEL_5;
  }
  if ( !v16 && !(*(unsigned __int8 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)v15 + 112LL))(v15) )
  {
LABEL_3:
    v10 = CSpriteVisualContent::DrawAsDrawList(this, (CDrawingContext *)a2, a3, a5, a6);
    v11 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x17Fu);
  }
LABEL_5:
  v12 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return v11;
}
