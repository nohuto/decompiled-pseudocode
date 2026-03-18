/*
 * XREFs of ?Accelerate@CAttractionAccelerator@@UEAAMPEAUIntegrationState@@M@Z @ 0x180192C40
 * Callers:
 *     <none>
 * Callees:
 *     ?AdjustAcceleration@CAttractionAccelerator@@AEAAMMMAEBUIntegrationState@@@Z @ 0x180192CC4 (-AdjustAcceleration@CAttractionAccelerator@@AEAAMMMAEBUIntegrationState@@@Z.c)
 *     ?GetConstant@CAttractionAccelerator@@AEAAMM@Z @ 0x180192D4C (-GetConstant@CAttractionAccelerator@@AEAAMM@Z.c)
 */

float __fastcall CAttractionAccelerator::Accelerate(
        CAttractionAccelerator *this,
        struct IntegrationState *a2,
        float a3)
{
  float v3; // xmm6_4
  float v4; // xmm1_4
  float result; // xmm0_4
  float Constant; // xmm0_4
  int v7; // eax
  int v8; // ecx
  __int64 v9; // r8
  const struct IntegrationState *v10; // rdx

  v3 = *((float *)this + 6) - *((float *)a2 + 1);
  v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v3) & _xmm);
  result = 0.0;
  if ( v4 >= 0.0000011920929 )
  {
    Constant = CAttractionAccelerator::GetConstant((CAttractionAccelerator *)(v3 > 0.0), v3);
    return CAttractionAccelerator::AdjustAcceleration(
             (CAttractionAccelerator *)(unsigned int)(v8 - v7),
             (float)((float)(Constant * *(float *)(v9 + 28)) / (float)(v3 * v3)) * (float)(v8 - v7),
             v3,
             v10);
  }
  return result;
}
