/*
 * XREFs of ?IsReadyToDraw@CMaskBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x180098E50
 * Callers:
 *     ?EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z @ 0x180098F50 (-EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z.c)
 *     ?DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18009C9E0 (-DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilR.c)
 *     ?IsEmptyDrawing@CSpriteVisualContent@@UEBA_NXZ @ 0x18009CC60 (-IsEmptyDrawing@CSpriteVisualContent@@UEBA_NXZ.c)
 *     ?HasNonEmptyContent@CSpriteVisual@@UEAA_NXZ @ 0x18009D980 (-HasNonEmptyContent@CSpriteVisual@@UEAA_NXZ.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009F520 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A9B10 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?IsReadyToDraw@CGradientBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x180011D80 (-IsReadyToDraw@CGradientBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800954F0 (-IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800999C0 (-IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsReadyToDraw@CColorBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x18009ACF0 (-IsReadyToDraw@CColorBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CMaskBrush::IsReadyToDraw(CMaskBrush *this, struct CDrawingContext *a2, bool *a3)
{
  bool v3; // si
  CColorBrush *v5; // rcx
  char (__fastcall *v8)(CEffectBrush *, struct CDrawingContext *, bool *); // rax
  char IsReadyToDraw; // al
  bool v10; // bl
  CSurfaceBrush *v11; // rcx
  bool (__fastcall *v12)(CSurfaceBrush *__hidden, struct CDrawingContext *, bool *); // rax
  bool v13; // al
  bool result; // al
  bool v15; // [rsp+40h] [rbp+8h] BYREF
  bool v16; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  v5 = (CColorBrush *)*((_QWORD *)this + 10);
  v15 = 0;
  v16 = 0;
  if ( !v5 )
    goto LABEL_12;
  v8 = *(char (__fastcall **)(CEffectBrush *, struct CDrawingContext *, bool *))(*(_QWORD *)v5 + 272LL);
  if ( (char *)v8 == (char *)CColorBrush::IsReadyToDraw )
  {
    IsReadyToDraw = CColorBrush::IsReadyToDraw(v5, a2, &v15);
  }
  else if ( v8 == CEffectBrush::IsReadyToDraw )
  {
    IsReadyToDraw = CEffectBrush::IsReadyToDraw(v5, a2, &v15);
  }
  else if ( (char *)v8 == (char *)CGradientBrush::IsReadyToDraw )
  {
    IsReadyToDraw = CGradientBrush::IsReadyToDraw(v5, a2, &v15);
  }
  else
  {
    IsReadyToDraw = v8(v5, a2, &v15);
  }
  v10 = 1;
  if ( IsReadyToDraw )
  {
    v11 = (CSurfaceBrush *)*((_QWORD *)this + 9);
    if ( !v11
      || ((v12 = *(bool (__fastcall **)(CSurfaceBrush *__hidden, struct CDrawingContext *, bool *))(*(_QWORD *)v11
                                                                                                  + 272LL),
           v12 != CSurfaceBrush::IsReadyToDraw)
        ? (v13 = v12(v11, a2, &v16))
        : (v13 = CSurfaceBrush::IsReadyToDraw(v11, a2, &v16)),
          v13) )
    {
      v3 = 1;
    }
  }
  if ( !v15 && !v16 )
LABEL_12:
    v10 = 0;
  result = v3;
  *a3 = v10;
  return result;
}
