/*
 * XREFs of __security_check_cookie @ 0x1C0029310
 * Callers:
 *     UsbhFdoSystemPowerState @ 0x1C00041F4 (UsbhFdoSystemPowerState.c)
 *     UsbhEtwLogHubPowerEvent @ 0x1C0004B00 (UsbhEtwLogHubPowerEvent.c)
 *     UsbhEtwLogDevicePowerEvent @ 0x1C0004E6C (UsbhEtwLogDevicePowerEvent.c)
 *     UsbhReset1Complete @ 0x1C00092A0 (UsbhReset1Complete.c)
 *     UsbhCreateDevice @ 0x1C0009764 (UsbhCreateDevice.c)
 *     UsbhQueryBusRelations @ 0x1C0013BC0 (UsbhQueryBusRelations.c)
 *     UsbhReset2Complete @ 0x1C00143E0 (UsbhReset2Complete.c)
 *     UsbhHubProcessIsr @ 0x1C0014D30 (UsbhHubProcessIsr.c)
 *     UsbhSyncPowerOnPorts @ 0x1C00156B0 (UsbhSyncPowerOnPorts.c)
 *     UsbhCreatePdo @ 0x1C0016280 (UsbhCreatePdo.c)
 *     UsbhInitializeDevice @ 0x1C0018F5C (UsbhInitializeDevice.c)
 *     UsbhBusConnectPdo @ 0x1C001B7E0 (UsbhBusConnectPdo.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x1C001C0E0 (UsbhEtwLogDeviceIrpEvent.c)
 *     UsbhDmTimerDpc @ 0x1C001C280 (UsbhDmTimerDpc.c)
 *     UsbhDisableTimerObject @ 0x1C001CC00 (UsbhDisableTimerObject.c)
 *     UsbhEnableTimerObject @ 0x1C001CF30 (UsbhEnableTimerObject.c)
 *     UsbhEtwLogPortInformation @ 0x1C001D500 (UsbhEtwLogPortInformation.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001DAF0 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhEtwWrite @ 0x1C001DD00 (UsbhEtwWrite.c)
 *     UsbhUpdateUxdSettings @ 0x1C001E070 (UsbhUpdateUxdSettings.c)
 *     UsbhHubSSH_PnpStart @ 0x1C001E330 (UsbhHubSSH_PnpStart.c)
 *     UsbhEtwLogHubInformation @ 0x1C001E5BC (UsbhEtwLogHubInformation.c)
 *     UsbhGetAcpiPortAttributes @ 0x1C001EA50 (UsbhGetAcpiPortAttributes.c)
 *     UsbhAcpiEnumChildren @ 0x1C001F248 (UsbhAcpiEnumChildren.c)
 *     UsbhEtwLogDeviceDescription @ 0x1C001FE2C (UsbhEtwLogDeviceDescription.c)
 *     UsbhRegQueryGlobalLegacyDeviceKeys @ 0x1C0020080 (UsbhRegQueryGlobalLegacyDeviceKeys.c)
 *     UsbhGetD3Policy @ 0x1C00205A0 (UsbhGetD3Policy.c)
 *     UsbhGetGlobalUxdSettings @ 0x1C0020A90 (UsbhGetGlobalUxdSettings.c)
 *     UsbhCheckDeviceErrata @ 0x1C0022388 (UsbhCheckDeviceErrata.c)
 *     UsbhGetDeviceFlags @ 0x1C002251C (UsbhGetDeviceFlags.c)
 *     UsbhSetupDevice @ 0x1C0022C90 (UsbhSetupDevice.c)
 *     DriverEntry @ 0x1C0024FD8 (DriverEntry.c)
 *     __GSHandlerCheckCommon @ 0x1C002946C (__GSHandlerCheckCommon.c)
 *     UsbhFdoCleanupDeviceInterfaceForBillBoard @ 0x1C003B3BC (UsbhFdoCleanupDeviceInterfaceForBillBoard.c)
 *     UsbhFdoCreateDeviceInterfaceForBillBoard @ 0x1C003B4D0 (UsbhFdoCreateDeviceInterfaceForBillBoard.c)
 *     UsbhSetPortPower @ 0x1C003CAA4 (UsbhSetPortPower.c)
 *     UsbhExtPropDescSemaphorePresent @ 0x1C0040278 (UsbhExtPropDescSemaphorePresent.c)
 *     UsbhIoctlValidateParameters @ 0x1C004B244 (UsbhIoctlValidateParameters.c)
 *     UsbhUpdateRegSurpriseRemovalCount @ 0x1C004D290 (UsbhUpdateRegSurpriseRemovalCount.c)
 *     UsbhBuildWmiConnectionNotification @ 0x1C004E8E4 (UsbhBuildWmiConnectionNotification.c)
 *     UsbhGetPerformanceInfo @ 0x1C004F0CC (UsbhGetPerformanceInfo.c)
 *     UsbhReset1Timeout @ 0x1C0052560 (UsbhReset1Timeout.c)
 *     UsbhReset2Timeout @ 0x1C0052B00 (UsbhReset2Timeout.c)
 *     UsbhPdoCheckBootDeviceReady @ 0x1C0055750 (UsbhPdoCheckBootDeviceReady.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x1C0055BD0 (UsbhPdoPnp_RemoveDevice.c)
 *     UsbhPdoPnp_SurpriseRemoveDevice @ 0x1C0055EB0 (UsbhPdoPnp_SurpriseRemoveDevice.c)
 *     UsbhPdo_ReportPnPFailureProblem @ 0x1C00561A0 (UsbhPdo_ReportPnPFailureProblem.c)
 *     UsbhDeleteUxdDeviceKey @ 0x1C00580C4 (UsbhDeleteUxdDeviceKey.c)
 *     UsbhDeleteUxdPortSettings @ 0x1C0058170 (UsbhDeleteUxdPortSettings.c)
 *     UsbhDeleteUxdSubKeys @ 0x1C0058328 (UsbhDeleteUxdSubKeys.c)
 *     UsbhGetUxdDeviceKey @ 0x1C00585E0 (UsbhGetUxdDeviceKey.c)
 *     UsbhGetUxdPortKey @ 0x1C0058810 (UsbhGetUxdPortKey.c)
 *     UsbhPropagateUxdState @ 0x1C00589CC (UsbhPropagateUxdState.c)
 *     UsbhEtwLogDeviceInformation @ 0x1C0058F78 (UsbhEtwLogDeviceInformation.c)
 *     UsbhEtwLogHubEventWithExtraData @ 0x1C00590B4 (UsbhEtwLogHubEventWithExtraData.c)
 *     UsbhEtwLogHubException @ 0x1C00591A4 (UsbhEtwLogHubException.c)
 *     UsbhEtwLogHubPastExceptions @ 0x1C00592B8 (UsbhEtwLogHubPastExceptions.c)
 *     MyRegQueryUlong @ 0x1C005A140 (MyRegQueryUlong.c)
 * Callees:
 *     <none>
 */

void __cdecl _security_check_cookie(uintptr_t StackCookie)
{
  __int64 v1; // rcx

  if ( StackCookie != _security_cookie )
ReportFailure:
    _report_gsfailure(StackCookie);
  v1 = __ROL8__(StackCookie, 16);
  if ( (_WORD)v1 )
  {
    StackCookie = __ROR8__(v1, 16);
    goto ReportFailure;
  }
}
