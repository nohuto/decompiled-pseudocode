/*
 * XREFs of ?IsRectangular@CDropShadow@@AEBA_NPEAVCVisual@@@Z @ 0x18018A71C
 * Callers:
 *     ?CanUseFastShadow@CDropShadow@@AEBA_NAEBUD2D_SIZE_F@@PEAVCVisual@@_N@Z @ 0x180188E94 (-CanUseFastShadow@CDropShadow@@AEBA_NAEBUD2D_SIZE_F@@PEAVCVisual@@_N@Z.c)
 *     ?DrawAsDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180189050 (-DrawAsDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMi.c)
 *     ?GetBrushParameters@CDropShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180189B60 (-GetBrushParameters@CDropShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetEffectiveMaskBrushNoRef@CDropShadow@@AEBAPEAVCSpriteVisualContent@@PEAVCVisual@@@Z @ 0x18018A26C (-GetEffectiveMaskBrushNoRef@CDropShadow@@AEBAPEAVCSpriteVisualContent@@PEAVCVisual@@@Z.c)
 */

char __fastcall CDropShadow::IsRectangular(__int64 **this, struct CVisual *a2)
{
  struct CSpriteVisualContent *EffectiveMaskBrushNoRef; // rax
  char v3; // bl

  EffectiveMaskBrushNoRef = CDropShadow::GetEffectiveMaskBrushNoRef(this, a2);
  v3 = 0;
  if ( !EffectiveMaskBrushNoRef
    || (*(unsigned __int8 (__fastcall **)(struct CSpriteVisualContent *, __int64))(*(_QWORD *)EffectiveMaskBrushNoRef
                                                                                 + 48LL))(
         EffectiveMaskBrushNoRef,
         18LL) )
  {
    return 1;
  }
  return v3;
}
