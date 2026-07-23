/*
 * XREFs of RtlFindNextForwardRunClear @ 0x180005500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlFindNextForwardRunClear(PRTL_BITMAP BitMapHeader, ULONG FromIndex, PULONG StartingRunIndex)
{
  return sub_180005510(BitMapHeader, FromIndex, StartingRunIndex, StartingRunIndex);
}
