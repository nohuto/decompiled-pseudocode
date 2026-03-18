/*
 * XREFs of ?SetColor@CColorBrush@@AEAAXMMMM@Z @ 0x180070AC0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?SetProperty@CColorBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180159CD0 (-SetProperty@CColorBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ @ 0x180022644 (-ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A9868 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 */

void __fastcall CColorBrush::SetColor(CColorBrush *this, float a2, float a3, float a4, float a5)
{
  if ( *((float *)this + 20) != a2
    || *((float *)this + 21) != a3
    || *((float *)this + 22) != a4
    || *((float *)this + 23) != a5 )
  {
    *((float *)this + 20) = a2;
    *((float *)this + 21) = a3;
    *((float *)this + 22) = a4;
    *((float *)this + 23) = a5;
    CSpriteVisualContent::ReleasePrimitiveCaches(this);
    CResource::InvalidateAnimationSources(this, 0);
  }
}
