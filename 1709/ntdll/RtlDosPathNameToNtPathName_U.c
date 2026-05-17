/*
 * XREFs of RtlDosPathNameToNtPathName_U @ 0x180035B40
 * Callers:
 *     LdrpResValidateFilePath @ 0x1800E398C (LdrpResValidateFilePath.c)
 *     _ResFindFirstFileExW @ 0x18010FB90 (_ResFindFirstFileExW.c)
 *     _ResGetFileAttributesW @ 0x1801102D4 (_ResGetFileAttributesW.c)
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x180031E9C (RtlpDosPathNameToRelativeNtPathName_U.c)
 */

bool __fastcall RtlDosPathNameToNtPathName_U(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  return (int)RtlpDosPathNameToRelativeNtPathName_U(0, a1, a2, a3, a4) >= 0;
}
