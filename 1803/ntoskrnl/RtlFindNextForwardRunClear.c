/*
 * XREFs of RtlFindNextForwardRunClear @ 0x1400D5D90
 * Callers:
 *     PnprMirrorMarkedPages @ 0x14048360C (PnprMirrorMarkedPages.c)
 *     PopGetRemainingHibernateRangeDataSize @ 0x140486054 (PopGetRemainingHibernateRangeDataSize.c)
 *     HvpGenerateLogMetadata @ 0x140498FD4 (HvpGenerateLogMetadata.c)
 *     HvpCountSetRangesInVector @ 0x14059281C (HvpCountSetRangesInVector.c)
 *     MiFindDriverNonPagedSections @ 0x1405FA8C8 (MiFindDriverNonPagedSections.c)
 *     ViThunkSnapSharedExports @ 0x14080F0F8 (ViThunkSnapSharedExports.c)
 * Callees:
 *     RtlFindNextForwardRunClearCapped @ 0x1400D7870 (RtlFindNextForwardRunClearCapped.c)
 */

ULONG __stdcall RtlFindNextForwardRunClear(PRTL_BITMAP BitMapHeader, ULONG FromIndex, PULONG StartingRunIndex)
{
  return RtlFindNextForwardRunClearCapped(BitMapHeader, FromIndex, 0xFFFFFFFFLL, StartingRunIndex);
}
