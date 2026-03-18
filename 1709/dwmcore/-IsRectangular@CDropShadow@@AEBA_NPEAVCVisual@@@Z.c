/*
 * XREFs of ?IsRectangular@CDropShadow@@AEBA_NPEAVCVisual@@@Z @ 0x180160E0C
 * Callers:
 *     ?CanUseFastShadow@CDropShadow@@AEBA_NAEBUD2D_SIZE_F@@PEAVCVisual@@@Z @ 0x18015F6C0 (-CanUseFastShadow@CDropShadow@@AEBA_NAEBUD2D_SIZE_F@@PEAVCVisual@@@Z.c)
 *     ?DrawAsDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18015F810 (-DrawAsDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMi.c)
 *     ?GetBrushParameters@CDropShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801602C0 (-GetBrushParameters@CDropShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetEffectiveMaskBrushNoRef@CDropShadow@@AEBAPEAVCSpriteVisualContent@@PEAVCVisual@@@Z @ 0x1801609CC (-GetEffectiveMaskBrushNoRef@CDropShadow@@AEBAPEAVCSpriteVisualContent@@PEAVCVisual@@@Z.c)
 */

char __fastcall CDropShadow::IsRectangular(CDropShadow *this, struct CVisual *a2)
{
  struct CSpriteVisualContent *EffectiveMaskBrushNoRef; // rax
  char v3; // bl

  EffectiveMaskBrushNoRef = CDropShadow::GetEffectiveMaskBrushNoRef(this, a2);
  v3 = 0;
  if ( !EffectiveMaskBrushNoRef
    || (*(unsigned __int8 (__fastcall **)(struct CSpriteVisualContent *, __int64))(*(_QWORD *)EffectiveMaskBrushNoRef
                                                                                 + 48LL))(
         EffectiveMaskBrushNoRef,
         16LL) )
  {
    return 1;
  }
  return v3;
}
