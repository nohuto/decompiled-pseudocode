/*
 * XREFs of FsRtlGetNextLargeMcbEntry @ 0x1401E2D00
 * Callers:
 *     FsRtlGetNextMcbEntry @ 0x1401E2D70 (FsRtlGetNextMcbEntry.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     FsRtlGetNextBaseMcbEntry @ 0x140016A50 (FsRtlGetNextBaseMcbEntry.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 */

BOOLEAN __stdcall FsRtlGetNextLargeMcbEntry(
        PLARGE_MCB Mcb,
        ULONG RunIndex,
        PLONGLONG Vbn,
        PLONGLONG Lbn,
        PLONGLONG SectorCount)
{
  ExAcquireFastMutex(Mcb->GuardedMutex);
  LOBYTE(Lbn) = FsRtlGetNextBaseMcbEntry(&Mcb->BaseMcb, RunIndex, Vbn, Lbn, SectorCount);
  KeReleaseGuardedMutex(Mcb->GuardedMutex);
  return (unsigned __int8)Lbn;
}
