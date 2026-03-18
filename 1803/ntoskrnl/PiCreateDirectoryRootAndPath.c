/*
 * XREFs of PiCreateDirectoryRootAndPath @ 0x140724C64
 * Callers:
 *     IoGetDeviceDirectory @ 0x140724670 (IoGetDeviceDirectory.c)
 *     PiGetDriverStateSubDirectory @ 0x14072516C (PiGetDriverStateSubDirectory.c)
 * Callees:
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenFile @ 0x1401A7B20 (ZwOpenFile.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     RtlPrefixUnicodeString @ 0x1405059D0 (RtlPrefixUnicodeString.c)
 *     PiCreateDirectoryPath @ 0x14072497C (PiCreateDirectoryPath.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x140729E54 (PiAuGetStateDirectorySecurityObject.c)
 */

__int64 __fastcall PiCreateDirectoryRootAndPath(UNICODE_STRING *SourceString, UNICODE_STRING *a2, _QWORD *a3)
{
  PVOID v3; // rdi
  HANDLE v4; // rsi
  int v8; // ebx
  NTSTATUS v9; // eax
  int StateDirectorySecurityObject; // eax
  HANDLE v11; // rax
  PVOID P; // [rsp+30h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+38h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-38h] BYREF
  HANDLE FileHandle; // [rsp+B0h] [rbp+30h] BYREF
  HANDLE Handle; // [rsp+C8h] [rbp+48h] BYREF

  FileHandle = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  P = 0LL;
  Handle = 0LL;
  if ( !SourceString || !a2 || !a3 )
  {
    v8 = -1073741811;
LABEL_15:
    if ( v4 )
      ZwClose(v4);
    goto LABEL_17;
  }
  if ( !RtlPrefixUnicodeString(SourceString, a2, 1u) )
    return (unsigned int)-1073741811;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = a2;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v9 = ZwOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 3u, 0x21u);
  v8 = v9;
  if ( v9 == -1073741766 )
  {
    StateDirectorySecurityObject = PiAuGetStateDirectorySecurityObject(&P);
    v3 = P;
    v8 = StateDirectorySecurityObject;
    if ( StateDirectorySecurityObject >= 0 )
    {
      v8 = PiCreateDirectoryPath(SourceString, P, &Handle);
      if ( v8 < 0 || (v8 = PiCreateDirectoryPath(a2, v3, &FileHandle), v8 < 0) )
      {
        v4 = Handle;
        goto LABEL_15;
      }
      v4 = Handle;
      goto LABEL_13;
    }
  }
  else if ( v9 >= 0 )
  {
LABEL_13:
    v11 = FileHandle;
    FileHandle = 0LL;
    *a3 = v11;
    goto LABEL_15;
  }
LABEL_17:
  if ( FileHandle )
    ZwClose(FileHandle);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  return (unsigned int)v8;
}
