/*
 * XREFs of SmStoreExistsForProcess @ 0x1400624CC
 * Callers:
 *     MmOutSwapWorkingSet @ 0x1400793EC (MmOutSwapWorkingSet.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x14020C398 (MiReleaseOutSwappedProcessCommit.c)
 *     PfpPrivSourceEnum @ 0x140498F88 (PfpPrivSourceEnum.c)
 *     VmpPauseResumeNotify @ 0x140705634 (VmpPauseResumeNotify.c)
 * Callees:
 *     SmpKeyedStoreEntryGet @ 0x140062504 (SmpKeyedStoreEntryGet.c)
 */

_BOOL8 SmStoreExistsForProcess()
{
  return SmpKeyedStoreEntryGet((ULONG_PTR)&qword_1403FA1A8) != 0;
}
