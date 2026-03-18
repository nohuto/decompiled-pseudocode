/*
 * XREFs of PiInitializeDDBCache @ 0x14083F7CC
 * Callers:
 *     PpInitializeBootDDB @ 0x1408403F4 (PpInitializeBootDDB.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x1400DF9E0 (RtlInitializeGenericTableAvl.c)
 */

__int64 PiInitializeDDBCache()
{
  RtlInitializeGenericTableAvl(
    &PiDDBCacheTable,
    (PRTL_AVL_COMPARE_ROUTINE)PiCompareDDBCacheEntries,
    (PRTL_AVL_ALLOCATE_ROUTINE)PnpAllocateGenericTableEntry,
    (PRTL_AVL_FREE_ROUTINE)CMFFreeFn,
    0LL);
  qword_1407F40B0 = (__int64)&PiDDBCacheList;
  PiDDBCacheList = &PiDDBCacheList;
  return 0LL;
}
