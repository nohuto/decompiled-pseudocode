/*
 * XREFs of ?SetColor@CDropShadow@@AEAAXMMMM@Z @ 0x180171F1C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?SetProperty@CDropShadow@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180172070 (-SetProperty@CDropShadow@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180034C50 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ @ 0x18008D4C4 (-ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ.c)
 */

void __fastcall CDropShadow::SetColor(CDropShadow *this, float a2, float a3, float a4, float a5)
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
    CResource::InvalidateAnimationSources(this, 1LL);
  }
}
