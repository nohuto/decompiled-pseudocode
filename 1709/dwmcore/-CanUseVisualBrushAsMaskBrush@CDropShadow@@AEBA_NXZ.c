/*
 * XREFs of ?CanUseVisualBrushAsMaskBrush@CDropShadow@@AEBA_NXZ @ 0x18015F720
 * Callers:
 *     ?DrawAsDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18015F810 (-DrawAsDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMi.c)
 *     ?GetBrushParameters@CDropShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801602C0 (-GetBrushParameters@CDropShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetEffectiveMaskBrushNoRef@CDropShadow@@AEBAPEAVCSpriteVisualContent@@PEAVCVisual@@@Z @ 0x1801609CC (-GetEffectiveMaskBrushNoRef@CDropShadow@@AEBAPEAVCSpriteVisualContent@@PEAVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDropShadow::CanUseVisualBrushAsMaskBrush(CDropShadow *this)
{
  bool result; // al

  if ( this == CDropShadow::s_pFastShadow )
    return 0;
  result = 1;
  if ( *((_DWORD *)this + 49) != 1 )
    return 0;
  return result;
}
