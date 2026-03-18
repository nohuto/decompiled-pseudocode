/*
 * XREFs of AuthzBasepAllocateSecurityAttributeValue @ 0x14005C1C8
 * Callers:
 *     AuthzBasepDuplicateSecurityAttributes @ 0x14005C310 (AuthzBasepDuplicateSecurityAttributes.c)
 *     AuthzBasepAddSecurityAttributeValues @ 0x14006BFC8 (AuthzBasepAddSecurityAttributeValues.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall AuthzBasepAllocateSecurityAttributeValue(unsigned int a1)
{
  PVOID PoolWithTag; // rax
  PVOID v2; // rbx

  PoolWithTag = ExAllocatePoolWithTag(
                  (POOL_TYPE)(KeGetCurrentIrql() < 2u ? PagedPool : NonPagedPoolNx),
                  a1 + 64LL,
                  0x74416553u);
  v2 = PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, 0x40uLL);
  return v2;
}
