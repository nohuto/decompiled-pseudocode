/*
 * XREFs of RtlDosLongPathNameToRelativeNtPathName_U_WithStatus @ 0x1800C90D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003C228 @ 0x18003C228 (sub_18003C228.c)
 */

NTSTATUS __cdecl RtlDosLongPathNameToRelativeNtPathName_U_WithStatus(
        PCWSTR DosFileName,
        PUNICODE_STRING NtFileName,
        PWSTR *FilePart,
        PRTL_RELATIVE_NAME_U RelativeName)
{
  return sub_18003C228(6, DosFileName, (int)NtFileName, (__int64)FilePart, (__int64)RelativeName);
}
