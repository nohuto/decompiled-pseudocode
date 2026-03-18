/*
 * XREFs of ?GetEffectiveMaskBrush@CProjectedShadowReceiver@@QEAAPEAVCSpriteVisualContent@@XZ @ 0x1801A1618
 * Callers:
 *     ?GenerateMaskIntermediate@CProjectedShadowReceiver@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801A143C (-GenerateMaskIntermediate@CProjectedShadowReceiver@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?IsReadyToDraw@CProjectedShadow@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1801B60E0 (-IsReadyToDraw@CProjectedShadow@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?EnsureBlackColorBrush@CProjectedShadowReceiver@@AEAAJXZ @ 0x1801A1338 (-EnsureBlackColorBrush@CProjectedShadowReceiver@@AEAAJXZ.c)
 */

struct CSpriteVisualContent *__fastcall CProjectedShadowReceiver::GetEffectiveMaskBrush(CProjectedShadowReceiver *this)
{
  struct CSpriteVisualContent *result; // rax

  result = (struct CSpriteVisualContent *)*((_QWORD *)this + 12);
  if ( !result || *((_DWORD *)this + 22) != 1 )
  {
    if ( (int)CProjectedShadowReceiver::EnsureBlackColorBrush(this) >= 0 )
      return (struct CSpriteVisualContent *)*((_QWORD *)this + 14);
    else
      return 0LL;
  }
  return result;
}
