/*
 * XREFs of ?UnboundedValueAtTime@CScaleMotion@@AEBAMM@Z @ 0x180185A34
 * Callers:
 *     ?AdvanceInertiaToTimeDefault@CScaleMotion@@MEAAMXZ @ 0x180185860 (-AdvanceInertiaToTimeDefault@CScaleMotion@@MEAAMXZ.c)
 *     ?CalculateNaturalEndpoint@CScaleMotion@@MEBAMXZ @ 0x180185890 (-CalculateNaturalEndpoint@CScaleMotion@@MEBAMXZ.c)
 * Callees:
 *     logf_0 @ 0x1800D538A (logf_0.c)
 *     powf_0 @ 0x1800D53A8 (powf_0.c)
 */

float __fastcall CScaleMotion::UnboundedValueAtTime(CScaleMotion *this, float a2)
{
  float v4; // xmm0_4
  float v6; // xmm1_4
  float v7; // xmm6_4

  v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 8) - 1.0)) & _xmm);
  if ( v4 <= 0.0000011920929 )
    return (float)(a2 * *((float *)this + 12)) + *((float *)this + 11);
  v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 8)) & _xmm);
  if ( v6 < 0.0000011920929 || (*((_BYTE *)this + 8) & 1) == 0 )
    return *((float *)this + 11);
  v7 = (float)(powf_0(*((float *)this + 8), a2) - 1.0) * *((float *)this + 12);
  return (float)(v7 / logf_0(*((float *)this + 8))) + *((float *)this + 11);
}
