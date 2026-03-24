/*
 * XREFs of KeyboardSendIrpSynchronously @ 0x1C000D3C0
 * Callers:
 *     KeyboardPnP @ 0x1C0001F20 (KeyboardPnP.c)
 *     KeyboardStart @ 0x1C00025B0 (KeyboardStart.c)
 *     KbdEnableDisablePort @ 0x1C000CBB0 (KbdEnableDisablePort.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardSendIrpSynchronously(PDEVICE_OBJECT DeviceObject, PIRP Irp, char a3)
{
  struct _IO_STACK_LOCATION *v6; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
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
  v6 = Irp->Tail.Overlay.CurrentStackLocation;
  v6[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)KbdSyncComplete;
  v6[-1].Context = &Event;
  v6[-1].Control = -32;
  IofCallDriver(DeviceObject, Irp);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  return (unsigned int)Irp->IoStatus.Status;
}
