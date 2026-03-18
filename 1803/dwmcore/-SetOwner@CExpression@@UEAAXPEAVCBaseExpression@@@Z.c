/*
 * XREFs of ?SetOwner@CExpression@@UEAAXPEAVCBaseExpression@@@Z @ 0x1800D6640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CExpression::SetOwner(CExpression *this, struct CBaseExpression *a2)
{
  *((_QWORD *)this + 51) = a2;
}
