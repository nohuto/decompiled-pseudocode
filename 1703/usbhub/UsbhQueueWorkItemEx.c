/*
 * XREFs of UsbhQueueWorkItemEx @ 0x1C00022F4
 * Callers:
 *     UsbhFdoScheduleDeferredPowerRequest @ 0x1C0001628 (UsbhFdoScheduleDeferredPowerRequest.c)
 *     UsbhFdoD0PoComplete_Action @ 0x1C0002120 (UsbhFdoD0PoComplete_Action.c)
 *     UsbhFdoUnblockAllPendedPdoD0Irps @ 0x1C0003D7C (UsbhFdoUnblockAllPendedPdoD0Irps.c)
 *     UsbhPdoDevicePowerState @ 0x1C0004108 (UsbhPdoDevicePowerState.c)
 *     UsbhFdoWakePoComplete_Action @ 0x1C0004430 (UsbhFdoWakePoComplete_Action.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C0006D04 (UsbhSyncResetDeviceInternal.c)
 *     UsbhHubProcessIsr @ 0x1C0013F10 (UsbhHubProcessIsr.c)
 *     UsbhPindicatorTimer @ 0x1C003CA70 (UsbhPindicatorTimer.c)
 *     UsbhQueueDriverOvercurrent @ 0x1C003D5B0 (UsbhQueueDriverOvercurrent.c)
 *     UsbhQueueOvercurrentReset @ 0x1C003D720 (UsbhQueueOvercurrentReset.c)
 *     Usbh_HRS_Queued @ 0x1C0046F40 (Usbh_HRS_Queued.c)
 *     UsbhDriverNotFoundTimer @ 0x1C004AEC0 (UsbhDriverNotFoundTimer.c)
 *     UsbhException @ 0x1C004F144 (UsbhException.c)
 * Callees:
 *     UsbhAllocWorkItem @ 0x1C0002448 (UsbhAllocWorkItem.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C00285B0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhQueueWorkItemEx(__int64 a1, unsigned int a2, int a3, __int64 a4, int a5, int a6, __int64 a7)
{
  char v10; // r13
  unsigned int v11; // ebx
  __int64 v12; // rdi
  __int64 v13; // rsi
  void (__fastcall *v14)(__int64, __int64, void *, _QWORD, __int64, int); // rax
  int v16; // [rsp+28h] [rbp-40h]

  v10 = *(_BYTE *)(FdoExt(a1) + 5268);
  v11 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      46,
      (__int64)&WPP_769f670b4daf3a39507e1b81909708b8_Traceguids,
      a5);
  if ( a6 != 2001228627 )
    Log(a1, 8, 1632720717, a6, a4);
  v12 = a7;
  if ( !a7 )
  {
    v12 = UsbhAllocWorkItem(a1, a3, a4, a5, a6, v10);
    if ( !v12 )
      return 3221225626LL;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      47,
      (__int64)&WPP_769f670b4daf3a39507e1b81909708b8_Traceguids,
      a5);
  if ( a6 != 2001228627 )
    Log(a1, 8, 1364479275, a6, v12);
  v13 = *(_QWORD *)(v12 + 40);
  v14 = *(void (__fastcall **)(__int64, __int64, void *, _QWORD, __int64, int))(FdoExt(a1) + 4784);
  if ( v14 )
  {
    LOBYTE(v16) = v10;
    v14(a1, v13, &UsbhHubWorker, a2, v12, v16);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v11;
}
