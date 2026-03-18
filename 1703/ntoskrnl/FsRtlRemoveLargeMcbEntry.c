/*
 * XREFs of FsRtlRemoveLargeMcbEntry @ 0x1401E30C0
 * Callers:
 *     FsRtlRemoveMcbEntry @ 0x1401E3130 (FsRtlRemoveMcbEntry.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     FsRtlRemoveBaseMcbEntry @ 0x140015800 (FsRtlRemoveBaseMcbEntry.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
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
