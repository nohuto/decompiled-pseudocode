/*
 * XREFs of ?SetDirectionProperty@CCompositionLight@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180184FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?IssueLightChangedNotification@CCompositionLight@@IEAAXXZ @ 0x18002A34C (-IssueLightChangedNotification@CCompositionLight@@IEAAXXZ.c)
 *     ?ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180051938 (-ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180051998 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?NormalizeVec3@CCompositionLight@@IEBAXAEBUfloat3@Numerics@Foundation@Windows@@PEAU2345@@Z @ 0x180184ECC (-NormalizeVec3@CCompositionLight@@IEBAXAEBUfloat3@Numerics@Foundation@Windows@@PEAU2345@@Z.c)
 */

__int64 __fastcall CCompositionLight::SetDirectionProperty(
        CCompositionLight *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        struct Windows::Foundation::Numerics::float3 *a3)
{
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  CCompositionLight::NormalizeVec3(this, a3, (struct Windows::Foundation::Numerics::float3 *)v6);
  if ( CResource::ModifyProperty(this, a2, v6) )
  {
    CResource::InvalidateAnimationSources(this, *(_DWORD *)a2);
    CCompositionLight::IssueLightChangedNotification(this);
  }
  return 0LL;
}
