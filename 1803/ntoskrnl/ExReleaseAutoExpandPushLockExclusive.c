/*
 * XREFs of ExReleaseAutoExpandPushLockExclusive @ 0x1400B5B90
 * Callers:
 *     MiProtectAweRegion @ 0x14026271C (MiProtectAweRegion.c)
 *     MiRemoveUserPhysicalPagesVad @ 0x1402629CC (MiRemoveUserPhysicalPagesVad.c)
 *     NtFreeUserPhysicalPages @ 0x14026303C (NtFreeUserPhysicalPages.c)
 *     MiAweViewInserter @ 0x14074F714 (MiAweViewInserter.c)
 *     MiAweViewRemover @ 0x14074F7F4 (MiAweViewRemover.c)
 *     MiCleanPhysicalProcessPages @ 0x14074F9E0 (MiCleanPhysicalProcessPages.c)
 *     MiResizeAweBitMap @ 0x14074FBC0 (MiResizeAweBitMap.c)
 *     MiScrubProcesses @ 0x140757F60 (MiScrubProcesses.c)
 * Callees:
 *     ExpAeUpdateStatsForExclusiveRelease @ 0x1400B5C0C (ExpAeUpdateStatsForExclusiveRelease.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     ExpReleaseFannedOutPushLockExclusive @ 0x14015A6FC (ExpReleaseFannedOutPushLockExclusive.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExReleaseAutoExpandPushLockExclusive(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  char v2; // di
  int v4; // eax
  __int64 result; // rax
  int v6; // [rsp+48h] [rbp+10h] BYREF

  v2 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  v4 = *(_DWORD *)(BugCheckParameter2 + 8);
  if ( (v4 & 1) != 0 )
  {
    ExpReleaseFannedOutPushLockExclusive(v4 & 0xFFFFFFF8);
  }
  else
  {
    v6 = *(_DWORD *)(BugCheckParameter2 + 12);
    if ( (unsigned __int8)ExpAeUpdateStatsForExclusiveRelease(&v6) )
      *(_DWORD *)(BugCheckParameter2 + 12) = v6;
  }
  result = ExReleasePushLockEx(BugCheckParameter2, 2uLL);
  if ( (v2 & 2) == 0 )
    return KeAbPostRelease(BugCheckParameter2);
  return result;
}
