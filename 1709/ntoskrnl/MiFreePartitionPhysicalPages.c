/*
 * XREFs of MiFreePartitionPhysicalPages @ 0x1406EE0C4
 * Callers:
 *     MiDeletePartitionResources @ 0x140236E78 (MiDeletePartitionResources.c)
 * Callees:
 *     MiReturnPartitionPagesToParent @ 0x14023811C (MiReturnPartitionPagesToParent.c)
 */

__int64 __fastcall MiFreePartitionPhysicalPages(__int64 a1)
{
  __int64 result; // rax

  do
    result = MiReturnPartitionPagesToParent(a1);
  while ( *(_QWORD *)(a1 + 5776) );
  return result;
}
