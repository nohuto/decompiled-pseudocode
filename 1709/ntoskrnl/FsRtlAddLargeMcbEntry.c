/*
 * XREFs of FsRtlAddLargeMcbEntry @ 0x140111170
 * Callers:
 *     FsRtlAddMcbEntry @ 0x1401E6EB0 (FsRtlAddMcbEntry.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     FsRtlAddBaseMcbEntryEx @ 0x140111750 (FsRtlAddBaseMcbEntryEx.c)
 */

BOOLEAN __stdcall FsRtlAddLargeMcbEntry(PLARGE_MCB Mcb, LONGLONG Vbn, LONGLONG Lbn, LONGLONG SectorCount)
{
  ExAcquireFastMutex(Mcb->GuardedMutex);
  LOBYTE(SectorCount) = FsRtlAddBaseMcbEntryEx(&Mcb->BaseMcb, Vbn, Lbn, SectorCount) >= 0;
  KeReleaseGuardedMutex(Mcb->GuardedMutex);
  return SectorCount;
}
