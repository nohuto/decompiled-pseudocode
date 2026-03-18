/*
 * XREFs of ?DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18009C9E0
 * Callers:
 *     ?Draw@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000A700 (-Draw@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMil.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18004A1F0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?DrawAsDrawList@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180099B40 (-DrawAsDrawList@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MU.c)
 *     ?DrawAsDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180185D60 (-DrawAsDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TM.c)
 *     ?DrawAsDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180189050 (-DrawAsDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMi.c)
 *     ?DrawAsDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1801B4550 (-DrawAsDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_.c)
 * Callees:
 *     ?PrepareForDrawing@CNineGridBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180003F10 (-PrepareForDrawing@CNineGridBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?IsReadyToDraw@CNineGridBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x180029AC0 (-IsReadyToDraw@CNineGridBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?EnsureBrushGraph@CNineGridBrush@@MEAAJ_N@Z @ 0x180029B20 (-EnsureBrushGraph@CNineGridBrush@@MEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800954F0 (-IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?EnsureBrushGraph@CEffectBrush@@MEAAJ_N@Z @ 0x180095850 (-EnsureBrushGraph@CEffectBrush@@MEAAJ_N@Z.c)
 *     ?PrepareForDrawing@CMaskBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180098DA0 (-PrepareForDrawing@CMaskBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?IsReadyToDraw@CMaskBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x180098E50 (-IsReadyToDraw@CMaskBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z @ 0x180098F50 (-EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z.c)
 *     ?PrepareForDrawing@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180099930 (-PrepareForDrawing@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800999C0 (-IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsReadyToDraw@CColorBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x18009ACF0 (-IsReadyToDraw@CColorBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18009B2F0 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 *     _Init_thread_footer @ 0x1800DB248 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800DB2A8 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSpriteVisualContent::DrawAsDrawList(
        CCompositionSurfaceBitmap *this,
        CDrawingContext *a2,
        struct D2D_SIZE_F *a3,
        __int64 a4,
        int a5,
        struct CDrawListCache *a6)
{
  float width; // xmm0_4
  bool (__fastcall *v11)(CNineGridBrush *, struct CDrawingContext *, bool *); // rax
  char IsReadyToDraw; // al
  __int64 (__fastcall *v13)(CSurfaceBrush *, struct CDrawingContext *, const struct D2D_SIZE_F *); // rax
  int v14; // eax
  unsigned int v15; // esi
  __int64 (__fastcall *v16)(CNineGridBrush *, char); // rax
  int v17; // eax
  int v18; // eax
  unsigned int v19; // ebx
  bool v21; // [rsp+60h] [rbp+18h] BYREF

  if ( dword_1802D6BA8 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1802D6BA8);
    if ( dword_1802D6BA8 == -1 )
    {
      dword_1802D4874 = -2147022876;
      Init_thread_footer(&dword_1802D6BA8);
    }
  }
  width = a3->width;
  v21 = 0;
  if ( width > 0.0 && a3->height > 0.0 )
  {
    v11 = *(bool (__fastcall **)(CNineGridBrush *, struct CDrawingContext *, bool *))(*(_QWORD *)this + 272LL);
    if ( v11 == CMaskBrush::IsReadyToDraw )
    {
      IsReadyToDraw = CMaskBrush::IsReadyToDraw(this, a2, &v21);
    }
    else if ( (char *)v11 == (char *)CColorBrush::IsReadyToDraw )
    {
      IsReadyToDraw = CColorBrush::IsReadyToDraw(this, a2, &v21);
    }
    else if ( (char *)v11 == (char *)CSurfaceBrush::IsReadyToDraw )
    {
      IsReadyToDraw = CSurfaceBrush::IsReadyToDraw(this, a2, &v21);
    }
    else if ( (char *)v11 == (char *)CEffectBrush::IsReadyToDraw )
    {
      IsReadyToDraw = CEffectBrush::IsReadyToDraw(this, a2, &v21);
    }
    else
    {
      IsReadyToDraw = v11 == CNineGridBrush::IsReadyToDraw
                    ? CNineGridBrush::IsReadyToDraw(this, a2, &v21)
                    : v11(this, a2, &v21);
    }
    if ( IsReadyToDraw && !v21 )
    {
      v13 = *(__int64 (__fastcall **)(CSurfaceBrush *, struct CDrawingContext *, const struct D2D_SIZE_F *))(*(_QWORD *)this + 288LL);
      if ( v13 == CMaskBrush::PrepareForDrawing )
      {
        v14 = CMaskBrush::PrepareForDrawing(this, a2, a3);
      }
      else if ( v13 == CSurfaceBrush::PrepareForDrawing )
      {
        v14 = CSurfaceBrush::PrepareForDrawing(this, a2, a3);
      }
      else if ( v13 == CNineGridBrush::PrepareForDrawing )
      {
        v14 = CNineGridBrush::PrepareForDrawing(this, a2, a3);
      }
      else
      {
        v14 = v13(this, a2, a3);
      }
      v15 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802D4870, 2u, v14, 0x9Du);
      }
      else
      {
        v16 = *(__int64 (__fastcall **)(CNineGridBrush *, char))(*(_QWORD *)this + 304LL);
        if ( v16 == CMaskBrush::EnsureBrushGraph )
        {
          v17 = CMaskBrush::EnsureBrushGraph(this, 0);
        }
        else if ( v16 == CEffectBrush::EnsureBrushGraph )
        {
          v17 = CEffectBrush::EnsureBrushGraph(this, 0);
        }
        else if ( v16 == CNineGridBrush::EnsureBrushGraph )
        {
          v17 = CNineGridBrush::EnsureBrushGraph(this, 0);
        }
        else
        {
          v17 = v16(this, 0);
        }
        v15 = v17;
        if ( v17 >= 0 )
        {
          v18 = CContent::DrawAsDrawList((CComposition **)this, (const struct CVisualTree **)a2, a3, a4, a5, a6);
          v19 = v18;
          if ( v18 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802D4870, 2u, v18, 0xA2u);
            return v19;
          }
          return 0LL;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802D4870, 2u, v17, 0xA0u);
      }
      return v15;
    }
  }
  return 0LL;
}
