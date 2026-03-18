/*
 * XREFs of FsRtlRemoveLargeMcbEntry @ 0x140224910
 * Callers:
 *     FsRtlRemoveMcbEntry @ 0x140224980 (FsRtlRemoveMcbEntry.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     FsRtlRemoveBaseMcbEntry @ 0x1400AFBF0 (FsRtlRemoveBaseMcbEntry.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 */

void __stdcall FsRtlRemoveLargeMcbEntry(PLARGE_MCB Mcb, LONGLONG Vbn, LONGLONG SectorCount)
{
  unsigned int v3; // edi
  unsigned int v4; // esi

  v3 = SectorCount;
  v4 = Vbn;
  ExAcquireFastMutex(Mcb->GuardedMutex);
  FsRtlRemoveBaseMcbEntry(&Mcb->BaseMcb, v4, v3);
  KeReleaseGuardedMutex(Mcb->GuardedMutex);
}
