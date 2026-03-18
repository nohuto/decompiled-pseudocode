/*
 * XREFs of ?OPMAllocateMemory@@YAPEAX_KW4_POOL_TYPE@@@Z @ 0x1C00EDC60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall OPMAllocateMemory(SIZE_T a1, POOL_TYPE a2)
{
  return ExAllocatePoolWithTag(a2, a1, 0x4D504F47u);
}
