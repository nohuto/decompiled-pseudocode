/*
 * XREFs of ?SetOuterConeAngle@CCompositionSpotLight@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18002A8B0
 * Callers:
 *     <none>
 * Callees:
 *     ?IssueLightChangedNotification@CCompositionLight@@IEAAXXZ @ 0x18002A34C (-IssueLightChangedNotification@CCompositionLight@@IEAAXXZ.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180051998 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 */

__int64 __fastcall CCompositionSpotLight::SetOuterConeAngle(
        CCompositionSpotLight *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        _DWORD *a3)
{
  if ( *((float *)this + 72) != *(float *)a3 )
  {
    *((_DWORD *)this + 72) = *a3;
    CResource::InvalidateAnimationSources(this, 0xDu);
    CResource::InvalidateAnimationSources(this, 0xEu);
    CCompositionLight::IssueLightChangedNotification(this);
  }
  return 0LL;
}
