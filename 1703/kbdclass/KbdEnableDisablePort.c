/*
 * XREFs of KbdEnableDisablePort @ 0x1C000CBB0
 * Callers:
 *     KeyboardClassClose @ 0x1C00016A0 (KeyboardClassClose.c)
 *     KeyboardClassCreate @ 0x1C00018B0 (KeyboardClassCreate.c)
 *     KeyboardPnP @ 0x1C0001F20 (KeyboardPnP.c)
 *     KeyboardStart @ 0x1C00025B0 (KeyboardStart.c)
 *     KeyboardClassEnableGlobalPort @ 0x1C000E4BC (KeyboardClassEnableGlobalPort.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0005460 (WPP_RECORDER_SF_.c)
 *     KeyboardSendIrpSynchronously @ 0x1C000D3C0 (KeyboardSendIrpSynchronously.c)
 */

__int64 __fastcall KbdEnableDisablePort(char a1, IRP *a2, PVOID *a3, PFILE_OBJECT *a4)
{
  NTSTATUS Status; // edi
  IRP *v7; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v10; // rax
  struct _DEVICE_OBJECT *v11; // rbx
  struct _IO_STACK_LOCATION *v12; // rax
  __int64 v13; // rdx
  struct _DEVICE_OBJECT *v15; // rcx
  PVOID PoolWithTag; // rbp
  struct _IO_STACK_LOCATION *v17; // rax
  int v18; // eax
  struct _IO_STACK_LOCATION *v19; // rcx
  struct _IO_STACK_LOCATION *v20; // rax
  struct _IO_STACK_LOCATION *v21; // rcx
  struct _IRP *MasterIrp; // rdi
  PDEVICE_OBJECT DeviceObject; // [rsp+40h] [rbp-48h] BYREF
  struct _UNICODE_STRING ObjectName; // [rsp+48h] [rbp-40h] BYREF
  struct _KEVENT Event; // [rsp+58h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+A0h] [rbp+18h] BYREF

  *(_DWORD *)&ObjectName.Length = 0;
  Status = 0;
  ObjectName.Buffer = 0LL;
  DeviceObject = 0LL;
  v7 = a2;
  ResultLength = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, a2, 1LL);
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
      v12[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)KbdSyncComplete;
      v12[-1].Context = &Event;
      v12[-1].Control = -32;
      IofCallDriver(v11, v7);
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = v7->IoStatus.Status;
      goto LABEL_7;
    }
LABEL_16:
    *((_BYTE *)a3 + 360) = a1;
    v17 = v7->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&v17[-1].MajorFunction = *(_OWORD *)&v17->MajorFunction;
    *(_OWORD *)&v17[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v17->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&v17[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v17->Parameters.SetQuota + 6);
    v17[-1].FileObject = v17->FileObject;
    v17[-1].Control = 0;
    v18 = 722947;
    v19 = v7->Tail.Overlay.CurrentStackLocation;
    if ( !a1 )
      v18 = 724995;
    v19[-1].Parameters.Read.Length = 0;
    v19[-1].Parameters.Create.Options = 0;
    v19[-1].Parameters.Read.ByteOffset.LowPart = v18;
    v19[-1].Parameters.CreatePipe.Parameters = 0LL;
    v19[-1].MajorFunction = 15;
    Status = KeyboardSendIrpSynchronously((PDEVICE_OBJECT)a3[2], v7);
    goto LABEL_7;
  }
  if ( !*((_BYTE *)a3 + 64) )
    goto LABEL_16;
  if ( a1 )
  {
    v15 = (struct _DEVICE_OBJECT *)a3[3];
    ResultLength = 0;
    IoGetDeviceProperty(v15, DevicePropertyPhysicalDeviceObjectName, 0, 0LL, &ResultLength);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength, 0x4364624Bu);
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
    {
      if ( v7 )
      {
        v20 = v7->Tail.Overlay.CurrentStackLocation;
        *(_OWORD *)&v20[-1].MajorFunction = *(_OWORD *)&v20->MajorFunction;
        *(_OWORD *)&v20[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v20->Parameters.NotifyDirectoryEx.CompletionFilter;
        *(_OWORD *)(&v20[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v20->Parameters.SetQuota + 6);
        v20[-1].FileObject = v20->FileObject;
        v20[-1].Control = 0;
        v21 = v7->Tail.Overlay.CurrentStackLocation;
        v21[-1].MajorFunction = 15;
        v21[-1].Parameters.Read.Length = 0;
        v21[-1].Parameters.Create.Options = 4;
        v21[-1].Parameters.Read.ByteOffset.LowPart = 720904;
        v21[-1].FileObject = *a4;
        MasterIrp = v7->AssociatedIrp.MasterIrp;
        v7->AssociatedIrp.MasterIrp = (struct _IRP *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 156LL);
        KeyboardSendIrpSynchronously((PDEVICE_OBJECT)a3[2], v7);
        v7->AssociatedIrp.MasterIrp = MasterIrp;
      }
      Status = IoRegisterPlugPlayNotification(
                 EventCategoryTargetDeviceChange,
                 0,
                 *a4,
                 *((PDRIVER_OBJECT *)*a3 + 1),
                 KeyboardClassPlugPlayNotification,
                 a3,
                 a3 + 41);
    }
  }
  else
  {
    ObfDereferenceObject(*a4);
    *a4 = 0LL;
  }
LABEL_7:
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v13) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v13, 1LL);
  }
  return (unsigned int)Status;
}
