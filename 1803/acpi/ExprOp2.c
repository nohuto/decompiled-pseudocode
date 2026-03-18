/*
 * XREFs of ExprOp2 @ 0x1C0050A80
 * Callers:
 *     <none>
 * Callees:
 *     IsCompatableDSDTRevision @ 0x1C0046E34 (IsCompatableDSDTRevision.c)
 *     ExprOp2_32 @ 0x1C0050ABC (ExprOp2_32.c)
 *     ExprOp2_64 @ 0x1C0050C44 (ExprOp2_64.c)
 */

__int64 __fastcall ExprOp2(__int64 a1, __int64 a2)
{
  if ( IsCompatableDSDTRevision() )
    return ExprOp2_64(a1, a2);
  else
    return ExprOp2_32(a1, a2);
}
