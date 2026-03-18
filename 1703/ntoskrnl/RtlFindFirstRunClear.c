/*
 * XREFs of RtlFindFirstRunClear @ 0x14023CCF0
 * Callers:
 *     PnprMirrorMarkedPages @ 0x140417A44 (PnprMirrorMarkedPages.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlFindFirstRunClear(PRTL_BITMAP BitMapHeader, PULONG StartingIndex)
{
  return RtlFindNextForwardRunClearCapped((__int64)BitMapHeader, 0, 0xFFFFFFFF, StartingIndex);
}
