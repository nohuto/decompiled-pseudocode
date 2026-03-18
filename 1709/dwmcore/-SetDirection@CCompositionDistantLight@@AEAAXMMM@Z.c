/*
 * XREFs of ?SetDirection@CCompositionDistantLight@@AEAAXMMM@Z @ 0x18015AF1C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?SetProperty@CCompositionDistantLight@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18015AFF0 (-SetProperty@CCompositionDistantLight@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A9868 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?IssueLightChangedNotification@CCompositionLight@@IEAAXXZ @ 0x1800B12EC (-IssueLightChangedNotification@CCompositionLight@@IEAAXXZ.c)
 *     ?NormalizeVec3@CCompositionLight@@IEBAXAEBUfloat3@Numerics@Foundation@Windows@@PEAU2345@@Z @ 0x18015BD68 (-NormalizeVec3@CCompositionLight@@IEBAXAEBUfloat3@Numerics@Foundation@Windows@@PEAU2345@@Z.c)
 */

void __fastcall CCompositionDistantLight::SetDirection(CCompositionDistantLight *this, float a2, float a3, float a4)
{
  float v5; // eax
  unsigned __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  float v7; // [rsp+28h] [rbp-10h]

  v6 = __PAIR64__(LODWORD(a3), LODWORD(a2));
  v7 = a4;
  CCompositionLight::NormalizeVec3(
    this,
    (const struct Windows::Foundation::Numerics::float3 *)&v6,
    (struct Windows::Foundation::Numerics::float3 *)&v6);
  if ( *((float *)this + 46) != *(float *)&v6
    || *((float *)this + 47) != *((float *)&v6 + 1)
    || *((float *)this + 48) != v7 )
  {
    v5 = v7;
    *((_QWORD *)this + 23) = v6;
    *((float *)this + 48) = v5;
    CCompositionLight::IssueLightChangedNotification(this);
    CResource::InvalidateAnimationSources(this);
  }
}
