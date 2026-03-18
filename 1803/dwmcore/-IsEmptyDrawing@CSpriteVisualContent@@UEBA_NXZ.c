/*
 * XREFs of ?IsEmptyDrawing@CSpriteVisualContent@@UEBA_NXZ @ 0x18009CC60
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18004AA70 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?GetBounds@CSurfaceBrush@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180099D20 (-GetBounds@CSurfaceBrush@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@.c)
 *     ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180099E90 (-AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?IsReadyToDraw@CNineGridBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x180029AC0 (-IsReadyToDraw@CNineGridBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800954F0 (-IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsReadyToDraw@CMaskBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x180098E50 (-IsReadyToDraw@CMaskBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800999C0 (-IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CSpriteVisualContent::IsEmptyDrawing(CSpriteVisualContent *this)
{
  __int64 v1; // rax
  char v2; // bl
  bool (__fastcall *v3)(CNineGridBrush *, struct CDrawingContext *, bool *); // rax
  char IsReadyToDraw; // al
  bool v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)this;
  v2 = 0;
  v6 = 0;
  v3 = *(bool (__fastcall **)(CNineGridBrush *, struct CDrawingContext *, bool *))(v1 + 272);
  if ( v3 == CMaskBrush::IsReadyToDraw )
  {
    IsReadyToDraw = CMaskBrush::IsReadyToDraw(this, 0LL, &v6);
  }
  else if ( (char *)v3 == (char *)CEffectBrush::IsReadyToDraw )
  {
    IsReadyToDraw = CEffectBrush::IsReadyToDraw(this, 0LL, &v6);
  }
  else if ( (char *)v3 == (char *)CSurfaceBrush::IsReadyToDraw )
  {
    IsReadyToDraw = CSurfaceBrush::IsReadyToDraw(this, 0LL, &v6);
  }
  else if ( v3 == CNineGridBrush::IsReadyToDraw )
  {
    IsReadyToDraw = CNineGridBrush::IsReadyToDraw(this, 0LL, &v6);
  }
  else
  {
    IsReadyToDraw = v3(this, 0LL, &v6);
  }
  if ( v6 || !IsReadyToDraw )
    return 1;
  return v2;
}
