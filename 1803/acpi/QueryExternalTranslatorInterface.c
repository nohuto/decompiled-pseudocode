/*
 * XREFs of QueryExternalTranslatorInterface @ 0x1C007AE44
 * Callers:
 *     AcpiCheckExternalConnection @ 0x1C007A724 (AcpiCheckExternalConnection.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00019EC (WPP_RECORDER_SF_D.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     RegisterExternalTranslatorInterface @ 0x1C007B154 (RegisterExternalTranslatorInterface.c)
 */

__int64 QueryExternalTranslatorInterface()
{
  _DWORD *PoolWithTag; // rdi
  struct _DEVICE_OBJECT *AttachedDeviceReference; // r14
  NTSTATUS Status; // ebx
  NTSTATUS Driver; // eax
  int v4; // edx
  PDEVICE_OBJECT *v5; // rsi
  __int64 v6; // rcx
  PIRP v7; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-39h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-29h] BYREF
  struct _KEVENT Event; // [rsp+70h] [rbp-19h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-1h] BYREF
  void *FileHandle; // [rsp+F0h] [rbp+67h] BYREF
  PVOID Object; // [rsp+F8h] [rbp+6Fh] BYREF

  PoolWithTag = 0LL;
  ObjectAttributes.Length = 48;
  DestinationString.Buffer = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  AttachedDeviceReference = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&ResourceHubDeviceName;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  Status = ZwOpenFile(&FileHandle, 0x100003u, &ObjectAttributes, &IoStatusBlock, 3u, 0x10u);
  if ( Status == -1073741772 )
  {
    if ( !LOBYTE(WPP_MAIN_CB.Queue.ListEntry.Flink) )
      goto LABEL_27;
    Driver = ZwLoadDriver((PUNICODE_STRING)&ResourceHubDriver);
    if ( Driver < 0 )
    {
      LOBYTE(v4) = 2;
      WPP_RECORDER_SF_D(
        WPP_GLOBAL_Control->DeviceExtension,
        v4,
        21,
        14,
        (__int64)&WPP_05a11f23d0943a3100389a2588cd23f4_Traceguids,
        Driver);
    }
    Status = ZwOpenFile(&FileHandle, 0x100003u, &ObjectAttributes, &IoStatusBlock, 3u, 0x10u);
  }
  if ( Status < 0 )
  {
LABEL_27:
    if ( DestinationString.Buffer )
      ExFreePoolWithTag(DestinationString.Buffer, 0x58706341u);
    return (unsigned int)Status;
  }
  Status = ObReferenceObjectByHandle(FileHandle, 0x100003u, 0LL, 0, &Object, 0LL);
  v5 = (PDEVICE_OBJECT *)Object;
  ZwClose(FileHandle);
  if ( Status < 0 )
    goto LABEL_20;
  AttachedDeviceReference = IoGetAttachedDeviceReference(v5[1]);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x78uLL, 0x58706341u);
  if ( !PoolWithTag
    || (DestinationString.MaximumLength = 42,
        (DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x2AuLL, 0x58706341u)) == 0LL) )
  {
    Status = -1073741670;
    goto LABEL_20;
  }
  RtlCopyUnicodeString(&DestinationString, &ResourceHubDeviceName);
  memset(PoolWithTag, 0, 0x78uLL);
  *((_QWORD *)PoolWithTag + 2) = 0LL;
  *((_QWORD *)PoolWithTag + 3) = 0LL;
  *((_WORD *)PoolWithTag + 16) = 80;
  *PoolWithTag = 65656;
  v6 = *(_QWORD *)(RootDeviceExtension + 720);
  *((_QWORD *)PoolWithTag + 11) = AcpiExternalInterfaceUnload;
  *((_QWORD *)PoolWithTag + 13) = AcpiAllocateGsivForSecondaryInterrupt;
  *((_QWORD *)PoolWithTag + 12) = AcpiGetFullyQualifiedBiosName;
  *((_QWORD *)PoolWithTag + 10) = v6;
  *((_QWORD *)PoolWithTag + 14) = AcpiUpdateInterruptProperties;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v7 = IoBuildDeviceIoControlRequest(
         0x2AC028u,
         AttachedDeviceReference,
         PoolWithTag,
         0x78u,
         PoolWithTag,
         0x78u,
         0,
         &Event,
         &IoStatusBlock);
  if ( !v7 )
  {
LABEL_19:
    Status = -1073741811;
    goto LABEL_20;
  }
  v7->IoStatus.Status = -1073741637;
  Status = IofCallDriver(AttachedDeviceReference, v7);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  if ( Status >= 0 )
  {
    if ( *((_WORD *)PoolWithTag + 1) && *(_WORD *)PoolWithTag >= 0x78u && *((_QWORD *)PoolWithTag + 7) )
    {
      RegisterExternalTranslatorInterface(PoolWithTag, v5, &DestinationString);
      goto LABEL_20;
    }
    goto LABEL_19;
  }
LABEL_20:
  if ( v5 )
    ObfDereferenceObject(v5);
  if ( AttachedDeviceReference )
    ObfDereferenceObject(AttachedDeviceReference);
  if ( Status < 0 )
  {
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x58706341u);
    goto LABEL_27;
  }
  return (unsigned int)Status;
}
