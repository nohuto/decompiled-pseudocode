/*
 * XREFs of ?IsEmptyDrawing@CSpriteVisualContent@@UEBA_NXZ @ 0x180022D50
 * Callers:
 *     ?HasNonEmptyContent@CSpriteVisual@@UEAA_NXZ @ 0x1800222A0 (-HasNonEmptyContent@CSpriteVisual@@UEAA_NXZ.c)
 *     ?GetBounds@CMaskBrush@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180024DB0 (-GetBounds@CMaskBrush@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMi.c)
 *     ?GetBounds@CSurfaceBrush@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180025960 (-GetBounds@CSurfaceBrush@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@.c)
 *     ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180025B00 (-AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180052910 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?IsReadyToDraw@CMaskBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800247B0 (-IsReadyToDraw@CMaskBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x180025110 (-IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsReadyToDraw@CNineGridBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x180070580 (-IsReadyToDraw@CNineGridBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800829C0 (-IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CSpriteVisualContent::IsEmptyDrawing(CSpriteVisualContent *this)
{
  __int64 v1; // rax
  char v2; // bl
  bool (*v3)(CEffectBrush *__hidden, struct CDrawingContext *, bool *); // rax
  char IsReadyToDraw; // al
  bool v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)this;
  v2 = 0;
  v6 = 0;
  v3 = *(bool (**)(CEffectBrush *__hidden, struct CDrawingContext *, bool *))(v1 + 240);
  if ( v3 == CMaskBrush::IsReadyToDraw )
  {
    IsReadyToDraw = CMaskBrush::IsReadyToDraw(this, 0LL, &v6);
  }
  else if ( (char *)v3 == (char *)CSurfaceBrush::IsReadyToDraw )
  {
    IsReadyToDraw = CSurfaceBrush::IsReadyToDraw(this, 0LL, &v6);
  }
  else if ( v3 == CEffectBrush::IsReadyToDraw )
  {
    IsReadyToDraw = CEffectBrush::IsReadyToDraw(this, 0LL, &v6);
  }
  else if ( (char *)v3 == (char *)CNineGridBrush::IsReadyToDraw )
  {
    IsReadyToDraw = CNineGridBrush::IsReadyToDraw(this, 0LL, &v6);
  }
  else
  {
    IsReadyToDraw = ((__int64 (__fastcall *)(CSpriteVisualContent *, _QWORD, bool *))v3)(this, 0LL, &v6);
  }
  if ( !IsReadyToDraw || v6 )
    return 1;
  return v2;
}
