/*
 * XREFs of ExAllocatePoolWithQuota @ 0x1402844A0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140060B70 (ExAllocatePoolWithQuotaTag.c)
 */

PVOID __stdcall ExAllocatePoolWithQuota(POOL_TYPE PoolType, SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithQuotaTag(PoolType, NumberOfBytes, 0x656E6F4Eu);
}
