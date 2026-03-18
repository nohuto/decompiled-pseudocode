/*
 * XREFs of ?IsReadyForEvaluation@CKeyframeAnimation@@UEBA_NXZ @ 0x180030AF0
 * Callers:
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x18002F1F8 (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CKeyframeAnimation::IsReadyForEvaluation(CKeyframeAnimation *this)
{
  char v1; // dl

  v1 = 0;
  if ( (*((_BYTE *)this + 208) & 0xA) == 2 )
    return *((_QWORD *)this + 40) != 0LL;
  return v1;
}
