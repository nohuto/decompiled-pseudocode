/*
 * XREFs of RtlFindNextForwardRunClear @ 0x180004040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlFindNextForwardRunClear(PRTL_BITMAP BitMapHeader, ULONG FromIndex, PULONG StartingRunIndex)
{
  return sub_180004050(BitMapHeader, FromIndex, StartingRunIndex, StartingRunIndex);
}
