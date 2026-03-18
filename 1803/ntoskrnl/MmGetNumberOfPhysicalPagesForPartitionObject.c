/*
 * XREFs of MmGetNumberOfPhysicalPagesForPartitionObject @ 0x140584C98
 * Callers:
 *     CcInitializePartition @ 0x140170A1C (CcInitializePartition.c)
 *     CcInitializeCacheManager @ 0x1408A0410 (CcInitializeCacheManager.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNumberOfPhysicalPagesForPartitionObject(unsigned __int16 **a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_1403CBD88 + 8LL * **a1) + 6864LL);
}
