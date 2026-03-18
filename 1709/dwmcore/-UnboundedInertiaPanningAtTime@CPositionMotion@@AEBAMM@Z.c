/*
 * XREFs of ?UnboundedInertiaPanningAtTime@CPositionMotion@@AEBAMM@Z @ 0x18018D850
 * Callers:
 *     ?AdvanceInertiaToTimeDefault@CPositionMotion@@MEAAMXZ @ 0x18018D580 (-AdvanceInertiaToTimeDefault@CPositionMotion@@MEAAMXZ.c)
 *     ?CalculateNaturalEndpoint@CPositionMotion@@MEBAMXZ @ 0x18018D650 (-CalculateNaturalEndpoint@CPositionMotion@@MEBAMXZ.c)
 * Callees:
 *     logf_0 @ 0x1800C5D7A (logf_0.c)
 *     powf_0 @ 0x1800C5D92 (powf_0.c)
 */

float __fastcall CPositionMotion::UnboundedInertiaPanningAtTime(CPositionMotion *this, float a2)
{
  float v4; // xmm0_4
  float v6; // xmm1_4
  float v7; // xmm6_4

  v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 8) - 1.0)) & _xmm);
  if ( v4 <= 0.0000011920929 )
    return a2 * *((float *)this + 12);
  v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 8)) & _xmm);
  if ( v6 < 0.0000011920929 || (*((_BYTE *)this + 8) & 1) == 0 )
    return 0.0;
  v7 = (float)(powf_0(*((float *)this + 8), a2) - 1.0) * *((float *)this + 12);
  return v7 / logf_0(*((float *)this + 8));
}
