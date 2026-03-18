/*
 * XREFs of WPP_RECORDER_SF_dq @ 0x1C003C218
 * Callers:
 *     UsbhSS_PdoWakeWorker @ 0x1C0001710 (UsbhSS_PdoWakeWorker.c)
 *     UsbhFdoSetPowerDx_Action @ 0x1C0001CA0 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C0006D04 (UsbhSyncResetDeviceInternal.c)
 *     Usbh_PCE_QueueDriverReset_Action @ 0x1C0007A08 (Usbh_PCE_QueueDriverReset_Action.c)
 *     Usbh_PCE_psSUSPEND_Action @ 0x1C00098B8 (Usbh_PCE_psSUSPEND_Action.c)
 *     Usbh_PCE_Disable_Action @ 0x1C000C730 (Usbh_PCE_Disable_Action.c)
 *     Usbh_PCE_Enable_Action @ 0x1C000CC80 (Usbh_PCE_Enable_Action.c)
 *     Usbh_PCE_QueueChange_Action @ 0x1C000D5A0 (Usbh_PCE_QueueChange_Action.c)
 *     UsbhHubProcessChangeWorker @ 0x1C000DCE0 (UsbhHubProcessChangeWorker.c)
 *     UsbhBusPause_Action @ 0x1C000E8D0 (UsbhBusPause_Action.c)
 *     UsbhHubRunPortChangeQueue @ 0x1C000F560 (UsbhHubRunPortChangeQueue.c)
 *     Usbh_PCE_wRun_Action @ 0x1C000FE10 (Usbh_PCE_wRun_Action.c)
 *     Usbh_PCE_wChange_Action @ 0x1C00103B0 (Usbh_PCE_wChange_Action.c)
 *     Usbh_PCE_wDone_Action @ 0x1C0010890 (Usbh_PCE_wDone_Action.c)
 *     UsbhHubDispatchPortEvent @ 0x1C0010E20 (UsbhHubDispatchPortEvent.c)
 *     Usbh_PCE_psPAUSED_Action @ 0x1C00236A0 (Usbh_PCE_psPAUSED_Action.c)
 *     UsbhBusConnectPdo @ 0x1C002557C (UsbhBusConnectPdo.c)
 *     UsbhPCE_psSUSPEND @ 0x1C00273D4 (UsbhPCE_psSUSPEND.c)
 *     UsbhGetDeviceBusInfo @ 0x1C003AC8C (UsbhGetDeviceBusInfo.c)
 *     UsbhHubSyncSuspendPortEvent @ 0x1C0040230 (UsbhHubSyncSuspendPortEvent.c)
 *     UsbhPCE_Check @ 0x1C0040478 (UsbhPCE_Check.c)
 *     UsbhPCE_Close @ 0x1C0040538 (UsbhPCE_Close.c)
 *     UsbhPCE_Disable @ 0x1C004060C (UsbhPCE_Disable.c)
 *     UsbhPCE_HW_Stop @ 0x1C0040828 (UsbhPCE_HW_Stop.c)
 *     UsbhPCE_SD_Resume @ 0x1C0040D60 (UsbhPCE_SD_Resume.c)
 *     UsbhPCE_wChangeERROR @ 0x1C0040F14 (UsbhPCE_wChangeERROR.c)
 *     Usbh_PCE_Check_Action @ 0x1C00415F4 (Usbh_PCE_Check_Action.c)
 *     Usbh_PCE_Close_Action @ 0x1C004170C (Usbh_PCE_Close_Action.c)
 *     Usbh_PCE_HW_Stop_Action @ 0x1C0041914 (Usbh_PCE_HW_Stop_Action.c)
 *     Usbh_PCE_SD_Resume_Action @ 0x1C0041E8C (Usbh_PCE_SD_Resume_Action.c)
 *     Usbh_PCE_SoftDisconnect_Action @ 0x1C0041FDC (Usbh_PCE_SoftDisconnect_Action.c)
 *     Usbh_PCE_wChangeERROR_Action @ 0x1C0042290 (Usbh_PCE_wChangeERROR_Action.c)
 *     UsbhExceptionTrace @ 0x1C004F430 (UsbhExceptionTrace.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00285B0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_dq(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, __int64 a5, ...)
{
  int v8; // [rsp+20h] [rbp-38h]
  __int64 v9; // [rsp+88h] [rbp+30h] BYREF
  va_list va; // [rsp+88h] [rbp+30h]
  va_list va1; // [rsp+90h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v9 = va_arg(va1, _QWORD);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, __int64, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      a5,
      a4,
      (__int64 *)va,
      4LL,
      va1,
      8LL,
      0LL);
  LOWORD(v8) = a4;
  return WppAutoLogTrace(a1, 0LL, 1LL, a5, v8, (__int64 *)va);
}
