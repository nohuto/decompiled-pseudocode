/*
 * XREFs of UsbhFdoD0PoComplete_Action @ 0x1C0002120
 * Callers:
 *     <none>
 * Callees:
 *     UsbhQueueWorkItemEx @ 0x1C00022F4 (UsbhQueueWorkItemEx.c)
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x1C00034D0 (UsbhPoStartNextPowerIrp_Fdo.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0004E50 (UsbhReleaseFdoPwrLock.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C0004EE0 (UsbhAcquireFdoPwrLock.c)
 *     UsbhSetFdoPowerState @ 0x1C0004F88 (UsbhSetFdoPowerState.c)
 *     UsbhEtwLogHubPowerEvent @ 0x1C0005130 (UsbhEtwLogHubPowerEvent.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x1C003BD8C (WPP_RECORDER_SF_.c)
 *     UsbhFdoPower_PowerFailureEntry @ 0x1C0045B18 (UsbhFdoPower_PowerFailureEntry.c)
 */

void __fastcall UsbhFdoD0PoComplete_Action(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        _QWORD *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  __int64 v8; // rbp
  __int64 v9; // r12
  char v10; // r13
  int Status; // r14d
  IRP *v12; // r15
  int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // r9
  int v16; // [rsp+20h] [rbp-48h]
  __int64 v17; // [rsp+30h] [rbp-38h]

  v8 = FdoExt(DeviceObject);
  Log((_DWORD)DeviceObject, 16, 1680896111, (_DWORD)Context, IoStatus->Status);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      17,
      (__int64)&WPP_f5dcad1b2f1f36217147d899caa6f39e_Traceguids);
  v9 = Context[9];
  v10 = 0;
  Status = IoStatus->Status;
  v12 = (IRP *)Context[7];
  Log((_DWORD)DeviceObject, 16, 1685090097, (_DWORD)Context, v9);
  UsbhAcquireFdoPwrLock(DeviceObject, v9, 110LL, 829436004LL);
  *(_QWORD *)(v8 + 5088) = MEMORY[0xFFFFF78000000014];
  v13 = (int)DeviceObject;
  if ( (Status & 0xC0000000) != 0xC0000000 )
  {
    v14 = FdoExt(DeviceObject);
    UsbhSetFdoPowerState(DeviceObject, *(unsigned int *)(v14 + 4212), 210LL);
    *(_DWORD *)(FdoExt(DeviceObject) + 4208) = 1;
    UsbhReleaseFdoPwrLock(DeviceObject, v9);
    Log((_DWORD)DeviceObject, 16, 1935962161, 0, (__int64)Context);
    if ( (UsbhQueueWorkItemEx(
            (_DWORD)DeviceObject,
            0,
            (unsigned int)UsbhFdoD0Worker_Action,
            (_DWORD)Context,
            (unsigned int)v15 & v16,
            1769428816,
            v15 & v17) & 0xC0000000) != 0xC0000000 )
    {
      v10 = 1;
      goto LABEL_6;
    }
    *(_QWORD *)(v8 + 5096) = MEMORY[0xFFFFF78000000014];
    UsbhAcquireFdoPwrLock(DeviceObject, v9, 132LL, 846213220LL);
    v13 = (int)DeviceObject;
  }
  UsbhFdoPower_PowerFailureEntry(v13);
LABEL_6:
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))UsbhEtwLogHubPowerEvent)(
    DeviceObject,
    0LL,
    Context + 15,
    &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COMPLETE,
    (POWER_STATE)PowerState.SystemState,
    Status);
  if ( dword_1C006963C )
  {
    UsbhPoStartNextPowerIrp_Fdo(DeviceObject, v12, 2047LL);
    IofCompleteRequest(v12, 0);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 1224), v12, 0x20u);
  }
  *(_QWORD *)(v8 + 5080) = MEMORY[0xFFFFF78000000014];
  if ( !v10 )
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 1224), Context, 0x20u);
}
