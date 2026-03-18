/*
 * XREFs of IoUpdateBugCheckProgressEnvVariable @ 0x140233D9C
 * Callers:
 *     IoSaveBugCheckProgress @ 0x140233B00 (IoSaveBugCheckProgress.c)
 *     IoSetBugCheckProgressAndFlag @ 0x140233B44 (IoSetBugCheckProgressAndFlag.c)
 *     IoWriteCrashDump @ 0x140233E8C (IoWriteCrashDump.c)
 *     IopDumpCallAddPagesCallbacks @ 0x140234AA4 (IopDumpCallAddPagesCallbacks.c)
 *     IopDumpCallRemovePagesCallbacks @ 0x140234BFC (IopDumpCallRemovePagesCallbacks.c)
 *     KeBugCheck2 @ 0x1402429F0 (KeBugCheck2.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     KeFrozenProcessorCount @ 0x140247244 (KeFrozenProcessorCount.c)
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
