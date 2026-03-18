/*
 * XREFs of ?AdvanceInertiaToTimeDefault@CPositionMotion@@MEAAMXZ @ 0x180185470
 * Callers:
 *     <none>
 * Callees:
 *     ?UnboundedInertiaPanningAtTime@CPositionMotion@@AEBAMM@Z @ 0x1801857C0 (-UnboundedInertiaPanningAtTime@CPositionMotion@@AEBAMM@Z.c)
 */

float __fastcall CPositionMotion::AdvanceInertiaToTimeDefault(CPositionMotion *this)
{
  float v2; // xmm0_4
  float v3; // xmm1_4
  float v4; // xmm0_4

  v2 = CPositionMotion::UnboundedInertiaPanningAtTime(this, fminf(*((float *)this + 6), *((float *)this + 17)));
  v3 = v2 - *((float *)this + 51);
  *((float *)this + 51) = v2;
  v4 = *((float *)this + 58) + *((float *)this + 57);
  *((float *)this + 50) = v3;
  *((float *)this + 5) = v4 + v3;
  return CMotion::AdvanceInertiaToTimeDefault(this);
}
