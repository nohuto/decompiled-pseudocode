/*
 * XREFs of ?OPMAllocateMemory@@YAPEAX_KW4_POOL_TYPE@@@Z @ 0x1C00F0F20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall OPMAllocateMemory(SIZE_T NumberOfBytes, POOL_TYPE PoolType)
{
  return ExAllocatePoolWithTag(PoolType, NumberOfBytes, 0x4D504F47u);
}
