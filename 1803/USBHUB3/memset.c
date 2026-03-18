/*
 * XREFs of memset @ 0x1C0039F00
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C0001090 (McGenControlCallbackV2.c)
 *     HUBHTX_ValidateAndCacheHubConfigDescriptor @ 0x1C0002E38 (HUBHTX_ValidateAndCacheHubConfigDescriptor.c)
 *     HUBHTX_SendInterruptTransfer @ 0x1C0003100 (HUBHTX_SendInterruptTransfer.c)
 *     HUBHTX_CompleteGetPortStatusWithPortStatusResult @ 0x1C0005710 (HUBHTX_CompleteGetPortStatusWithPortStatusResult.c)
 *     HUBHTX_CompleteGetPortStatusWithFailedStatus @ 0x1C0005908 (HUBHTX_CompleteGetPortStatusWithFailedStatus.c)
 *     HUBHTX_ClearTTBuffer @ 0x1C0005E10 (HUBHTX_ClearTTBuffer.c)
 *     HUBPARENT_SetHubConfiguration @ 0x1C000652C (HUBPARENT_SetHubConfiguration.c)
 *     HUBPARENT_ResetHub @ 0x1C0006C50 (HUBPARENT_ResetHub.c)
 *     HUBPARENT_GetInfoFromParentUsingParentIoctlComplete @ 0x1C0006E70 (HUBPARENT_GetInfoFromParentUsingParentIoctlComplete.c)
 *     HUBPARENT_GetInfoFromParentUsingParentIoctl @ 0x1C0007018 (HUBPARENT_GetInfoFromParentUsingParentIoctl.c)
 *     HUBHSM_ResettingInterruptPipeOnFailure @ 0x1C0007C20 (HUBHSM_ResettingInterruptPipeOnFailure.c)
 *     HUBHSM_ValidatingAndParsingHubDescriptor @ 0x1C0008770 (HUBHSM_ValidatingAndParsingHubDescriptor.c)
 *     HUBSM_FindAndSetTargetState @ 0x1C0008E3C (HUBSM_FindAndSetTargetState.c)
 *     HUBFDO_GetDeviceCapabilities @ 0x1C000A94C (HUBFDO_GetDeviceCapabilities.c)
 *     HUBFDO_EvtIoInternalDeviceControlFromPDO @ 0x1C000B5C0 (HUBFDO_EvtIoInternalDeviceControlFromPDO.c)
 *     HUBFDO_BuildUsb20HubDescriptor @ 0x1C000B824 (HUBFDO_BuildUsb20HubDescriptor.c)
 *     HUBFDO_IoctlGetNodeConnectionInfo @ 0x1C000B960 (HUBFDO_IoctlGetNodeConnectionInfo.c)
 *     HUBFDO_PowerSettingCallback @ 0x1C000C040 (HUBFDO_PowerSettingCallback.c)
 *     HUBFDO_SetupHubPostErrataQuery @ 0x1C000C41C (HUBFDO_SetupHubPostErrataQuery.c)
 *     HUBFDO_CreateDeviceInterfaceForBillboard @ 0x1C000C8BC (HUBFDO_CreateDeviceInterfaceForBillboard.c)
 *     HUBFDO_CleanupDeviceInterfaceForBillboard @ 0x1C000CA5C (HUBFDO_CleanupDeviceInterfaceForBillboard.c)
 *     HSMMUX_InitializeHSMMuxContext @ 0x1C000CD54 (HSMMUX_InitializeHSMMuxContext.c)
 *     HUBMUX_CreatePSM @ 0x1C000CD9C (HUBMUX_CreatePSM.c)
 *     HUBMUX_CreateChildPSMs @ 0x1C000D290 (HUBMUX_CreateChildPSMs.c)
 *     RtlStringCchPrintfExW @ 0x1C00107A4 (RtlStringCchPrintfExW.c)
 *     HUBPDO_CompleteClientSerialRequestWithStatusSuccess @ 0x1C0012004 (HUBPDO_CompleteClientSerialRequestWithStatusSuccess.c)
 *     HUBPDO_CompleteClientSerialRequestWithStatusFailed @ 0x1C00121E4 (HUBPDO_CompleteClientSerialRequestWithStatusFailed.c)
 *     HUBPDO_CompleteClientSerialRequestWithLastStatus @ 0x1C001238C (HUBPDO_CompleteClientSerialRequestWithLastStatus.c)
 *     HUBPDO_EvtIoInternalDeviceControl @ 0x1C0012660 (HUBPDO_EvtIoInternalDeviceControl.c)
 *     HUBPDO_GetHubName @ 0x1C00129E0 (HUBPDO_GetHubName.c)
 *     HUBPDO_ReturnDeviceConfigInfo @ 0x1C0012C8C (HUBPDO_ReturnDeviceConfigInfo.c)
 *     HUBPDO_ValidateConfigurationDescriptor @ 0x1C0012F98 (HUBPDO_ValidateConfigurationDescriptor.c)
 *     HUBPDO_ValidateSelectConfigUrb @ 0x1C0013174 (HUBPDO_ValidateSelectConfigUrb.c)
 *     HUBPDO_ValidateSelectInterfaceUrb @ 0x1C00136F8 (HUBPDO_ValidateSelectInterfaceUrb.c)
 *     HUBPDO_FindAndStoreMatchingInternalPipeHandle @ 0x1C0013A00 (HUBPDO_FindAndStoreMatchingInternalPipeHandle.c)
 *     HUBPDO_QueryForD3ColdSupportInAcpi @ 0x1C0013D8C (HUBPDO_QueryForD3ColdSupportInAcpi.c)
 *     HUBPDO_EvtDeviceD0Exit @ 0x1C0015D60 (HUBPDO_EvtDeviceD0Exit.c)
 *     HUBPDO_SubmitDeviceWakeNotificationIoctl @ 0x1C00172A8 (HUBPDO_SubmitDeviceWakeNotificationIoctl.c)
 *     HUBPDO_AllocateForwardProgressResources @ 0x1C0017660 (HUBPDO_AllocateForwardProgressResources.c)
 *     HUBPDO_WdmPnpPowerIrpCompletionRoutineForAsynchronousCompletion @ 0x1C0017BF0 (HUBPDO_WdmPnpPowerIrpCompletionRoutineForAsynchronousCompletion.c)
 *     HUBPDO_PoFxDripsWatchdogCallback @ 0x1C0017F80 (HUBPDO_PoFxDripsWatchdogCallback.c)
 *     HUBID_AppendStringToIDString @ 0x1C0018584 (HUBID_AppendStringToIDString.c)
 *     HUBID_BuildUxdPnpId @ 0x1C0018710 (HUBID_BuildUxdPnpId.c)
 *     HUBDSM_ResettingPipeInUCXOnClientReset @ 0x1C001A550 (HUBDSM_ResettingPipeInUCXOnClientReset.c)
 *     HUBDSM_ResettingPipeInUCXOnClientSyncResetPipe @ 0x1C001A6D0 (HUBDSM_ResettingPipeInUCXOnClientSyncResetPipe.c)
 *     HUBDSM_SettingConfigurationInformationInClientRequest @ 0x1C001A850 (HUBDSM_SettingConfigurationInformationInClientRequest.c)
 *     HUBDSM_SettingInterfaceInformationInClientRequest @ 0x1C001AA70 (HUBDSM_SettingInterfaceInformationInClientRequest.c)
 *     HUBDSM_UpdatingDefaultEndpointMaxPacketSizeInEnum @ 0x1C001B360 (HUBDSM_UpdatingDefaultEndpointMaxPacketSizeInEnum.c)
 *     HUBDSM_ValidatingMSOSExtendedConfigDescriptor @ 0x1C001C220 (HUBDSM_ValidatingMSOSExtendedConfigDescriptor.c)
 *     HUBDSM_SettingNonZeroAddress @ 0x1C001C430 (HUBDSM_SettingNonZeroAddress.c)
 *     HUBDSM_ValidatingAndLoggingAlternateModeStringDescriptor @ 0x1C001CAE0 (HUBDSM_ValidatingAndLoggingAlternateModeStringDescriptor.c)
 *     HUBDSM_ValidatingAndLoggingBillboardStringDescriptor @ 0x1C001CC60 (HUBDSM_ValidatingAndLoggingBillboardStringDescriptor.c)
 *     HUBDSM_ValidatingMsOs20DescriptorSetIfPresent @ 0x1C001CDE0 (HUBDSM_ValidatingMsOs20DescriptorSetIfPresent.c)
 *     HUBDSM_CheckingIf20LPMShouldBeEnabled @ 0x1C001F5D0 (HUBDSM_CheckingIf20LPMShouldBeEnabled.c)
 *     HUBUCX_NotifyDeviceResetUsingUCXIoctl @ 0x1C00201C8 (HUBUCX_NotifyDeviceResetUsingUCXIoctl.c)
 *     HUBUCX_EnableDisableEndpointsUsingUCXIoctl @ 0x1C0020378 (HUBUCX_EnableDisableEndpointsUsingUCXIoctl.c)
 *     HUBUCX_DisableDeviceAndDefaultEndpointUsingUCXIoctl @ 0x1C00205C4 (HUBUCX_DisableDeviceAndDefaultEndpointUsingUCXIoctl.c)
 *     HUBUCX_EnableDeviceAndDefaultEndpointUsingUCXIoctl @ 0x1C002067C (HUBUCX_EnableDeviceAndDefaultEndpointUsingUCXIoctl.c)
 *     HUBUCX_UpdateDeviceInfoUsingUCXIoctl @ 0x1C00208E8 (HUBUCX_UpdateDeviceInfoUsingUCXIoctl.c)
 *     HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl @ 0x1C0020AA4 (HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl.c)
 *     HUBUCX_GetRootHubInfoUsingUCXIoctl @ 0x1C0021294 (HUBUCX_GetRootHubInfoUsingUCXIoctl.c)
 *     HUBUCX_GetRootHub20PortsInfoUsingUCXIoctl @ 0x1C0021524 (HUBUCX_GetRootHub20PortsInfoUsingUCXIoctl.c)
 *     HUBUCX_GetRootHub30PortsInfoUsingUCXIoctl @ 0x1C0021954 (HUBUCX_GetRootHub30PortsInfoUsingUCXIoctl.c)
 *     HUBUCX_UpdateHubInformationUsingUCXIoctl @ 0x1C00220C4 (HUBUCX_UpdateHubInformationUsingUCXIoctl.c)
 *     HUBUCX_PurgeDeviceIoUsingUCXIoctl @ 0x1C0022634 (HUBUCX_PurgeDeviceIoUsingUCXIoctl.c)
 *     HUBUCX_PurgeDeviceIoForSuspendUsingUCXIoctl @ 0x1C00226E8 (HUBUCX_PurgeDeviceIoForSuspendUsingUCXIoctl.c)
 *     HUBUCX_PurgeDeviceTreeIoUsingUCXIoctl @ 0x1C002279C (HUBUCX_PurgeDeviceTreeIoUsingUCXIoctl.c)
 *     HUBUCX_NotifyForwardProgress @ 0x1C0022A54 (HUBUCX_NotifyForwardProgress.c)
 *     HUBDTX_ValidateAndCacheBOSDescriptor @ 0x1C0024260 (HUBDTX_ValidateAndCacheBOSDescriptor.c)
 *     HUBDTX_ValidateAndCacheBOSDescriptorHeader @ 0x1C0024684 (HUBDTX_ValidateAndCacheBOSDescriptorHeader.c)
 *     HUBDTX_ValidateAndCacheConfigDescriptor @ 0x1C0024C54 (HUBDTX_ValidateAndCacheConfigDescriptor.c)
 *     HUBDTX_ValidateAndCacheDeviceDescriptor @ 0x1C0025174 (HUBDTX_ValidateAndCacheDeviceDescriptor.c)
 *     HUBDTX_ValidateFirstDeviceDescriptorFor20 @ 0x1C00253B0 (HUBDTX_ValidateFirstDeviceDescriptorFor20.c)
 *     HUBDTX_ValidateAndCacheLanguageIdStringDescriptor @ 0x1C0025598 (HUBDTX_ValidateAndCacheLanguageIdStringDescriptor.c)
 *     HUBDTX_ClearEndpointHaltUsingControlTransfer @ 0x1C002593C (HUBDTX_ClearEndpointHaltUsingControlTransfer.c)
 *     HUBDTX_ValidateAndCacheProductIdStringDescriptor @ 0x1C0025CAC (HUBDTX_ValidateAndCacheProductIdStringDescriptor.c)
 *     HUBDTX_ValidateAndCacheSerialNumberStringDescriptor @ 0x1C0025E70 (HUBDTX_ValidateAndCacheSerialNumberStringDescriptor.c)
 *     HUBDTX_LogBillboardEvent @ 0x1C0026190 (HUBDTX_LogBillboardEvent.c)
 *     HUBDTX_LogAlternateMode @ 0x1C0026298 (HUBDTX_LogAlternateMode.c)
 *     HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax @ 0x1C00279F8 (HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax.c)
 *     HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration @ 0x1C0027B70 (HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration.c)
 *     HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface @ 0x1C00286B8 (HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface.c)
 *     HUBMISC_CreateNewDSM @ 0x1C0029E0C (HUBMISC_CreateNewDSM.c)
 *     HUBMISC_ControlTransfer @ 0x1C002AF70 (HUBMISC_ControlTransfer.c)
 *     HUBMISC_GetDeviceInterfacePath @ 0x1C002BB60 (HUBMISC_GetDeviceInterfacePath.c)
 *     HUBMISC_PerformPostSurpriseRemovalRecoveryActionsIfBootDevice @ 0x1C002BF64 (HUBMISC_PerformPostSurpriseRemovalRecoveryActionsIfBootDevice.c)
 *     HUBMISC_CreateWerReport @ 0x1C002C28C (HUBMISC_CreateWerReport.c)
 *     HUBREG_QueryUsbflagsAlternateSettingFilter @ 0x1C002CA84 (HUBREG_QueryUsbflagsAlternateSettingFilter.c)
 *     HUBREG_UpdateSqmHubOvercurrentDetected @ 0x1C002CC40 (HUBREG_UpdateSqmHubOvercurrentDetected.c)
 *     HUBREG_ValidateAndPopulateEndpointPriorities @ 0x1C002CD38 (HUBREG_ValidateAndPopulateEndpointPriorities.c)
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x1C0030954 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 *     HUBDESC_ValidateBOSDescriptorSet @ 0x1C0033088 (HUBDESC_ValidateBOSDescriptorSet.c)
 *     HUBDESC_ValidateMsOs20ConfigurationSubset @ 0x1C00344F0 (HUBDESC_ValidateMsOs20ConfigurationSubset.c)
 *     HUBDESC_ValidateMsOs20FunctionSubset @ 0x1C0034760 (HUBDESC_ValidateMsOs20FunctionSubset.c)
 *     WER_CreateReport @ 0x1C0035FAC (WER_CreateReport.c)
 *     WMI_QueryInstanceDeviceNodeInfo @ 0x1C0036700 (WMI_QueryInstanceDeviceNodeInfo.c)
 *     HUBBOOT_RegisterBootDevice @ 0x1C00369F8 (HUBBOOT_RegisterBootDevice.c)
 *     TelemetryData_CreateReport @ 0x1C0036CD8 (TelemetryData_CreateReport.c)
 *     USBDInternal_QueryUsbVerifierSettings @ 0x1C00370D0 (USBDInternal_QueryUsbVerifierSettings.c)
 *     USBDInternal_BuildServicePath @ 0x1C0037320 (USBDInternal_BuildServicePath.c)
 *     USBD_CreateHandle @ 0x1C0037524 (USBD_CreateHandle.c)
 *     USBD_QueryUsbCapability @ 0x1C003791C (USBD_QueryUsbCapability.c)
 *     WerpAllocateAndInitializeSid @ 0x1C00388EC (WerpAllocateAndInitializeSid.c)
 *     WerKernelSubmitReport @ 0x1C0039040 (WerKernelSubmitReport.c)
 *     WppTraceCallback @ 0x1C0065110 (WppTraceCallback.c)
 *     HUBDRIVER_EtwRundownUsbDevice @ 0x1C00658E0 (HUBDRIVER_EtwRundownUsbDevice.c)
 *     HUBFDO_EvtDeviceAdd @ 0x1C0066140 (HUBFDO_EvtDeviceAdd.c)
 *     HUBFDO_IoctlGetPortStatus @ 0x1C00675AC (HUBFDO_IoctlGetPortStatus.c)
 *     HUBFDO_IoctlGetNodeInformation @ 0x1C0067770 (HUBFDO_IoctlGetNodeInformation.c)
 *     HUBFDO_IoctlGetNodeConnectionDriverKeyName @ 0x1C0067940 (HUBFDO_IoctlGetNodeConnectionDriverKeyName.c)
 *     HUBFDO_IoctlGetNodeConnectionAttributes @ 0x1C0067C94 (HUBFDO_IoctlGetNodeConnectionAttributes.c)
 *     HUBFDO_IoctlGetHubCaps @ 0x1C0067EB8 (HUBFDO_IoctlGetHubCaps.c)
 *     HUBFDO_IoctlGetHubCapsEx @ 0x1C0068078 (HUBFDO_IoctlGetHubCapsEx.c)
 *     HUBFDO_IoctlGetNodeConnectionName @ 0x1C0068294 (HUBFDO_IoctlGetNodeConnectionName.c)
 *     HUBFDO_IoctlGetDescriptorFromNodeConnection @ 0x1C0068680 (HUBFDO_IoctlGetDescriptorFromNodeConnection.c)
 *     HUBFDO_IoctlGetHubInformationEx @ 0x1C0068C1C (HUBFDO_IoctlGetHubInformationEx.c)
 *     HUBFDO_IoctlGetPortConnectorProperties @ 0x1C0068EA8 (HUBFDO_IoctlGetPortConnectorProperties.c)
 *     HUBFDO_IoctlGetNodeConnectionInformationExV2 @ 0x1C0069268 (HUBFDO_IoctlGetNodeConnectionInformationExV2.c)
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1C006A170 (HUBPDO_EvtDevicePrepareHardware.c)
 *     HUBPDO_PublishBillboardDetails @ 0x1C006AE28 (HUBPDO_PublishBillboardDetails.c)
 *     HUBPDO_CreatePdoInternal @ 0x1C006B604 (HUBPDO_CreatePdoInternal.c)
 *     HUBCONNECTOR_RegisterPort @ 0x1C006CEC0 (HUBCONNECTOR_RegisterPort.c)
 *     HUBMISC_InitializeHsm @ 0x1C006DD74 (HUBMISC_InitializeHsm.c)
 *     HUBREG_QueryUxdPortKey @ 0x1C007143C (HUBREG_QueryUxdPortKey.c)
 *     HUBREG_UpdateUxdSettings @ 0x1C0071938 (HUBREG_UpdateUxdSettings.c)
 *     HUBREG_DeleteUxdSubKeys @ 0x1C0071ECC (HUBREG_DeleteUxdSubKeys.c)
 *     HUBACPI_EvaluateDsmMethod @ 0x1C0072FE4 (HUBACPI_EvaluateDsmMethod.c)
 *     HUBACPI_EvalAcpiMethodEx @ 0x1C0073450 (HUBACPI_EvalAcpiMethodEx.c)
 *     HUBACPI_EnumChildren @ 0x1C0073818 (HUBACPI_EnumChildren.c)
 *     HUBACPI_GetAcpiPortAttributes @ 0x1C0073BA8 (HUBACPI_GetAcpiPortAttributes.c)
 *     WMI_AcquireHubName @ 0x1C0074300 (WMI_AcquireHubName.c)
 *     WMI_QueryInstanceHubNodeInfo @ 0x1C0074580 (WMI_QueryInstanceHubNodeInfo.c)
 *     WMI_GetPropertyString @ 0x1C00747E8 (WMI_GetPropertyString.c)
 *     WMI_RegisterHub @ 0x1C0074A94 (WMI_RegisterHub.c)
 *     WMI_RegisterDevice @ 0x1C0074C60 (WMI_RegisterDevice.c)
 *     WMI_RegisterSurpriseRemovalNotificationInstance @ 0x1C0074D8C (WMI_RegisterSurpriseRemovalNotificationInstance.c)
 *     TelemetryData_pInitWerContext @ 0x1C00754E8 (TelemetryData_pInitWerContext.c)
 *     DriverEntry @ 0x1C0077008 (DriverEntry.c)
 * Callees:
 *     <none>
 */

void *__cdecl memset(void *a1, int Val, size_t Size)
{
  void *result; // rax
  __int64 v4; // rdx
  size_t v5; // r9
  char *v6; // rcx
  size_t v7; // r8
  __m128 v8; // xmm0
  char *v9; // r8
  __m128 *v10; // rcx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  unsigned __int64 i; // r9
  __int64 v14; // r8

  result = a1;
  if ( Size < 8 )
  {
    for ( ; Size; --Size )
      *((char *)a1 + Size - 1) = Val;
  }
  else
  {
    v4 = 0x101010101010101LL * (unsigned __int8)Val;
    if ( Size >= 0x4F )
    {
      v8 = _mm_movelh_ps((__m128)(unsigned __int64)v4, (__m128)(unsigned __int64)v4);
      *(__m128 *)a1 = v8;
      v9 = (char *)a1 + Size;
      v10 = (__m128 *)(((unsigned __int64)a1 + 16) & 0xFFFFFFFFFFFFFFF0uLL);
      v11 = v9 - (char *)v10;
      v12 = v11 >> 7;
      if ( v11 >> 7 )
      {
        do
        {
          *v10 = v8;
          v10[1] = v8;
          v10 += 8;
          v10[-6] = v8;
          v10[-5] = v8;
          --v12;
          v10[-4] = v8;
          v10[-3] = v8;
          v10[-2] = v8;
          v10[-1] = v8;
        }
        while ( v12 );
        v11 &= 0x7Fu;
      }
      for ( i = v11 >> 4; i; --i )
        *v10++ = v8;
      v14 = v11 & 0xF;
      if ( v14 )
        *(__m128 *)((char *)v10 + v14 - 16) = v8;
    }
    else
    {
      v5 = Size & 0x78;
      v6 = (char *)a1 + (Size & 0xFFFFFFFFFFFFFFF8uLL);
      do
      {
        *(_QWORD *)((char *)result + v5 - 8) = v4;
        v5 -= 8LL;
      }
      while ( v5 );
      v7 = Size & 7;
      if ( v7 )
        *(_QWORD *)&v6[v7 - 8] = v4;
    }
  }
  return result;
}
