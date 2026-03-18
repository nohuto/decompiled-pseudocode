/*
 * XREFs of ExAllocatePool @ 0x1400D1810
 * Callers:
 *     VerifierExAllocatePool @ 0x1408130C0 (VerifierExAllocatePool.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

PVOID __stdcall ExAllocatePool(POOL_TYPE PoolType, SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PoolType, NumberOfBytes, 0x656E6F4Eu);
}
