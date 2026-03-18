/*
 * XREFs of PopStatsInitPowerRequestLibrary @ 0x14085405C
 * Callers:
 *     PopPowerRequestInit @ 0x140853E60 (PopPowerRequestInit.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x1400DF9E0 (RtlInitializeGenericTableAvl.c)
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 PopStatsInitPowerRequestLibrary()
{
  PowerReqestStatsLock = 0LL;
  qword_140362DB8 = 0LL;
  memset(&ExecutionRequiredStopWatchCollection, 0, 0x38uLL);
  qword_140362D08 = (__int64)&ExecutionRequiredStopWatchCollection;
  ExecutionRequiredStopWatchCollection = (__int64)&ExecutionRequiredStopWatchCollection;
  RtlInitializeGenericTableAvl(
    &PowerRequestStatsDatabase,
    (PRTL_AVL_COMPARE_ROUTINE)PopAvlComparePowerRequestKeys,
    (PRTL_AVL_ALLOCATE_ROUTINE)PopAvlAllocatePowerRequestStats,
    (PRTL_AVL_FREE_ROUTINE)PopAvlFreePowerRequestStats,
    0LL);
  return 0LL;
}
