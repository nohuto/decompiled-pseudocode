/*
 * XREFs of memset @ 0x1C00391C0
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C0001090 (McGenControlCallbackV2.c)
 *     HUBHTX_ValidateAndCacheHubConfigDescriptor @ 0x1C0002E4C (HUBHTX_ValidateAndCacheHubConfigDescriptor.c)
 *     HUBHTX_SendInterruptTransfer @ 0x1C0003114 (HUBHTX_SendInterruptTransfer.c)
 *     HUBHTX_CompleteGetPortStatusWithPortStatusResult @ 0x1C0005708 (HUBHTX_CompleteGetPortStatusWithPortStatusResult.c)
 *     HUBHTX_CompleteGetPortStatusWithFailedStatus @ 0x1C0005900 (HUBHTX_CompleteGetPortStatusWithFailedStatus.c)
 *     HUBHTX_ClearTTBuffer @ 0x1C0005E30 (HUBHTX_ClearTTBuffer.c)
 *     HUBPARENT_SetHubConfiguration @ 0x1C000655C (HUBPARENT_SetHubConfiguration.c)
 *     HUBPARENT_ResetHub @ 0x1C0006C80 (HUBPARENT_ResetHub.c)
 *     HUBPARENT_GetInfoFromParentUsingParentIoctlComplete @ 0x1C0006EA0 (HUBPARENT_GetInfoFromParentUsingParentIoctlComplete.c)
 *     HUBPARENT_GetInfoFromParentUsingParentIoctl @ 0x1C0007048 (HUBPARENT_GetInfoFromParentUsingParentIoctl.c)
 *     HUBHSM_ResettingInterruptPipeOnFailure @ 0x1C0007C60 (HUBHSM_ResettingInterruptPipeOnFailure.c)
 *     HUBHSM_ValidatingAndParsingHubDescriptor @ 0x1C00087C0 (HUBHSM_ValidatingAndParsingHubDescriptor.c)
 *     HUBSM_FindAndSetTargetState @ 0x1C0008E7C (HUBSM_FindAndSetTargetState.c)
 *     HUBFDO_GetDeviceCapabilities @ 0x1C000A98C (HUBFDO_GetDeviceCapabilities.c)
 *     HUBFDO_EvtIoInternalDeviceControlFromPDO @ 0x1C000B600 (HUBFDO_EvtIoInternalDeviceControlFromPDO.c)
 *     HUBFDO_BuildUsb20HubDescriptor @ 0x1C000B878 (HUBFDO_BuildUsb20HubDescriptor.c)
 *     HUBFDO_IoctlGetNodeConnectionInfo @ 0x1C000B9B4 (HUBFDO_IoctlGetNodeConnectionInfo.c)
 *     HUBFDO_PowerSettingCallback @ 0x1C000C090 (HUBFDO_PowerSettingCallback.c)
 *     HUBFDO_SetupHubPostErrataQuery @ 0x1C000C46C (HUBFDO_SetupHubPostErrataQuery.c)
 *     HUBFDO_CreateDeviceInterfaceForBillboard @ 0x1C000C928 (HUBFDO_CreateDeviceInterfaceForBillboard.c)
 *     HUBFDO_CleanupDeviceInterfaceForBillboard @ 0x1C000CAC8 (HUBFDO_CleanupDeviceInterfaceForBillboard.c)
 *     HSMMUX_InitializeHSMMuxContext @ 0x1C000CDC0 (HSMMUX_InitializeHSMMuxContext.c)
 *     HUBMUX_CreatePSM @ 0x1C000CE08 (HUBMUX_CreatePSM.c)
 *     HUBMUX_CreateChildPSMs @ 0x1C000D2FC (HUBMUX_CreateChildPSMs.c)
 *     RtlStringCchPrintfExW @ 0x1C0010814 (RtlStringCchPrintfExW.c)
 *     HUBPDO_CompleteClientSerialRequestWithStatusSuccess @ 0x1C001176C (HUBPDO_CompleteClientSerialRequestWithStatusSuccess.c)
 *     HUBPDO_CompleteClientSerialRequestWithStatusFailed @ 0x1C001194C (HUBPDO_CompleteClientSerialRequestWithStatusFailed.c)
 *     HUBPDO_CompleteClientSerialRequestWithLastStatus @ 0x1C0011AF8 (HUBPDO_CompleteClientSerialRequestWithLastStatus.c)
 *     HUBPDO_EvtIoInternalDeviceControl @ 0x1C0011DE0 (HUBPDO_EvtIoInternalDeviceControl.c)
 *     HUBPDO_GetHubName @ 0x1C001215C (HUBPDO_GetHubName.c)
 *     HUBPDO_ReturnDeviceConfigInfo @ 0x1C0012410 (HUBPDO_ReturnDeviceConfigInfo.c)
 *     HUBPDO_ValidateConfigurationDescriptor @ 0x1C0012710 (HUBPDO_ValidateConfigurationDescriptor.c)
 *     HUBPDO_ValidateSelectConfigUrb @ 0x1C00128EC (HUBPDO_ValidateSelectConfigUrb.c)
 *     HUBPDO_ValidateSelectInterfaceUrb @ 0x1C0012E78 (HUBPDO_ValidateSelectInterfaceUrb.c)
 *     HUBPDO_FindAndStoreMatchingInternalPipeHandle @ 0x1C001317C (HUBPDO_FindAndStoreMatchingInternalPipeHandle.c)
 *     HUBPDO_QueryForD3ColdSupportInAcpi @ 0x1C001350C (HUBPDO_QueryForD3ColdSupportInAcpi.c)
 *     HUBPDO_EvtDeviceD0Exit @ 0x1C00154A0 (HUBPDO_EvtDeviceD0Exit.c)
 *     HUBPDO_SubmitDeviceWakeNotificationIoctl @ 0x1C0016788 (HUBPDO_SubmitDeviceWakeNotificationIoctl.c)
 *     HUBPDO_AllocateForwardProgressResources @ 0x1C0016B40 (HUBPDO_AllocateForwardProgressResources.c)
 *     HUBPDO_WdmPnpPowerIrpCompletionRoutineForAsynchronousCompletion @ 0x1C00170D0 (HUBPDO_WdmPnpPowerIrpCompletionRoutineForAsynchronousCompletion.c)
 *     HUBPDO_PoFxDripsWatchdogCallback @ 0x1C0017460 (HUBPDO_PoFxDripsWatchdogCallback.c)
 *     HUBID_AppendStringToIDString @ 0x1C0017A5C (HUBID_AppendStringToIDString.c)
 *     HUBID_BuildUxdPnpId @ 0x1C0017BE8 (HUBID_BuildUxdPnpId.c)
 *     HUBDSM_ResettingPipeInUCXOnClientReset @ 0x1C0019A20 (HUBDSM_ResettingPipeInUCXOnClientReset.c)
 *     HUBDSM_ResettingPipeInUCXOnClientSyncResetPipe @ 0x1C0019BA0 (HUBDSM_ResettingPipeInUCXOnClientSyncResetPipe.c)
 *     HUBDSM_SettingConfigurationInformationInClientRequest @ 0x1C0019D20 (HUBDSM_SettingConfigurationInformationInClientRequest.c)
 *     HUBDSM_SettingInterfaceInformationInClientRequest @ 0x1C0019F60 (HUBDSM_SettingInterfaceInformationInClientRequest.c)
 *     HUBDSM_UpdatingDeviceInformationInEnum @ 0x1C001A540 (HUBDSM_UpdatingDeviceInformationInEnum.c)
 *     HUBDSM_UpdatingDefaultEndpointMaxPacketSizeInEnum @ 0x1C001A9C0 (HUBDSM_UpdatingDefaultEndpointMaxPacketSizeInEnum.c)
 *     HUBDSM_ValidatingMSOSExtendedConfigDescriptor @ 0x1C001B880 (HUBDSM_ValidatingMSOSExtendedConfigDescriptor.c)
 *     HUBDSM_SettingNonZeroAddress @ 0x1C001BA90 (HUBDSM_SettingNonZeroAddress.c)
 *     HUBDSM_ValidatingAndLoggingAlternateModeStringDescriptor @ 0x1C001C150 (HUBDSM_ValidatingAndLoggingAlternateModeStringDescriptor.c)
 *     HUBDSM_ValidatingAndLoggingBillboardStringDescriptor @ 0x1C001C2D0 (HUBDSM_ValidatingAndLoggingBillboardStringDescriptor.c)
 *     HUBDSM_ValidatingMsOs20DescriptorSetIfPresent @ 0x1C001C450 (HUBDSM_ValidatingMsOs20DescriptorSetIfPresent.c)
 *     HUBDSM_CheckingIf20LPMShouldBeEnabled @ 0x1C001EC90 (HUBDSM_CheckingIf20LPMShouldBeEnabled.c)
 *     HUBUCX_NotifyDeviceResetUsingUCXIoctl @ 0x1C001F888 (HUBUCX_NotifyDeviceResetUsingUCXIoctl.c)
 *     HUBUCX_EnableDisableEndpointsUsingUCXIoctl @ 0x1C001FA3C (HUBUCX_EnableDisableEndpointsUsingUCXIoctl.c)
 *     HUBUCX_DisableDeviceAndDefaultEndpointUsingUCXIoctl @ 0x1C001FC8C (HUBUCX_DisableDeviceAndDefaultEndpointUsingUCXIoctl.c)
 *     HUBUCX_EnableDeviceAndDefaultEndpointUsingUCXIoctl @ 0x1C001FD44 (HUBUCX_EnableDeviceAndDefaultEndpointUsingUCXIoctl.c)
 *     HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl @ 0x1C001FFA8 (HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl.c)
 *     HUBUCX_GetRootHubInfoUsingUCXIoctl @ 0x1C00207A4 (HUBUCX_GetRootHubInfoUsingUCXIoctl.c)
 *     HUBUCX_GetRootHub20PortsInfoUsingUCXIoctl @ 0x1C0020A34 (HUBUCX_GetRootHub20PortsInfoUsingUCXIoctl.c)
 *     HUBUCX_GetRootHub30PortsInfoUsingUCXIoctl @ 0x1C0020E64 (HUBUCX_GetRootHub30PortsInfoUsingUCXIoctl.c)
 *     HUBUCX_UpdateHubInformationUsingUCXIoctl @ 0x1C00215C4 (HUBUCX_UpdateHubInformationUsingUCXIoctl.c)
 *     HUBUCX_PurgeDeviceIoUsingUCXIoctl @ 0x1C0021B34 (HUBUCX_PurgeDeviceIoUsingUCXIoctl.c)
 *     HUBUCX_PurgeDeviceIoForSuspendUsingUCXIoctl @ 0x1C0021BE8 (HUBUCX_PurgeDeviceIoForSuspendUsingUCXIoctl.c)
 *     HUBUCX_PurgeDeviceTreeIoUsingUCXIoctl @ 0x1C0021C9C (HUBUCX_PurgeDeviceTreeIoUsingUCXIoctl.c)
 *     HUBUCX_NotifyForwardProgress @ 0x1C0021F54 (HUBUCX_NotifyForwardProgress.c)
 *     HUBDTX_ValidateAndCacheBOSDescriptor @ 0x1C0023760 (HUBDTX_ValidateAndCacheBOSDescriptor.c)
 *     HUBDTX_ValidateAndCacheBOSDescriptorHeader @ 0x1C0023B7C (HUBDTX_ValidateAndCacheBOSDescriptorHeader.c)
 *     HUBDTX_ValidateAndCacheConfigDescriptor @ 0x1C0024144 (HUBDTX_ValidateAndCacheConfigDescriptor.c)
 *     HUBDTX_ValidateAndCacheDeviceDescriptor @ 0x1C0024660 (HUBDTX_ValidateAndCacheDeviceDescriptor.c)
 *     HUBDTX_ValidateFirstDeviceDescriptorFor20 @ 0x1C00248A0 (HUBDTX_ValidateFirstDeviceDescriptorFor20.c)
 *     HUBDTX_ValidateAndCacheLanguageIdStringDescriptor @ 0x1C0024A88 (HUBDTX_ValidateAndCacheLanguageIdStringDescriptor.c)
 *     HUBDTX_ClearEndpointHaltUsingControlTransfer @ 0x1C0024E2C (HUBDTX_ClearEndpointHaltUsingControlTransfer.c)
 *     HUBDTX_ValidateAndCacheProductIdStringDescriptor @ 0x1C002519C (HUBDTX_ValidateAndCacheProductIdStringDescriptor.c)
 *     HUBDTX_ValidateAndCacheSerialNumberStringDescriptor @ 0x1C0025360 (HUBDTX_ValidateAndCacheSerialNumberStringDescriptor.c)
 *     HUBDTX_LogBillboardEvent @ 0x1C002567C (HUBDTX_LogBillboardEvent.c)
 *     HUBDTX_LogAlternateMode @ 0x1C0025784 (HUBDTX_LogAlternateMode.c)
 *     HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax @ 0x1C0026E08 (HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax.c)
 *     HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration @ 0x1C0026F80 (HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration.c)
 *     HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface @ 0x1C0027B00 (HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface.c)
 *     HUBMISC_CreateNewDSM @ 0x1C00290A0 (HUBMISC_CreateNewDSM.c)
 *     HUBMISC_ControlTransfer @ 0x1C002A20C (HUBMISC_ControlTransfer.c)
 *     HUBMISC_GetDeviceInterfacePath @ 0x1C002AD88 (HUBMISC_GetDeviceInterfacePath.c)
 *     HUBMISC_PerformPostSurpriseRemovalRecoveryActionsIfBootDevice @ 0x1C002AFD0 (HUBMISC_PerformPostSurpriseRemovalRecoveryActionsIfBootDevice.c)
 *     HUBMISC_CreateWerReport @ 0x1C002B2F4 (HUBMISC_CreateWerReport.c)
 *     HUBREG_QueryUsbflagsAlternateSettingFilter @ 0x1C002BAF0 (HUBREG_QueryUsbflagsAlternateSettingFilter.c)
 *     HUBREG_UpdateSqmHubOvercurrentDetected @ 0x1C002BCB0 (HUBREG_UpdateSqmHubOvercurrentDetected.c)
 *     HUBREG_ValidateAndPopulateEndpointPriorities @ 0x1C002BDA8 (HUBREG_ValidateAndPopulateEndpointPriorities.c)
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x1C002F7F4 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 *     HUBDESC_ValidateBOSDescriptorSet @ 0x1C0031EC4 (HUBDESC_ValidateBOSDescriptorSet.c)
 *     HUBDESC_ValidateMsOs20ConfigurationSubset @ 0x1C00332F0 (HUBDESC_ValidateMsOs20ConfigurationSubset.c)
 *     HUBDESC_ValidateMsOs20FunctionSubset @ 0x1C0033570 (HUBDESC_ValidateMsOs20FunctionSubset.c)
 *     WER_CreateReport @ 0x1C0034CB0 (WER_CreateReport.c)
 *     WMI_QueryInstanceDeviceNodeInfo @ 0x1C0035410 (WMI_QueryInstanceDeviceNodeInfo.c)
 *     HUBBOOT_RegisterBootDevice @ 0x1C0035888 (HUBBOOT_RegisterBootDevice.c)
 *     TelemetryData_CreateReport @ 0x1C00360B8 (TelemetryData_CreateReport.c)
 *     USBDInternal_QueryUsbVerifierSettings @ 0x1C00364B0 (USBDInternal_QueryUsbVerifierSettings.c)
 *     USBDInternal_BuildServicePath @ 0x1C0036700 (USBDInternal_BuildServicePath.c)
 *     USBD_CreateHandle @ 0x1C00368FC (USBD_CreateHandle.c)
 *     USBD_QueryUsbCapability @ 0x1C0036CFC (USBD_QueryUsbCapability.c)
 *     WerpAllocateAndInitializeSid @ 0x1C0037BE4 (WerpAllocateAndInitializeSid.c)
 *     WerKernelSubmitReport @ 0x1C0038338 (WerKernelSubmitReport.c)
 *     WppTraceCallback @ 0x1C0065110 (WppTraceCallback.c)
 *     HUBDRIVER_EtwRundownUsbDevice @ 0x1C006592C (HUBDRIVER_EtwRundownUsbDevice.c)
 *     HUBFDO_EvtDeviceAdd @ 0x1C0066190 (HUBFDO_EvtDeviceAdd.c)
 *     HUBFDO_IoctlGetPortStatus @ 0x1C006761C (HUBFDO_IoctlGetPortStatus.c)
 *     HUBFDO_IoctlGetNodeInformation @ 0x1C00677E8 (HUBFDO_IoctlGetNodeInformation.c)
 *     HUBFDO_IoctlGetNodeConnectionDriverKeyName @ 0x1C00679B8 (HUBFDO_IoctlGetNodeConnectionDriverKeyName.c)
 *     HUBFDO_IoctlGetNodeConnectionAttributes @ 0x1C0067D3C (HUBFDO_IoctlGetNodeConnectionAttributes.c)
 *     HUBFDO_IoctlGetHubCaps @ 0x1C0067F64 (HUBFDO_IoctlGetHubCaps.c)
 *     HUBFDO_IoctlGetHubCapsEx @ 0x1C0068124 (HUBFDO_IoctlGetHubCapsEx.c)
 *     HUBFDO_IoctlGetNodeConnectionName @ 0x1C006833C (HUBFDO_IoctlGetNodeConnectionName.c)
 *     HUBFDO_IoctlGetDescriptorFromNodeConnection @ 0x1C0068728 (HUBFDO_IoctlGetDescriptorFromNodeConnection.c)
 *     HUBFDO_IoctlGetHubInformationEx @ 0x1C0068CC4 (HUBFDO_IoctlGetHubInformationEx.c)
 *     HUBFDO_IoctlGetPortConnectorProperties @ 0x1C0068F50 (HUBFDO_IoctlGetPortConnectorProperties.c)
 *     HUBFDO_IoctlGetNodeConnectionInformationExV2 @ 0x1C0069314 (HUBFDO_IoctlGetNodeConnectionInformationExV2.c)
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1C006A250 (HUBPDO_EvtDevicePrepareHardware.c)
 *     HUBPDO_PublishBillboardDetails @ 0x1C006AEF8 (HUBPDO_PublishBillboardDetails.c)
 *     HUBPDO_CreatePdoInternal @ 0x1C006B6F4 (HUBPDO_CreatePdoInternal.c)
 *     HUBCONNECTOR_RegisterPort @ 0x1C006CFE8 (HUBCONNECTOR_RegisterPort.c)
 *     HUBMISC_InitializeHsm @ 0x1C006DEE4 (HUBMISC_InitializeHsm.c)
 *     HUBREG_QueryUxdPortKey @ 0x1C0071564 (HUBREG_QueryUxdPortKey.c)
 *     HUBREG_UpdateUxdSettings @ 0x1C0071A60 (HUBREG_UpdateUxdSettings.c)
 *     HUBREG_DeleteUxdSubKeys @ 0x1C0071FF4 (HUBREG_DeleteUxdSubKeys.c)
 *     HUBACPI_EvaluateDsmMethod @ 0x1C0073114 (HUBACPI_EvaluateDsmMethod.c)
 *     HUBACPI_EvalAcpiMethodEx @ 0x1C0073580 (HUBACPI_EvalAcpiMethodEx.c)
 *     HUBACPI_EnumChildren @ 0x1C0073948 (HUBACPI_EnumChildren.c)
 *     HUBACPI_GetAcpiPortAttributes @ 0x1C0073CD8 (HUBACPI_GetAcpiPortAttributes.c)
 *     WMI_AcquireHubName @ 0x1C0074438 (WMI_AcquireHubName.c)
 *     WMI_QueryInstanceHubNodeInfo @ 0x1C00746B0 (WMI_QueryInstanceHubNodeInfo.c)
 *     WMI_GetPropertyString @ 0x1C0074930 (WMI_GetPropertyString.c)
 *     WMI_RegisterHub @ 0x1C0074BE0 (WMI_RegisterHub.c)
 *     WMI_RegisterDevice @ 0x1C0074DAC (WMI_RegisterDevice.c)
 *     WMI_RegisterSurpriseRemovalNotificationInstance @ 0x1C0074ED8 (WMI_RegisterSurpriseRemovalNotificationInstance.c)
 *     TelemetryData_pInitWerContext @ 0x1C0075624 (TelemetryData_pInitWerContext.c)
 *     DriverEntry @ 0x1C0077010 (DriverEntry.c)
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
    return (void *)((__int64 (__fastcall *)(_QWORD *, _QWORD))((char *)&loc_1C003927D + 4 * (8 - ((Size >> 3) & 7)) + 2))(
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
