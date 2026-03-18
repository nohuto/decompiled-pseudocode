/*
 * XREFs of __security_check_cookie @ 0x1C00283F0
 * Callers:
 *     UsbhFdoSystemPowerState @ 0x1C0004680 (UsbhFdoSystemPowerState.c)
 *     UsbhEtwLogDevicePowerEvent @ 0x1C0005004 (UsbhEtwLogDevicePowerEvent.c)
 *     UsbhEtwLogHubPowerEvent @ 0x1C0005130 (UsbhEtwLogHubPowerEvent.c)
 *     UsbhEtwWrite @ 0x1C0005320 (UsbhEtwWrite.c)
 *     UsbhCheckHubPowerStatus @ 0x1C0005E5C (UsbhCheckHubPowerStatus.c)
 *     UsbhEtwLogHubPastExceptions @ 0x1C000820C (UsbhEtwLogHubPastExceptions.c)
 *     UsbhHubProcessIsr @ 0x1C0013F10 (UsbhHubProcessIsr.c)
 *     UsbhSshSuspendHub @ 0x1C0014B70 (UsbhSshSuspendHub.c)
 *     UsbhQueryBusRelations @ 0x1C0015090 (UsbhQueryBusRelations.c)
 *     UsbhSyncPowerOnPorts @ 0x1C00155A0 (UsbhSyncPowerOnPorts.c)
 *     UsbhReset2Complete @ 0x1C0015860 (UsbhReset2Complete.c)
 *     UsbhArmHubForWakeDetect @ 0x1C0015D58 (UsbhArmHubForWakeDetect.c)
 *     UsbhFdoPower_WaitWake @ 0x1C00188B0 (UsbhFdoPower_WaitWake.c)
 *     UsbhHubSSH_PnpStart @ 0x1C0018C40 (UsbhHubSSH_PnpStart.c)
 *     UsbhEnableTimerObject @ 0x1C0019EB0 (UsbhEnableTimerObject.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x1C001B654 (UsbhEtwLogDeviceIrpEvent.c)
 *     UsbhGetGlobalUxdSettings @ 0x1C001C3D0 (UsbhGetGlobalUxdSettings.c)
 *     UsbhEtwLogPortInformation @ 0x1C001E080 (UsbhEtwLogPortInformation.c)
 *     UsbhGetDeviceFlags @ 0x1C001E9D0 (UsbhGetDeviceFlags.c)
 *     UsbhEtwLogHubInformation @ 0x1C001EB70 (UsbhEtwLogHubInformation.c)
 *     UsbhGetD3Policy @ 0x1C001F1D8 (UsbhGetD3Policy.c)
 *     UsbhRegQueryGlobalLegacyDeviceKeys @ 0x1C001F530 (UsbhRegQueryGlobalLegacyDeviceKeys.c)
 *     UsbhCreatePdo @ 0x1C001FDA0 (UsbhCreatePdo.c)
 *     UsbhReset1Complete @ 0x1C0021170 (UsbhReset1Complete.c)
 *     UsbhCreateDevice @ 0x1C00215F4 (UsbhCreateDevice.c)
 *     UsbhSetupDevice @ 0x1C0021D38 (UsbhSetupDevice.c)
 *     UsbhUpdateUxdSettings @ 0x1C0022298 (UsbhUpdateUxdSettings.c)
 *     DriverEntry @ 0x1C00225AC (DriverEntry.c)
 *     UsbhDmTimerDpc @ 0x1C0022AF0 (UsbhDmTimerDpc.c)
 *     UsbhGetAcpiPortAttributes @ 0x1C0023C70 (UsbhGetAcpiPortAttributes.c)
 *     UsbhAcpiEnumChildren @ 0x1C0024464 (UsbhAcpiEnumChildren.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C0024BE0 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhDisableTimerObject @ 0x1C0025130 (UsbhDisableTimerObject.c)
 *     UsbhEtwLogDeviceDescription @ 0x1C0025888 (UsbhEtwLogDeviceDescription.c)
 *     UsbhEtwLogDeviceInformation @ 0x1C0025994 (UsbhEtwLogDeviceInformation.c)
 *     UsbhInitializeDevice @ 0x1C0026FA0 (UsbhInitializeDevice.c)
 *     UsbhIsHighSpeedCapable @ 0x1C0027F20 (UsbhIsHighSpeedCapable.c)
 *     __GSHandlerCheckCommon @ 0x1C002853C (__GSHandlerCheckCommon.c)
 *     UsbhGetPortStatus @ 0x1C003B1F8 (UsbhGetPortStatus.c)
 *     UsbhSetPortPower @ 0x1C003B724 (UsbhSetPortPower.c)
 *     UsbhExtPropDescSemaphorePresent @ 0x1C003F1FC (UsbhExtPropDescSemaphorePresent.c)
 *     UsbhGetMsOsContainerID @ 0x1C003F4EC (UsbhGetMsOsContainerID.c)
 *     UsbhInstallMsOsExtendedProperties @ 0x1C003FC28 (UsbhInstallMsOsExtendedProperties.c)
 *     UsbhIoctlValidateParameters @ 0x1C004A3B4 (UsbhIoctlValidateParameters.c)
 *     UsbhUpdateRegSurpriseRemovalCount @ 0x1C004C410 (UsbhUpdateRegSurpriseRemovalCount.c)
 *     UsbhBuildWmiConnectionNotification @ 0x1C004DBF4 (UsbhBuildWmiConnectionNotification.c)
 *     UsbhGetPerformanceInfo @ 0x1C004E3DC (UsbhGetPerformanceInfo.c)
 *     UsbhReset1Timeout @ 0x1C00517A0 (UsbhReset1Timeout.c)
 *     UsbhReset2Timeout @ 0x1C0051D40 (UsbhReset2Timeout.c)
 *     UsbhPdoCheckBootDeviceReady @ 0x1C0055780 (UsbhPdoCheckBootDeviceReady.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x1C0055D20 (UsbhPdoPnp_RemoveDevice.c)
 *     UsbhPdoPnp_SurpriseRemoveDevice @ 0x1C0056000 (UsbhPdoPnp_SurpriseRemoveDevice.c)
 *     UsbhPdo_ReportPnPFailureProblem @ 0x1C00562F0 (UsbhPdo_ReportPnPFailureProblem.c)
 *     UsbhDeleteUxdDeviceKey @ 0x1C00581C4 (UsbhDeleteUxdDeviceKey.c)
 *     UsbhDeleteUxdPortSettings @ 0x1C0058270 (UsbhDeleteUxdPortSettings.c)
 *     UsbhDeleteUxdSubKeys @ 0x1C0058428 (UsbhDeleteUxdSubKeys.c)
 *     UsbhGetUxdDeviceKey @ 0x1C00586E0 (UsbhGetUxdDeviceKey.c)
 *     UsbhGetUxdPortKey @ 0x1C0058910 (UsbhGetUxdPortKey.c)
 *     UsbhPropagateUxdState @ 0x1C0058ACC (UsbhPropagateUxdState.c)
 *     UsbhEtwLogHubEventWithExtraData @ 0x1C0059060 (UsbhEtwLogHubEventWithExtraData.c)
 *     UsbhEtwLogHubException @ 0x1C0059150 (UsbhEtwLogHubException.c)
 *     MyRegQueryUlong @ 0x1C0059F3C (MyRegQueryUlong.c)
 * Callees:
 *     <none>
 */

void __cdecl _security_check_cookie(uintptr_t StackCookie)
{
  __int64 v1; // rcx

  if ( StackCookie != _security_cookie )
LABEL_4:
    _report_gsfailure(StackCookie);
  v1 = __ROL8__(StackCookie, 16);
  if ( (_WORD)v1 )
  {
    StackCookie = __ROR8__(v1, 16);
    goto LABEL_4;
  }
}
