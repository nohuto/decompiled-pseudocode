/*
 * XREFs of PiDrvDbQuerySystemPathWin32 @ 0x14073D35C
 * Callers:
 *     PiDrvDbResolveFilePathKeyValues @ 0x14073D4AC (PiDrvDbResolveFilePathKeyValues.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x140188860 (_wcsicmp.c)
 *     wcsrchr @ 0x14018A7C0 (wcsrchr.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenFile @ 0x1401A7B20 (ZwOpenFile.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     IoQueryFileDosDeviceName @ 0x1404F8E90 (IoQueryFileDosDeviceName.c)
 *     RtlCreateUnicodeString @ 0x140518CB0 (RtlCreateUnicodeString.c)
 *     RtlDuplicateUnicodeString @ 0x140518E60 (RtlDuplicateUnicodeString.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall PiDrvDbQuerySystemPathWin32(UNICODE_STRING *a1, UNICODE_STRING *a2)
{
  NTSTATUS v4; // ebx
  wchar_t *v5; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  POBJECT_NAME_INFORMATION ObjectNameInformation; // [rsp+90h] [rbp+20h] BYREF
  HANDLE FileHandle; // [rsp+A0h] [rbp+30h] BYREF
  PVOID Object; // [rsp+A8h] [rbp+38h] BYREF

  FileHandle = 0LL;
  ObjectNameInformation = 0LL;
  RtlInitUnicodeString(a2, 0LL);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = a1;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 3u, 0x21u) < 0 )
    goto LABEL_7;
  v4 = ObReferenceObjectByHandle(FileHandle, 0x80u, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
  if ( v4 >= 0 )
  {
    v4 = IoQueryFileDosDeviceName((PFILE_OBJECT)Object, &ObjectNameInformation);
    if ( v4 >= 0 )
    {
      v4 = RtlDuplicateUnicodeString(1u, &ObjectNameInformation->Name, a2);
      ExFreePoolWithTag(ObjectNameInformation, 0);
    }
    ObfDereferenceObject(Object);
  }
  ZwClose(FileHandle);
  if ( v4 < 0 )
  {
LABEL_7:
    v5 = wcsrchr(a1->Buffer, 0x5Cu);
    if ( v5 )
    {
      if ( wcsicmp(v5 + 1, L"BSPDRIVERS") )
        return (unsigned int)-1073741275;
      else
        return RtlCreateUnicodeString(a2, L"B:\\Windows") == 0 ? 0xC000009A : 0;
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return (unsigned int)v4;
}
