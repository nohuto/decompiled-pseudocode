/*
 * XREFs of UsbhFdoSxIoComplete_Action @ 0x1C0002AE0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x1C0003190 (UsbhPoStartNextPowerIrp_Fdo.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0004944 (UsbhReleaseFdoPwrLock.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C00049D0 (UsbhAcquireFdoPwrLock.c)
 *     UsbhSetFdoPowerState @ 0x1C0004A78 (UsbhSetFdoPowerState.c)
 *     UsbhEtwLogHubPowerEvent @ 0x1C0004B00 (UsbhEtwLogHubPowerEvent.c)
 *     UsbhCanSuspend @ 0x1C0005C48 (UsbhCanSuspend.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 *     UsbhFdoPower_PowerFailureEntry @ 0x1C00468E4 (UsbhFdoPower_PowerFailureEntry.c)
 */

__int64 __fastcall UsbhFdoSxIoComplete_Action(PDEVICE_OBJECT DeviceObject, PIRP Irp, _QWORD *Context)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  __int64 v7; // rax
  int LowPart; // ebp
  __int64 v9; // rdi
  __int64 v10; // r13
  POWER_STATE v11; // ebx
  int v12; // r12d
  NTSTATUS v13; // eax
  int v14; // ebp

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v7 = FdoExt(DeviceObject);
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  v9 = v7;
  if ( LowPart != ((CurrentStackLocation->Parameters.Read.Length >> 8) & 0xF) )
    LowPart = (CurrentStackLocation->Parameters.Read.Length >> 8) & 0xF;
  Log((_DWORD)DeviceObject, 16, 1937262915, (_DWORD)Context, (__int64)Irp);
  v10 = Context[9];
  UsbhAcquireFdoPwrLock(DeviceObject, v10, 112LL, 829977449LL);
  *(_DWORD *)(v9 + 4216) = 0;
  if ( (unsigned __int8)UsbhCanSuspend(DeviceObject, (unsigned int)LowPart) )
  {
    v11.SystemState = PowerSystemSleeping2;
    *(_DWORD *)(v9 + 4216) = 1;
  }
  else
  {
    v11.SystemState = PowerSystemSleeping3;
    *(_DWORD *)(v9 + 4216) = 0;
  }
  if ( LowPart > 4 && *(_DWORD *)(v9 + 4216) == 1 )
    *(_DWORD *)(v9 + 4216) = 2;
  UsbhSetFdoPowerState(DeviceObject, 0LL, 203LL);
  *((_DWORD *)Context + 22) = *(_DWORD *)(v9 + 4216);
  *((POWER_STATE *)Context + 7) = v11;
  v12 = *(_DWORD *)(FdoExt(DeviceObject) + 4212);
  *(_DWORD *)(FdoExt(DeviceObject) + 4212) = LowPart;
  UsbhReleaseFdoPwrLock(DeviceObject, v10);
  ((void (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, __int64))Log)(
    (_DWORD)DeviceObject,
    16,
    1937265233,
    (POWER_STATE)v11.SystemState,
    (__int64)Irp);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      20,
      (__int64)&WPP_5959a78b850834ce071a1dc82810c49d_Traceguids,
      LowPart);
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))UsbhEtwLogHubPowerEvent)(
    DeviceObject,
    Irp,
    0LL,
    &USBHUB_ETW_EVENT_HUB_POWER_SET_DX_START,
    (POWER_STATE)v11.SystemState,
    0);
  v13 = PoRequestPowerIrp(DeviceObject, 2u, v11, UsbhFdoDxPoComplete_Action, Context, 0LL);
  v14 = v13;
  if ( v13 == 259 )
    return 3221225494LL;
  Log((_DWORD)DeviceObject, 16, 1937261906, v13, (__int64)Irp);
  Irp->IoStatus.Status = v14;
  UsbhAcquireFdoPwrLock(DeviceObject, v10, 117LL, 846754665LL);
  *(_DWORD *)(FdoExt(DeviceObject) + 4212) = v12;
  UsbhFdoPower_PowerFailureEntry((_DWORD)DeviceObject);
  UsbhPoStartNextPowerIrp_Fdo(DeviceObject, Irp, 2519LL);
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))UsbhEtwLogHubPowerEvent)(
    DeviceObject,
    Irp,
    0LL,
    &USBHUB_ETW_EVENT_HUB_POWER_SET_DX_COMPLETE,
    (POWER_STATE)v11.SystemState,
    v14);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v9 + 1224), Irp, 0x20u);
  return 0LL;
}
