/*
 * XREFs of MiFreePartitionPhysicalPages @ 0x1406BCDA8
 * Callers:
 *     MiDeletePartitionResources @ 0x14021D818 (MiDeletePartitionResources.c)
 * Callees:
 *     MiReturnPartitionPagesToParent @ 0x14021E92C (MiReturnPartitionPagesToParent.c)
 */

__int64 __fastcall MiFreePartitionPhysicalPages(__int64 a1)
{
  __int64 result; // rax

  do
    result = MiReturnPartitionPagesToParent(a1);
  while ( *(_QWORD *)(a1 + 5584) );
  return result;
}
