/*
 * XREFs of FsRtlLookupLastLargeMcbEntry @ 0x1402246D0
 * Callers:
 *     FsRtlLookupLastMcbEntry @ 0x1402247E0 (FsRtlLookupLastMcbEntry.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     FsRtlLookupLastBaseMcbEntry @ 0x1400B8A30 (FsRtlLookupLastBaseMcbEntry.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 */

BOOLEAN __stdcall FsRtlLookupLastLargeMcbEntry(PLARGE_MCB Mcb, PLONGLONG Vbn, PLONGLONG Lbn)
{
  ExAcquireFastMutex(Mcb->GuardedMutex);
  LOBYTE(Lbn) = FsRtlLookupLastBaseMcbEntry(&Mcb->BaseMcb, Vbn, Lbn);
  KeReleaseGuardedMutex(Mcb->GuardedMutex);
  return (unsigned __int8)Lbn;
}
