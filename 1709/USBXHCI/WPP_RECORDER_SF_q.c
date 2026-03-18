/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1C0015FA8
 * Callers:
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x1C0001460 (Controller_WdfEvtWatchdogTimerFunc.c)
 *     Interrupter_InterrupterRegisterIntialize @ 0x1C0002090 (Interrupter_InterrupterRegisterIntialize.c)
 *     ControllerPreInterruptsDisableAcpiCallout @ 0x1C00069C0 (ControllerPreInterruptsDisableAcpiCallout.c)
 *     CommonBuffer_WdfEvtCleanupCallback @ 0x1C000FA80 (CommonBuffer_WdfEvtCleanupCallback.c)
 *     Controller_LPEEnterExitCallback @ 0x1C0011790 (Controller_LPEEnterExitCallback.c)
 *     Controller_UcxEvtGetFrameNumberAndQpcForTimeSync @ 0x1C0013140 (Controller_UcxEvtGetFrameNumberAndQpcForTimeSync.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x1C0013960 (Controller_UcxEvtStartTrackingForTimeSync.c)
 *     Controller_UcxEvtStopTrackingForTimeSync @ 0x1C0013F40 (Controller_UcxEvtStopTrackingForTimeSync.c)
 *     Controller_WdfEvtDeviceArmWakeFromS0 @ 0x1C00142C0 (Controller_WdfEvtDeviceArmWakeFromS0.c)
 *     Controller_WdfEvtDeviceArmWakeFromSx @ 0x1C00143F0 (Controller_WdfEvtDeviceArmWakeFromSx.c)
 *     Controller_WdfEvtDeviceDisarmWakeFromS0 @ 0x1C0014470 (Controller_WdfEvtDeviceDisarmWakeFromS0.c)
 *     Controller_WdfEvtDeviceDisarmWakeFromSx @ 0x1C00145A0 (Controller_WdfEvtDeviceDisarmWakeFromSx.c)
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x1C0014620 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 *     Controller_WdfEvtDeviceWakeFromS0Triggered @ 0x1C00147A0 (Controller_WdfEvtDeviceWakeFromS0Triggered.c)
 *     Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure @ 0x1C001AA64 (Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure.c)
 *     Interrupter_DeferredWorkProcessor @ 0x1C001DE94 (Interrupter_DeferredWorkProcessor.c)
 *     UsbDevice_EnableCompletion @ 0x1C0033DA0 (UsbDevice_EnableCompletion.c)
 *     ESM_SimulatingEndpointHaltReceivedOnTimeout @ 0x1C003F180 (ESM_SimulatingEndpointHaltReceivedOnTimeout.c)
 *     ESM_SimulatingExpectedEventTRBsProcessedAfterHaltOnTimeout @ 0x1C003F1D0 (ESM_SimulatingExpectedEventTRBsProcessedAfterHaltOnTimeout.c)
 *     ESM_SimulatingExpectedEventTRBsProcessedOnTimeout @ 0x1C003F220 (ESM_SimulatingExpectedEventTRBsProcessedOnTimeout.c)
 *     ESM_SimulatingFSEReceivedOnTimeout @ 0x1C003F270 (ESM_SimulatingFSEReceivedOnTimeout.c)
 *     XilCoreCommonBuffer_FreeUnusedResources @ 0x1C0040A50 (XilCoreCommonBuffer_FreeUnusedResources.c)
 *     XilCoreDeviceSlot_AllocateResources @ 0x1C0040E4C (XilCoreDeviceSlot_AllocateResources.c)
 *     XilCoreUsbDevice_Create @ 0x1C0041320 (XilCoreUsbDevice_Create.c)
 *     Controller_ExecuteHSICDisconnectInU3Workaround @ 0x1C0055044 (Controller_ExecuteHSICDisconnectInU3Workaround.c)
 *     Command_Create @ 0x1C0055148 (Command_Create.c)
 *     CommonBuffer_Create @ 0x1C0055618 (CommonBuffer_Create.c)
 *     Controller_ExecuteKBLPowerTransitionWorkaround @ 0x1C0057418 (Controller_ExecuteKBLPowerTransitionWorkaround.c)
 *     Controller_PopulateHardwareVerifierFlags @ 0x1C005792C (Controller_PopulateHardwareVerifierFlags.c)
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C005A020 (Controller_WdfEvtDevicePrepareHardware.c)
 *     Controller_WdfEvtDeviceReleaseHardware @ 0x1C005A200 (Controller_WdfEvtDeviceReleaseHardware.c)
 *     Controller_WdfEvtDeviceSelfManagedIoCleanup @ 0x1C005A3E0 (Controller_WdfEvtDeviceSelfManagedIoCleanup.c)
 *     DeviceSlot_Create @ 0x1C005A574 (DeviceSlot_Create.c)
 *     IoControl_Create @ 0x1C005CD2C (IoControl_Create.c)
 *     Register_Create @ 0x1C005CE90 (Register_Create.c)
 *     Register_ParseCapabilityRegister @ 0x1C005D19C (Register_ParseCapabilityRegister.c)
 *     UsbDevice_UcxEvtDeviceAdd @ 0x1C005F170 (UsbDevice_UcxEvtDeviceAdd.c)
 *     IntelPptFilter_Create @ 0x1C005F5F4 (IntelPptFilter_Create.c)
 *     DmaEnabler_Create @ 0x1C005FBCC (DmaEnabler_Create.c)
 *     SecureDmaEnabler_Create @ 0x1C005FFAC (SecureDmaEnabler_Create.c)
 *     SecureChannel_Create @ 0x1C0060408 (SecureChannel_Create.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_q(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v8; // rdi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-38h]
  va_list va; // [rsp+88h] [rbp+30h] BYREF

  va_start(va, a5);
  v8 = (unsigned __int64)a3 >> 16;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v8 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v8 + 1) >= a2 )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, _QWORD))WPP_MAIN_CB.Dpc.DeferredContext)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v8),
      43LL,
      a5,
      a4,
      va,
      8LL,
      0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v12, va);
}
