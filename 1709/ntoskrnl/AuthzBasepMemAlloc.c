/*
 * XREFs of AuthzBasepMemAlloc @ 0x14001A9C8
 * Callers:
 *     AuthzBasepAllocateSecurityAttribute @ 0x14001A810 (AuthzBasepAllocateSecurityAttribute.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x14001A89C (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x14014C0E0 (AuthzBasepAllocateSecurityAttributesList.c)
 *     AuthzBasepAllocateClaimCollectionNoLists @ 0x14077660C (AuthzBasepAllocateClaimCollectionNoLists.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall AuthzBasepMemAlloc(SIZE_T NumberOfBytes, __int64 a2, ULONG a3)
{
  return ExAllocatePoolWithTag((POOL_TYPE)(KeGetCurrentIrql() < 2u ? PagedPool : NonPagedPoolNx), NumberOfBytes, a3);
}
