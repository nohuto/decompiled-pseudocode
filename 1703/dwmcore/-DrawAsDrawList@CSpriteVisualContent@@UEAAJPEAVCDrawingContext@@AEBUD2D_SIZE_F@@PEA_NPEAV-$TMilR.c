/*
 * XREFs of ?DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18008CCE0
 * Callers:
 *     ?Draw@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800105A0 (-Draw@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMil.c)
 *     ?DrawAsDrawList@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180038C00 (-DrawAsDrawList@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MU.c)
 *     ?DrawAsDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180170B40 (-DrawAsDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMi.c)
 * Callees:
 *     ?IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x180010B50 (-IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?PrepareForDrawing@CEffectBrush@@UEAAJPEAVCDrawingContext@@@Z @ 0x180010E20 (-PrepareForDrawing@CEffectBrush@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?EnsureBrushGraph@CEffectBrush@@MEAAJ_N@Z @ 0x180010EA0 (-EnsureBrushGraph@CEffectBrush@@MEAAJ_N@Z.c)
 *     ?IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800380B0 (-IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?PrepareForDrawing@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@@Z @ 0x180038B00 (-PrepareForDrawing@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?IsReadyToDraw@CMaskBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800393D0 (-IsReadyToDraw@CMaskBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z @ 0x180039790 (-EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z.c)
 *     ?PrepareForDrawing@CMaskBrush@@UEAAJPEAVCDrawingContext@@@Z @ 0x180039830 (-PrepareForDrawing@CMaskBrush@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsReadyToDraw@CColorBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x18008B900 (-IsReadyToDraw@CColorBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?PrepareForDrawing@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@@Z @ 0x18008CAD0 (-PrepareForDrawing@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18008F660 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 *     ?PrepareForDrawing@CNineGridBrush@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800BF9F0 (-PrepareForDrawing@CNineGridBrush@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?IsReadyToDraw@CNineGridBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800BFA40 (-IsReadyToDraw@CNineGridBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSpriteVisualContent::DrawAsDrawList(
        CMaskBrush *this,
        struct CDrawingContext *a2,
        struct D2D_SIZE_F *a3,
        __int64 a4,
        __int64 a5,
        CDrawListCache *a6)
{
  float width; // xmm0_4
  char (__fastcall *v10)(CEffectBrush *, struct CDrawingContext *, bool *); // rax
  char IsReadyToDraw; // al
  __int64 (__fastcall *v12)(CSurfaceBrush *, struct CDrawingContext *); // rax
  int v13; // eax
  unsigned int v14; // esi
  __int64 (__fastcall *v15)(CEffectBrush *, char); // rax
  int v16; // eax
  int v17; // eax
  unsigned int v18; // ebx
  bool v20; // [rsp+60h] [rbp+18h] BYREF

  width = a3->width;
  v20 = 0;
  if ( width <= 0.0 || a3->height <= 0.0 )
    return 0LL;
  v10 = *(char (__fastcall **)(CEffectBrush *, struct CDrawingContext *, bool *))(*(_QWORD *)this + 224LL);
  if ( (char *)v10 == (char *)CMaskBrush::IsReadyToDraw )
  {
    IsReadyToDraw = CMaskBrush::IsReadyToDraw(this, a2, &v20);
  }
  else if ( v10 == CColorBrush::IsReadyToDraw )
  {
    IsReadyToDraw = CColorBrush::IsReadyToDraw(this, a2, &v20);
  }
  else if ( (char *)v10 == (char *)CNineGridBrush::IsReadyToDraw )
  {
    IsReadyToDraw = CNineGridBrush::IsReadyToDraw(this, a2, &v20);
  }
  else if ( (char *)v10 == (char *)CSurfaceBrush::IsReadyToDraw )
  {
    IsReadyToDraw = CSurfaceBrush::IsReadyToDraw(this, a2, &v20);
  }
  else
  {
    IsReadyToDraw = v10 == CEffectBrush::IsReadyToDraw
                  ? CEffectBrush::IsReadyToDraw(this, a2, &v20)
                  : v10(this, a2, &v20);
  }
  if ( !IsReadyToDraw || v20 )
    return 0LL;
  v12 = *(__int64 (__fastcall **)(CSurfaceBrush *, struct CDrawingContext *))(*(_QWORD *)this + 232LL);
  if ( v12 == CMaskBrush::PrepareForDrawing )
  {
    v13 = CMaskBrush::PrepareForDrawing(this, a2);
  }
  else if ( v12 == CSpriteVisualContent::PrepareForDrawing )
  {
    v13 = CSpriteVisualContent::PrepareForDrawing(this, a2);
  }
  else if ( v12 == CNineGridBrush::PrepareForDrawing )
  {
    v13 = CNineGridBrush::PrepareForDrawing(this, a2);
  }
  else if ( v12 == CSurfaceBrush::PrepareForDrawing )
  {
    v13 = CSurfaceBrush::PrepareForDrawing(this, a2);
  }
  else if ( v12 == CEffectBrush::PrepareForDrawing )
  {
    v13 = CEffectBrush::PrepareForDrawing(this, a2);
  }
  else
  {
    v13 = v12(this, a2);
  }
  v14 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x77u);
    return v14;
  }
  v15 = *(__int64 (__fastcall **)(CEffectBrush *, char))(*(_QWORD *)this + 256LL);
  if ( v15 == CMaskBrush::EnsureBrushGraph )
  {
    v16 = CMaskBrush::EnsureBrushGraph(this, 0);
  }
  else if ( v15 == CEffectBrush::EnsureBrushGraph )
  {
    v16 = CEffectBrush::EnsureBrushGraph(this, 0);
  }
  else
  {
    v16 = v15(this, 0);
  }
  v14 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x7Au);
    return v14;
  }
  v17 = CContent::DrawAsDrawList(this, a2, a3, a5, a6);
  v18 = v17;
  if ( v17 >= 0 )
    return 0LL;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x7Cu);
  return v18;
}
