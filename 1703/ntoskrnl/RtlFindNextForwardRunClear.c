/*
 * XREFs of RtlFindNextForwardRunClear @ 0x1400AFB00
 * Callers:
 *     PnprMirrorMarkedPages @ 0x140417A44 (PnprMirrorMarkedPages.c)
 *     PopGetRemainingHibernateRangeDataSize @ 0x140419CD8 (PopGetRemainingHibernateRangeDataSize.c)
 *     MiFindDriverNonPagedSections @ 0x1404B34E4 (MiFindDriverNonPagedSections.c)
 *     HvpGenerateLogMetadata @ 0x1404B72B0 (HvpGenerateLogMetadata.c)
 *     HvpCountSetRangesInVector @ 0x1404B7D50 (HvpCountSetRangesInVector.c)
 *     ViThunkSnapSharedExports @ 0x140761FD0 (ViThunkSnapSharedExports.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlFindNextForwardRunClear(PRTL_BITMAP BitMapHeader, ULONG FromIndex, PULONG StartingRunIndex)
{
  return RtlFindNextForwardRunClearCapped((__int64)BitMapHeader, FromIndex, 0xFFFFFFFF, StartingRunIndex);
}
