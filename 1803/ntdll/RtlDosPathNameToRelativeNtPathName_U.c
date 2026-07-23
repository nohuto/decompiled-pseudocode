/*
 * XREFs of RtlDosPathNameToRelativeNtPathName_U @ 0x18003FAA0
 * Callers:
 *     sub_18004E290 @ 0x18004E290 (sub_18004E290.c)
 *     sub_18004E9D0 @ 0x18004E9D0 (sub_18004E9D0.c)
 *     sub_18004EC98 @ 0x18004EC98 (sub_18004EC98.c)
 *     sub_180054094 @ 0x180054094 (sub_180054094.c)
 *     sub_180085824 @ 0x180085824 (sub_180085824.c)
 *     sub_1800DDDE4 @ 0x1800DDDE4 (sub_1800DDDE4.c)
 * Callees:
 *     sub_18003C228 @ 0x18003C228 (sub_18003C228.c)
 */

BOOLEAN __cdecl RtlDosPathNameToRelativeNtPathName_U(
        PCWSTR DosFileName,
        PUNICODE_STRING NtFileName,
        PWSTR *FilePart,
        PRTL_RELATIVE_NAME_U RelativeName)
{
  return sub_18003C228(2, DosFileName, (int)NtFileName, (__int64)FilePart, (__int64)RelativeName) >= 0;
}
