/*
 * XREFs of UsbhFdoPnp_QueryCaps @ 0x1C0008520
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 */

NTSTATUS __fastcall UsbhFdoPnp_QueryCaps(struct _DEVICE_OBJECT *Context, PIRP Irp)
{
  __int64 v4; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  __int64 v6; // rsi
  _IO_STACK_LOCATION *v8; // rax

  v4 = FdoExt(Context);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v6 = v4;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  if ( IoSetCompletionRoutineEx(Context, Irp, UsbhQueryCapsComplete, Context, 1u, 0, 0) < 0 )
  {
    v8 = Irp->Tail.Overlay.CurrentStackLocation;
    v8[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))UsbhQueryCapsComplete;
    v8[-1].Context = Context;
    v8[-1].Control = 64;
  }
  return IofCallDriver(*(PDEVICE_OBJECT *)(v6 + 1208), Irp);
}
