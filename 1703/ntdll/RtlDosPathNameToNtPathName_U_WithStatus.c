/*
 * XREFs of RtlDosPathNameToNtPathName_U_WithStatus @ 0x18003C330
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003D6A4 @ 0x18003D6A4 (sub_18003D6A4.c)
 */

NTSTATUS __cdecl RtlDosPathNameToNtPathName_U_WithStatus(
        PCWSTR DosFileName,
        PUNICODE_STRING NtFileName,
        PWSTR *FilePart,
        PRTL_RELATIVE_NAME_U RelativeName)
{
  return sub_18003D6A4(DosFileName, 0LL, DosFileName, NtFileName, FilePart, RelativeName);
}
