/*
 * XREFs of ?SetInnerConeIntensity@CCompositionSpotLight@@AEAAXM@Z @ 0x18015DA04
 * Callers:
 *     ?SetProperty@CCompositionSpotLight@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800A0A90 (-SetProperty@CCompositionSpotLight@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A9868 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?IssueLightChangedNotification@CCompositionLight@@IEAAXXZ @ 0x1800B12EC (-IssueLightChangedNotification@CCompositionLight@@IEAAXXZ.c)
 */

void __fastcall CCompositionSpotLight::SetInnerConeIntensity(CCompositionSpotLight *this, float a2)
{
  if ( *((float *)this + 74) != a2 )
  {
    *((float *)this + 74) = a2;
    CCompositionLight::IssueLightChangedNotification(this);
    CResource::InvalidateAnimationSources(this);
  }
}
