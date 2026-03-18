/*
 * XREFs of ?SetOuterConeColor@CCompositionSpotLight@@AEAAXMMMM@Z @ 0x1800A08D0
 * Callers:
 *     ?SetProperty@CCompositionSpotLight@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800A0A90 (-SetProperty@CCompositionSpotLight@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A9868 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?IssueLightChangedNotification@CCompositionLight@@IEAAXXZ @ 0x1800B12EC (-IssueLightChangedNotification@CCompositionLight@@IEAAXXZ.c)
 */

void __fastcall CCompositionSpotLight::SetOuterConeColor(
        CCompositionSpotLight *this,
        float a2,
        float a3,
        float a4,
        float a5)
{
  if ( *((float *)this + 58) != a2
    || *((float *)this + 59) != a3
    || *((float *)this + 60) != a4
    || *((float *)this + 61) != a5 )
  {
    *((float *)this + 58) = a2;
    *((float *)this + 59) = a3;
    *((float *)this + 60) = a4;
    *((float *)this + 61) = a5;
    CCompositionLight::IssueLightChangedNotification(this);
    CResource::InvalidateAnimationSources(this, 0xEu);
  }
}
