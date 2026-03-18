/*
 * XREFs of ?IsReadyForEvaluation@CBaseExpression@@MEBA_NXZ @ 0x1800A1820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CBaseExpression::IsReadyForEvaluation(CBaseExpression *this)
{
  return (*((_BYTE *)this + 192) & 0x12) == 2;
}
