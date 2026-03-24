/*
 * XREFs of MouseSendIrpSynchronously @ 0x1C000CD78
 * Callers:
 *     MousePnP @ 0x1C00011B0 (MousePnP.c)
 *     MouseStart @ 0x1C0003F10 (MouseStart.c)
 *     MouEnableDisablePort @ 0x1C000B010 (MouEnableDisablePort.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MouseSendIrpSynchronously(PDEVICE_OBJECT DeviceObject, PIRP Irp, char a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v7; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  if ( a3 )
  {
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                               + 6);
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
  }
  v7 = Irp->Tail.Overlay.CurrentStackLocation;
  v7[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)MouSyncComplete;
  v7[-1].Context = &Event;
  v7[-1].Control = -32;
  IofCallDriver(DeviceObject, Irp);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  return (unsigned int)Irp->IoStatus.Status;
}
