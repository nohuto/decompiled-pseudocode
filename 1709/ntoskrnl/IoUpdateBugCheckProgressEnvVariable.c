/*
 * XREFs of IoUpdateBugCheckProgressEnvVariable @ 0x1401F6A8C
 * Callers:
 *     IoSaveBugCheckProgress @ 0x1401F67F0 (IoSaveBugCheckProgress.c)
 *     IoSetBugCheckProgressAndFlag @ 0x1401F6834 (IoSetBugCheckProgressAndFlag.c)
 *     IoWriteCrashDump @ 0x1401F6B7C (IoWriteCrashDump.c)
 *     IopDumpCallAddPagesCallbacks @ 0x1401F7784 (IopDumpCallAddPagesCallbacks.c)
 *     IopDumpCallRemovePagesCallbacks @ 0x1401F78D0 (IopDumpCallRemovePagesCallbacks.c)
 *     KeBugCheck2 @ 0x1402052B0 (KeBugCheck2.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     KeFrozenProcessorCount @ 0x1402096CC (KeFrozenProcessorCount.c)
 */

__int64 IoUpdateBugCheckProgressEnvVariable()
{
  __int64 result; // rax

  result = KeFrozenProcessorCount();
  if ( (unsigned int)(KeNumberProcessors_0 - result) <= 1 && !BugCheckProgressEFICalled )
  {
    BugCheckProgressEFICalled = 1;
    result = ((__int64 (__fastcall *)(const wchar_t *, void *, __int64, __int64, int))IopReportBugCheckProgress)(
               L"BugCheckProgress",
               &BUGCHECK_EFI_GUID,
               CrashdmpDumpBlock + 1404,
               4LL,
               1);
    BugCheckProgressEFICalled = 0;
  }
  return result;
}
