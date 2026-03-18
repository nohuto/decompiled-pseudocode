/*
 * XREFs of ?SetHorizontalAlignmentRatio@CSurfaceBrush@@AEAAXM@Z @ 0x180161FAC
 * Callers:
 *     ?SetProperty@CSurfaceBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180161FE0 (-SetProperty@CSurfaceBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180034C50 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ @ 0x18008D4C4 (-ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ.c)
 */

void __fastcall CSurfaceBrush::SetHorizontalAlignmentRatio(CSurfaceBrush *this, float a2)
{
  if ( *((float *)this + 20) != a2 )
  {
    *((float *)this + 20) = a2;
    CSpriteVisualContent::ReleasePrimitiveCaches(this);
    CResource::InvalidateAnimationSources(this, 2LL);
  }
}
