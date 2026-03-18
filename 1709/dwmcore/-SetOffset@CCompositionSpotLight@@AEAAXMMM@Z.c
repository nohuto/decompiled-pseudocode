/*
 * XREFs of ?SetOffset@CCompositionSpotLight@@AEAAXMMM@Z @ 0x1800A0964
 * Callers:
 *     ?SetProperty@CCompositionSpotLight@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800A0A90 (-SetProperty@CCompositionSpotLight@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A9868 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?IssueLightChangedNotification@CCompositionLight@@IEAAXXZ @ 0x1800B12EC (-IssueLightChangedNotification@CCompositionLight@@IEAAXXZ.c)
 */

void __fastcall CCompositionSpotLight::SetOffset(CCompositionSpotLight *this, float a2, float a3, float a4)
{
  if ( *((float *)this + 46) != a2 || *((float *)this + 47) != a3 || *((float *)this + 48) != a4 )
  {
    *((float *)this + 46) = a2;
    *((float *)this + 47) = a3;
    *((float *)this + 48) = a4;
    CCompositionLight::IssueLightChangedNotification(this);
    CResource::InvalidateAnimationSources(this, 0xBu);
  }
}
