/*
 * XREFs of ?IsReadyForEvaluation@CKeyframeAnimation@@UEBA_NXZ @ 0x18003E010
 * Callers:
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x18003BCD0 (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CKeyframeAnimation::IsReadyForEvaluation(CKeyframeAnimation *this)
{
  char v1; // dl

  v1 = 0;
  if ( (*((_BYTE *)this + 208) & 0x12) == 2 )
    return *((_QWORD *)this + 41) != 0LL;
  return v1;
}
