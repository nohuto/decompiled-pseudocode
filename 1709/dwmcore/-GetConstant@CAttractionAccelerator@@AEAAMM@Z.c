/*
 * XREFs of ?GetConstant@CAttractionAccelerator@@AEAAMM@Z @ 0x180192D4C
 * Callers:
 *     ?Accelerate@CAttractionAccelerator@@UEAAMPEAUIntegrationState@@M@Z @ 0x180192C40 (-Accelerate@CAttractionAccelerator@@UEAAMPEAUIntegrationState@@M@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall CAttractionAccelerator::GetConstant(CAttractionAccelerator *this, float a2)
{
  float v2; // xmm3_4
  float v3; // xmm2_4
  float v4; // xmm2_4

  v2 = FLOAT_1_0e8;
  v3 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a2) & _xmm);
  if ( v3 < 10.0 )
    return FLOAT_10000_0;
  if ( v3 < 1000.0 )
  {
    v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a2 / 1000.0)) & _xmm);
    return v4 * 100000000.0;
  }
  return v2;
}
