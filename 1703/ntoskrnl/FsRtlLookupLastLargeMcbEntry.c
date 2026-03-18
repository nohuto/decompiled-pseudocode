/*
 * XREFs of FsRtlLookupLastLargeMcbEntry @ 0x1401E2E90
 * Callers:
 *     FsRtlLookupLastMcbEntry @ 0x1401E2FA0 (FsRtlLookupLastMcbEntry.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     FsRtlLookupLastBaseMcbEntry @ 0x1400223D0 (FsRtlLookupLastBaseMcbEntry.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 */

BOOLEAN __stdcall FsRtlLookupLastLargeMcbEntry(PLARGE_MCB Mcb, PLONGLONG Vbn, PLONGLONG Lbn)
{
  ExAcquireFastMutex(Mcb->GuardedMutex);
  LOBYTE(Lbn) = FsRtlLookupLastBaseMcbEntry(&Mcb->BaseMcb, Vbn, Lbn);
  KeReleaseGuardedMutex(Mcb->GuardedMutex);
  return (unsigned __int8)Lbn;
}
