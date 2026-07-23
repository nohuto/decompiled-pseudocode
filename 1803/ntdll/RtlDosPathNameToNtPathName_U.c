/*
 * XREFs of RtlDosPathNameToNtPathName_U @ 0x18003FB00
 * Callers:
 *     sub_1800DE990 @ 0x1800DE990 (sub_1800DE990.c)
 * Callees:
 *     sub_18003C228 @ 0x18003C228 (sub_18003C228.c)
 */

BOOLEAN __cdecl RtlDosPathNameToNtPathName_U(
        PCWSTR DosFileName,
        PUNICODE_STRING NtFileName,
        PWSTR *FilePart,
        PRTL_RELATIVE_NAME_U RelativeName)
{
  return sub_18003C228(0, DosFileName, (int)NtFileName, (__int64)FilePart, (__int64)RelativeName) >= 0;
}
