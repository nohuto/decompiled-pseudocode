/*
 * XREFs of ?SetOffset@CCompositionPointLight@@AEAAXMMM@Z @ 0x18015C360
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?SetProperty@CCompositionPointLight@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18015C3D0 (-SetProperty@CCompositionPointLight@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A9868 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?IssueLightChangedNotification@CCompositionLight@@IEAAXXZ @ 0x1800B12EC (-IssueLightChangedNotification@CCompositionLight@@IEAAXXZ.c)
 */

void __fastcall CCompositionPointLight::SetOffset(CCompositionPointLight *this, float a2, float a3, float a4)
{
  if ( *((float *)this + 50) != a2 || *((float *)this + 51) != a3 || *((float *)this + 52) != a4 )
  {
    *((float *)this + 50) = a2;
    *((float *)this + 51) = a3;
    *((float *)this + 52) = a4;
    CCompositionLight::IssueLightChangedNotification(this);
    CResource::InvalidateAnimationSources(this);
  }
}
