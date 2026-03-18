/*
 * XREFs of ?GetEffectiveMaskBrush@CProjectedShadowCaster@@QEAAPEAVCSpriteVisualContent@@XZ @ 0x1801A054C
 * Callers:
 *     ?GenerateMaskIntermediate@CProjectedShadowCaster@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801A0014 (-GenerateMaskIntermediate@CProjectedShadowCaster@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?CanUseRectOptimization@CProjectedShadow@@AEBA_NPEAVCDrawingContext@@@Z @ 0x1801B4450 (-CanUseRectOptimization@CProjectedShadow@@AEBA_NPEAVCDrawingContext@@@Z.c)
 *     ?IsReadyToDraw@CProjectedShadow@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1801B60E0 (-IsReadyToDraw@CProjectedShadow@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?EnsureBlackColorBrush@CProjectedShadowCaster@@AEAAJXZ @ 0x18019FC04 (-EnsureBlackColorBrush@CProjectedShadowCaster@@AEAAJXZ.c)
 */

struct CSpriteVisualContent *__fastcall CProjectedShadowCaster::GetEffectiveMaskBrush(CProjectedShadowCaster *this)
{
  struct CSpriteVisualContent *result; // rax

  result = (struct CSpriteVisualContent *)*((_QWORD *)this + 14);
  if ( !result || *((_DWORD *)this + 25) != 1 )
  {
    if ( (int)CProjectedShadowCaster::EnsureBlackColorBrush(this) >= 0 )
      return (struct CSpriteVisualContent *)*((_QWORD *)this + 18);
    else
      return 0LL;
  }
  return result;
}
