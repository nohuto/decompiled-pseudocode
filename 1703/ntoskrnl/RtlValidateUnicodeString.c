/*
 * XREFs of RtlValidateUnicodeString @ 0x14006EE50
 * Callers:
 *     RtlDuplicateUnicodeString @ 0x1404C17D0 (RtlDuplicateUnicodeString.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlValidateUnicodeString(ULONG Flags, PCUNICODE_STRING String)
{
  if ( Flags )
    return -1073741811;
  else
    return RtlUnicodeStringValidateEx(String, (ULONG)String);
}
