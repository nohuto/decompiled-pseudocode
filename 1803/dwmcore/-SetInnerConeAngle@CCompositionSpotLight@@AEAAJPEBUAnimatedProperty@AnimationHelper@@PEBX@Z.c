/*
 * XREFs of ?SetInnerConeAngle@CCompositionSpotLight@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18002A900
 * Callers:
 *     <none>
 * Callees:
 *     ?IssueLightChangedNotification@CCompositionLight@@IEAAXXZ @ 0x18002A34C (-IssueLightChangedNotification@CCompositionLight@@IEAAXXZ.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180051998 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 */

__int64 __fastcall CCompositionSpotLight::SetInnerConeAngle(
        CCompositionSpotLight *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        _DWORD *a3)
{
  if ( *((float *)this + 71) != *(float *)a3 )
  {
    *((_DWORD *)this + 71) = *a3;
    CResource::InvalidateAnimationSources(this, 8u);
    CResource::InvalidateAnimationSources(this, 9u);
    CCompositionLight::IssueLightChangedNotification(this);
  }
  return 0LL;
}
