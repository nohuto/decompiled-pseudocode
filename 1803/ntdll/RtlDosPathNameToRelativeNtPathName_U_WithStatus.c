/*
 * XREFs of RtlDosPathNameToRelativeNtPathName_U_WithStatus @ 0x18003D120
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003D190 @ 0x18003D190 (sub_18003D190.c)
 */

NTSTATUS __cdecl RtlDosPathNameToRelativeNtPathName_U_WithStatus(
        PCWSTR DosFileName,
        PUNICODE_STRING NtFileName,
        PWSTR *FilePart,
        PRTL_RELATIVE_NAME_U RelativeName)
{
  unsigned __int64 v4; // rax
  int v6; // [rsp+40h] [rbp-18h] BYREF
  PCWSTR v7; // [rsp+48h] [rbp-10h]

  v7 = DosFileName;
  v6 = 0;
  if ( !DosFileName )
    return sub_18003D190(2, (unsigned int)&v6, 0, (_DWORD)NtFileName, 0LL, (__int64)FilePart, (__int64)RelativeName);
  v4 = -1LL;
  do
    ++v4;
  while ( DosFileName[v4] );
  if ( v4 <= 0x7FFE )
  {
    LOWORD(v6) = 2 * v4;
    HIWORD(v6) = 2 * v4 + 2;
    return sub_18003D190(2, (unsigned int)&v6, 0, (_DWORD)NtFileName, 0LL, (__int64)FilePart, (__int64)RelativeName);
  }
  return -1073741562;
}
