/*
 * XREFs of ?GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCSpriteVisualContent@@XZ @ 0x18018A428
 * Callers:
 *     ?RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z @ 0x1800093C4 (-RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRe.c)
 *     ?Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800097C0 (-Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180009F90 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEB.c)
 *     ?GetBoundsWithEffects@CLayerVisual@@UEBAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18000A140 (-GetBoundsWithEffects@CLayerVisual@@UEBAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?GetMaskBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180198470 (-GetMaskBounds@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rect.c)
 *     ?GetUpdatedDropShadowBounds@CLayerVisual@@QEBAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18019855C (-GetUpdatedDropShadowBounds@CLayerVisual@@QEBAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 * Callees:
 *     ?GetMaskContentNoRef@CDropShadow@@AEAAJAEBUShadowIntermediates@1@PEAPEAVCSpriteVisualContent@@@Z @ 0x18018A30C (-GetMaskContentNoRef@CDropShadow@@AEAAJAEBUShadowIntermediates@1@PEAPEAVCSpriteVisualContent@@@Z.c)
 */

struct CSpriteVisualContent *__fastcall CDropShadow::GetMaskForLayerVisualNoRef(CDropShadow *this)
{
  struct CSpriteVisualContent *v2; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 47) == 1 )
    return 0LL;
  v2 = 0LL;
  CDropShadow::GetMaskContentNoRef(this, (CDropShadow *)((char *)this + 192), &v2);
  return v2;
}
