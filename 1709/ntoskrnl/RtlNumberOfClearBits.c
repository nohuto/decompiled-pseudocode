/*
 * XREFs of RtlNumberOfClearBits @ 0x1400D4B20
 * Callers:
 *     PopGetRemainingHibernateRangeDataSize @ 0x1404334E0 (PopGetRemainingHibernateRangeDataSize.c)
 *     PopSaveHiberContext @ 0x140434F40 (PopSaveHiberContext.c)
 *     ViThunkCreateSharedExportInformation @ 0x1407A1F08 (ViThunkCreateSharedExportInformation.c)
 *     ViThunkReplaceAllSharedExports @ 0x1407B66D0 (ViThunkReplaceAllSharedExports.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x1400D4B40 (RtlNumberOfSetBits.c)
 */

ULONG __stdcall RtlNumberOfClearBits(PRTL_BITMAP BitMapHeader)
{
  return BitMapHeader->SizeOfBitMap - RtlNumberOfSetBits(BitMapHeader);
}
