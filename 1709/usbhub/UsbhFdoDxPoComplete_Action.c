/*
 * XREFs of UsbhFdoDxPoComplete_Action @ 0x1C0002C90
 * Callers:
 *     <none>
 * Callees:
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x1C0003190 (UsbhPoStartNextPowerIrp_Fdo.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0004944 (UsbhReleaseFdoPwrLock.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C00049D0 (UsbhAcquireFdoPwrLock.c)
 *     UsbhSetFdoPowerState @ 0x1C0004A78 (UsbhSetFdoPowerState.c)
 *     UsbhEtwLogHubPowerEvent @ 0x1C0004B00 (UsbhEtwLogHubPowerEvent.c)
 *     UsbhReleasePowerContext @ 0x1C0004FD4 (UsbhReleasePowerContext.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 */

void __fastcall UsbhFdoDxPoComplete_Action(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        _QWORD *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  IRP *v5; // r15
  __int64 v8; // rdi
  __int64 v10; // r13
  int v11; // r10d
  __int64 v12; // rdi
  int Status; // esi

  v5 = (IRP *)Context[7];
  v8 = MinorFunction;
  v10 = FdoExt(DeviceObject);
  Log((_DWORD)DeviceObject, 16, 1685606467, (_DWORD)Context, v8);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      v11,
      (__int64)&WPP_5959a78b850834ce071a1dc82810c49d_Traceguids,
      PowerState.SystemState);
  v12 = Context[9];
  UsbhAcquireFdoPwrLock(DeviceObject, v12, 108LL, 1869641828LL);
  Status = IoStatus->Status;
  v5->IoStatus.Status = IoStatus->Status;
  *(_BYTE *)(v10 + 4184) = 1;
  *(POWER_STATE *)(FdoExt(DeviceObject) + 4208) = PowerState;
  UsbhSetFdoPowerState(DeviceObject, 0LL, 205LL);
  UsbhReleaseFdoPwrLock(DeviceObject, v12);
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))UsbhEtwLogHubPowerEvent)(
    DeviceObject,
    v5,
    0LL,
    &USBHUB_ETW_EVENT_HUB_POWER_SET_DX_COMPLETE,
    (POWER_STATE)PowerState.SystemState,
    Status);
  UsbhReleasePowerContext(DeviceObject, Context);
  UsbhPoStartNextPowerIrp_Fdo(DeviceObject, v5, 1913LL);
  IofCompleteRequest(v5, 0);
  *(_QWORD *)(v10 + 5080) = MEMORY[0xFFFFF78000000014];
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v10 + 1224), v5, 0x20u);
}
