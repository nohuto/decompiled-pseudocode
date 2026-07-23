/*
 * XREFs of RtlDosPathNameToNtPathName_U @ 0x18003BB30
 * Callers:
 *     sub_1800E3538 @ 0x1800E3538 (sub_1800E3538.c)
 *     sub_18010CB98 @ 0x18010CB98 (sub_18010CB98.c)
 *     sub_18010D2E4 @ 0x18010D2E4 (sub_18010D2E4.c)
 * Callees:
 *     sub_18003D6A4 @ 0x18003D6A4 (sub_18003D6A4.c)
 */

BOOLEAN __cdecl RtlDosPathNameToNtPathName_U(
        PCWSTR DosFileName,
        PUNICODE_STRING NtFileName,
        PWSTR *FilePart,
        PRTL_RELATIVE_NAME_U RelativeName)
{
  return (int)sub_18003D6A4(DosFileName, 0LL, DosFileName, NtFileName, FilePart, RelativeName) >= 0;
}
