/*
 * XREFs of PopCreateHiberFile @ 0x140625404
 * Callers:
 *     PopEnableHiberFile @ 0x140624E34 (PopEnableHiberFile.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x1400BAE30 (RtlAppendUnicodeStringToString.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwSetInformationFile @ 0x1401A79A0 (ZwSetInformationFile.c)
 *     ZwFsControlFile @ 0x1401A7BE0 (ZwFsControlFile.c)
 *     ZwFlushBuffersFile @ 0x1401A7E20 (ZwFlushBuffersFile.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     IoCreateFile @ 0x1404F1130 (IoCreateFile.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405A4770 (ObpReferenceObjectByHandleWithTag.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x140613450 (FsRtlIssueFileNotificationFsctl.c)
 *     PopSanityCheckHiberFile @ 0x140613D44 (PopSanityCheckHiberFile.c)
 *     PopSetHiberFileMcb @ 0x1406140CC (PopSetHiberFileMcb.c)
 *     PopResetCurrentPolicies @ 0x14062625C (PopResetCurrentPolicies.c)
 *     PopValidateExistingHiberFile @ 0x1406268EC (PopValidateExistingHiberFile.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x1406269C4 (PopCreateHiberFileSecurityDescriptor.c)
 *     PopDeleteHiberFile @ 0x1407625E8 (PopDeleteHiberFile.c)
 */

__int64 __fastcall PopCreateHiberFile(LARGE_INTEGER a1)
{
  struct _FILE_OBJECT *v1; // rdi
  void *HiberFileSecurityDescriptor; // r14
  NTSTATUS v3; // eax
  HANDLE v4; // rsi
  int v5; // ebx
  NTSTATUS v6; // eax
  NTSTATUS Status; // eax
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  NTSTATUS v12; // eax
  LARGE_INTEGER FileInformation; // [rsp+70h] [rbp-49h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-41h] BYREF
  UNICODE_STRING Destination; // [rsp+88h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-21h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-11h] BYREF
  HANDLE FileHandle; // [rsp+120h] [rbp+67h] BYREF
  LARGE_INTEGER AllocationSize; // [rsp+128h] [rbp+6Fh] BYREF
  PVOID Object; // [rsp+130h] [rbp+77h] BYREF
  PVOID P; // [rsp+138h] [rbp+7Fh] BYREF

  AllocationSize = a1;
  FileHandle = 0LL;
  Object = 0LL;
  v1 = 0LL;
  P = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\hiberfil.sys");
  Destination.MaximumLength = DestinationString.Length + IoArcBootDeviceName.Length;
  Destination.Length = 0;
  Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(
                                    PagedPool,
                                    (unsigned __int16)(DestinationString.Length + IoArcBootDeviceName.Length),
                                    0x72626968u);
  if ( !Destination.Buffer )
    return (unsigned int)-1073741670;
  RtlAppendUnicodeStringToString(&Destination, &IoArcBootDeviceName);
  RtlAppendUnicodeStringToString(&Destination, &DestinationString);
  HiberFileSecurityDescriptor = (void *)PopCreateHiberFileSecurityDescriptor();
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &Destination;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = HiberFileSecurityDescriptor;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v3 = IoCreateFile(
         &FileHandle,
         0x100003u,
         &ObjectAttributes,
         &IoStatusBlock,
         &AllocationSize,
         0x2006u,
         0,
         5u,
         0x9008u,
         0LL,
         0,
         CreateFileTypeNone,
         0LL,
         0x102u);
  if ( v3 < 0 )
    goto LABEL_39;
  v4 = FileHandle;
  if ( IoStatusBlock.Information == 3 || !IoStatusBlock.Information )
    v3 = PopValidateExistingHiberFile(FileHandle);
  if ( v3 < 0 )
  {
LABEL_39:
    PopDeleteHiberFile(&ObjectAttributes);
    v12 = IoCreateFile(
            &FileHandle,
            0x100003u,
            &ObjectAttributes,
            &IoStatusBlock,
            &AllocationSize,
            0x2006u,
            0,
            0,
            0x9008u,
            0LL,
            0,
            CreateFileTypeNone,
            0LL,
            0x102u);
    v4 = FileHandle;
    v5 = v12;
    if ( v12 < 0 )
      goto LABEL_33;
  }
  v5 = ObpReferenceObjectByHandleWithTag((ULONG_PTR)v4, 3, (__int64)IoFileObjectType, 0, 0x62486F50u, &Object, 0LL, 0LL);
  if ( v5 < 0 )
  {
    v1 = (struct _FILE_OBJECT *)Object;
    goto LABEL_33;
  }
  FileInformation = AllocationSize;
  v6 = ZwSetInformationFile(v4, &IoStatusBlock, &FileInformation, 8u, FileEndOfFileInformation);
  v1 = (struct _FILE_OBJECT *)Object;
  v5 = v6;
  if ( v6 == 259 )
  {
    KeWaitForSingleObject((char *)Object + 152, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
    v5 = IoStatusBlock.Status;
  }
  else
  {
    Status = IoStatusBlock.Status;
  }
  if ( v5 < 0 )
    goto LABEL_33;
  if ( Status < 0 )
  {
    v5 = Status;
    goto LABEL_33;
  }
  if ( (v1->DeviceObject->Flags & 0x100) == 0 )
  {
    v5 = -1073741823;
LABEL_33:
    if ( v4 )
      ZwClose(v4);
    if ( v1 )
      ObfDereferenceObjectWithTag(v1, 0x62486F50u);
    goto LABEL_21;
  }
  v5 = ZwFsControlFile(v4, 0LL, 0LL, 0LL, &IoStatusBlock, 0x9004Fu, 0LL, 0, 0LL, 0);
  if ( v5 == 259 )
  {
    KeWaitForSingleObject(&v1->Event, Executive, 0, 0, 0LL);
    v5 = IoStatusBlock.Status;
  }
  if ( v5 < 0 )
    goto LABEL_33;
  if ( ZwFlushBuffersFile(v4, &IoStatusBlock) == 259 )
    KeWaitForSingleObject(&v1->Event, Executive, 0, 0, 0LL);
  v5 = PopSanityCheckHiberFile(v4, (__int64)v1, &AllocationSize, (__int64 **)&P, &FileHandle);
  if ( v5 < 0 )
    goto LABEL_33;
  v5 = PopSetHiberFileMcb(P, (unsigned int)FileHandle);
  if ( v5 < 0 )
    goto LABEL_33;
  qword_1403AA190 = AllocationSize.QuadPart;
  PopHiberInfo = v4;
  FileObject = v1;
  FsRtlIssueFileNotificationFsctl(v1, v8, (__int128 *)&FILE_TYPE_NOTIFICATION_GUID_HIBERNATION_FILE);
  PopResetCurrentPolicies(v10, v9);
  v5 = 0;
LABEL_21:
  if ( HiberFileSecurityDescriptor )
    ExFreePoolWithTag(HiberFileSecurityDescriptor, 0);
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  return (unsigned int)v5;
}
