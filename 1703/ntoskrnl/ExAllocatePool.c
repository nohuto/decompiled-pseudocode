/*
 * XREFs of ExAllocatePool @ 0x14003C640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __stdcall ExAllocatePool(POOL_TYPE PoolType, SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PoolType, NumberOfBytes, 0x656E6F4Eu);
}
