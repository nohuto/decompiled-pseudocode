/*
 * XREFs of RtlxAnsiStringToUnicodeSize @ 0x1405F2860
 * Callers:
 *     RtlAnsiStringToUnicodeString @ 0x1404DE910 (RtlAnsiStringToUnicodeString.c)
 *     PopAnsiStringToUnicodeString @ 0x14059B0A8 (PopAnsiStringToUnicodeString.c)
 *     AslStringAnsiToUnicode @ 0x140771F1C (AslStringAnsiToUnicode.c)
 * Callees:
 *     RtlMultiByteToUnicodeSize @ 0x1405F2890 (RtlMultiByteToUnicodeSize.c)
 */

ULONG __stdcall RtlxAnsiStringToUnicodeSize(PCANSI_STRING AnsiString)
{
  ULONG BytesInUnicodeString; // [rsp+30h] [rbp+8h] BYREF

  RtlMultiByteToUnicodeSize(&BytesInUnicodeString, AnsiString->Buffer, AnsiString->Length);
  return BytesInUnicodeString + 2;
}
