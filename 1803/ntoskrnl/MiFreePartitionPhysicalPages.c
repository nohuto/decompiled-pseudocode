/*
 * XREFs of MiFreePartitionPhysicalPages @ 0x140757554
 * Callers:
 *     MiDeletePartitionResources @ 0x14026E874 (MiDeletePartitionResources.c)
 * Callees:
 *     MiReturnPartitionPagesToParent @ 0x14026FD38 (MiReturnPartitionPagesToParent.c)
 */

__int64 __fastcall MiFreePartitionPhysicalPages(__int64 a1)
{
  __int64 result; // rax

  do
    result = MiReturnPartitionPagesToParent(a1);
  while ( *(_QWORD *)(a1 + 6864) );
  return result;
}
