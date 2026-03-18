/*
 * XREFs of ?IsInMotion@CForceEvaluator@@QEBA_NXZ @ 0x180189018
 * Callers:
 *     ?IsInMotion@CSpringForce@@UEBA_NXZ @ 0x180188CB0 (-IsInMotion@CSpringForce@@UEBA_NXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CForceEvaluator::IsInMotion(CForceEvaluator *this)
{
  float v1; // xmm2_4
  float v2; // xmm2_4
  _BOOL8 result; // rax

  v1 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 3)) & _xmm)) & _xmm);
  result = 1;
  if ( *((float *)this + 9) > v1 )
  {
    v2 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 5)) & _xmm)) & _xmm);
    if ( *((float *)this + 10) > v2 )
      return 0;
  }
  return result;
}
