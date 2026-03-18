/*
 * XREFs of ExAllocatePoolWithQuota @ 0x1402B8AC0
 * Callers:
 *     VerifierExAllocatePoolWithQuota @ 0x140813230 (VerifierExAllocatePoolWithQuota.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x1400EF190 (ExAllocatePoolWithQuotaTag.c)
 */

PVOID __stdcall ExAllocatePoolWithQuota(POOL_TYPE PoolType, SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithQuotaTag(PoolType, NumberOfBytes, 0x656E6F4Eu);
}
