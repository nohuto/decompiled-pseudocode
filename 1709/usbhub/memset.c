/*
 * XREFs of memset @ 0x1C0029840
 * Callers:
 *     UsbhAllocWorkItem @ 0x1C00023D8 (UsbhAllocWorkItem.c)
 *     UsbhAcquirePowerContext @ 0x1C0004CEC (UsbhAcquirePowerContext.c)
 *     UsbhCheckHubPowerStatus @ 0x1C000559C (UsbhCheckHubPowerStatus.c)
 *     UsbhFdoReturnDeviceConfigInfo @ 0x1C0008F98 (UsbhFdoReturnDeviceConfigInfo.c)
 *     UsbhCopyPnpString @ 0x1C0009138 (UsbhCopyPnpString.c)
 *     UsbhIncPdoIoCount @ 0x1C000A1B0 (UsbhIncPdoIoCount.c)
 *     UsbhBusPnpStart @ 0x1C000A9B0 (UsbhBusPnpStart.c)
 *     UsbhAllocateTimerObject @ 0x1C000B0A0 (UsbhAllocateTimerObject.c)
 *     UsbhRefPdo @ 0x1C000B180 (UsbhRefPdo.c)
 *     UsbhPostInterrupt @ 0x1C000B700 (UsbhPostInterrupt.c)
 *     UsbhHubDispatchPortEvent @ 0x1C000FF30 (UsbhHubDispatchPortEvent.c)
 *     UsbhSyncSendCommand @ 0x1C0011D30 (UsbhSyncSendCommand.c)
 *     UsbhQueryBusRelations @ 0x1C0013BC0 (UsbhQueryBusRelations.c)
 *     UsbhHubProcessIsr @ 0x1C0014D30 (UsbhHubProcessIsr.c)
 *     UsbhGetBusInterface @ 0x1C0016080 (UsbhGetBusInterface.c)
 *     UsbhCreatePdo @ 0x1C0016280 (UsbhCreatePdo.c)
 *     UsbhSyncSendCommandToDevice @ 0x1C0016E10 (UsbhSyncSendCommandToDevice.c)
 *     UsbhGetHubDeviceInformation @ 0x1C0017A10 (UsbhGetHubDeviceInformation.c)
 *     UsbhGetHubConfigurationDescriptor @ 0x1C0017C0C (UsbhGetHubConfigurationDescriptor.c)
 *     UsbhAddDevice @ 0x1C0017EF0 (UsbhAddDevice.c)
 *     UsbhInitializeDevice @ 0x1C0018F5C (UsbhInitializeDevice.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C0019BB0 (UsbhPdoPnp_StartDevice.c)
 *     UsbhPdoPnp_QueryId @ 0x1C001B1D0 (UsbhPdoPnp_QueryId.c)
 *     UsbhPdoPnp_QueryCapabilities @ 0x1C001B630 (UsbhPdoPnp_QueryCapabilities.c)
 *     UsbhPdoPnp_QueryDeviceText @ 0x1C001BED0 (UsbhPdoPnp_QueryDeviceText.c)
 *     UsbhEnableTimerObject @ 0x1C001CF30 (UsbhEnableTimerObject.c)
 *     UsbhEtwWrite @ 0x1C001DD00 (UsbhEtwWrite.c)
 *     UsbhHubSSH_Timer @ 0x1C001DDD0 (UsbhHubSSH_Timer.c)
 *     UsbhUpdateUxdSettings @ 0x1C001E070 (UsbhUpdateUxdSettings.c)
 *     UsbhGetExtendedHubInformation @ 0x1C001E840 (UsbhGetExtendedHubInformation.c)
 *     UsbhGetAcpiPortAttributes @ 0x1C001EA50 (UsbhGetAcpiPortAttributes.c)
 *     UsbhQueryD3ColdSupport @ 0x1C001FCA8 (UsbhQueryD3ColdSupport.c)
 *     UsbhRegQueryGlobalLegacyDeviceKeys @ 0x1C0020080 (UsbhRegQueryGlobalLegacyDeviceKeys.c)
 *     UsbhReadPdoRegistryKeys @ 0x1C0020330 (UsbhReadPdoRegistryKeys.c)
 *     UsbhGetLocationIdString @ 0x1C00208B0 (UsbhGetLocationIdString.c)
 *     UsbhBuildClassCompatibleID @ 0x1C0020C90 (UsbhBuildClassCompatibleID.c)
 *     UsbhGetRegUsbDeviceFlags @ 0x1C0021180 (UsbhGetRegUsbDeviceFlags.c)
 *     UsbhGetInitRegUsbDeviceFlags @ 0x1C0021420 (UsbhGetInitRegUsbDeviceFlags.c)
 *     UsbhBuildHardwareID @ 0x1C0021690 (UsbhBuildHardwareID.c)
 *     UsbhBuildDeviceID @ 0x1C0021C10 (UsbhBuildDeviceID.c)
 *     UsbhGetRegUsbHubFlags @ 0x1C0021E70 (UsbhGetRegUsbHubFlags.c)
 *     UsbhMakeId @ 0x1C0022100 (UsbhMakeId.c)
 *     UsbhGetPdoRegistryParameter @ 0x1C00226D0 (UsbhGetPdoRegistryParameter.c)
 *     UsbhGetRegUsbClassFlags @ 0x1C0022884 (UsbhGetRegUsbClassFlags.c)
 *     UsbhGetDeviceInformation @ 0x1C0022A08 (UsbhGetDeviceInformation.c)
 *     UsbhSetupDevice @ 0x1C0022C90 (UsbhSetupDevice.c)
 *     UsbhGetLanguageIdString @ 0x1C00232DC (UsbhGetLanguageIdString.c)
 *     UsbhBuildCompatibleID @ 0x1C0023460 (UsbhBuildCompatibleID.c)
 *     UsbhGetSerialNumber @ 0x1C00234F4 (UsbhGetSerialNumber.c)
 *     UsbhReferenceListAdd @ 0x1C0023920 (UsbhReferenceListAdd.c)
 *     UsbhCreateConfigurationRequestEx @ 0x1C0024050 (UsbhCreateConfigurationRequestEx.c)
 *     UsbhRegDriverEntry @ 0x1C0024560 (UsbhRegDriverEntry.c)
 *     USBHUB_InitBugCheck @ 0x1C00251E0 (USBHUB_InitBugCheck.c)
 *     UsbhWmiDriverEntry @ 0x1C00252E0 (UsbhWmiDriverEntry.c)
 *     UsbhInitGlobal @ 0x1C002551C (UsbhInitGlobal.c)
 *     UsbhQueueWorkItemWithRetry @ 0x1C00256A0 (UsbhQueueWorkItemWithRetry.c)
 *     RtlStringCchPrintfExW @ 0x1C0025CE0 (RtlStringCchPrintfExW.c)
 *     UsbhQueryParentHubConfig @ 0x1C00263F8 (UsbhQueryParentHubConfig.c)
 *     UsbhGetHubClassDescriptor @ 0x1C0026554 (UsbhGetHubClassDescriptor.c)
 *     UsbhQueryGlobalLegacyDeviceValue @ 0x1C00271B0 (UsbhQueryGlobalLegacyDeviceValue.c)
 *     UsbhPdoQueryWmiRegInfo @ 0x1C0027640 (UsbhPdoQueryWmiRegInfo.c)
 *     UsbhBuildContainerID @ 0x1C0028130 (UsbhBuildContainerID.c)
 *     UsbhGetProductIdString @ 0x1C00287E8 (UsbhGetProductIdString.c)
 *     UsbhBuildDeviceCompatibleID @ 0x1C0029004 (UsbhBuildDeviceCompatibleID.c)
 *     UsbhFdoCleanupDeviceInterfaceForBillBoard @ 0x1C003B3BC (UsbhFdoCleanupDeviceInterfaceForBillBoard.c)
 *     UsbhFdoCreateDeviceInterfaceForBillBoard @ 0x1C003B4D0 (UsbhFdoCreateDeviceInterfaceForBillBoard.c)
 *     UsbhGetControllerName @ 0x1C003BE40 (UsbhGetControllerName.c)
 *     UsbhGetDeviceBusInfo @ 0x1C003BFBC (UsbhGetDeviceBusInfo.c)
 *     UsbhGetHubPdoName @ 0x1C003C3AC (UsbhGetHubPdoName.c)
 *     UsbhLogStartFailure @ 0x1C003C60C (UsbhLogStartFailure.c)
 *     UsbhSetOutOfBandwidthTimer @ 0x1C003C970 (UsbhSetOutOfBandwidthTimer.c)
 *     UsbhFdoRecordFailure @ 0x1C003EB40 (UsbhFdoRecordFailure.c)
 *     USBD_ValidateConfigurationDescriptorInternal @ 0x1C003FB00 (USBD_ValidateConfigurationDescriptorInternal.c)
 *     USBD_ValidateExtendedConfigurationDescriptor @ 0x1C003FEE0 (USBD_ValidateExtendedConfigurationDescriptor.c)
 *     UsbhGetMsOs20DescriptorSet @ 0x1C0040414 (UsbhGetMsOs20DescriptorSet.c)
 *     UsbhGetMsOsExtendedConfigDesc @ 0x1C0040568 (UsbhGetMsOsExtendedConfigDesc.c)
 *     UsbhInstallMsOsExtendedProperties @ 0x1C00409F4 (UsbhInstallMsOsExtendedProperties.c)
 *     UsbhGetAlternateUsbDescriptors @ 0x1C0043E08 (UsbhGetAlternateUsbDescriptors.c)
 *     UsbhGetBillboardInfo @ 0x1C0043F7C (UsbhGetBillboardInfo.c)
 *     UsbhResetIrqPipe @ 0x1C0044B14 (UsbhResetIrqPipe.c)
 *     UsbhGetDeviceInformationEx @ 0x1C0048340 (UsbhGetDeviceInformationEx.c)
 *     UsbhGetNodeConnectionInfoForPdo @ 0x1C0048490 (UsbhGetNodeConnectionInfoForPdo.c)
 *     UsbhIoctlGetHubInformationEx @ 0x1C004969C (UsbhIoctlGetHubInformationEx.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x1C0049938 (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x1C0049BA0 (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C0049FFC (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1C004A310 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1C004A5EC (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhIoctlGetNodeInformation @ 0x1C004A8A4 (UsbhIoctlGetNodeInformation.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x1C004AB68 (UsbhIoctlGetPortConnectorProperties.c)
 *     UsbhGetDeviceNodeInfo @ 0x1C004EBD8 (UsbhGetDeviceNodeInfo.c)
 *     UsbhGetHubNodeInfo @ 0x1C004EE68 (UsbhGetHubNodeInfo.c)
 *     UsbhGetPerformanceInfo @ 0x1C004F0CC (UsbhGetPerformanceInfo.c)
 *     UsbhException @ 0x1C004FE34 (UsbhException.c)
 *     RtlStringExHandleOtherFlagsW @ 0x1C0050C9C (RtlStringExHandleOtherFlagsW.c)
 *     UsbhBuildUnknownIds @ 0x1C0053058 (UsbhBuildUnknownIds.c)
 *     UsbhValidateBOSDescriptorSet @ 0x1C00541BC (UsbhValidateBOSDescriptorSet.c)
 *     UsbhValidateMsOs20ConfigurationSubset @ 0x1C0054430 (UsbhValidateMsOs20ConfigurationSubset.c)
 *     UsbhValidateMsOs20FunctionSubset @ 0x1C0054790 (UsbhValidateMsOs20FunctionSubset.c)
 *     UsbhCloseDeviceConfiguration @ 0x1C0054C6C (UsbhCloseDeviceConfiguration.c)
 *     UsbhGetBosDescriptor @ 0x1C0055448 (UsbhGetBosDescriptor.c)
 *     UsbhPdo_ReportPnPFailureProblem @ 0x1C00561A0 (UsbhPdo_ReportPnPFailureProblem.c)
 *     UsbhPublishBillboardDetails @ 0x1C005637C (UsbhPublishBillboardDetails.c)
 *     UsbhBuildUxdPnpId @ 0x1C0057F90 (UsbhBuildUxdPnpId.c)
 *     UsbhDeleteUxdSubKeys @ 0x1C0058328 (UsbhDeleteUxdSubKeys.c)
 *     UsbhGetUxdLoadKeySettings @ 0x1C0058748 (UsbhGetUxdLoadKeySettings.c)
 *     UsbhQueryUxdDevice @ 0x1C0058AC0 (UsbhQueryUxdDevice.c)
 *     UsbhRegisterBootDeviceNotification @ 0x1C00594E8 (UsbhRegisterBootDeviceNotification.c)
 *     WppTraceCallback @ 0x1C0073400 (WppTraceCallback.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
void *__cdecl memset(void *a1, int Val, size_t Size)
{
  void *result; // rax
  size_t v4; // r9
  size_t i; // r8
  unsigned int v6; // ecx
  _QWORD *v7; // rcx
  size_t v8; // r10
  size_t j; // r8

  result = a1;
  if ( Size < 8 )
  {
mset20:
    for ( i = Size & 7; i; --i )
      *((char *)a1 + i - 1) = Val;
    return result;
  }
  *(_QWORD *)&Val = 0x101010101010101LL * (unsigned __int8)Val;
  if ( Size < 0x47 )
  {
    v4 = Size & 0x78;
    a1 = (char *)a1 + (Size & 0xFFFFFFFFFFFFFFF8uLL);
    do
    {
      *(_QWORD *)((char *)result + v4 - 8) = *(_QWORD *)&Val;
      v4 -= 8LL;
    }
    while ( v4 );
    goto mset20;
  }
  v6 = -(int)a1 & 7;
  if ( v6 )
  {
    Size -= v6;
    *(_QWORD *)result = *(_QWORD *)&Val;
  }
  v7 = (char *)result + v6;
  v8 = Size >> 6;
  if ( ((Size >> 3) & 7) != 0 )
    return (void *)((__int64 (__fastcall *)(_QWORD *, _QWORD))((char *)&loc_1C00298FD + 4 * (8 - ((Size >> 3) & 7)) + 2))(
                     &v7[((Size >> 3) & 7) - 8],
                     *(_QWORD *)&Val);
  do
  {
    *v7 = *(_QWORD *)&Val;
    v7[1] = *(_QWORD *)&Val;
    v7[2] = *(_QWORD *)&Val;
    v7[3] = *(_QWORD *)&Val;
    v7[4] = *(_QWORD *)&Val;
    v7[5] = *(_QWORD *)&Val;
    v7[6] = *(_QWORD *)&Val;
    v7[7] = *(_QWORD *)&Val;
    v7 += 8;
    --v8;
  }
  while ( v8 );
  for ( j = Size & 7; j; --j )
    *((_BYTE *)v7 + j - 1) = Val;
  return result;
}
