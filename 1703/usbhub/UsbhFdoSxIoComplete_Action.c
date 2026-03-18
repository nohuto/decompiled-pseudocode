/*
 * XREFs of UsbhFdoSxIoComplete_Action @ 0x1C0002E50
 * Callers:
 *     <none>
 * Callees:
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x1C00034D0 (UsbhPoStartNextPowerIrp_Fdo.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0004E50 (UsbhReleaseFdoPwrLock.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C0004EE0 (UsbhAcquireFdoPwrLock.c)
 *     UsbhSetFdoPowerState @ 0x1C0004F88 (UsbhSetFdoPowerState.c)
 *     UsbhEtwLogHubPowerEvent @ 0x1C0005130 (UsbhEtwLogHubPowerEvent.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 *     UsbhFdoPower_PowerFailureEntry @ 0x1C0045B18 (UsbhFdoPower_PowerFailureEntry.c)
 */

__int64 __fastcall UsbhFdoSxIoComplete_Action(PDEVICE_OBJECT DeviceObject, PIRP Irp, _QWORD *Context)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  __int64 v7; // rax
  int LowPart; // ebp
  __int64 v9; // rdi
  __int64 v10; // r12
  POWER_STATE v11; // ebx
  int v12; // eax
  int v13; // r13d
  NTSTATUS v14; // eax
  int v15; // ebp

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
  v11.SystemState = PowerSystemSleeping2;
  if ( *(_DWORD *)(FdoExt(DeviceObject) + 4LL * LowPart + 5008) == 3 )
  {
    *(_DWORD *)(v9 + 4216) = 1;
  }
  else
  {
    v11.SystemState = PowerSystemSleeping3;
    *(_DWORD *)(v9 + 4216) = 0;
  }
  if ( LowPart > 4 )
  {
    v12 = *(_DWORD *)(v9 + 4216);
    if ( v12 == 1 )
      v12 = 2;
    *(_DWORD *)(v9 + 4216) = v12;
  }
  UsbhSetFdoPowerState(DeviceObject, 0LL, 203LL);
  *((_DWORD *)Context + 22) = *(_DWORD *)(v9 + 4216);
  *((POWER_STATE *)Context + 7) = v11;
  v13 = *(_DWORD *)(FdoExt(DeviceObject) + 4212);
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
      (__int64)&WPP_f5dcad1b2f1f36217147d899caa6f39e_Traceguids,
      LowPart);
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))UsbhEtwLogHubPowerEvent)(
    DeviceObject,
    Irp,
    0LL,
    &USBHUB_ETW_EVENT_HUB_POWER_SET_DX_START,
    (POWER_STATE)v11.SystemState,
    0);
  v14 = PoRequestPowerIrp(DeviceObject, 2u, v11, UsbhFdoDxPoComplete_Action, Context, 0LL);
  v15 = v14;
  if ( v14 == 259 )
    return 3221225494LL;
  Log((_DWORD)DeviceObject, 16, 1937261906, v14, (__int64)Irp);
  Irp->IoStatus.Status = v15;
  UsbhAcquireFdoPwrLock(DeviceObject, v10, 117LL, 846754665LL);
  *(_DWORD *)(FdoExt(DeviceObject) + 4212) = v13;
  UsbhFdoPower_PowerFailureEntry((_DWORD)DeviceObject);
  UsbhPoStartNextPowerIrp_Fdo(DeviceObject, Irp, 2519LL);
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))UsbhEtwLogHubPowerEvent)(
    DeviceObject,
    Irp,
    0LL,
    &USBHUB_ETW_EVENT_HUB_POWER_SET_DX_COMPLETE,
    (POWER_STATE)v11.SystemState,
    v15);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v9 + 1224), Irp, 0x20u);
  return 0LL;
}
