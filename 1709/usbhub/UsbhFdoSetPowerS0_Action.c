/*
 * XREFs of UsbhFdoSetPowerS0_Action @ 0x1C0001F90
 * Callers:
 *     UsbhFdoSystemPowerState @ 0x1C00041F4 (UsbhFdoSystemPowerState.c)
 * Callees:
 *     UsbhReleaseFdoPwrLock @ 0x1C0004944 (UsbhReleaseFdoPwrLock.c)
 *     UsbhSetFdoPowerState @ 0x1C0004A78 (UsbhSetFdoPowerState.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 */

__int64 __fastcall UsbhFdoSetPowerS0_Action(PDEVICE_OBJECT DeviceObject, PIRP Irp, _QWORD *Context)
{
  __int64 v3; // rbx
  __int64 v7; // r14
  int v8; // r9d
  int v9; // r10d
  int v10; // r10d
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v13; // rax

  v3 = Context[9];
  v7 = FdoExt(DeviceObject);
  Log((_DWORD)DeviceObject, 16, 1350005355, 0, (__int64)Irp);
  Log((_DWORD)DeviceObject, v9, 1348824676, v8, (__int64)Irp);
  UsbhSetFdoPowerState(DeviceObject, 0LL, (unsigned int)(v10 + 192));
  UsbhReleaseFdoPwrLock(DeviceObject, v3);
  Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  if ( IoSetCompletionRoutineEx(DeviceObject, Irp, UsbhFdoS0IoComplete_Action, Context, 1u, 1u, 1u) < 0 )
  {
    v13 = Irp->Tail.Overlay.CurrentStackLocation;
    v13[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))UsbhFdoS0IoComplete_Action;
    v13[-1].Context = Context;
    v13[-1].Control = -32;
  }
  PoCallDriver(*(PDEVICE_OBJECT *)(v7 + 1208), Irp);
  return 259LL;
}
