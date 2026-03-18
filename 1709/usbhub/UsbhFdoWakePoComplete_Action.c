/*
 * XREFs of UsbhFdoWakePoComplete_Action @ 0x1C0003FC0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhQueueWorkItemEx @ 0x1C0002284 (UsbhQueueWorkItemEx.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0004944 (UsbhReleaseFdoPwrLock.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C00049D0 (UsbhAcquireFdoPwrLock.c)
 *     UsbhSetFdoPowerState @ 0x1C0004A78 (UsbhSetFdoPowerState.c)
 *     GET_FDO_POWER_STATE @ 0x1C0004FA4 (GET_FDO_POWER_STATE.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D10C (WPP_RECORDER_SF_.c)
 */

void __fastcall UsbhFdoWakePoComplete_Action(
        __int64 DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        PVOID Context,
        PIO_STATUS_BLOCK IoStatus)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned int Status; // ebp
  unsigned int v10; // eax
  __int64 v11; // rax

  v6 = FdoExt(DeviceObject);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      13,
      (__int64)&WPP_5959a78b850834ce071a1dc82810c49d_Traceguids);
  v7 = FdoExt(DeviceObject);
  *(_QWORD *)(v6 + 4888) = 0LL;
  *(_DWORD *)(v6 + 4884) = 1;
  v8 = v7 + 1384;
  UsbhAcquireFdoPwrLock(DeviceObject, v7 + 1384, 122LL, 829120887LL);
  Status = IoStatus->Status;
  if ( IoStatus->Status >= 0 )
  {
    Log(DeviceObject, 16, 1750548811, 0, 0LL);
    *(_DWORD *)(v6 + 2560) |= 0x20000u;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        14,
        (__int64)&WPP_5959a78b850834ce071a1dc82810c49d_Traceguids);
    if ( (unsigned int)GET_FDO_POWER_STATE(v8) == 201 )
    {
      v11 = FdoExt(DeviceObject);
      Status = UsbhQueueWorkItemEx(DeviceObject, 1u, (int)UsbhSShResumeWorker, v11 + 1912, 0, 2001228627, 0LL);
    }
  }
  KeSetEvent((PRKEVENT)(v6 + 4896), 0, 0);
  v10 = GET_FDO_POWER_STATE(v8);
  UsbhSetFdoPowerState(DeviceObject, Status, v10);
  UsbhReleaseFdoPwrLock(DeviceObject, v8);
}
