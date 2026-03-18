/*
 * XREFs of PspVsmEnclaveHashAllocator @ 0x14071C67C
 * Callers:
 *     PsCreateVsmEnclave @ 0x14071B904 (PsCreateVsmEnclave.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140060B70 (ExAllocatePoolWithQuotaTag.c)
 */

PVOID __fastcall PspVsmEnclaveHashAllocator(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithQuotaTag((POOL_TYPE)9, NumberOfBytes, 0x48457350u);
}
