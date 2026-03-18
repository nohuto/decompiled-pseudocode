/*
 * XREFs of ?IsReadyForEvaluation@CExpression@@MEBA_NXZ @ 0x1800A7E00
 * Callers:
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x1800A2348 (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CExpression::IsReadyForEvaluation(CExpression *this)
{
  char v1; // dl

  v1 = 0;
  if ( (*((_BYTE *)this + 192) & 0x12) == 2 )
    return *((_QWORD *)this + 34) != 0LL;
  return v1;
}
