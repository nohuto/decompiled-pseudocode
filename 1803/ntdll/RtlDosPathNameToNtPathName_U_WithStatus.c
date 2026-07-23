/*
 * XREFs of RtlDosPathNameToNtPathName_U_WithStatus @ 0x18003FA70
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003C228 @ 0x18003C228 (sub_18003C228.c)
 */

NTSTATUS __cdecl RtlDosPathNameToNtPathName_U_WithStatus(
        PCWSTR DosFileName,
        PUNICODE_STRING NtFileName,
        PWSTR *FilePart,
        PRTL_RELATIVE_NAME_U RelativeName)
{
  return sub_18003C228(0, DosFileName, (int)NtFileName, (__int64)FilePart, (__int64)RelativeName);
}
