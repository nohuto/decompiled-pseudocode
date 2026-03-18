/*
 * XREFs of RtlNumberOfClearBits @ 0x14006E260
 * Callers:
 *     PopSaveHiberContext @ 0x140405800 (PopSaveHiberContext.c)
 *     PopGetRemainingHibernateRangeDataSize @ 0x140419CD8 (PopGetRemainingHibernateRangeDataSize.c)
 *     ViThunkCreateSharedExportInformation @ 0x140761F14 (ViThunkCreateSharedExportInformation.c)
 *     ViThunkReplaceAllSharedExports @ 0x140774914 (ViThunkReplaceAllSharedExports.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x14006E280 (RtlNumberOfSetBits.c)
 */

ULONG __stdcall RtlNumberOfClearBits(PRTL_BITMAP BitMapHeader)
{
  return BitMapHeader->SizeOfBitMap - RtlNumberOfSetBits(BitMapHeader);
}
