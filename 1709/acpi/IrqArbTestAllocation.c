/*
 * XREFs of IrqArbTestAllocation @ 0x1C008A210
 * Callers:
 *     <none>
 * Callees:
 *     ArbTestAllocation @ 0x1C008A250 (ArbTestAllocation.c)
 *     IrqArbpPrepareForTestOrConflict @ 0x1C008A3E0 (IrqArbpPrepareForTestOrConflict.c)
 */

__int64 __fastcall IrqArbTestAllocation(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  result = IrqArbpPrepareForTestOrConflict(a1, *a2);
  if ( (int)result >= 0 )
    return ArbTestAllocation(a1, a2);
  return result;
}
