/*
 * XREFs of ?IsReadyForEvaluation@CBaseExpression@@MEBA_NXZ @ 0x18002D890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CBaseExpression::IsReadyForEvaluation(CBaseExpression *this)
{
  return (*((_BYTE *)this + 208) & 0xA) == 2;
}
