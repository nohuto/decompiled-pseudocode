/*
 * XREFs of RtlxOemStringToUnicodeSize @ 0x14071E010
 * Callers:
 *     FsRtlNotifyFilterReportChange @ 0x14044CD00 (FsRtlNotifyFilterReportChange.c)
 *     RtlOemStringToUnicodeString @ 0x1404DF5F0 (RtlOemStringToUnicodeString.c)
 *     RtlOemStringToCountedUnicodeString @ 0x14071DC70 (RtlOemStringToCountedUnicodeString.c)
 * Callees:
 *     RtlMultiByteToUnicodeSize @ 0x1405F2890 (RtlMultiByteToUnicodeSize.c)
 */

ULONG __stdcall RtlxOemStringToUnicodeSize(PCOEM_STRING OemString)
{
  ULONG BytesInUnicodeString; // [rsp+30h] [rbp+8h] BYREF

  RtlMultiByteToUnicodeSize(&BytesInUnicodeString, OemString->Buffer, OemString->Length);
  return BytesInUnicodeString + 2;
}
