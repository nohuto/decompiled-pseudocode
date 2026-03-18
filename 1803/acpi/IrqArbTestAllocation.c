/*
 * XREFs of IrqArbTestAllocation @ 0x1C0090C90
 * Callers:
 *     <none>
 * Callees:
 *     IrqArbpPrepareForTestOrConflict @ 0x1C00917CC (IrqArbpPrepareForTestOrConflict.c)
 *     ArbTestAllocation @ 0x1C0095290 (ArbTestAllocation.c)
 */

__int64 __fastcall IrqArbTestAllocation(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  result = IrqArbpPrepareForTestOrConflict(a1, *a2);
  if ( (int)result >= 0 )
    return ArbTestAllocation(a1, a2);
  return result;
}
