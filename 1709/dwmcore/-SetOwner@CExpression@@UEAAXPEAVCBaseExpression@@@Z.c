/*
 * XREFs of ?SetOwner@CExpression@@UEAAXPEAVCBaseExpression@@@Z @ 0x1800C1480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CExpression::SetOwner(CExpression *this, struct CBaseExpression *a2)
{
  *((_QWORD *)this + 49) = a2;
}
