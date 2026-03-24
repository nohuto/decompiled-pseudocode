/*
 * XREFs of MouEnableDisablePort @ 0x1C000C010
 * Callers:
 *     MouseClassClose @ 0x1C0001160 (MouseClassClose.c)
 *     MouseClassCreate @ 0x1C0001280 (MouseClassCreate.c)
 *     MousePnP @ 0x1C0001420 (MousePnP.c)
 *     MouseStart @ 0x1C0002840 (MouseStart.c)
 *     MouseClassEnableGlobalPort @ 0x1C000DE5C (MouseClassEnableGlobalPort.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0005040 (WPP_RECORDER_SF_.c)
 *     MouseSendIrpSynchronously @ 0x1C000D0B0 (MouseSendIrpSynchronously.c)
 */

__int64 __fastcall MouEnableDisablePort(char a1, IRP *a2, PVOID *a3, PFILE_OBJECT *a4)
{
  NTSTATUS Status; // ebx
  IRP *v7; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v10; // rax
  struct _DEVICE_OBJECT *v11; // rdi
  struct _IO_STACK_LOCATION *v12; // rax
  __int64 v13; // rdx
  struct _DEVICE_OBJECT *v15; // rcx
  PVOID PoolWithTag; // rsi
  struct _IO_STACK_LOCATION *v17; // rax
  int v18; // eax
  struct _IO_STACK_LOCATION *v19; // rcx
  PDEVICE_OBJECT DeviceObject; // [rsp+40h] [rbp-48h] BYREF
  struct _UNICODE_STRING ObjectName; // [rsp+48h] [rbp-40h] BYREF
  struct _KEVENT Event; // [rsp+58h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+A0h] [rbp+18h] BYREF

  Status = 0;
  *(_DWORD *)&ObjectName.Length = 0;
  ObjectName.Buffer = 0LL;
  v7 = a2;
  DeviceObject = 0LL;
  ResultLength = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, a2, 2LL);
  }
  if ( a3[1] == *a3 )
  {
    if ( *((_BYTE *)a3 + 64) )
    {
      CurrentStackLocation = v7->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
      *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                                 + 6);
      CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
      CurrentStackLocation[-1].Control = 0;
      v10 = v7->Tail.Overlay.CurrentStackLocation;
      if ( !a1 && v10[-1].MajorFunction != 2 )
        v10[-1].MajorFunction = 2;
      v11 = (struct _DEVICE_OBJECT *)a3[2];
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      v12 = v7->Tail.Overlay.CurrentStackLocation;
      v12[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)MouSyncComplete;
      v12[-1].Context = &Event;
      v12[-1].Control = -32;
      IofCallDriver(v11, v7);
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = v7->IoStatus.Status;
      goto LABEL_9;
    }
LABEL_16:
    *((_BYTE *)a3 + 344) = a1;
    v17 = v7->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&v17[-1].MajorFunction = *(_OWORD *)&v17->MajorFunction;
    *(_OWORD *)&v17[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v17->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&v17[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v17->Parameters.SetQuota + 6);
    v17[-1].FileObject = v17->FileObject;
    v17[-1].Control = 0;
    v18 = 985091;
    v19 = v7->Tail.Overlay.CurrentStackLocation;
    if ( !a1 )
      v18 = 987139;
    v19[-1].Parameters.Read.Length = 0;
    v19[-1].Parameters.Create.Options = 0;
    v19[-1].Parameters.Read.ByteOffset.LowPart = v18;
    v19[-1].Parameters.CreatePipe.Parameters = 0LL;
    v19[-1].MajorFunction = 15;
    Status = MouseSendIrpSynchronously((PDEVICE_OBJECT)a3[2], v7);
    goto LABEL_9;
  }
  if ( !*((_BYTE *)a3 + 64) )
    goto LABEL_16;
  if ( a1 )
  {
    v15 = (struct _DEVICE_OBJECT *)a3[3];
    ResultLength = 0;
    IoGetDeviceProperty(v15, DevicePropertyPhysicalDeviceObjectName, 0, 0LL, &ResultLength);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength, 0x43756F4Du);
    if ( !PoolWithTag )
      return 3221225626LL;
    IoGetDeviceProperty(
      (PDEVICE_OBJECT)a3[3],
      DevicePropertyPhysicalDeviceObjectName,
      ResultLength,
      PoolWithTag,
      &ResultLength);
    ObjectName.MaximumLength = ResultLength;
    ObjectName.Buffer = (PWSTR)PoolWithTag;
    ObjectName.Length = ResultLength - 2;
    Status = IoGetDeviceObjectPointer(&ObjectName, 0x1F01FFu, a4, &DeviceObject);
    ExFreePoolWithTag(PoolWithTag, 0);
    if ( Status >= 0 )
      Status = IoRegisterPlugPlayNotification(
                 EventCategoryTargetDeviceChange,
                 0,
                 *a4,
                 *((PDRIVER_OBJECT *)*a3 + 1),
                 MouseClassPlugPlayNotification,
                 a3,
                 a3 + 39);
  }
  else
  {
    ObfDereferenceObject(*a4);
    *a4 = 0LL;
  }
LABEL_9:
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v13) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v13, 2LL);
  }
  return (unsigned int)Status;
}
