/*
 * XREFs of RtlDosPathNameToNtPathName_U_WithStatus @ 0x180035AE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x180031E9C (RtlpDosPathNameToRelativeNtPathName_U.c)
 */

NTSTATUS __cdecl RtlDosPathNameToNtPathName_U_WithStatus(
        PCWSTR DosFileName,
        PUNICODE_STRING NtFileName,
        PWSTR *FilePart,
        PRTL_RELATIVE_NAME_U RelativeName)
{
  return RtlpDosPathNameToRelativeNtPathName_U(
           0,
           DosFileName,
           (int)NtFileName,
           (__int64)FilePart,
           (__int64)RelativeName);
}
