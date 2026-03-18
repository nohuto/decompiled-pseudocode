/*
 * XREFs of ?NormalizeVec3@CCompositionLight@@IEBAXAEBUfloat3@Numerics@Foundation@Windows@@PEAU2345@@Z @ 0x180172FD0
 * Callers:
 *     ?CalcEyePointOrVector@CCompositionLight@@IEBA?AUfloat4@Numerics@Foundation@Windows@@PEAVCVisual@@@Z @ 0x180172330 (-CalcEyePointOrVector@CCompositionLight@@IEBA-AUfloat4@Numerics@Foundation@Windows@@PEAVCVisual@.c)
 *     ?SetDirection@CCompositionDistantLight@@AEAAXMMM@Z @ 0x18017358C (-SetDirection@CCompositionDistantLight@@AEAAXMMM@Z.c)
 *     ?SetDirection@CCompositionSpotLight@@AEAAXMMM@Z @ 0x1801742D8 (-SetDirection@CCompositionSpotLight@@AEAAXMMM@Z.c)
 * Callees:
 *     sqrtf_0 @ 0x1800D53C0 (sqrtf_0.c)
 */

void __fastcall CCompositionLight::NormalizeVec3(
        CCompositionLight *this,
        const struct Windows::Foundation::Numerics::float3 *a2,
        struct Windows::Foundation::Numerics::float3 *a3)
{
  float v5; // xmm6_4
  float v6; // xmm3_4
  float v7; // xmm2_4

  v5 = *(float *)a2;
  v6 = sqrtf_0(
         (float)((float)(v5 * v5) + (float)(*((float *)a2 + 1) * *((float *)a2 + 1)))
       + (float)(*((float *)a2 + 2) * *((float *)a2 + 2)));
  v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v6) & _xmm);
  if ( v7 < 0.0000011920929 )
    v6 = FLOAT_1_0;
  *(float *)a3 = v5 / v6;
  *((float *)a3 + 1) = *((float *)a2 + 1) / v6;
  *((float *)a3 + 2) = *((float *)a2 + 2) / v6;
}
