/*
 * XREFs of FsRtlAddLargeMcbEntry @ 0x1400AFA40
 * Callers:
 *     FsRtlAddMcbEntry @ 0x140224520 (FsRtlAddMcbEntry.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     FsRtlAddBaseMcbEntryEx @ 0x1400B0010 (FsRtlAddBaseMcbEntryEx.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 */

BOOLEAN __stdcall FsRtlAddLargeMcbEntry(PLARGE_MCB Mcb, LONGLONG Vbn, LONGLONG Lbn, LONGLONG SectorCount)
{
  ExAcquireFastMutex(Mcb->GuardedMutex);
  LOBYTE(SectorCount) = FsRtlAddBaseMcbEntryEx(&Mcb->BaseMcb, Vbn, Lbn, SectorCount) >= 0;
  KeReleaseGuardedMutex(Mcb->GuardedMutex);
  return SectorCount;
}
