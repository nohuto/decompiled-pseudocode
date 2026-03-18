/*
 * XREFs of ?IsInMotion@CSpringForce@@UEBA_NXZ @ 0x180188CB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CSpringForce::IsInMotion(CSpringForce *this)
{
  return CForceEvaluator::IsInMotion((CSpringForce *)((char *)this + 24));
}
