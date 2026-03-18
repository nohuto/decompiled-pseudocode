/*
 * XREFs of MmGetNumberOfPhysicalPagesForPartitionObject @ 0x14059F504
 * Callers:
 *     CcInitializePartition @ 0x140147624 (CcInitializePartition.c)
 *     CcInitializeCacheManager @ 0x140842C3C (CcInitializeCacheManager.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNumberOfPhysicalPagesForPartitionObject(unsigned __int16 **a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140388AF0 + 8LL * **a1) + 5776LL);
}
