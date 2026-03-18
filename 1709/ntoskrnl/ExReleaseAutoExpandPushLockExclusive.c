/*
 * XREFs of ExReleaseAutoExpandPushLockExclusive @ 0x140113B10
 * Callers:
 *     MiStealPage @ 0x1400C81C8 (MiStealPage.c)
 *     MiAweViewInserter @ 0x1406E51E0 (MiAweViewInserter.c)
 *     MiAweViewRemover @ 0x1406E52C0 (MiAweViewRemover.c)
 *     MiCleanPhysicalProcessPages @ 0x1406E54AC (MiCleanPhysicalProcessPages.c)
 *     MiProtectAweRegion @ 0x1406E568C (MiProtectAweRegion.c)
 *     MiRemoveUserPhysicalPagesVad @ 0x1406E5880 (MiRemoveUserPhysicalPagesVad.c)
 *     MiResizeAweBitMap @ 0x1406E5A4C (MiResizeAweBitMap.c)
 *     NtFreeUserPhysicalPages @ 0x1406E649C (NtFreeUserPhysicalPages.c)
 *     MiScrubProcesses @ 0x1406EEA90 (MiScrubProcesses.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     ExpAeUpdateStatsForExclusiveRelease @ 0x140113B8C (ExpAeUpdateStatsForExclusiveRelease.c)
 *     ExpReleaseFannedOutPushLockExclusive @ 0x14014A454 (ExpReleaseFannedOutPushLockExclusive.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

char __fastcall ExReleaseAutoExpandPushLockExclusive(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  char v2; // di
  int v4; // eax
  char result; // al
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
