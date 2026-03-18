/*
 * XREFs of ?GetLayerPointAndSize@CTreeEffectLayer@@SA?AUMilPointAndSizeL@@PEBVCEffectBrush@@AEBU2@AEBUMilPointAndSizeF@@@Z @ 0x18001027C
 * Callers:
 *     ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x18000D620 (-PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndSize.c)
 *     ?Create@CTreeEffectLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@PEAVCEffectBrush@@PEBVCVisual@@AEBUMilPointAndSizeF@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x18001AA50 (-Create@CTreeEffectLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@PEAVCEffectBrus.c)
 * Callees:
 *     ?HasBlurEffectNode@CEffectBrush@@QEBA_NXZ @ 0x180010660 (-HasBlurEffectNode@CEffectBrush@@QEBA_NXZ.c)
 */

_OWORD *__fastcall CTreeEffectLayer::GetLayerPointAndSize(_OWORD *a1, CEffectBrush *a2, _OWORD *a3, __m128 *a4)
{
  *a1 = *a3;
  if ( CEffectBrush::HasBlurEffectNode(a2) )
    *a1 = _mm_cvttps_epi32(*a4);
  return a1;
}
