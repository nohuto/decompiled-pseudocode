/*
 * XREFs of ?AdvanceInertiaToTimeDefault@CScaleMotion@@MEAAMXZ @ 0x180185860
 * Callers:
 *     <none>
 * Callees:
 *     ?UnboundedValueAtTime@CScaleMotion@@AEBAMM@Z @ 0x180185A34 (-UnboundedValueAtTime@CScaleMotion@@AEBAMM@Z.c)
 */

float __fastcall CScaleMotion::AdvanceInertiaToTimeDefault(CScaleMotion *this)
{
  *((float *)this + 5) = CScaleMotion::UnboundedValueAtTime(this, fminf(*((float *)this + 6), *((float *)this + 17)));
  return CMotion::AdvanceInertiaToTimeDefault(this);
}
