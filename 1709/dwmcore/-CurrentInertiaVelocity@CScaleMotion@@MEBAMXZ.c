/*
 * XREFs of ?CurrentInertiaVelocity@CScaleMotion@@MEBAMXZ @ 0x18018D9D0
 * Callers:
 *     ?CurrentInertiaVelocity@CPositionMotion@@MEBAMXZ @ 0x18018D6B0 (-CurrentInertiaVelocity@CPositionMotion@@MEBAMXZ.c)
 * Callees:
 *     powf_0 @ 0x1800C5D92 (powf_0.c)
 */

float __fastcall CScaleMotion::CurrentInertiaVelocity(CScaleMotion *this)
{
  float v1; // xmm0_4
  float v3; // xmm3_4

  if ( *((float *)this + 6) >= *((float *)this + 17) )
    return 0.0;
  v1 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 8) - 1.0)) & _xmm);
  if ( v1 <= 0.0000011920929 )
    return *((float *)this + 12);
  v3 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 8)) & _xmm);
  if ( v3 >= 0.0000011920929 && (*((_BYTE *)this + 8) & 1) != 0 )
    return powf_0(*((float *)this + 8), *((float *)this + 6)) * *((float *)this + 12);
  else
    return 0.0;
}
