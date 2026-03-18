/*
 * XREFs of ?DrawAsDrawList@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180025750
 * Callers:
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180053BB0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180022710 (-DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilR.c)
 *     ?DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z @ 0x18003B044 (-DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::DrawAsDrawList(
        CNineGridBrush *this,
        struct CDrawingContext *a2,
        struct D2D_SIZE_F *a3,
        __int64 a4,
        __int64 a5,
        struct CDrawListCache *a6)
{
  int v10; // eax
  unsigned int v11; // ebx
  struct ISwapChainContent *v12; // rcx
  int v14; // eax
  struct ISwapChainContent *v15; // [rsp+30h] [rbp-28h] BYREF
  bool v16; // [rsp+60h] [rbp+8h] BYREF

  v15 = 0LL;
  if ( !*((_QWORD *)this + 13)
    || (***((int (__fastcall ****)(_QWORD, GUID *, struct ISwapChainContent **))this + 13))(
         *((_QWORD *)this + 13),
         &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2,
         &v15) < 0 )
  {
    goto LABEL_3;
  }
  v16 = 0;
  v14 = CDrawingContext::DrawAsOverlay(a2, v15, &v16);
  v11 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x19Eu);
    goto LABEL_5;
  }
  if ( !v16 && !(*(unsigned __int8 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)v15 + 112LL))(v15) )
  {
LABEL_3:
    v10 = CSpriteVisualContent::DrawAsDrawList(this, a2, a3, a4, a5, a6);
    v11 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x1ADu);
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
