/*
 * XREFs of RtlpCheckRelativeDrive @ 0x18007BAE8
 * Callers:
 *     RtlGetFullPathName_Ustr @ 0x180033160 (RtlGetFullPathName_Ustr.c)
 * Callees:
 *     RtlQueryEnvironmentVariable_U @ 0x18004C800 (RtlQueryEnvironmentVariable_U.c)
 *     RtlInitUnicodeString @ 0x180052680 (RtlInitUnicodeString.c)
 *     RtlSetThreadErrorMode @ 0x18007BC70 (RtlSetThreadErrorMode.c)
 *     RtlpResetDriveEnvironment @ 0x18007BCCC (RtlpResetDriveEnvironment.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     NtOpenFile @ 0x1800A0720 (NtOpenFile.c)
 */

NTSTATUS __fastcall RtlpCheckRelativeDrive(WCHAR a1)
{
  NTSTATUS v2; // ebx
  __int64 v4; // [rsp+38h] [rbp-D0h] BYREF
  WCHAR *v5; // [rsp+40h] [rbp-C8h]
  __int64 v6; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE FileHandle; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-A0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+98h] [rbp-70h] BYREF
  WCHAR SourceString[2]; // [rsp+A8h] [rbp-60h] BYREF
  int v12; // [rsp+ACh] [rbp-5Ch]
  __int64 v13; // [rsp+B8h] [rbp-50h] BYREF
  char v14; // [rsp+C0h] [rbp-48h] BYREF

  SourceString[1] = a1;
  SourceString[0] = 61;
  v12 = 58;
  RtlInitUnicodeString(&DestinationString, SourceString);
  v13 = *(_QWORD *)L"\\??\\";
  LODWORD(v4) = 34078720;
  v5 = (WCHAR *)&v14;
  if ( (int)RtlQueryEnvironmentVariable_U(0LL, (wchar_t **)&DestinationString, (__int64)&v4) < 0 )
  {
    *v5 = a1;
    v5[1] = 58;
    v5[2] = 92;
    v5[3] = 0;
    LOWORD(v4) = 6;
  }
  else
  {
    LOWORD(v4) = v4 + 8;
    ObjectAttributes.Length = 48;
    WORD1(v4) = 544;
    ObjectAttributes.RootDirectory = 0LL;
    v5 = (WCHAR *)&v13;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v4;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    RtlSetThreadErrorMode(16LL, &v6);
    v2 = NtOpenFile(&FileHandle, 0x100000u, &ObjectAttributes, &IoStatusBlock, 3u, 0x21u);
    RtlSetThreadErrorMode((unsigned int)v6, 0LL);
    if ( v2 >= 0 )
      return NtClose(FileHandle);
  }
  return RtlpResetDriveEnvironment(a1);
}
