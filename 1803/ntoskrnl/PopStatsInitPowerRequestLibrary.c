/*
 * XREFs of PopStatsInitPowerRequestLibrary @ 0x1408C60B4
 * Callers:
 *     PopPowerRequestInit @ 0x1408C5EB8 (PopPowerRequestInit.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x14006E4D0 (RtlInitializeGenericTableAvl.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 PopStatsInitPowerRequestLibrary()
{
  PowerReqestStatsLock = 0LL;
  qword_1403A6548 = 0LL;
  memset(&ExecutionRequiredStopWatchCollection, 0, 0x38uLL);
  qword_1403A6508 = (__int64)&ExecutionRequiredStopWatchCollection;
  ExecutionRequiredStopWatchCollection = (__int64)&ExecutionRequiredStopWatchCollection;
  RtlInitializeGenericTableAvl(
    &PowerRequestStatsDatabase,
    (PRTL_AVL_COMPARE_ROUTINE)PopAvlComparePowerRequestKeys,
    (PRTL_AVL_ALLOCATE_ROUTINE)PopAvlAllocatePowerRequestStats,
    (PRTL_AVL_FREE_ROUTINE)PopAvlFreePowerRequestStats,
    0LL);
  return 0LL;
}
