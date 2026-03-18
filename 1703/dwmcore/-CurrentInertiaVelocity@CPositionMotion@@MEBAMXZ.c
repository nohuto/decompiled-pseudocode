/*
 * XREFs of ?CurrentInertiaVelocity@CPositionMotion@@MEBAMXZ @ 0x180185630
 * Callers:
 *     <none>
 * Callees:
 *     ?CurrentInertiaVelocity@CScaleMotion@@MEBAMXZ @ 0x1801855B0 (-CurrentInertiaVelocity@CScaleMotion@@MEBAMXZ.c)
 */

float __fastcall CPositionMotion::CurrentInertiaVelocity(CPositionMotion *this)
{
  return CScaleMotion::CurrentInertiaVelocity(this)
       + (float)((float)(*((float *)this + 53) / *((float *)this + 59))
               * (float)(*((float *)this + 58) - *((float *)this + 54)));
}
