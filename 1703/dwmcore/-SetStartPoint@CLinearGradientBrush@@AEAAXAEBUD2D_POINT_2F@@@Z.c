/*
 * XREFs of ?SetStartPoint@CLinearGradientBrush@@AEAAXAEBUD2D_POINT_2F@@@Z @ 0x1800C0D88
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?SetProperty@CLinearGradientBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180162220 (-SetProperty@CLinearGradientBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180034C50 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ @ 0x18008D4C4 (-ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ.c)
 */

void __fastcall CLinearGradientBrush::SetStartPoint(struct D2D_POINT_2F *this, const struct D2D_POINT_2F *a2)
{
  if ( *(_QWORD *)&this[17] != *a2 )
  {
    this[17] = *a2;
    CSpriteVisualContent::ReleasePrimitiveCaches((CSpriteVisualContent *)this);
    CResource::InvalidateAnimationSources((CResource *)this, 8LL);
  }
}
