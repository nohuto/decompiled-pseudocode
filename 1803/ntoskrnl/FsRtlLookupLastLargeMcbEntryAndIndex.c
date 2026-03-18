/*
 * XREFs of FsRtlLookupLastLargeMcbEntryAndIndex @ 0x140224750
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     FsRtlLookupLastBaseMcbEntryAndIndex @ 0x1400C6F60 (FsRtlLookupLastBaseMcbEntryAndIndex.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 */

BOOLEAN __stdcall FsRtlLookupLastLargeMcbEntryAndIndex(
        PLARGE_MCB OpaqueMcb,
        PLONGLONG LargeVbn,
        PLONGLONG LargeLbn,
        PULONG Index)
{
  ExAcquireFastMutex(OpaqueMcb->GuardedMutex);
  LOBYTE(Index) = FsRtlLookupLastBaseMcbEntryAndIndex(&OpaqueMcb->BaseMcb, LargeVbn, LargeLbn, Index);
  KeReleaseGuardedMutex(OpaqueMcb->GuardedMutex);
  return (unsigned __int8)Index;
}
