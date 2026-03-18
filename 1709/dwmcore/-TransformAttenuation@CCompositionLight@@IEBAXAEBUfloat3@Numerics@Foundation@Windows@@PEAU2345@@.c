/*
 * XREFs of ?TransformAttenuation@CCompositionLight@@IEBAXAEBUfloat3@Numerics@Foundation@Windows@@PEAU2345@@Z @ 0x18015BE40
 * Callers:
 *     ?GetLightInfo@CCompositionPointLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z @ 0x18015BFB0 (-GetLightInfo@CCompositionPointLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@.c)
 *     ?GetLightInfo@CCompositionSpotLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z @ 0x18015D790 (-GetLightInfo@CCompositionSpotLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CCompositionLight::TransformAttenuation(
        CCompositionLight *this,
        const struct Windows::Foundation::Numerics::float3 *a2,
        struct Windows::Foundation::Numerics::float3 *a3)
{
  float v3; // xmm0_4
  float v4; // xmm2_4
  float v5; // xmm3_4
  float v6; // xmm2_4
  float v7; // xmm3_4

  v3 = 0.0;
  if ( *(float *)a2 >= 0.0 )
    v4 = fminf(25500.0, *(float *)a2);
  else
    v4 = 0.0;
  *(float *)a3 = v4;
  v5 = *((float *)a2 + 1) * 0.0099999998;
  if ( v5 >= 0.0 )
    v6 = fminf(25500.0, v5);
  else
    v6 = 0.0;
  *((float *)a3 + 1) = v6;
  v7 = *((float *)a2 + 2) * 0.000099999997;
  if ( v7 >= 0.0 )
    v3 = fminf(25500.0, v7);
  *((float *)a3 + 2) = v3;
}
