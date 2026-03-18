/*
 * XREFs of ?SetColor@CColorBrush@@AEAAXMMMM@Z @ 0x18008BF60
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ @ 0x18008D4C4 (-ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ.c)
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
    CResource::InvalidateAnimationSources(this, 0LL);
  }
}
