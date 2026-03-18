/*
 * XREFs of RtlxOemStringToUnicodeSize @ 0x1407817A0
 * Callers:
 *     FsRtlNotifyFilterReportChange @ 0x14055A7D0 (FsRtlNotifyFilterReportChange.c)
 *     RtlOemStringToUnicodeString @ 0x1405DD0D0 (RtlOemStringToUnicodeString.c)
 *     RtlOemStringToCountedUnicodeString @ 0x1407813F0 (RtlOemStringToCountedUnicodeString.c)
 * Callees:
 *     RtlMultiByteToUnicodeSize @ 0x1405C2F10 (RtlMultiByteToUnicodeSize.c)
 */

ULONG __stdcall RtlxOemStringToUnicodeSize(PCOEM_STRING OemString)
{
  ULONG BytesInUnicodeString; // [rsp+30h] [rbp+8h] BYREF

  RtlMultiByteToUnicodeSize(&BytesInUnicodeString, OemString->Buffer, OemString->Length);
  return BytesInUnicodeString + 2;
}
