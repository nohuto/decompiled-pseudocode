/*
 * XREFs of LinkNodeGetPossibleGsiv @ 0x1C008D288
 * Callers:
 *     IrqArbAddAllocation @ 0x1C008F8F0 (IrqArbAddAllocation.c)
 *     IrqArbpFindSuitableRangePci @ 0x1C0091504 (IrqArbpFindSuitableRangePci.c)
 *     IrqArbpUnreferenceArbitrationList @ 0x1C0091B50 (IrqArbpUnreferenceArbitrationList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LinkNodeGetPossibleGsiv(__int64 a1, _DWORD *a2)
{
  if ( !*(_DWORD *)(a1 + 28) )
    return 3221226021LL;
  if ( a2 )
    *a2 = *(_DWORD *)(a1 + 36);
  return 0LL;
}
