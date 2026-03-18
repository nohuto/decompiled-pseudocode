/*
 * XREFs of FsRtlLookupLargeMcbEntry @ 0x140224620
 * Callers:
 *     FsRtlLookupMcbEntry @ 0x140224830 (FsRtlLookupMcbEntry.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     FsRtlLookupBaseMcbEntry @ 0x1400A5F50 (FsRtlLookupBaseMcbEntry.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 */

BOOLEAN __stdcall FsRtlLookupLargeMcbEntry(
        PLARGE_MCB Mcb,
        LONGLONG Vbn,
        PLONGLONG Lbn,
        PLONGLONG SectorCountFromLbn,
        PLONGLONG StartingLbn,
        PLONGLONG SectorCountFromStartingLbn,
        PULONG Index)
{
  ExAcquireFastMutex(Mcb->GuardedMutex);
  LOBYTE(SectorCountFromLbn) = FsRtlLookupBaseMcbEntry(
                                 &Mcb->BaseMcb,
                                 Vbn,
                                 Lbn,
                                 SectorCountFromLbn,
                                 StartingLbn,
                                 SectorCountFromStartingLbn,
                                 Index);
  KeReleaseGuardedMutex(Mcb->GuardedMutex);
  return (unsigned __int8)SectorCountFromLbn;
}
