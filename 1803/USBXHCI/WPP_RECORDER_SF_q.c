/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1C0004F28
 * Callers:
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x1C0001640 (Controller_WdfEvtWatchdogTimerFunc.c)
 *     CommonBuffer_WdfEvtCleanupCallback @ 0x1C0006930 (CommonBuffer_WdfEvtCleanupCallback.c)
 *     ControllerPreInterruptsDisableAcpiCallout @ 0x1C0006D14 (ControllerPreInterruptsDisableAcpiCallout.c)
 *     Controller_LPEEnterExitCallback @ 0x1C0008AC0 (Controller_LPEEnterExitCallback.c)
 *     Controller_UcxEvtGetFrameNumberAndQpcForTimeSync @ 0x1C000A830 (Controller_UcxEvtGetFrameNumberAndQpcForTimeSync.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x1C000B0B0 (Controller_UcxEvtStartTrackingForTimeSync.c)
 *     Controller_UcxEvtStopTrackingForTimeSync @ 0x1C000B690 (Controller_UcxEvtStopTrackingForTimeSync.c)
 *     Controller_WdfEvtDeviceArmWakeFromS0 @ 0x1C000B9D0 (Controller_WdfEvtDeviceArmWakeFromS0.c)
 *     Controller_WdfEvtDeviceArmWakeFromSx @ 0x1C000BB00 (Controller_WdfEvtDeviceArmWakeFromSx.c)
 *     Controller_WdfEvtDeviceDisarmWakeFromS0 @ 0x1C000C800 (Controller_WdfEvtDeviceDisarmWakeFromS0.c)
 *     Controller_WdfEvtDeviceDisarmWakeFromSx @ 0x1C000C930 (Controller_WdfEvtDeviceDisarmWakeFromSx.c)
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x1C000C9B0 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 *     Controller_WdfEvtDeviceWakeFromS0Triggered @ 0x1C000CB30 (Controller_WdfEvtDeviceWakeFromS0Triggered.c)
 *     Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure @ 0x1C0013754 (Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure.c)
 *     Interrupter_DeInitializeAfterOffload @ 0x1C0016D78 (Interrupter_DeInitializeAfterOffload.c)
 *     Interrupter_UpdateERDP @ 0x1C0017C54 (Interrupter_UpdateERDP.c)
 *     UsbDevice_EnableCompletion @ 0x1C0031890 (UsbDevice_EnableCompletion.c)
 *     ESM_SimulatingEndpointHaltReceivedOnTimeout @ 0x1C003D790 (ESM_SimulatingEndpointHaltReceivedOnTimeout.c)
 *     ESM_SimulatingExpectedEventTRBsProcessedAfterHaltOnTimeout @ 0x1C003D7E0 (ESM_SimulatingExpectedEventTRBsProcessedAfterHaltOnTimeout.c)
 *     ESM_SimulatingExpectedEventTRBsProcessedOnTimeout @ 0x1C003D830 (ESM_SimulatingExpectedEventTRBsProcessedOnTimeout.c)
 *     ESM_SimulatingFSEReceivedOnTimeout @ 0x1C003D880 (ESM_SimulatingFSEReceivedOnTimeout.c)
 *     XilCoreCommonBuffer_FreeUnusedResources @ 0x1C003F15C (XilCoreCommonBuffer_FreeUnusedResources.c)
 *     XilCoreDeviceSlot_AllocateResources @ 0x1C003F548 (XilCoreDeviceSlot_AllocateResources.c)
 *     XilCoreUsbDevice_Create @ 0x1C003FABC (XilCoreUsbDevice_Create.c)
 *     Command_Create @ 0x1C0052008 (Command_Create.c)
 *     CommonBuffer_Create @ 0x1C00524D8 (CommonBuffer_Create.c)
 *     Controller_ExecuteHSICDisconnectInU3Workaround @ 0x1C00541C8 (Controller_ExecuteHSICDisconnectInU3Workaround.c)
 *     Controller_ExecuteKBLPowerTransitionWorkaround @ 0x1C0054388 (Controller_ExecuteKBLPowerTransitionWorkaround.c)
 *     Controller_PopulateHardwareVerifierFlags @ 0x1C0054898 (Controller_PopulateHardwareVerifierFlags.c)
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C0057010 (Controller_WdfEvtDevicePrepareHardware.c)
 *     Controller_WdfEvtDeviceReleaseHardware @ 0x1C0057260 (Controller_WdfEvtDeviceReleaseHardware.c)
 *     Controller_WdfEvtDeviceSelfManagedIoCleanup @ 0x1C0057450 (Controller_WdfEvtDeviceSelfManagedIoCleanup.c)
 *     DeviceSlot_Create @ 0x1C00575EC (DeviceSlot_Create.c)
 *     IoControl_Create @ 0x1C005A088 (IoControl_Create.c)
 *     Register_Create @ 0x1C005A1EC (Register_Create.c)
 *     Register_ParseCapabilityRegister @ 0x1C005A510 (Register_ParseCapabilityRegister.c)
 *     UsbDevice_UcxEvtDeviceAdd @ 0x1C005C510 (UsbDevice_UcxEvtDeviceAdd.c)
 *     IntelPptFilter_Create @ 0x1C005C9E4 (IntelPptFilter_Create.c)
 *     DmaEnabler_Create @ 0x1C005CFB8 (DmaEnabler_Create.c)
 *     SecureDmaEnabler_Create @ 0x1C005D39C (SecureDmaEnabler_Create.c)
 *     SecureChannel_Create @ 0x1C005D808 (SecureChannel_Create.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
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
