/*
 * XREFs of RtlFindFirstRunClear @ 0x14000C420
 * Callers:
 *     PnprMirrorMarkedPages @ 0x14042CA74 (PnprMirrorMarkedPages.c)
 * Callees:
 *     RtlFindNextForwardRunClearCapped @ 0x1400C1A50 (RtlFindNextForwardRunClearCapped.c)
 */

ULONG __stdcall RtlFindFirstRunClear(PRTL_BITMAP BitMapHeader, PULONG StartingIndex)
{
  return RtlFindNextForwardRunClearCapped(BitMapHeader, 0LL, 0xFFFFFFFFLL, StartingIndex);
}
