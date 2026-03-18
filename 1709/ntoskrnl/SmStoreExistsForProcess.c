/*
 * XREFs of SmStoreExistsForProcess @ 0x1400B9BB4
 * Callers:
 *     MmOutSwapWorkingSet @ 0x140014900 (MmOutSwapWorkingSet.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x140213338 (MiReleaseOutSwappedProcessCommit.c)
 *     PfpPrivSourceEnum @ 0x1404FD22C (PfpPrivSourceEnum.c)
 *     VmpPauseResumeNotify @ 0x14073DA90 (VmpPauseResumeNotify.c)
 * Callees:
 *     SmpKeyedStoreEntryGet @ 0x1400B9BEC (SmpKeyedStoreEntryGet.c)
 */

_BOOL8 SmStoreExistsForProcess()
{
  return SmpKeyedStoreEntryGet((ULONG_PTR)&qword_14041B178) != 0;
}
