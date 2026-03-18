/*
 * XREFs of UsbhFdoPnp_DeviceUsageNotification @ 0x1C004B120
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 */

__int64 __fastcall UsbhFdoPnp_DeviceUsageNotification(struct _DEVICE_OBJECT *Context, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r15
  unsigned int Options; // ebx
  _DWORD *v6; // rbp
  int Status; // edi
  PIRP v8; // rbx
  _IO_STACK_LOCATION *v9; // rcx
  _IO_STACK_LOCATION *v10; // rax

  Log((__int64)Context, 2, 1715754318, 0LL, (__int64)Irp);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Options = CurrentStackLocation->Parameters.Create.Options;
  v6 = FdoExt((__int64)Context);
  if ( IoForwardIrpSynchronously(*((PDEVICE_OBJECT *)v6 + 151), Irp) )
    Status = Irp->IoStatus.Status;
  else
    Status = -1073741823;
  if ( Options - 1 <= 2 && Status >= 0 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v6 + 151) + 48LL) & 0x2000) != 0 )
      Context->Flags |= 0x2000u;
    else
      Context->Flags &= ~0x2000u;
  }
  if ( RtlCheckRegistryKey(2u, (PWSTR)L"MiniNT") < 0
    && (Status >= 0 && Options == 1 && CurrentStackLocation->Parameters.SetLock.Lock || Options == 4) )
  {
    v8 = IoAllocateIrp(*(_BYTE *)(*((_QWORD *)v6 + 151) + 76LL), 0);
    if ( !_InterlockedCompareExchange64((volatile signed __int64 *)v6 + 659, (signed __int64)v8, 0LL) )
    {
      if ( !v8 )
        goto LABEL_21;
      *((_BYTE *)v6 + 5268) = 1;
      byte_1C0069688 = 0;
      v9 = v8->Tail.Overlay.CurrentStackLocation;
      v9[-1].Parameters.Create.Options = 0;
      v9[-1].Parameters.Read.Length = 0;
      v9[-1].MajorFunction = 15;
      v9[-1].Parameters.Read.ByteOffset.LowPart = 2232235;
      if ( IoSetCompletionRoutineEx(Context, v8, UsbhResetNotificationIrpCompletion, Context, 1u, 1u, 1u) < 0 )
      {
        v10 = v8->Tail.Overlay.CurrentStackLocation;
        v10[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))UsbhResetNotificationIrpCompletion;
        v10[-1].Context = Context;
        v10[-1].Control = -32;
      }
      IofCallDriver(*((PDEVICE_OBJECT *)v6 + 151), v8);
      v8 = 0LL;
    }
    if ( v8 )
      IoFreeIrp(v8);
  }
LABEL_21:
  Irp->IoStatus.Status = Status;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)Status;
}
