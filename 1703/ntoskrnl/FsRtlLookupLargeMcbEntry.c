/*
 * XREFs of FsRtlLookupLargeMcbEntry @ 0x1401E2DE0
 * Callers:
 *     FsRtlLookupMcbEntry @ 0x1401E2FF0 (FsRtlLookupMcbEntry.c)
 * Callees:
 *     FsRtlLookupBaseMcbEntry @ 0x14000DE00 (FsRtlLookupBaseMcbEntry.c)
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
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
