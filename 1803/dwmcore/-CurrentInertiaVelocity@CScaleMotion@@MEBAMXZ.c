/*
 * XREFs of ?CurrentInertiaVelocity@CScaleMotion@@MEBAMXZ @ 0x1801C5360
 * Callers:
 *     ?CurrentInertiaVelocity@CPositionMotion@@MEBAMXZ @ 0x1801C53E0 (-CurrentInertiaVelocity@CPositionMotion@@MEBAMXZ.c)
 * Callees:
 *     powf @ 0x1800DB79C (powf.c)
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
    return powf(*((float *)this + 8), *((float *)this + 6)) * *((float *)this + 12);
  else
    return 0.0;
}
