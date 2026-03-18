/*
 * XREFs of ?SetOpacity@CDropShadow@@AEAAXM@Z @ 0x180172038
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?SetProperty@CDropShadow@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180172070 (-SetProperty@CDropShadow@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180034C50 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ @ 0x18008D4C4 (-ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ.c)
 */

void __fastcall CDropShadow::SetOpacity(CDropShadow *this, float a2)
{
  if ( *((float *)this + 25) != a2 )
  {
    *((float *)this + 25) = a2;
    CSpriteVisualContent::ReleasePrimitiveCaches(this);
    CResource::InvalidateAnimationSources(this, 4LL);
  }
}
