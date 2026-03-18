/*
 * XREFs of FsRtlAddLargeMcbEntry @ 0x140015650
 * Callers:
 *     FsRtlAddMcbEntry @ 0x1401E2CE0 (FsRtlAddMcbEntry.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     FsRtlAddBaseMcbEntryEx @ 0x140015C70 (FsRtlAddBaseMcbEntryEx.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 */

BOOLEAN __stdcall FsRtlAddLargeMcbEntry(PLARGE_MCB Mcb, LONGLONG Vbn, LONGLONG Lbn, LONGLONG SectorCount)
{
  ExAcquireFastMutex(Mcb->GuardedMutex);
  LOBYTE(SectorCount) = FsRtlAddBaseMcbEntryEx(&Mcb->BaseMcb, Vbn, Lbn, SectorCount) >= 0;
  KeReleaseGuardedMutex(Mcb->GuardedMutex);
  return SectorCount;
}
