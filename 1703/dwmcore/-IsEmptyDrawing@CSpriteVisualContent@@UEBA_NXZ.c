/*
 * XREFs of ?IsEmptyDrawing@CSpriteVisualContent@@UEBA_NXZ @ 0x18008CA40
 * Callers:
 *     ?AddOcclusionInformation@CLinearGradientBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x18001A960 (-AddOcclusionInformation@CLinearGradientBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?GetBounds@CSurfaceBrush@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180038CC0 (-GetBounds@CSurfaceBrush@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@.c)
 *     ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180038E60 (-AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?GetBounds@CMaskBrush@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800398E0 (-GetBounds@CMaskBrush@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMi.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180088C60 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?HasNonEmptyContent@CSpriteVisual@@UEAA_NXZ @ 0x18008C700 (-HasNonEmptyContent@CSpriteVisual@@UEAA_NXZ.c)
 * Callees:
 *     ?IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x180010B50 (-IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800380B0 (-IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsReadyToDraw@CMaskBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800393D0 (-IsReadyToDraw@CMaskBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsReadyToDraw@CNineGridBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800BFA40 (-IsReadyToDraw@CNineGridBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CSpriteVisualContent::IsEmptyDrawing(CSpriteVisualContent *this)
{
  __int64 v1; // rax
  char v2; // bl
  bool (__fastcall *v3)(CNineGridBrush *__hidden, struct CDrawingContext *, bool *); // rax
  char IsReadyToDraw; // al
  bool v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)this;
  v2 = 0;
  v6 = 0;
  v3 = *(bool (__fastcall **)(CNineGridBrush *__hidden, struct CDrawingContext *, bool *))(v1 + 224);
  if ( (char *)v3 == (char *)CMaskBrush::IsReadyToDraw )
  {
    IsReadyToDraw = CMaskBrush::IsReadyToDraw(this, 0LL, &v6);
  }
  else if ( (char *)v3 == (char *)CSurfaceBrush::IsReadyToDraw )
  {
    IsReadyToDraw = CSurfaceBrush::IsReadyToDraw(this, 0LL, &v6);
  }
  else if ( v3 == CNineGridBrush::IsReadyToDraw )
  {
    IsReadyToDraw = CNineGridBrush::IsReadyToDraw(this, 0LL, &v6);
  }
  else if ( (char *)v3 == (char *)CEffectBrush::IsReadyToDraw )
  {
    IsReadyToDraw = CEffectBrush::IsReadyToDraw(this, 0LL, &v6);
  }
  else
  {
    IsReadyToDraw = v3(this, 0LL, &v6);
  }
  if ( !IsReadyToDraw || v6 )
    return 1;
  return v2;
}
