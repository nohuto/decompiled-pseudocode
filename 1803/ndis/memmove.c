/*
 * XREFs of memmove @ 0x1C0025E40
 * Callers:
 *     NdisGetDataBuffer @ 0x1C0006890 (NdisGetDataBuffer.c)
 *     ?ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0008D00 (-ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C000E630 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ?ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z @ 0x1C001167C (-ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_.c)
 *     ndisMIndicateReceiveFilterCapsChange @ 0x1C0013610 (ndisMIndicateReceiveFilterCapsChange.c)
 *     ndisMIndicateNicSwitchCapsChange @ 0x1C00136AC (ndisMIndicateNicSwitchCapsChange.c)
 *     ndisFIndicateOffloadChange @ 0x1C0013AA8 (ndisFIndicateOffloadChange.c)
 *     ?RtlCopyMdlToBuffer@@YAJPEAU_MDL@@_KPEAX1PEA_K@Z @ 0x1C0013C9C (-RtlCopyMdlToBuffer@@YAJPEAU_MDL@@_KPEAX1PEA_K@Z.c)
 *     NdisWriteErrorLogEntry @ 0x1C0013D90 (NdisWriteErrorLogEntry.c)
 *     ndisMIndicateOffloadChange @ 0x1C0013ED4 (ndisMIndicateOffloadChange.c)
 *     InitializeTelemetryAssertsKM @ 0x1C00149C8 (InitializeTelemetryAssertsKM.c)
 *     NdisIfRegisterProvider @ 0x1C0015140 (NdisIfRegisterProvider.c)
 *     ndisPostSetOpenRSSParametersHelper @ 0x1C00153E4 (ndisPostSetOpenRSSParametersHelper.c)
 *     ndisSetOpenRSSParameters @ 0x1C0015640 (ndisSetOpenRSSParameters.c)
 *     ndisPostSetMiniportRSSParameters @ 0x1C001589C (ndisPostSetMiniportRSSParameters.c)
 *     NdisFRegisterFilterDriver @ 0x1C00162A0 (NdisFRegisterFilterDriver.c)
 *     ndisMSetGeneralAttributes @ 0x1C001690C (ndisMSetGeneralAttributes.c)
 *     ndisMSetPowerManagementCapabilities @ 0x1C0016D7C (ndisMSetPowerManagementCapabilities.c)
 *     ndisWriteWmiStatusIndication @ 0x1C0018BDC (ndisWriteWmiStatusIndication.c)
 *     ndisIndicateOffloadChangeInternal @ 0x1C00190C4 (ndisIndicateOffloadChangeInternal.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00197A4 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ?ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C001ACAC (-ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_IN.c)
 *     ?ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@@PEAK@Z @ 0x1C001B8B0 (-ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@.c)
 *     ndisSetupWmiNode @ 0x1C001C2EC (ndisSetupWmiNode.c)
 *     ndisIfUpdateInterfaceOnAddDevice @ 0x1C001D500 (ndisIfUpdateInterfaceOnAddDevice.c)
 *     ndisIfUpdateInterfaceOnInitialize @ 0x1C001D6D8 (ndisIfUpdateInterfaceOnInitialize.c)
 *     ndisOidPostEthMulticastList @ 0x1C001DAA0 (ndisOidPostEthMulticastList.c)
 *     ndisPostOpenSetMulticastList @ 0x1C001DB8C (ndisPostOpenSetMulticastList.c)
 *     ndisOidPreSupportedList @ 0x1C001F7D0 (ndisOidPreSupportedList.c)
 *     NdisAllocateSharedMemory @ 0x1C0021380 (NdisAllocateSharedMemory.c)
 *     ?ndisResizeRefCountBlock@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C002164C (-ndisResizeRefCountBlock@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     NdisGetProcessorInformationEx @ 0x1C0021EC0 (NdisGetProcessorInformationEx.c)
 *     NdisFIndicateStatus @ 0x1C0021F90 (NdisFIndicateStatus.c)
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C002209C (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     NdisRegisterDeviceEx @ 0x1C0022B10 (NdisRegisterDeviceEx.c)
 *     ?ndisPostProcessRestartParametersAfterMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C002302C (-ndisPostProcessRestartParametersAfterMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_IN.c)
 *     ?ndisIfCreateCompartmentBlock@@YAJIPEAU_GUID@@PEAU_NDIS_NSI_COMPARTMENT_RW@@PEAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C0023A44 (-ndisIfCreateCompartmentBlock@@YAJIPEAU_GUID@@PEAU_NDIS_NSI_COMPARTMENT_RW@@PEAPEAU_NDIS_IF_COMP.c)
 *     ndisOidPostEthMulticastOid @ 0x1C0025480 (ndisOidPostEthMulticastOid.c)
 *     ndisAllocateReceiveQueue @ 0x1C003AA8C (ndisAllocateReceiveQueue.c)
 *     ndisOidPreRcvFilterParameters @ 0x1C003C530 (ndisOidPreRcvFilterParameters.c)
 *     ndisOidPreRcvFilterQueueParameters @ 0x1C003C720 (ndisOidPreRcvFilterQueueParameters.c)
 *     ndisSetReceiveFilter @ 0x1C003C958 (ndisSetReceiveFilter.c)
 *     NdisMAllocatePort @ 0x1C003D230 (NdisMAllocatePort.c)
 *     ?ndisIfUpdateStringIfNeeded@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_UNICODE_STRING@@PEAU_IF_COUNTED_STRING_LH@@W4_NSI_STRUCT_TYPE@@K@Z @ 0x1C003F3AC (-ndisIfUpdateStringIfNeeded@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_UNICODE_STRING@@PEAU_IF_COUNTED_STRING_.c)
 *     ?ndisNsiGetNetworkInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00403F0 (-ndisNsiGetNetworkInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C0040C70 (-ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ?ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C0040E80 (-ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ndisIfAliasChange @ 0x1C004232C (ndisIfAliasChange.c)
 *     ndisIfSetIfDescr @ 0x1C0042C6C (ndisIfSetIfDescr.c)
 *     ndisIfUpdateCurrentMacAddress @ 0x1C0042EB0 (ndisIfUpdateCurrentMacAddress.c)
 *     ndisMAllocateRequest @ 0x1C00455CC (ndisMAllocateRequest.c)
 *     ndisOidPostMiniportStats @ 0x1C0046D00 (ndisOidPostMiniportStats.c)
 *     ndisOidPostTcpConnectionOffloadParameters @ 0x1C0046F50 (ndisOidPostTcpConnectionOffloadParameters.c)
 *     ndisOidPreQosGetParameters @ 0x1C00476A0 (ndisOidPreQosGetParameters.c)
 *     ndisOidPreQueryOffloadEncapsulation @ 0x1C0047848 (ndisOidPreQueryOffloadEncapsulation.c)
 *     ndisQueryMiniportRSSParameters @ 0x1C0048100 (ndisQueryMiniportRSSParameters.c)
 *     ndisQueryOpenRSSParameters @ 0x1C0048250 (ndisQueryOpenRSSParameters.c)
 *     ndisClonePMPatternList @ 0x1C0049B4C (ndisClonePMPatternList.c)
 *     ndisQueryWakeUpPatternList @ 0x1C004B3F8 (ndisQueryWakeUpPatternList.c)
 *     ?RtlCopyBufferToMdl@@YAJPEAXPEAU_MDL@@_K2PEA_K@Z @ 0x1C004B9C8 (-RtlCopyBufferToMdl@@YAJPEAXPEAU_MDL@@_K2PEA_K@Z.c)
 *     ?RtlCopyMdlToMdl@@YAJPEAU_MDL@@_K011PEA_K@Z @ 0x1C004BABC (-RtlCopyMdlToMdl@@YAJPEAU_MDL@@_K011PEA_K@Z.c)
 *     ndisReadUpperBindings @ 0x1C0050B90 (ndisReadUpperBindings.c)
 *     NdisCopyFromPacketToPacket @ 0x1C0051220 (NdisCopyFromPacketToPacket.c)
 *     NdisCopyFromPacketToPacketSafe @ 0x1C0051400 (NdisCopyFromPacketToPacketSafe.c)
 *     ndisDoLoopbackNetBufferList @ 0x1C0054BC0 (ndisDoLoopbackNetBufferList.c)
 *     ndisMCopyFromPacketToBuffer @ 0x1C00550BC (ndisMCopyFromPacketToBuffer.c)
 *     NdisEnumerateFilterModules @ 0x1C0058770 (NdisEnumerateFilterModules.c)
 *     ndisFDoLoopbackNetBufferList @ 0x1C0059838 (ndisFDoLoopbackNetBufferList.c)
 *     NdisMWriteLogData @ 0x1C005B7A0 (NdisMWriteLogData.c)
 *     ndisMGetLogData @ 0x1C005BB28 (ndisMGetLogData.c)
 *     NdisWriteEventLogEntry @ 0x1C005C5A0 (NdisWriteEventLogEntry.c)
 *     ndisGetPowerInfo @ 0x1C005DA88 (ndisGetPowerInfo.c)
 *     ndisCheckIfTypeMismatch @ 0x1C005F854 (ndisCheckIfTypeMismatch.c)
 *     ndisMIndicateQosParametersChange @ 0x1C0060398 (ndisMIndicateQosParametersChange.c)
 *     EthQueryGlobalFilterAddresses @ 0x1C0063F64 (EthQueryGlobalFilterAddresses.c)
 *     EthQueryOpenFilterAddresses @ 0x1C0063FFC (EthQueryOpenFilterAddresses.c)
 *     ndisTopTcpConnectionOffloadStatus @ 0x1C006835C (ndisTopTcpConnectionOffloadStatus.c)
 *     NdisSetSessionCompartmentId @ 0x1C00687B0 (NdisSetSessionCompartmentId.c)
 *     ?ndisCopyPeriodicReceiveNbl@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@KPEAU1@@Z @ 0x1C0068A88 (-ndisCopyPeriodicReceiveNbl@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@KPEAU1@@Z.c)
 *     ndisLWM5IndicateReceive @ 0x1C0069D14 (ndisLWM5IndicateReceive.c)
 *     ndisIovCopyVFInfo @ 0x1C006C048 (ndisIovCopyVFInfo.c)
 *     ?ndisExpandStackTrace@@YAEPEAPEAU_NDIS_STACK_TRACE@@PEAU_RTL_DYNAMIC_HASH_TABLE_CONTEXT@@PEA_K@Z @ 0x1C006E268 (-ndisExpandStackTrace@@YAEPEAPEAU_NDIS_STACK_TRACE@@PEAU_RTL_DYNAMIC_HASH_TABLE_CONTEXT@@PEA_K@Z.c)
 *     ndisNicAutoPowerInsertIntoSortedArray @ 0x1C006EA98 (ndisNicAutoPowerInsertIntoSortedArray.c)
 *     ndisSSUpdateOidCacheValue @ 0x1C007152C (ndisSSUpdateOidCacheValue.c)
 *     ?ndisGetPdInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0076C28 (-ndisGetPdInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ndisMIndicatePDConfigChange @ 0x1C007840C (ndisMIndicatePDConfigChange.c)
 *     ndisOidPrePDQueryConfig @ 0x1C00786B0 (ndisOidPrePDQueryConfig.c)
 *     ?ndisInternalSetRSSv2Parameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@KKGKKPEAX@Z @ 0x1C007B744 (-ndisInternalSetRSSv2Parameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@KKGKKPEAX@Z.c)
 *     ?ndisQueryRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@K@Z @ 0x1C007BD14 (-ndisQueryRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@K@Z.c)
 *     ?ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C007C234 (-ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 *     ?ndisUpdateRssV1ParametersFromV2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@PEAU_NDIS_RECEIVE_SCALE_PARAMETERS_V2@@2@Z @ 0x1C007CC0C (-ndisUpdateRssV1ParametersFromV2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_.c)
 *     NetPacketShallowCopyOne @ 0x1C007D810 (NetPacketShallowCopyOne.c)
 *     Duplicate802_11AttachAttributesCommon @ 0x1C007DD08 (Duplicate802_11AttachAttributesCommon.c)
 *     ndisWmiQueryAllData @ 0x1C00AC238 (ndisWmiQueryAllData.c)
 *     ndisWmiExecuteMethod @ 0x1C00AC874 (ndisWmiExecuteMethod.c)
 *     ndisQueryGuidData @ 0x1C00ACC5C (ndisQueryGuidData.c)
 *     ?ndisNsiGetInterfaceRosInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00ADB70 (-ndisNsiGetInterfaceRosInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRodEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00ADDC0 (-ndisNsiGetInterfaceRodEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00AE350 (-ndisNsiGetInterfaceRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRwInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00AEBB0 (-ndisNsiGetInterfaceRwInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRosEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00AF730 (-ndisNsiGetInterfaceRosEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ndisDeviceControlHandler @ 0x1C00AF99C (ndisDeviceControlHandler.c)
 *     ndisOidPreEthAddress @ 0x1C00B0040 (ndisOidPreEthAddress.c)
 *     ndisQueryStatisticsOids @ 0x1C00B00DC (ndisQueryStatisticsOids.c)
 *     ndisNotifyDevicePowerStateChange @ 0x1C00B068C (ndisNotifyDevicePowerStateChange.c)
 *     ?ndisPcwAddCounter@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@@Z @ 0x1C00B1528 (-ndisPcwAddCounter@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@@Z.c)
 *     ?RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z @ 0x1C00B2AF8 (-RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z.c)
 *     ndisMSetReceiveFilterAttributes @ 0x1C00B3528 (ndisMSetReceiveFilterAttributes.c)
 *     ndisMSetNicSwitchAttributes @ 0x1C00B37FC (ndisMSetNicSwitchAttributes.c)
 *     ndisMSetSriovAttributes @ 0x1C00B3A00 (ndisMSetSriovAttributes.c)
 *     ndisCreatePMProtocolOffloadEntry @ 0x1C00B3F34 (ndisCreatePMProtocolOffloadEntry.c)
 *     ndisCreateSecurityDescriptor @ 0x1C00B4A88 (ndisCreateSecurityDescriptor.c)
 *     ndisMSetRssCapabilities @ 0x1C00B6DEC (ndisMSetRssCapabilities.c)
 *     ndisInitializeMiniportRestartAttributes @ 0x1C00B7178 (ndisInitializeMiniportRestartAttributes.c)
 *     NdisWriteConfiguration @ 0x1C00B7AD0 (NdisWriteConfiguration.c)
 *     Ndis::BindRegistry::LoadNetworkInterfaceString @ 0x1C00B7D8C (Ndis--BindRegistry--LoadNetworkInterfaceString.c)
 *     NdisOpenConfigurationKeyByName @ 0x1C00B8220 (NdisOpenConfigurationKeyByName.c)
 *     NdisReadConfiguration @ 0x1C00B9A70 (NdisReadConfiguration.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z @ 0x1C00B9E68 (-Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z.c)
 *     NdisOpenProtocolConfiguration @ 0x1C00BA6E0 (NdisOpenProtocolConfiguration.c)
 *     KRegKey::QueryValueBlob__lambda_0a0f4a6e234c0d615b3ff6ea32737ef1___ @ 0x1C00BAB78 (KRegKey--QueryValueBlob__lambda_0a0f4a6e234c0d615b3ff6ea32737ef1___.c)
 *     ?reserve@?$KArray@PEAX$00@Rtl@@QEAA_N_K@Z @ 0x1C00BE7C4 (-reserve@-$KArray@PEAX$00@Rtl@@QEAA_N_K@Z.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00BF410 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ndisEnumerateFilterInstances @ 0x1C00BFC5C (ndisEnumerateFilterInstances.c)
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C00C0118 (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEAT_NET_L.c)
 *     ndisNotifyWmiBindUnbind @ 0x1C00C0970 (ndisNotifyWmiBindUnbind.c)
 *     ?reserve@?$KArray@E$00@Rtl@@QEAA_N_K@Z @ 0x1C00C0AA0 (-reserve@-$KArray@E$00@Rtl@@QEAA_N_K@Z.c)
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C00C0D64 (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 *     NdisMSetMiniportAttributes @ 0x1C00C2BB0 (NdisMSetMiniportAttributes.c)
 *     ndisMSetOffloadAttributes @ 0x1C00C3014 (ndisMSetOffloadAttributes.c)
 *     ndisQuerySupportedGuidToOidList @ 0x1C00C3A64 (ndisQuerySupportedGuidToOidList.c)
 *     ndisWmiRegister @ 0x1C00C45BC (ndisWmiRegister.c)
 *     ndisSaveParameters @ 0x1C00C4770 (ndisSaveParameters.c)
 *     ndisSetMiniportEthMulticastList @ 0x1C00C48DC (ndisSetMiniportEthMulticastList.c)
 *     ndisSetOpenEthMulticastList @ 0x1C00C4A78 (ndisSetOpenEthMulticastList.c)
 *     ndisCreateWoLPatternEntry @ 0x1C00C561C (ndisCreateWoLPatternEntry.c)
 *     ??$CopyPartialStringToBuffer@$0EA@@@YAXAEAY0EA@GPEBU_UNICODE_STRING@@@Z @ 0x1C00C68DC (--$CopyPartialStringToBuffer@$0EA@@@YAXAEAY0EA@GPEBU_UNICODE_STRING@@@Z.c)
 *     ndisPnPStartDevice @ 0x1C00C6974 (ndisPnPStartDevice.c)
 *     ndisOidPreRSSCaps @ 0x1C00C9FF0 (ndisOidPreRSSCaps.c)
 *     ndisReadParameter @ 0x1C00CA650 (ndisReadParameter.c)
 *     ndisEtwRegisterGuids @ 0x1C00CA9F0 (ndisEtwRegisterGuids.c)
 *     ndisSetOpenEthAddDeleteMulticast @ 0x1C00CB110 (ndisSetOpenEthAddDeleteMulticast.c)
 *     ethAddOneOpenMulticastAddress @ 0x1C00CB454 (ethAddOneOpenMulticastAddress.c)
 *     SeSddlSecurityDescriptorFromSDDL @ 0x1C00CB90C (SeSddlSecurityDescriptorFromSDDL.c)
 *     ndisOidPreReceiveFilterCaps @ 0x1C00DC390 (ndisOidPreReceiveFilterCaps.c)
 *     ?ndisNsiGetIfRcvAddressRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_IF_RCV_ADDRESS@@PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00DD060 (-ndisNsiGetIfRcvAddressRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_IF_RCV_ADDRESS@@PEAU_NM_.c)
 *     ndisIfCreateInterfaceForiScsi @ 0x1C00DD388 (ndisIfCreateInterfaceForiScsi.c)
 *     ndisOidPreFriendlyName @ 0x1C00DDF20 (ndisOidPreFriendlyName.c)
 *     ndisOidPreMacAddress @ 0x1C00DE200 (ndisOidPreMacAddress.c)
 *     ndisOidPreQueryTcpConnectionParameters @ 0x1C00DE970 (ndisOidPreQueryTcpConnectionParameters.c)
 *     ndisSetRestoreMulticastList @ 0x1C00DF630 (ndisSetRestoreMulticastList.c)
 *     ndisCreatePMPacketPattern @ 0x1C00E0D40 (ndisCreatePMPacketPattern.c)
 *     ndisCreateWakeUpPatternEntry @ 0x1C00E0E18 (ndisCreateWakeUpPatternEntry.c)
 *     ndisQueryWolPatternList @ 0x1C00E23F0 (ndisQueryWolPatternList.c)
 *     ndisXlateAddPacketPatternToWolPatternOid @ 0x1C00E39F4 (ndisXlateAddPacketPatternToWolPatternOid.c)
 *     ndisXlateAddWolPatternToPacketPatternOid @ 0x1C00E3C9C (ndisXlateAddWolPatternToPacketPatternOid.c)
 *     ndisXlateRemoveWolPatternToPacketPatternOid @ 0x1C00E3FD4 (ndisXlateRemoveWolPatternToPacketPatternOid.c)
 *     ndisXlateWakeUpPatternListToWolPatternList @ 0x1C00E4264 (ndisXlateWakeUpPatternListToWolPatternList.c)
 *     ndisXlateWolPatternListToWakeUpPatternList @ 0x1C00E44D8 (ndisXlateWolPatternListToWakeUpPatternList.c)
 *     ?ndisMoveUnicodeStringToNdisVarDataDesc@@YAXPEAU_UNICODE_STRING@@PEAEPEAPEAEPEAU_NDIS_VAR_DATA_DESC@@@Z @ 0x1C00E4828 (-ndisMoveUnicodeStringToNdisVarDataDesc@@YAXPEAU_UNICODE_STRING@@PEAEPEAPEAEPEAU_NDIS_VAR_DATA_D.c)
 *     WppTraceCallback @ 0x1C00E4B90 (WppTraceCallback.c)
 *     ndisGetOrCreateFilterInstanceKey @ 0x1C00E6A84 (ndisGetOrCreateFilterInstanceKey.c)
 *     ndisGetAdapterRssInfo @ 0x1C00E848C (ndisGetAdapterRssInfo.c)
 *     ndisGetHardwareInfo @ 0x1C00E8708 (ndisGetHardwareInfo.c)
 *     ndisMSetQosAttributes @ 0x1C00EA34C (ndisMSetQosAttributes.c)
 *     NdisInitializeWrapper @ 0x1C00EA5D0 (NdisInitializeWrapper.c)
 *     NdisMQueryAdapterResources @ 0x1C00EBE10 (NdisMQueryAdapterResources.c)
 *     ethDeleteOneOpenMulticastAddress @ 0x1C00ED6BC (ethDeleteOneOpenMulticastAddress.c)
 *     ndisWmiXlateEnumNdisRecvQueuesToWmiRecvQueues @ 0x1C00EF764 (ndisWmiXlateEnumNdisRecvQueuesToWmiRecvQueues.c)
 *     ndisIovCreateVPort @ 0x1C00F1F88 (ndisIovCreateVPort.c)
 *     ndisIovReadSwitchConfiguration @ 0x1C00F262C (ndisIovReadSwitchConfiguration.c)
 *     ndisOidPreIovNicSwitchParameters @ 0x1C00F3370 (ndisOidPreIovNicSwitchParameters.c)
 *     ndisSriovInterfaceReadVFConfig @ 0x1C00F4B90 (ndisSriovInterfaceReadVFConfig.c)
 *     ndisSriovInterfaceReadVfConfigBlock @ 0x1C00F4D30 (ndisSriovInterfaceReadVfConfigBlock.c)
 *     ndisSriovInterfaceWriteVFConfig @ 0x1C00F5120 (ndisSriovInterfaceWriteVFConfig.c)
 *     ndisSriovInterfaceWriteVfConfigBlock @ 0x1C00F52B0 (ndisSriovInterfaceWriteVfConfigBlock.c)
 *     ndisSSGetCachedOidValue @ 0x1C00F570C (ndisSSGetCachedOidValue.c)
 *     ?NdisPDPISetReceiveFilter@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_FILTER_PARAMETERS@@PEAPEAUNDIS_PD_FILTER_HANDLE__@@@Z @ 0x1C00F94D0 (-NdisPDPISetReceiveFilter@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_FILTER_PARAMETERS@@PEA.c)
 *     ?reserve@?$KArray@PEAUNDIS_BIND_FILTER_LINK@@$00@Rtl@@QEAA_N_K@Z @ 0x1C00FCAE4 (-reserve@-$KArray@PEAUNDIS_BIND_FILTER_LINK@@$00@Rtl@@QEAA_N_K@Z.c)
 *     NdisMRegisterWdiMiniportDriver @ 0x1C00FE120 (NdisMRegisterWdiMiniportDriver.c)
 *     SepSddlAddAceToAcl @ 0x1C00FE908 (SepSddlAddAceToAcl.c)
 *     CmRegUtilUcValueSetUcString @ 0x1C00FF988 (CmRegUtilUcValueSetUcString.c)
 *     ndisHandlePnPRequest @ 0x1C0100008 (ndisHandlePnPRequest.c)
 *     ndisPnPRemoveDevice @ 0x1C0101968 (ndisPnPRemoveDevice.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0101C04 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C01036D4 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ndisMInitializeAdapter @ 0x1C0105A70 (ndisMInitializeAdapter.c)
 *     ndisEnumerateInterfaces @ 0x1C010719C (ndisEnumerateInterfaces.c)
 *     ndisEnumerateInterfaces32 @ 0x1C010CE40 (ndisEnumerateInterfaces32.c)
 *     NdisMRegisterDevice @ 0x1C010ED00 (NdisMRegisterDevice.c)
 *     ndisRegisterMiniportDriver @ 0x1C010F5AC (ndisRegisterMiniportDriver.c)
 *     ndisIfInitialize @ 0x1C011CAC0 (ndisIfInitialize.c)
 *     ndisAddMediaTypeToArray @ 0x1C011F7A0 (ndisAddMediaTypeToArray.c)
 * Callees:
 *     <none>
 */

void *__cdecl memmove(void *a1, const void *Src, size_t Size)
{
  __m128i *v3; // r11
  bool v4; // cf
  unsigned __int64 v5; // rdx
  size_t k; // r9
  __int64 v7; // rax
  size_t m; // r8
  char v9; // al
  unsigned int v11; // ecx
  size_t v12; // r9
  __m128i v13; // xmm0
  __m128i v14; // xmm1
  int v15; // eax
  int v16; // eax
  __m128i v17; // xmm1
  __m128i v18; // xmm1
  __m128i *v19; // rcx
  size_t i; // r9
  __int64 v21; // rax
  size_t j; // r8
  __int8 v23; // al
  __m128i *v24; // rax
  __int64 v25; // rcx
  size_t v26; // r9
  __m128i v27; // xmm0
  __m128i v28; // xmm1
  int v29; // eax
  int v30; // eax
  __m128i v31; // xmm1
  __m128i v32; // xmm1
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v3 = (__m128i *)a1;
  v4 = Src < a1;
  v5 = (_BYTE *)Src - (_BYTE *)a1;
  if ( v4 )
  {
    v19 = (__m128i *)((char *)a1 + Size);
    if ( Size >= 0x4F )
    {
      if ( v5 > 0xFFFFFFFFFFFFFFF0uLL )
      {
        for ( ; ((unsigned __int8)v19 & 0xF) != 0; v19->m128i_i8[0] = v19->m128i_i8[v5] )
        {
          v19 = (__m128i *)((char *)v19 - 1);
          --Size;
        }
      }
      else
      {
        v24 = v19;
        v25 = (unsigned __int8)v19 & 0xF;
        if ( (_DWORD)v25 )
        {
          Size -= (unsigned int)v25;
          v25 = -(__int64)(unsigned int)v25;
          v24[-1] = _mm_loadu_si128((__m128i *)((char *)v24 + v5 - 16));
        }
        v19 = (__m128i *)((char *)v24 + v25);
      }
      v26 = Size >> 5;
      if ( Size >> 5 <= 0x2000 || v5 > 0xFFFFFFFFFFFFFE00uLL )
        goto LABEL_38;
      do
      {
        v29 = 4;
        do
        {
          v19 -= 8;
          _mm_prefetch(&v19->m128i_i8[v5], 0);
          _mm_prefetch(&v19[4].m128i_i8[v5], 0);
          --v29;
        }
        while ( v29 );
        v19 += 32;
        v30 = 8;
        do
        {
          v31 = _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 32));
          _mm_stream_si128(v19 - 1, _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 16)));
          _mm_stream_si128(v19 - 2, v31);
          v19 -= 4;
          v32 = _mm_loadu_si128((__m128i *)((char *)v19 + v5));
          _mm_stream_si128(v19 + 1, _mm_loadu_si128((__m128i *)((char *)v19 + v5 + 16)));
          _mm_stream_si128(v19, v32);
          --v30;
        }
        while ( v30 );
        Size -= 512LL;
      }
      while ( Size >= 0x200 );
      _InterlockedOr8((volatile signed __int8 *)&retaddr, 0);
      v26 = Size >> 5;
      if ( Size >> 5 )
      {
LABEL_38:
        Size &= 0x1Fu;
        do
        {
          v27 = _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 16));
          v28 = _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 32));
          v19 -= 2;
          v19[1] = v27;
          *v19 = v28;
          --v26;
        }
        while ( v26 );
      }
    }
    for ( i = Size >> 3; i; v19->m128i_i64[0] = v21 )
    {
      v21 = *(__int64 *)((char *)&v19->m128i_i64[-1] + v5);
      v19 = (__m128i *)((char *)v19 - 8);
      --i;
    }
    for ( j = Size & 7; j; v19->m128i_i8[0] = v23 )
    {
      v23 = v19->m128i_i8[v5 - 1];
      v19 = (__m128i *)((char *)v19 - 1);
      --j;
    }
    return v3;
  }
  else
  {
    if ( Size >= 0x4F )
    {
      if ( v5 < 0x10 )
      {
        for ( ; ((unsigned __int8)a1 & 0xF) != 0; a1 = (char *)a1 + 1 )
        {
          --Size;
          *(_BYTE *)a1 = *((_BYTE *)a1 + v5);
        }
      }
      else
      {
        v11 = -(int)a1 & 0xF;
        if ( v11 )
        {
          Size -= v11;
          *v3 = _mm_loadu_si128((__m128i *)((char *)v3 + v5));
        }
        a1 = &v3->m128i_i8[v11];
      }
      v12 = Size >> 5;
      if ( Size >> 5 <= 0x2000 || v5 < 0x200 )
        goto LABEL_13;
      do
      {
        v15 = 4;
        do
        {
          _mm_prefetch((const char *)a1 + v5, 0);
          _mm_prefetch((const char *)a1 + v5 + 64, 0);
          a1 = (char *)a1 + 128;
          --v15;
        }
        while ( v15 );
        a1 = (char *)a1 - 512;
        v16 = 8;
        do
        {
          v17 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5 + 16));
          _mm_stream_si128((__m128i *)a1, _mm_loadu_si128((const __m128i *)((char *)a1 + v5)));
          _mm_stream_si128((__m128i *)a1 + 1, v17);
          a1 = (char *)a1 + 64;
          v18 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5 - 16));
          _mm_stream_si128((__m128i *)a1 - 2, _mm_loadu_si128((const __m128i *)((char *)a1 + v5 - 32)));
          _mm_stream_si128((__m128i *)a1 - 1, v18);
          --v16;
        }
        while ( v16 );
        Size -= 512LL;
      }
      while ( Size >= 0x200 );
      _InterlockedOr8((volatile signed __int8 *)&retaddr, 0);
      v12 = Size >> 5;
      if ( Size >> 5 )
      {
LABEL_13:
        Size &= 0x1Fu;
        do
        {
          v13 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5));
          v14 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5 + 16));
          a1 = (char *)a1 + 32;
          *((__m128i *)a1 - 2) = v13;
          *((__m128i *)a1 - 1) = v14;
          --v12;
        }
        while ( v12 );
      }
    }
    for ( k = Size >> 3; k; *((_QWORD *)a1 - 1) = v7 )
    {
      v7 = *(_QWORD *)((char *)a1 + v5);
      a1 = (char *)a1 + 8;
      --k;
    }
    for ( m = Size & 7; m; *((char *)a1 - 1) = v9 )
    {
      v9 = *((_BYTE *)a1 + v5);
      a1 = (char *)a1 + 1;
      --m;
    }
    return v3;
  }
}
