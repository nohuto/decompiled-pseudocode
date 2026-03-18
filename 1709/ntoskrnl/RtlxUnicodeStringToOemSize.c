/*
 * XREFs of RtlxUnicodeStringToOemSize @ 0x14071E040
 * Callers:
 *     DbgUnicodeStringToAnsiString @ 0x1400F97C4 (DbgUnicodeStringToAnsiString.c)
 *     ExpSystemErrorHandler2 @ 0x14043AD40 (ExpSystemErrorHandler2.c)
 *     RtlUnicodeStringToAnsiString @ 0x1404DF110 (RtlUnicodeStringToAnsiString.c)
 *     RtlUnicodeStringToOemString @ 0x14056D7A0 (RtlUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x14056D860 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x14056D950 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x14056DBB0 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     ObCreateObjectTypeEx @ 0x1405C6D8C (ObCreateObjectTypeEx.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x14071DEF0 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     NtQuerySystemEnvironmentValue @ 0x14075D2B0 (NtQuerySystemEnvironmentValue.c)
 *     NtSetSystemEnvironmentValue @ 0x14075DBE4 (NtSetSystemEnvironmentValue.c)
 * Callees:
 *     RtlUnicodeToMultiByteSize @ 0x140598BA0 (RtlUnicodeToMultiByteSize.c)
 */

ULONG __stdcall RtlxUnicodeStringToOemSize(PCUNICODE_STRING UnicodeString)
{
  ULONG BytesInMultiByteString; // [rsp+30h] [rbp+8h] BYREF

  RtlUnicodeToMultiByteSize(&BytesInMultiByteString, UnicodeString->Buffer, UnicodeString->Length);
  return BytesInMultiByteString + 1;
}
