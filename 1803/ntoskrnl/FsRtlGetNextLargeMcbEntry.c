/*
 * XREFs of FsRtlGetNextLargeMcbEntry @ 0x140224540
 * Callers:
 *     FsRtlGetNextMcbEntry @ 0x1402245B0 (FsRtlGetNextMcbEntry.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     FsRtlGetNextBaseMcbEntry @ 0x1400AE510 (FsRtlGetNextBaseMcbEntry.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
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
