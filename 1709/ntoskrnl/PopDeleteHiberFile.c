/*
 * XREFs of PopDeleteHiberFile @ 0x1405ADA44
 * Callers:
 *     PopEnableHiberFile @ 0x1405AD8E0 (PopEnableHiberFile.c)
 *     PopCreateHiberFile @ 0x1406FB4BC (PopCreateHiberFile.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x1400DE270 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwOpenFile @ 0x14017DF20 (ZwOpenFile.c)
 *     ZwDeleteFile @ 0x14017F220 (ZwDeleteFile.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     IoSetInformation @ 0x14059BCF0 (IoSetInformation.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x1405ADB78 (PopCreateHiberFileSecurityDescriptor.c)
 */

void __fastcall PopDeleteHiberFile(POBJECT_ATTRIBUTES ObjectAttributes)
{
  OBJECT_ATTRIBUTES *v1; // rbx
  void *HiberFileSecurityDescriptor; // rdi
  NTSTATUS v3; // eax
  struct _FILE_OBJECT *v4; // rbx
  char v5[8]; // [rsp+38h] [rbp-59h] BYREF
  HANDLE FileHandle; // [rsp+40h] [rbp-51h] BYREF
  UNICODE_STRING Destination; // [rsp+48h] [rbp-49h] BYREF
  PVOID Object; // [rsp+58h] [rbp-39h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-31h] BYREF
  int v10; // [rsp+70h] [rbp-21h] BYREF
  __int64 v11; // [rsp+78h] [rbp-19h]
  UNICODE_STRING *p_Destination; // [rsp+80h] [rbp-11h]
  int v13; // [rsp+88h] [rbp-9h]
  void *v14; // [rsp+90h] [rbp-1h]
  __int64 v15; // [rsp+98h] [rbp+7h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+A0h] [rbp+Fh] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A8h] [rbp+17h] BYREF
  _DWORD FileInformation[10]; // [rsp+B8h] [rbp+27h] BYREF

  v1 = ObjectAttributes;
  FileHandle = 0LL;
  HiberFileSecurityDescriptor = 0LL;
  Destination.Buffer = 0LL;
  if ( !ObjectAttributes )
  {
    RtlInitUnicodeString(&DestinationString, L"\\hiberfil.sys");
    Destination.Length = 0;
    Destination.MaximumLength = DestinationString.Length + IoArcBootDeviceName.Length;
    Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(
                                      PagedPool,
                                      (unsigned __int16)(DestinationString.Length + IoArcBootDeviceName.Length),
                                      0x72626968u);
    if ( !Destination.Buffer )
      return;
    RtlAppendUnicodeStringToString(&Destination, &IoArcBootDeviceName);
    RtlAppendUnicodeStringToString(&Destination, &DestinationString);
    HiberFileSecurityDescriptor = (void *)PopCreateHiberFileSecurityDescriptor();
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
    if ( ObReferenceObjectByHandle(
           FileHandle,
           0x10000u,
           (POBJECT_TYPE)IoFileObjectType,
           KeGetCurrentThread()->PreviousMode,
           &Object,
           &HandleInformation) >= 0 )
    {
      memset(FileInformation, 0, sizeof(FileInformation));
      FileInformation[8] = 128;
      v4 = (struct _FILE_OBJECT *)Object;
      IoSetInformation((PFILE_OBJECT)Object, FileBasicInformation, 0x28u, FileInformation);
      v5[0] = 1;
      IoSetInformation(v4, FileDispositionInformation, 1u, v5);
      ObfDereferenceObject(v4);
    }
    ZwClose(FileHandle);
  }
  if ( HiberFileSecurityDescriptor )
    ExFreePoolWithTag(HiberFileSecurityDescriptor, 0);
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
}
