/*
 * XREFs of RtlxAnsiStringToUnicodeSize @ 0x1405C2EE0
 * Callers:
 *     RtlAnsiStringToUnicodeString @ 0x140518030 (RtlAnsiStringToUnicodeString.c)
 *     PopAnsiStringToUnicodeString @ 0x140524D84 (PopAnsiStringToUnicodeString.c)
 *     AslStringAnsiToUnicode @ 0x1407D8F74 (AslStringAnsiToUnicode.c)
 * Callees:
 *     RtlMultiByteToUnicodeSize @ 0x1405C2F10 (RtlMultiByteToUnicodeSize.c)
 */

ULONG __stdcall RtlxAnsiStringToUnicodeSize(PCANSI_STRING AnsiString)
{
  ULONG BytesInUnicodeString; // [rsp+30h] [rbp+8h] BYREF

  RtlMultiByteToUnicodeSize(&BytesInUnicodeString, AnsiString->Buffer, AnsiString->Length);
  return BytesInUnicodeString + 2;
}
