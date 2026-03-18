/*
 * XREFs of ?CurrentInertiaVelocity@CScaleMotion@@MEBAMXZ @ 0x1801855B0
 * Callers:
 *     ?CurrentInertiaVelocity@CPositionMotion@@MEBAMXZ @ 0x180185630 (-CurrentInertiaVelocity@CPositionMotion@@MEBAMXZ.c)
 * Callees:
 *     powf_0 @ 0x1800D53A8 (powf_0.c)
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
