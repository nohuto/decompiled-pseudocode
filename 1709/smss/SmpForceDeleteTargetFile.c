/*
 * XREFs of SmpForceDeleteTargetFile @ 0x140011FE0
 * Callers:
 *     SmpProcessFileRenames @ 0x1400070C0 (SmpProcessFileRenames.c)
 *     SmpClearTemporaryFiles @ 0x140011A1C (SmpClearTemporaryFiles.c)
 * Callees:
 *     __security_check_cookie @ 0x14000C4E0 (__security_check_cookie.c)
 *     memset_0 @ 0x14000C86D (memset_0.c)
 *     SmpOpenTargetFile @ 0x1400125BC (SmpOpenTargetFile.c)
 *     SmpSetTargetAttributes @ 0x140012A38 (SmpSetTargetAttributes.c)
 */

__int64 __fastcall SmpForceDeleteTargetFile(struct _UNICODE_STRING *a1)
{
  int v2; // edi
  NTSTATUS v3; // ebx
  HANDLE v4; // rcx
  char FileInformation[8]; // [rsp+30h] [rbp-29h] BYREF
  HANDLE FileHandle; // [rsp+38h] [rbp-21h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-19h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp+17h] BYREF
  _FILE_BASIC_INFORMATION v10; // [rsp+80h] [rbp+27h] BYREF

  FileHandle = 0LL;
  v2 = 0;
  memset_0(&v10, 0, sizeof(v10));
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = a1;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = SmpOpenTargetFile(&FileHandle, 1114368LL, &ObjectAttributes);
  if ( v3 >= 0 )
  {
    FileInformation[0] = 1;
    v3 = NtSetInformationFile(FileHandle, &IoStatusBlock, FileInformation, 1u, FileDispositionInformation);
    if ( v3 < 0 && NtQueryAttributesFile(&ObjectAttributes, &v10) >= 0 && (v10.FileAttributes & 1) != 0 )
    {
      v3 = SmpSetTargetAttributes(FileHandle);
      if ( v3 >= 0 )
      {
        v2 = 1;
        FileInformation[0] = 1;
        v3 = NtSetInformationFile(FileHandle, &IoStatusBlock, FileInformation, 1u, FileDispositionInformation);
        if ( v3 >= 0 )
        {
          v2 = 0;
          v3 = 0;
        }
      }
    }
  }
  v4 = FileHandle;
  if ( FileHandle )
  {
    if ( v2 )
    {
      SmpSetTargetAttributes(FileHandle);
      v4 = FileHandle;
    }
    NtClose(v4);
  }
  return (unsigned int)v3;
}
