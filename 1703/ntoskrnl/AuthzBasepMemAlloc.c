/*
 * XREFs of AuthzBasepMemAlloc @ 0x140065ED0
 * Callers:
 *     AuthzBasepAllocateSecurityAttribute @ 0x140065D18 (AuthzBasepAllocateSecurityAttribute.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140065DA4 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x140154F04 (AuthzBasepAllocateSecurityAttributesList.c)
 *     AuthzBasepAllocateClaimCollectionNoLists @ 0x140732498 (AuthzBasepAllocateClaimCollectionNoLists.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall AuthzBasepMemAlloc(SIZE_T a1, __int64 a2, ULONG a3)
{
  POOL_TYPE v4; // ecx

  v4 = PagedPool;
  if ( KeGetCurrentIrql() >= 2u )
    v4 = NonPagedPoolNx;
  return ExAllocatePoolWithTag(v4, a1, a3);
}
