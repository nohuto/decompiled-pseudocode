/*
 * XREFs of RtlFindNextForwardRunClear @ 0x1400C1920
 * Callers:
 *     PnprMirrorMarkedPages @ 0x14042CA74 (PnprMirrorMarkedPages.c)
 *     PopGetRemainingHibernateRangeDataSize @ 0x1404334E0 (PopGetRemainingHibernateRangeDataSize.c)
 *     HvpCountSetRangesInVector @ 0x1405096E4 (HvpCountSetRangesInVector.c)
 *     MiFindDriverNonPagedSections @ 0x140543ED0 (MiFindDriverNonPagedSections.c)
 *     HvpGenerateLogMetadata @ 0x140584F88 (HvpGenerateLogMetadata.c)
 *     ViThunkSnapSharedExports @ 0x1407A1D60 (ViThunkSnapSharedExports.c)
 * Callees:
 *     RtlFindNextForwardRunClearCapped @ 0x1400C1A50 (RtlFindNextForwardRunClearCapped.c)
 */

ULONG __stdcall RtlFindNextForwardRunClear(PRTL_BITMAP BitMapHeader, ULONG FromIndex, PULONG StartingRunIndex)
{
  return RtlFindNextForwardRunClearCapped(BitMapHeader, FromIndex, 0xFFFFFFFFLL, StartingRunIndex);
}
