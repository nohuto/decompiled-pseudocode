/*
 * XREFs of ?SetColor@CDropShadow@@AEAAXMMMM@Z @ 0x1801610BC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?SetProperty@CDropShadow@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180161250 (-SetProperty@CDropShadow@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ @ 0x180022644 (-ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A9868 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 */

void __fastcall CDropShadow::SetColor(CDropShadow *this, float a2, float a3, float a4, float a5)
{
  if ( *((float *)this + 36) != a2
    || *((float *)this + 37) != a3
    || *((float *)this + 38) != a4
    || *((float *)this + 39) != a5 )
  {
    *((float *)this + 36) = a2;
    *((float *)this + 37) = a3;
    *((float *)this + 38) = a4;
    *((float *)this + 39) = a5;
    CSpriteVisualContent::ReleasePrimitiveCaches(this);
    CResource::InvalidateAnimationSources(this);
  }
}
