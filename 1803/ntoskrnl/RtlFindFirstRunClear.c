/*
 * XREFs of RtlFindFirstRunClear @ 0x1400D17F0
 * Callers:
 *     PnprMirrorMarkedPages @ 0x14048360C (PnprMirrorMarkedPages.c)
 * Callees:
 *     RtlFindNextForwardRunClearCapped @ 0x1400D7870 (RtlFindNextForwardRunClearCapped.c)
 */

ULONG __stdcall RtlFindFirstRunClear(PRTL_BITMAP BitMapHeader, PULONG StartingIndex)
{
  return RtlFindNextForwardRunClearCapped(BitMapHeader, 0LL, 0xFFFFFFFFLL, StartingIndex);
}
