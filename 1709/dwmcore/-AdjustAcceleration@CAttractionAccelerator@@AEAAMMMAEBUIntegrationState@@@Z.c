/*
 * XREFs of ?AdjustAcceleration@CAttractionAccelerator@@AEAAMMMAEBUIntegrationState@@@Z @ 0x180192CC4
 * Callers:
 *     ?Accelerate@CAttractionAccelerator@@UEAAMPEAUIntegrationState@@M@Z @ 0x180192C40 (-Accelerate@CAttractionAccelerator@@UEAAMPEAUIntegrationState@@M@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall CAttractionAccelerator::AdjustAcceleration(
        CAttractionAccelerator *this,
        float a2,
        float a3,
        const struct IntegrationState *a4)
{
  float v4; // xmm3_4
  float v5; // xmm1_4

  v4 = FLOAT_N1000_0;
  if ( a2 >= -1000.0 )
    v4 = fminf(1000.0, a2);
  if ( (float)(int)((__PAIR64__(*((float *)a4 + 2) > 0.0, *((_DWORD *)a4 + 2)) - COERCE_UNSIGNED_INT(0.0)) >> 32) == (float)(int)((__PAIR64__(a3 > 0.0, LODWORD(a3)) - COERCE_UNSIGNED_INT(0.0)) >> 32) )
  {
    v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)a4 + 2)) & _xmm);
    if ( v5 > 100.0 )
      return v4 * 0.1;
  }
  return v4;
}
