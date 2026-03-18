/*
 * XREFs of PopCreateHiberFile @ 0x1406FB4BC
 * Callers:
 *     PopEnableHiberFile @ 0x1405AD8E0 (PopEnableHiberFile.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x1400DE270 (RtlAppendUnicodeStringToString.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwSetInformationFile @ 0x14017DDA0 (ZwSetInformationFile.c)
 *     ZwFsControlFile @ 0x14017DFE0 (ZwFsControlFile.c)
 *     ZwFlushBuffersFile @ 0x14017E220 (ZwFlushBuffersFile.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     IoCreateFile @ 0x140583760 (IoCreateFile.c)
 *     PopDeleteHiberFile @ 0x1405ADA44 (PopDeleteHiberFile.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x1405ADB78 (PopCreateHiberFileSecurityDescriptor.c)
 *     PopResetCurrentPolicies @ 0x1405B8D04 (PopResetCurrentPolicies.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x1405D4884 (FsRtlIssueFileNotificationFsctl.c)
 *     PopSanityCheckHiberFile @ 0x1406FC1F4 (PopSanityCheckHiberFile.c)
 *     PopSetHiberFileMcb @ 0x1406FC2D8 (PopSetHiberFileMcb.c)
 *     PopValidateExistingHiberFile @ 0x1406FC55C (PopValidateExistingHiberFile.c)
 */

__int64 __fastcall PopCreateHiberFile(LARGE_INTEGER a1)
{
  struct _FILE_OBJECT *v1; // rsi
  NTSTATUS v2; // ebx
  ACL *HiberFileSecurityDescriptor; // r14
  NTSTATUS v4; // eax
  HANDLE v5; // rdi
  NTSTATUS v6; // eax
  NTSTATUS v7; // eax
  NTSTATUS Status; // eax
  __int64 v9; // rdx
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
  v4 = IoCreateFile(
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
  if ( v4 < 0 )
    goto LABEL_37;
  v5 = FileHandle;
  if ( IoStatusBlock.Information == 3 || !IoStatusBlock.Information )
    v4 = PopValidateExistingHiberFile(FileHandle);
  if ( v4 < 0 )
  {
LABEL_37:
    PopDeleteHiberFile(&ObjectAttributes);
    v6 = IoCreateFile(
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
    v5 = FileHandle;
    v2 = v6;
    if ( v6 < 0 )
      goto LABEL_26;
  }
  v7 = ObReferenceObjectByHandle(v5, 3u, (POBJECT_TYPE)IoFileObjectType, 0, &FileHandle, 0LL);
  v1 = (struct _FILE_OBJECT *)FileHandle;
  v2 = v7;
  if ( v7 < 0 )
    goto LABEL_26;
  FileInformation = AllocationSize;
  v2 = ZwSetInformationFile(v5, &IoStatusBlock, &FileInformation, 8u, FileEndOfFileInformation);
  if ( v2 == 259 )
  {
    KeWaitForSingleObject(&v1->Event, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
    v2 = IoStatusBlock.Status;
  }
  else
  {
    Status = IoStatusBlock.Status;
  }
  if ( v2 < 0 )
    goto LABEL_26;
  if ( Status < 0 )
  {
    v2 = Status;
    goto LABEL_26;
  }
  if ( (v1->DeviceObject->Flags & 0x100) == 0 )
  {
    v2 = -1073741823;
LABEL_26:
    if ( v5 )
      ZwClose(v5);
    if ( v1 )
      ObfDereferenceObject(v1);
    goto LABEL_30;
  }
  v2 = ZwFsControlFile(v5, 0LL, 0LL, 0LL, &IoStatusBlock, 0x9004Fu, 0LL, 0, 0LL, 0);
  if ( v2 == 259 )
  {
    KeWaitForSingleObject(&v1->Event, Executive, 0, 0, 0LL);
    v2 = IoStatusBlock.Status;
  }
  if ( v2 < 0 )
    goto LABEL_26;
  if ( ZwFlushBuffersFile(v5, &IoStatusBlock) == 259 )
    KeWaitForSingleObject(&v1->Event, Executive, 0, 0, 0LL);
  v2 = PopSanityCheckHiberFile(
         (_DWORD)v5,
         (_DWORD)v1,
         (unsigned int)&AllocationSize,
         (unsigned int)&P,
         (__int64)&FileHandle);
  if ( v2 < 0 )
    goto LABEL_26;
  v2 = PopSetHiberFileMcb(P, (unsigned int)FileHandle);
  if ( v2 < 0 )
    goto LABEL_26;
  qword_140365B10 = AllocationSize.QuadPart;
  PopHiberInfo = v5;
  FileObject = v1;
  FsRtlIssueFileNotificationFsctl(v1, v9, (__int128 *)&FILE_TYPE_NOTIFICATION_GUID_HIBERNATION_FILE);
  PopResetCurrentPolicies();
  v2 = 0;
LABEL_30:
  if ( HiberFileSecurityDescriptor )
    ExFreePoolWithTag(HiberFileSecurityDescriptor, 0);
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  return (unsigned int)v2;
}
