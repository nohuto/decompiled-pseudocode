/*
 * XREFs of ?CanUseRectOptimization@CProjectedShadow@@AEBA_NPEAVCDrawingContext@@@Z @ 0x1801B4450
 * Callers:
 *     ?GetShadowPath@CProjectedShadow@@AEBA?AW4ShadowPath@@PEAVCDrawingContext@@@Z @ 0x1801B5C1C (-GetShadowPath@CProjectedShadow@@AEBA-AW4ShadowPath@@PEAVCDrawingContext@@@Z.c)
 *     ?UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801B6640 (-UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetEffectiveMaskBrush@CProjectedShadowCaster@@QEAAPEAVCSpriteVisualContent@@XZ @ 0x1801A054C (-GetEffectiveMaskBrush@CProjectedShadowCaster@@QEAAPEAVCSpriteVisualContent@@XZ.c)
 *     ?IsShadowAxisAlignedRectToReceiver@CProjectedShadow@@AEBA_NPEAVCDrawingContext@@@Z @ 0x1801B619C (-IsShadowAxisAlignedRectToReceiver@CProjectedShadow@@AEBA_NPEAVCDrawingContext@@@Z.c)
 */

char __fastcall CProjectedShadow::CanUseRectOptimization(CProjectedShadowCaster **this, struct CDrawingContext *a2)
{
  struct CSpriteVisualContent *EffectiveMaskBrush; // rax
  char v5; // bl

  EffectiveMaskBrush = CProjectedShadowCaster::GetEffectiveMaskBrush(this[9]);
  v5 = 0;
  if ( (!EffectiveMaskBrush
     || (*(unsigned __int8 (__fastcall **)(struct CSpriteVisualContent *, __int64))(*(_QWORD *)EffectiveMaskBrush + 48LL))(
          EffectiveMaskBrush,
          18LL))
    && CProjectedShadow::IsShadowAxisAlignedRectToReceiver((CProjectedShadow *)this, a2) )
  {
    return 1;
  }
  return v5;
}
