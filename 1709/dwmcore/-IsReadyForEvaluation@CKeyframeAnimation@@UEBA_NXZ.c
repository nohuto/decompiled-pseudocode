/*
 * XREFs of ?IsReadyForEvaluation@CKeyframeAnimation@@UEBA_NXZ @ 0x1800A4890
 * Callers:
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x1800A2348 (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CKeyframeAnimation::IsReadyForEvaluation(CKeyframeAnimation *this)
{
  char v1; // dl

  v1 = 0;
  if ( (*((_BYTE *)this + 192) & 0x12) == 2 )
    return *((_QWORD *)this + 39) != 0LL;
  return v1;
}
