/*
 * XREFs of ?IsReadyForEvaluation@CExpression@@MEBA_NXZ @ 0x180033380
 * Callers:
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x18002F1F8 (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CExpression::IsReadyForEvaluation(CExpression *this)
{
  char v1; // dl

  v1 = 0;
  if ( (*((_BYTE *)this + 208) & 0xA) == 2 )
    return *((_QWORD *)this + 28) != 0LL;
  return v1;
}
