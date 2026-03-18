/*
 * XREFs of PopDeleteHiberFile @ 0x1407625E8
 * Callers:
 *     PopEnableHiberFile @ 0x140624E34 (PopEnableHiberFile.c)
 *     PopCreateHiberFile @ 0x140625404 (PopCreateHiberFile.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x1400BAE30 (RtlAppendUnicodeStringToString.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenFile @ 0x1401A7B20 (ZwOpenFile.c)
 *     ZwDeleteFile @ 0x1401A8E40 (ZwDeleteFile.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405A4770 (ObpReferenceObjectByHandleWithTag.c)
 *     IoSetInformation @ 0x1405E7BF0 (IoSetInformation.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x1406269C4 (PopCreateHiberFileSecurityDescriptor.c)
 */

void __fastcall PopDeleteHiberFile(POBJECT_ATTRIBUTES ObjectAttributes)
{
  OBJECT_ATTRIBUTES *v1; // rbx
  ACL *HiberFileSecurityDescriptor; // rdi
  NTSTATUS v3; // eax
  struct _FILE_OBJECT *v4; // rbx
  char v5[8]; // [rsp+48h] [rbp-59h] BYREF
  HANDLE FileHandle; // [rsp+50h] [rbp-51h] BYREF
  UNICODE_STRING Destination; // [rsp+58h] [rbp-49h] BYREF
  PFILE_OBJECT FileObject; // [rsp+68h] [rbp-39h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-31h] BYREF
  int v10; // [rsp+80h] [rbp-21h] BYREF
  __int64 v11; // [rsp+88h] [rbp-19h]
  UNICODE_STRING *p_Destination; // [rsp+90h] [rbp-11h]
  int v13; // [rsp+98h] [rbp-9h]
  ACL *v14; // [rsp+A0h] [rbp-1h]
  __int64 v15; // [rsp+A8h] [rbp+7h]
  __int64 v16; // [rsp+B0h] [rbp+Fh] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B8h] [rbp+17h] BYREF
  _DWORD FileInformation[10]; // [rsp+C8h] [rbp+27h] BYREF

  v1 = ObjectAttributes;
  FileHandle = 0LL;
  HiberFileSecurityDescriptor = 0LL;
  FileObject = 0LL;
  Destination.Buffer = 0LL;
  if ( !ObjectAttributes )
  {
    RtlInitUnicodeString(&DestinationString, L"\\hiberfil.sys");
    Destination.MaximumLength = DestinationString.Length + IoArcBootDeviceName.Length;
    Destination.Length = 0;
    Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(
                                      PagedPool,
                                      (unsigned __int16)(DestinationString.Length + IoArcBootDeviceName.Length),
                                      0x72626968u);
    if ( !Destination.Buffer )
      return;
    RtlAppendUnicodeStringToString(&Destination, &IoArcBootDeviceName);
    RtlAppendUnicodeStringToString(&Destination, &DestinationString);
    HiberFileSecurityDescriptor = PopCreateHiberFileSecurityDescriptor();
    v10 = 48;
    v11 = 0LL;
    p_Destination = &Destination;
    v1 = (OBJECT_ATTRIBUTES *)&v10;
    v13 = 576;
    v14 = HiberFileSecurityDescriptor;
    v15 = 0LL;
  }
  v3 = ZwDeleteFile(v1);
  if ( (int)(v3 + 0x80000000) >= 0
    && v3 != -1073741772
    && ZwOpenFile(&FileHandle, 0x10100u, v1, &IoStatusBlock, 7u, 0x204000u) >= 0 )
  {
    if ( (int)ObpReferenceObjectByHandleWithTag(
                (ULONG_PTR)FileHandle,
                0x10000,
                (__int64)IoFileObjectType,
                KeGetCurrentThread()->PreviousMode,
                0x62486F50u,
                &FileObject,
                &v16,
                0LL) >= 0 )
    {
      memset(FileInformation, 0, sizeof(FileInformation));
      FileInformation[8] = 128;
      v4 = FileObject;
      IoSetInformation(FileObject, FileBasicInformation, 0x28u, FileInformation);
      v5[0] = 1;
      IoSetInformation(v4, FileDispositionInformation, 1u, v5);
      ObfDereferenceObjectWithTag(v4, 0x62486F50u);
    }
    ZwClose(FileHandle);
  }
  if ( HiberFileSecurityDescriptor )
    ExFreePoolWithTag(HiberFileSecurityDescriptor, 0);
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
}
