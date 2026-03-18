/*
 * XREFs of RtlxAnsiStringToUnicodeSize @ 0x1405753F0
 * Callers:
 *     RtlAnsiStringToUnicodeString @ 0x1404C0A50 (RtlAnsiStringToUnicodeString.c)
 *     AslStringAnsiToUnicode @ 0x14072E47C (AslStringAnsiToUnicode.c)
 * Callees:
 *     RtlMultiByteToUnicodeSize @ 0x140575420 (RtlMultiByteToUnicodeSize.c)
 */

ULONG __stdcall RtlxAnsiStringToUnicodeSize(PCANSI_STRING AnsiString)
{
  ULONG BytesInUnicodeString; // [rsp+30h] [rbp+8h] BYREF

  RtlMultiByteToUnicodeSize(&BytesInUnicodeString, AnsiString->Buffer, AnsiString->Length);
  return BytesInUnicodeString + 2;
}
