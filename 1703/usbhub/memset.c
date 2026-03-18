/*
 * XREFs of memset @ 0x1C00289C0
 * Callers:
 *     UsbhAllocWorkItem @ 0x1C0002448 (UsbhAllocWorkItem.c)
 *     UsbhEtwWrite @ 0x1C0005320 (UsbhEtwWrite.c)
 *     UsbhAcquirePowerContext @ 0x1C00053EC (UsbhAcquirePowerContext.c)
 *     UsbhSyncSendCommandToDevice @ 0x1C0006AC0 (UsbhSyncSendCommandToDevice.c)
 *     UsbhBusPnpStart @ 0x1C000A140 (UsbhBusPnpStart.c)
 *     UsbhAllocateTimerObject @ 0x1C000A830 (UsbhAllocateTimerObject.c)
 *     UsbhPostInterrupt @ 0x1C000AE90 (UsbhPostInterrupt.c)
 *     UsbhRefPdo @ 0x1C000B0C0 (UsbhRefPdo.c)
 *     UsbhHubDispatchPortEvent @ 0x1C0010E20 (UsbhHubDispatchPortEvent.c)
 *     UsbhSyncSendCommand @ 0x1C0013A80 (UsbhSyncSendCommand.c)
 *     UsbhHubProcessIsr @ 0x1C0013F10 (UsbhHubProcessIsr.c)
 *     UsbhQueryBusRelations @ 0x1C0015090 (UsbhQueryBusRelations.c)
 *     UsbhGetBusInterface @ 0x1C0016110 (UsbhGetBusInterface.c)
 *     UsbhGetHubDeviceInformation @ 0x1C0017FD8 (UsbhGetHubDeviceInformation.c)
 *     UsbhAddDevice @ 0x1C00181C0 (UsbhAddDevice.c)
 *     UsbhPdoPnp_QueryId @ 0x1C0019240 (UsbhPdoPnp_QueryId.c)
 *     UsbhPdoPnp_QueryCapabilities @ 0x1C00194C0 (UsbhPdoPnp_QueryCapabilities.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C0019630 (UsbhPdoPnp_StartDevice.c)
 *     UsbhLatchPdo @ 0x1C001A5DC (UsbhLatchPdo.c)
 *     UsbhQueryParentHubConfig @ 0x1C001A87C (UsbhQueryParentHubConfig.c)
 *     UsbhGetExtendedHubInformation @ 0x1C001AA20 (UsbhGetExtendedHubInformation.c)
 *     UsbhGetHubClassDescriptor @ 0x1C001AD08 (UsbhGetHubClassDescriptor.c)
 *     UsbhPdoPnp_QueryDeviceText @ 0x1C001B4B0 (UsbhPdoPnp_QueryDeviceText.c)
 *     UsbhReferenceListAdd @ 0x1C001BF40 (UsbhReferenceListAdd.c)
 *     UsbhGetLocationIdString @ 0x1C001C060 (UsbhGetLocationIdString.c)
 *     UsbhGetRegUsbDeviceFlags @ 0x1C001C5C0 (UsbhGetRegUsbDeviceFlags.c)
 *     UsbhGetInitRegUsbDeviceFlags @ 0x1C001C850 (UsbhGetInitRegUsbDeviceFlags.c)
 *     UsbhBuildClassCompatibleID @ 0x1C001CAB0 (UsbhBuildClassCompatibleID.c)
 *     UsbhBuildDeviceID @ 0x1C001CFA0 (UsbhBuildDeviceID.c)
 *     UsbhBuildHardwareID @ 0x1C001D200 (UsbhBuildHardwareID.c)
 *     UsbhGetRegUsbHubFlags @ 0x1C001D790 (UsbhGetRegUsbHubFlags.c)
 *     UsbhMakeId @ 0x1C001DA10 (UsbhMakeId.c)
 *     UsbhBuildCompatibleID @ 0x1C001DC20 (UsbhBuildCompatibleID.c)
 *     UsbhRegDriverEntry @ 0x1C001EF80 (UsbhRegDriverEntry.c)
 *     UsbhReadPdoRegistryKeys @ 0x1C001F300 (UsbhReadPdoRegistryKeys.c)
 *     UsbhGetPdoRegistryParameter @ 0x1C001F424 (UsbhGetPdoRegistryParameter.c)
 *     UsbhRegQueryGlobalLegacyDeviceKeys @ 0x1C001F530 (UsbhRegQueryGlobalLegacyDeviceKeys.c)
 *     UsbhGetRegUsbClassFlags @ 0x1C001F95C (UsbhGetRegUsbClassFlags.c)
 *     UsbhGetDeviceInformation @ 0x1C001FAE0 (UsbhGetDeviceInformation.c)
 *     UsbhCreatePdo @ 0x1C001FDA0 (UsbhCreatePdo.c)
 *     UsbhFdoReturnDeviceConfigInfo @ 0x1C00208B0 (UsbhFdoReturnDeviceConfigInfo.c)
 *     UsbhCopyPnpString @ 0x1C0020A50 (UsbhCopyPnpString.c)
 *     UsbhIncPdoIoCount @ 0x1C0020EE8 (UsbhIncPdoIoCount.c)
 *     UsbhSetupDevice @ 0x1C0021D38 (UsbhSetupDevice.c)
 *     UsbhGetLanguageIdString @ 0x1C00221B8 (UsbhGetLanguageIdString.c)
 *     UsbhGetSerialNumber @ 0x1C0022228 (UsbhGetSerialNumber.c)
 *     UsbhUpdateUxdSettings @ 0x1C0022298 (UsbhUpdateUxdSettings.c)
 *     UsbhInitGlobal @ 0x1C0022434 (UsbhInitGlobal.c)
 *     USBHUB_InitBugCheck @ 0x1C00227B4 (USBHUB_InitBugCheck.c)
 *     UsbhWmiDriverEntry @ 0x1C00228B0 (UsbhWmiDriverEntry.c)
 *     UsbhHubSSH_Timer @ 0x1C0023450 (UsbhHubSSH_Timer.c)
 *     UsbhGetAcpiPortAttributes @ 0x1C0023C70 (UsbhGetAcpiPortAttributes.c)
 *     UsbhQueueWorkItemWithRetry @ 0x1C00247B0 (UsbhQueueWorkItemWithRetry.c)
 *     UsbhQueryD3ColdSupport @ 0x1C0025F88 (UsbhQueryD3ColdSupport.c)
 *     UsbhGetHubConfigurationDescriptor @ 0x1C0026538 (UsbhGetHubConfigurationDescriptor.c)
 *     RtlStringCchPrintfExW @ 0x1C0026728 (RtlStringCchPrintfExW.c)
 *     UsbhCreateConfigurationRequestEx @ 0x1C0026BEC (UsbhCreateConfigurationRequestEx.c)
 *     UsbhInitializeDevice @ 0x1C0026FA0 (UsbhInitializeDevice.c)
 *     UsbhQueryGlobalLegacyDeviceValue @ 0x1C0027B80 (UsbhQueryGlobalLegacyDeviceValue.c)
 *     UsbhPdoQueryWmiRegInfo @ 0x1C0027E70 (UsbhPdoQueryWmiRegInfo.c)
 *     UsbhGetControllerName @ 0x1C003AB10 (UsbhGetControllerName.c)
 *     UsbhGetDeviceBusInfo @ 0x1C003AC8C (UsbhGetDeviceBusInfo.c)
 *     UsbhGetHubPdoName @ 0x1C003B07C (UsbhGetHubPdoName.c)
 *     UsbhLogStartFailure @ 0x1C003B280 (UsbhLogStartFailure.c)
 *     UsbhSetOutOfBandwidthTimer @ 0x1C003B5F0 (UsbhSetOutOfBandwidthTimer.c)
 *     UsbhFdoRecordFailure @ 0x1C003DC90 (UsbhFdoRecordFailure.c)
 *     USBD_ValidateConfigurationDescriptorInternal @ 0x1C003EA90 (USBD_ValidateConfigurationDescriptorInternal.c)
 *     USBD_ValidateExtendedConfigurationDescriptor @ 0x1C003EE68 (USBD_ValidateExtendedConfigurationDescriptor.c)
 *     UsbhGetMsOs20DescriptorSet @ 0x1C003F398 (UsbhGetMsOs20DescriptorSet.c)
 *     UsbhGetMsOsExtendedConfigDesc @ 0x1C003F79C (UsbhGetMsOsExtendedConfigDesc.c)
 *     UsbhInstallMsOsExtendedProperties @ 0x1C003FC28 (UsbhInstallMsOsExtendedProperties.c)
 *     UsbhGetAlternateUsbDescriptors @ 0x1C0042FC8 (UsbhGetAlternateUsbDescriptors.c)
 *     UsbhGetBillboardInfo @ 0x1C004313C (UsbhGetBillboardInfo.c)
 *     UsbhResetIrqPipe @ 0x1C0043CE0 (UsbhResetIrqPipe.c)
 *     UsbhGetDeviceInformationEx @ 0x1C00474B8 (UsbhGetDeviceInformationEx.c)
 *     UsbhGetNodeConnectionInfoForPdo @ 0x1C0047608 (UsbhGetNodeConnectionInfoForPdo.c)
 *     UsbhIoctlGetHubInformationEx @ 0x1C004880C (UsbhIoctlGetHubInformationEx.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x1C0048AA8 (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x1C0048D10 (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C004916C (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1C0049480 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1C004975C (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhIoctlGetNodeInformation @ 0x1C0049A14 (UsbhIoctlGetNodeInformation.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x1C0049CD8 (UsbhIoctlGetPortConnectorProperties.c)
 *     UsbhGetDeviceNodeInfo @ 0x1C004DEE8 (UsbhGetDeviceNodeInfo.c)
 *     UsbhGetHubNodeInfo @ 0x1C004E178 (UsbhGetHubNodeInfo.c)
 *     UsbhGetPerformanceInfo @ 0x1C004E3DC (UsbhGetPerformanceInfo.c)
 *     UsbhException @ 0x1C004F144 (UsbhException.c)
 *     RtlStringExHandleOtherFlagsW @ 0x1C004FFBC (RtlStringExHandleOtherFlagsW.c)
 *     UsbhBuildContainerID @ 0x1C00523B0 (UsbhBuildContainerID.c)
 *     UsbhBuildDeviceCompatibleID @ 0x1C00529F8 (UsbhBuildDeviceCompatibleID.c)
 *     UsbhBuildUnknownIds @ 0x1C0052ADC (UsbhBuildUnknownIds.c)
 *     UsbhGetProductIdString @ 0x1C0052E10 (UsbhGetProductIdString.c)
 *     UsbhValidateBOSDescriptorSet @ 0x1C0053FC8 (UsbhValidateBOSDescriptorSet.c)
 *     UsbhValidateMsOs20ConfigurationSubset @ 0x1C0054240 (UsbhValidateMsOs20ConfigurationSubset.c)
 *     UsbhValidateMsOs20FunctionSubset @ 0x1C00545A0 (UsbhValidateMsOs20FunctionSubset.c)
 *     UsbhCloseDeviceConfiguration @ 0x1C0054BD0 (UsbhCloseDeviceConfiguration.c)
 *     UsbhGetBosDescriptor @ 0x1C00553A8 (UsbhGetBosDescriptor.c)
 *     UsbhPdo_ReportPnPFailureProblem @ 0x1C00562F0 (UsbhPdo_ReportPnPFailureProblem.c)
 *     UsbhPublishBillboardDetails @ 0x1C00564CC (UsbhPublishBillboardDetails.c)
 *     UsbhBuildUxdPnpId @ 0x1C0058090 (UsbhBuildUxdPnpId.c)
 *     UsbhDeleteUxdSubKeys @ 0x1C0058428 (UsbhDeleteUxdSubKeys.c)
 *     UsbhGetUxdLoadKeySettings @ 0x1C0058848 (UsbhGetUxdLoadKeySettings.c)
 *     UsbhQueryUxdDevice @ 0x1C0058BC0 (UsbhQueryUxdDevice.c)
 *     UsbhRegisterBootDeviceNotification @ 0x1C00592E0 (UsbhRegisterBootDeviceNotification.c)
 *     WppTraceCallback @ 0x1C0072410 (WppTraceCallback.c)
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
LABEL_5:
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
    goto LABEL_5;
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
    return (void *)((__int64 (__fastcall *)(_QWORD *, _QWORD))((char *)&loc_1C0028A7D + 4 * (8 - ((Size >> 3) & 7)) + 2))(
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
