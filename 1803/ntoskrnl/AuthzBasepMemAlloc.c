/*
 * XREFs of AuthzBasepMemAlloc @ 0x1400BBFF8
 * Callers:
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1400BBECC (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x140178488 (AuthzBasepAllocateSecurityAttributesList.c)
 *     AuthzBasepAllocateClaimCollectionNoLists @ 0x1407DF378 (AuthzBasepAllocateClaimCollectionNoLists.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall AuthzBasepMemAlloc(SIZE_T NumberOfBytes, __int64 a2, ULONG a3)
{
  return ExAllocatePoolWithTag((POOL_TYPE)(KeGetCurrentIrql() < 2u ? PagedPool : NonPagedPoolNx), NumberOfBytes, a3);
}
