/*
 * XREFs of ?AdvanceInertiaToTimeDefault@CScaleMotion@@MEAAMXZ @ 0x18018D8F0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnboundedValueAtTime@CScaleMotion@@AEBAMM@Z @ 0x18018DB44 (-UnboundedValueAtTime@CScaleMotion@@AEBAMM@Z.c)
 */

float __fastcall CScaleMotion::AdvanceInertiaToTimeDefault(CScaleMotion *this)
{
  *((float *)this + 5) = CScaleMotion::UnboundedValueAtTime(this, fminf(*((float *)this + 6), *((float *)this + 17)));
  return CMotion::AdvanceInertiaToTimeDefault(this);
}
