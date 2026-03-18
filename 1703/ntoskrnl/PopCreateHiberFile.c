/*
 * XREFs of PopCreateHiberFile @ 0x1405D7378
 * Callers:
 *     PopEnableHiberFile @ 0x1405A92A4 (PopEnableHiberFile.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x140080110 (RtlAppendUnicodeStringToString.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwSetInformationFile @ 0x14017E420 (ZwSetInformationFile.c)
 *     ZwFsControlFile @ 0x14017E660 (ZwFsControlFile.c)
 *     ZwFlushBuffersFile @ 0x14017E8A0 (ZwFlushBuffersFile.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     IoCreateFile @ 0x140446D90 (IoCreateFile.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     PopSanityCheckHiberFile @ 0x14057D238 (PopSanityCheckHiberFile.c)
 *     PopSetHiberFileMcb @ 0x14057D378 (PopSetHiberFileMcb.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14058537C (FsRtlIssueFileNotificationFsctl.c)
 *     PopDeleteHiberFile @ 0x14059BA44 (PopDeleteHiberFile.c)
 *     PopResetCurrentPolicies @ 0x1405C3544 (PopResetCurrentPolicies.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x1405D2594 (PopCreateHiberFileSecurityDescriptor.c)
 *     PopValidateExistingHiberFile @ 0x1405D7644 (PopValidateExistingHiberFile.c)
 */

__int64 __fastcall PopCreateHiberFile(LARGE_INTEGER a1)
{
  struct _FILE_OBJECT *v1; // rsi
  ACL *HiberFileSecurityDescriptor; // r14
  NTSTATUS v3; // eax
  HANDLE v4; // rdi
  NTSTATUS v5; // eax
  int v6; // ebx
  NTSTATUS Status; // eax
  __int64 v8; // rdx
  NTSTATUS v10; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-39h] BYREF
  UNICODE_STRING Destination; // [rsp+80h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-9h] BYREF
  HANDLE FileHandle; // [rsp+110h] [rbp+67h] BYREF
  LARGE_INTEGER AllocationSize; // [rsp+118h] [rbp+6Fh] BYREF
  PVOID P; // [rsp+120h] [rbp+77h] BYREF
  LARGE_INTEGER FileInformation; // [rsp+128h] [rbp+7Fh] BYREF

  AllocationSize = a1;
  FileHandle = 0LL;
  v1 = 0LL;
  P = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\hiberfil.sys");
  Destination.Length = 0;
  Destination.MaximumLength = DestinationString.Length + IoArcBootDeviceName.Length;
  Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(
                                    PagedPool,
                                    (unsigned __int16)(DestinationString.Length + IoArcBootDeviceName.Length),
                                    0x72626968u);
  if ( !Destination.Buffer )
    return (unsigned int)-1073741670;
  RtlAppendUnicodeStringToString(&Destination, &IoArcBootDeviceName);
  RtlAppendUnicodeStringToString(&Destination, &DestinationString);
  HiberFileSecurityDescriptor = PopCreateHiberFileSecurityDescriptor();
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
    goto LABEL_38;
  v4 = FileHandle;
  if ( IoStatusBlock.Information == 3 || !IoStatusBlock.Information )
    v3 = PopValidateExistingHiberFile(FileHandle);
  if ( v3 < 0 )
  {
LABEL_38:
    PopDeleteHiberFile(&ObjectAttributes);
    v10 = IoCreateFile(
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
    v6 = v10;
    if ( v10 < 0 )
      goto LABEL_32;
  }
  v5 = ObReferenceObjectByHandle(v4, 3u, (POBJECT_TYPE)IoFileObjectType, 0, &FileHandle, 0LL);
  v1 = (struct _FILE_OBJECT *)FileHandle;
  v6 = v5;
  if ( v5 < 0 )
    goto LABEL_32;
  FileInformation = AllocationSize;
  v6 = ZwSetInformationFile(v4, &IoStatusBlock, &FileInformation, 8u, FileEndOfFileInformation);
  if ( v6 == 259 )
  {
    KeWaitForSingleObject(&v1->Event, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
    v6 = IoStatusBlock.Status;
  }
  else
  {
    Status = IoStatusBlock.Status;
  }
  if ( v6 < 0 )
    goto LABEL_32;
  if ( Status < 0 )
  {
    v6 = Status;
    goto LABEL_32;
  }
  if ( (v1->DeviceObject->Flags & 0x100) == 0 )
  {
    v6 = -1073741823;
LABEL_32:
    if ( v4 )
      ZwClose(v4);
    if ( v1 )
      ObfDereferenceObject(v1);
    goto LABEL_21;
  }
  v6 = ZwFsControlFile(v4, 0LL, 0LL, 0LL, &IoStatusBlock, 0x9004Fu, 0LL, 0, 0LL, 0);
  if ( v6 == 259 )
  {
    KeWaitForSingleObject(&v1->Event, Executive, 0, 0, 0LL);
    v6 = IoStatusBlock.Status;
  }
  if ( v6 < 0 )
    goto LABEL_32;
  if ( ZwFlushBuffersFile(v4, &IoStatusBlock) == 259 )
    KeWaitForSingleObject(&v1->Event, Executive, 0, 0, 0LL);
  v6 = PopSanityCheckHiberFile(v4, (__int64)v1, &AllocationSize, (__int64 **)&P, &FileHandle);
  if ( v6 < 0 )
    goto LABEL_32;
  v6 = PopSetHiberFileMcb(P, (unsigned int)FileHandle);
  if ( v6 < 0 )
    goto LABEL_32;
  qword_14034B2B0 = AllocationSize.QuadPart;
  PopHiberInfo = v4;
  FileObject = v1;
  FsRtlIssueFileNotificationFsctl(v1, v8, (__int128 *)&FILE_TYPE_NOTIFICATION_GUID_HIBERNATION_FILE);
  PopResetCurrentPolicies();
  v6 = 0;
LABEL_21:
  if ( HiberFileSecurityDescriptor )
    ExFreePoolWithTag(HiberFileSecurityDescriptor, 0);
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  return (unsigned int)v6;
}
