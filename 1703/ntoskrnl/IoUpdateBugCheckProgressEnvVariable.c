/*
 * XREFs of IoUpdateBugCheckProgressEnvVariable @ 0x1401F1138
 * Callers:
 *     IoSaveBugCheckProgress @ 0x1401F0EA4 (IoSaveBugCheckProgress.c)
 *     IoSetBugCheckProgressAndFlag @ 0x1401F0EE8 (IoSetBugCheckProgressAndFlag.c)
 *     IoWriteCrashDump @ 0x1401F1224 (IoWriteCrashDump.c)
 *     IopDumpCallAddPagesCallbacks @ 0x1401F1E24 (IopDumpCallAddPagesCallbacks.c)
 *     IopDumpCallRemovePagesCallbacks @ 0x1401F1F70 (IopDumpCallRemovePagesCallbacks.c)
 *     KeBugCheck2 @ 0x1401FEE60 (KeBugCheck2.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     KeFrozenProcessorCount @ 0x1402033D0 (KeFrozenProcessorCount.c)
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
