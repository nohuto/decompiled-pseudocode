/*
 * XREFs of RtlDosPathNameToNtPathName_U @ 0x180035B40
 * Callers:
 *     LdrpResValidateFilePath @ 0x1800E398C (LdrpResValidateFilePath.c)
 *     _ResFindFirstFileExW @ 0x18010FB90 (_ResFindFirstFileExW.c)
 *     _ResGetFileAttributesW @ 0x1801102D4 (_ResGetFileAttributesW.c)
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x180031E9C (RtlpDosPathNameToRelativeNtPathName_U.c)
 */

BOOLEAN __cdecl RtlDosPathNameToNtPathName_U(
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
           (__int64)RelativeName) >= 0;
}
