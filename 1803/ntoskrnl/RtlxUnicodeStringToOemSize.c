/*
 * XREFs of RtlxUnicodeStringToOemSize @ 0x1407817D0
 * Callers:
 *     DbgUnicodeStringToAnsiString @ 0x1401612B4 (DbgUnicodeStringToAnsiString.c)
 *     ExpSystemErrorHandler2 @ 0x140487900 (ExpSystemErrorHandler2.c)
 *     RtlUnicodeStringToAnsiString @ 0x140518490 (RtlUnicodeStringToAnsiString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x14055EDE0 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x14055EED0 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x14055F150 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     RtlUnicodeStringToOemString @ 0x140605CC0 (RtlUnicodeStringToOemString.c)
 *     ObCreateObjectTypeEx @ 0x14062189C (ObCreateObjectTypeEx.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x140781680 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     NtQuerySystemEnvironmentValue @ 0x1407C42D0 (NtQuerySystemEnvironmentValue.c)
 *     NtSetSystemEnvironmentValue @ 0x1407C4C08 (NtSetSystemEnvironmentValue.c)
 * Callees:
 *     RtlUnicodeToMultiByteSize @ 0x140569EB0 (RtlUnicodeToMultiByteSize.c)
 */

ULONG __stdcall RtlxUnicodeStringToOemSize(PCUNICODE_STRING UnicodeString)
{
  ULONG BytesInMultiByteString; // [rsp+30h] [rbp+8h] BYREF

  RtlUnicodeToMultiByteSize(&BytesInMultiByteString, UnicodeString->Buffer, UnicodeString->Length);
  return BytesInMultiByteString + 1;
}
