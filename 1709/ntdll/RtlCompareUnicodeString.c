/*
 * XREFs of RtlCompareUnicodeString @ 0x180049F30
 * Callers:
 *     <none>
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x180049F70 (RtlCompareUnicodeStrings.c)
 */

LONG __cdecl RtlCompareUnicodeString(PUNICODE_STRING String1, PUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  return RtlCompareUnicodeStrings(
           String1->Buffer,
           (unsigned __int64)String1->Length >> 1,
           String2->Buffer,
           (unsigned __int64)String2->Length >> 1,
           CaseInSensitive);
}
