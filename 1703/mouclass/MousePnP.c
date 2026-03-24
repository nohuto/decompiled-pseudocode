/*
 * XREFs of MousePnP @ 0x1C0001420
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqc @ 0x1C0001610 (WPP_RECORDER_SF_qqc.c)
 *     MouseStart @ 0x1C0002840 (MouseStart.c)
 *     MouseClassRemoveDevice @ 0x1C000499C (MouseClassRemoveDevice.c)
 *     MouEnableDisablePort @ 0x1C000C010 (MouEnableDisablePort.c)
 *     MouseSendIrpSynchronously @ 0x1C000D0B0 (MouseSendIrpSynchronously.c)
 */

__int64 __fastcall MousePnP(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  unsigned int *DeviceExtension; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  int v6; // eax
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  unsigned int v10; // r15d
  __int64 v11; // rdx
  UCHAR MinorFunction; // al
  struct _IO_STACK_LOCATION *v13; // rax
  unsigned int v14; // edi
  _QWORD *PoolWithTag; // r15
  PIO_WORKITEM WorkItem; // rax
  struct _IO_STACK_LOCATION *v18; // rax
  struct _IO_STACK_LOCATION *v19; // rax
  char v20; // di
  char *v21; // r15
  void *v22; // rbp
  struct _IO_STACK_LOCATION *v23; // rax
  unsigned int v24; // ebx
  NTSTATUS v25; // eax
  ULONG RemlockSize; // [rsp+20h] [rbp-48h]
  _QWORD v27[5]; // [rsp+40h] [rbp-28h] BYREF

  DeviceExtension = (unsigned int *)DeviceObject->DeviceExtension;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( !*((_BYTE *)DeviceExtension + 64) )
  {
    Irp->IoStatus.Status = -1073741637;
    Irp->IoStatus.Information = 0LL;
    IofCompleteRequest(Irp, 0);
    return 3221225659LL;
  }
  v6 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 1, Irp, File, 1u, 0x20u);
  v10 = v6;
  if ( v6 < 0 )
  {
    Irp->IoStatus.Status = v6;
    Irp->IoStatus.Information = 0LL;
    IofCompleteRequest(Irp, 0);
    return v10;
  }
  WPP_RECORDER_SF_qqc(
    WPP_GLOBAL_Control->DeviceExtension,
    v7,
    v8,
    v9,
    RemlockSize,
    (char)DeviceObject,
    (char)Irp,
    CurrentStackLocation->MinorFunction);
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( MinorFunction >= 5u && MinorFunction < 0x17u )
    goto LABEL_5;
  if ( !MinorFunction )
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x10uLL, 0x43756F4Du);
    if ( PoolWithTag )
    {
      *PoolWithTag = 0LL;
      PoolWithTag[1] = 0LL;
      WorkItem = IoAllocateWorkItem(DeviceObject);
      *PoolWithTag = WorkItem;
      if ( WorkItem )
      {
        PoolWithTag[1] = Irp;
        IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 1, MouseStartWorker, File, 1u, 0x20u);
        v18 = Irp->Tail.Overlay.CurrentStackLocation;
        v14 = 259;
        *(_OWORD *)&v18[-1].MajorFunction = *(_OWORD *)&v18->MajorFunction;
        *(_OWORD *)&v18[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v18->Parameters.NotifyDirectoryEx.CompletionFilter;
        *(_OWORD *)(&v18[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v18->Parameters.SetQuota + 6);
        v18[-1].FileObject = v18->FileObject;
        v18[-1].Control = 0;
        v19 = Irp->Tail.Overlay.CurrentStackLocation;
        v19[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)&MousePnpStartCompletion;
        v19[-1].Context = PoolWithTag;
        v19[-1].Control = -32;
        Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
        IofCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 2), Irp);
        goto LABEL_6;
      }
      ExFreePoolWithTag(PoolWithTag, 0);
    }
    MouseSendIrpSynchronously(*((PDEVICE_OBJECT *)DeviceExtension + 2), Irp);
    v27[1] = Irp;
    v27[0] = 0LL;
    v25 = MouseStart(DeviceObject, v27);
    Irp->IoStatus.Status = v25;
    Irp->IoStatus.Information = 0LL;
    v14 = v25;
    IofCompleteRequest(Irp, 0);
    goto LABEL_6;
  }
  if ( MinorFunction != 2 )
  {
    if ( MinorFunction == 4 )
    {
      if ( *((_BYTE *)DeviceExtension + 65) )
      {
        ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
        if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels && SHIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) > 0 )
        {
          v20 = *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * DeviceExtension[45] + 16);
          v21 = (char *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * DeviceExtension[45];
          v21[16] = 0;
          ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
          if ( v20 )
          {
            v22 = (void *)_InterlockedExchange64((volatile __int64 *)DeviceExtension + 39, 0LL);
            if ( v22 )
              IoUnregisterPlugPlayNotification(v22);
            MouEnableDisablePort(0LL, 0LL, DeviceExtension, v21);
          }
        }
        else
        {
          ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
        }
      }
      *((_BYTE *)DeviceExtension + 65) = 0;
    }
    else
    {
      if ( MinorFunction != 23 )
      {
LABEL_5:
        v13 = Irp->Tail.Overlay.CurrentStackLocation;
        *(_OWORD *)&v13[-1].MajorFunction = *(_OWORD *)&v13->MajorFunction;
        *(_OWORD *)&v13[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v13->Parameters.NotifyDirectoryEx.CompletionFilter;
        *(_OWORD *)(&v13[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v13->Parameters.SetQuota + 6);
        v13[-1].FileObject = v13->FileObject;
        v13[-1].Control = 0;
        v14 = IofCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 2), Irp);
LABEL_6:
        IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 1, Irp, 0x20u);
        return v14;
      }
      LOBYTE(v11) = 1;
      MouseClassRemoveDevice(DeviceExtension, v11);
    }
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    v14 = IofCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 2), Irp);
    goto LABEL_6;
  }
  MouseClassRemoveDevice(DeviceExtension, 0LL);
  IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)DeviceExtension + 1, Irp, 0x20u);
  v23 = Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&v23[-1].MajorFunction = *(_OWORD *)&v23->MajorFunction;
  *(_OWORD *)&v23[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v23->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&v23[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v23->Parameters.SetQuota + 6);
  v23[-1].FileObject = v23->FileObject;
  v23[-1].Control = 0;
  v24 = IofCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 2), Irp);
  ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
  {
    if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) <= 1 )
    {
      LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) = 0;
      if ( WPP_MAIN_CB.Queue.Wcb.DeviceRoutine )
      {
        ExFreePoolWithTag(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, 0);
        WPP_MAIN_CB.Queue.Wcb.DeviceRoutine = 0LL;
      }
    }
    else
    {
      *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * DeviceExtension[45] + 19) = 1;
      *(_OWORD *)((char *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * DeviceExtension[45]) = 0uLL;
    }
  }
  ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  IoDetachDevice(*((PDEVICE_OBJECT *)DeviceExtension + 2));
  RtlFreeUnicodeString((PUNICODE_STRING)(DeviceExtension + 22));
  ExFreePoolWithTag(*((PVOID *)DeviceExtension + 13), 0);
  IoDeleteDevice(DeviceObject);
  return v24;
}
