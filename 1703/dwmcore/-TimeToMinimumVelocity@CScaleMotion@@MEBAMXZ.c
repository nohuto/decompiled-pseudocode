/*
 * XREFs of ?TimeToMinimumVelocity@CScaleMotion@@MEBAMXZ @ 0x180185940
 * Callers:
 *     <none>
 * Callees:
 *     logf_0 @ 0x1800D538A (logf_0.c)
 */

float __fastcall CScaleMotion::TimeToMinimumVelocity(CScaleMotion *this)
{
  float v1; // xmm4_4
  float v3; // xmm3_4
  float v4; // xmm6_4
  float v5; // xmm7_4
  float v6; // xmm2_4
  float v7; // xmm0_4
  float v8; // xmm1_4
  float v9; // xmm0_4

  v1 = *((float *)this + 12);
  v3 = *((float *)this + 14);
  v4 = 0.0;
  v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v1) & _xmm);
  if ( v5 > v3 )
  {
    v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 8) - 1.0)) & _xmm);
    if ( v6 > 0.0000011920929 )
    {
      v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 8)) & _xmm);
      if ( v8 >= 0.0000011920929 && (*((_BYTE *)this + 8) & 1) != 0 )
      {
        v9 = logf_0(v3 / v5);
        return v9 / logf_0(*((float *)this + 8));
      }
    }
    else
    {
      if ( (float)(v1 > 0.0) <= 0.0 )
        v7 = 0.0;
      else
        v7 = FLOAT_3_4028235e38;
      return fmaxf(0.0, (float)(v7 - *((float *)this + 11)) / v1);
    }
  }
  return v4;
}
