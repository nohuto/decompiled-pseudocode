/*
 * XREFs of AuthzBasepAllocateSecurityAttributeValue @ 0x140089C14
 * Callers:
 *     AuthzBasepAddSecurityAttributeValues @ 0x14001A47C (AuthzBasepAddSecurityAttributeValues.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x140089720 (AuthzBasepDuplicateSecurityAttributes.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
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
