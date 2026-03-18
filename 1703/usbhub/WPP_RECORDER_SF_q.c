/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1C003C2E0
 * Callers:
 *     UsbhFdoS0IoComplete_Action @ 0x1C0004C10 (UsbhFdoS0IoComplete_Action.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C0006D04 (UsbhSyncResetDeviceInternal.c)
 *     UsbhFdoColdStartPdo @ 0x1C00072E8 (UsbhFdoColdStartPdo.c)
 *     UsbhPdoInternalDeviceControl @ 0x1C0012450 (UsbhPdoInternalDeviceControl.c)
 *     UsbhQueryPortState @ 0x1C00130E0 (UsbhQueryPortState.c)
 *     UsbhSyncSuspendPdoPort @ 0x1C0018FE4 (UsbhSyncSuspendPdoPort.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C0019630 (UsbhPdoPnp_StartDevice.c)
 *     UsbhPdoPnp_QueryDeviceText @ 0x1C001B4B0 (UsbhPdoPnp_QueryDeviceText.c)
 *     UsbhCreatePdo @ 0x1C001FDA0 (UsbhCreatePdo.c)
 *     UsbhSetPdoRegistryParameter @ 0x1C0026110 (UsbhSetPdoRegistryParameter.c)
 *     UsbhFdoSelectConfigurationPdo @ 0x1C0026E24 (UsbhFdoSelectConfigurationPdo.c)
 *     UsbhQueryGlobalLegacyDeviceValue @ 0x1C0027B80 (UsbhQueryGlobalLegacyDeviceValue.c)
 *     UsbhFdoReturnDeviceBusInfo @ 0x1C003E2B8 (UsbhFdoReturnDeviceBusInfo.c)
 *     UsbhWaitForBootDevice @ 0x1C004444C (UsbhWaitForBootDevice.c)
 *     Usbh_BusPause_PdoEvent @ 0x1C0044618 (Usbh_BusPause_PdoEvent.c)
 *     UsbhResetNotifyCompletion @ 0x1C0046CB8 (UsbhResetNotifyCompletion.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1C004975C (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhResetNotificationIrpCompletion @ 0x1C004B980 (UsbhResetNotificationIrpCompletion.c)
 *     UsbhResetNotifyDownstreamHub @ 0x1C004BB18 (UsbhResetNotifyDownstreamHub.c)
 *     UsbhQueryGlobalHubValue @ 0x1C004C0C0 (UsbhQueryGlobalHubValue.c)
 *     UsbhBuildWmiConnectionNotification @ 0x1C004DBF4 (UsbhBuildWmiConnectionNotification.c)
 *     UsbhDeletePdo @ 0x1C0054F90 (UsbhDeletePdo.c)
 *     UsbhQueryUxdDevice @ 0x1C0058BC0 (UsbhQueryUxdDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00285B0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_q(__int64 a1, __int64 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v8; // rbx
  int v9; // eax
  int v11; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+78h] [rbp+30h] BYREF

  va_start(va, a5);
  v8 = (unsigned __int64)a3 >> 16;
  v9 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v8 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v9, (a3 - 1) & 0x1F) )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v8),
      43LL,
      a5,
      a4,
      va,
      8LL,
      0LL);
  LOWORD(v11) = a4;
  return WppAutoLogTrace(a1, 0LL, a3, a5, v11, va);
}
