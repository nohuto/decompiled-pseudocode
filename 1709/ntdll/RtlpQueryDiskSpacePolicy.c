/*
 * XREFs of RtlpQueryDiskSpacePolicy @ 0x18010CA48
 * Callers:
 *     RtlQueryResourcePolicy @ 0x180007560 (RtlQueryResourcePolicy.c)
 * Callees:
 *     StringCbPrintfW @ 0x180088880 (StringCbPrintfW.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     ZwCreateFile @ 0x1800A0B60 (ZwCreateFile.c)
 *     RtlpQueryDiskSpacePolicyByHandle @ 0x18010CBB0 (RtlpQueryDiskSpacePolicyByHandle.c)
 */

__int64 __fastcall RtlpQueryDiskSpacePolicy(__int64 a1, _DWORD *a2)
{
  NTSTATUS DiskSpacePolicyByHandle; // ebx
  __int64 v4; // rax
  wchar_t *v5; // rdx
  __int16 v6; // cx
  HANDLE FileHandle; // [rsp+60h] [rbp-A0h] BYREF
  int v9; // [rsp+68h] [rbp-98h] BYREF
  wchar_t *v10; // [rsp+70h] [rbp-90h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-88h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A8h] [rbp-58h] BYREF
  wchar_t pszDest[264]; // [rsp+C0h] [rbp-40h] BYREF

  FileHandle = 0LL;
  if ( BYTE2(RtlpUserPolicies) )
  {
    DiskSpacePolicyByHandle = 0;
    *a2 = BYTE2(RtlpUserPolicies);
  }
  else
  {
    StringCbPrintfW(pszDest, 0x208uLL, L"\\??\\%s", a1);
    v9 = 0;
    v4 = 0x7FFFLL;
    v10 = 0LL;
    v5 = pszDest;
    do
    {
      if ( !*v5 )
        break;
      ++v5;
      --v4;
    }
    while ( v4 );
    if ( v4 )
      v6 = 0x7FFF - v4;
    else
      v6 = 0;
    if ( v4 )
    {
      LOWORD(v9) = 2 * v6;
      HIWORD(v9) = 2 * v6 + 2;
      v10 = pszDest;
    }
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v9;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    DiskSpacePolicyByHandle = ZwCreateFile(
                                &FileHandle,
                                0x100080u,
                                &ObjectAttributes,
                                &IoStatusBlock,
                                0LL,
                                0,
                                7u,
                                1u,
                                0x20u,
                                0LL,
                                0);
    if ( DiskSpacePolicyByHandle >= 0 )
    {
      DiskSpacePolicyByHandle = RtlpQueryDiskSpacePolicyByHandle(FileHandle, a2);
      if ( DiskSpacePolicyByHandle >= 0 )
        DiskSpacePolicyByHandle = 0;
    }
    if ( FileHandle )
      NtClose(FileHandle);
  }
  return (unsigned int)DiskSpacePolicyByHandle;
}
