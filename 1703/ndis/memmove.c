/*
 * XREFs of memmove @ 0x1C0028840
 * Callers:
 *     NdisGetDataBuffer @ 0x1C00066D0 (NdisGetDataBuffer.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C00075D0 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ?ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C000CFF0 (-ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?RtlCopyMdlToMdl@@YAJPEAU_MDL@@_K011PEA_K@Z @ 0x1C0011248 (-RtlCopyMdlToMdl@@YAJPEAU_MDL@@_K011PEA_K@Z.c)
 *     ndisOidPostEthMulticastOid @ 0x1C0012BA0 (ndisOidPostEthMulticastOid.c)
 *     ?ndisIfCreateCompartmentBlock@@YAJIPEAU_GUID@@PEAU_NDIS_NSI_COMPARTMENT_RW@@PEAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C0013374 (-ndisIfCreateCompartmentBlock@@YAJIPEAU_GUID@@PEAU_NDIS_NSI_COMPARTMENT_RW@@PEAPEAU_NDIS_IF_COMP.c)
 *     ndisMSetGeneralAttributes @ 0x1C0014630 (ndisMSetGeneralAttributes.c)
 *     NdisFRegisterFilterDriver @ 0x1C00160A0 (NdisFRegisterFilterDriver.c)
 *     ?ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C0016CA4 (-ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_IN.c)
 *     ?ndisPostProcessRestartParametersAfterMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C0016E58 (-ndisPostProcessRestartParametersAfterMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_IN.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001741C (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ndisWriteWmiStatusIndication @ 0x1C0019200 (ndisWriteWmiStatusIndication.c)
 *     ndisIndicateOffloadChangeInternal @ 0x1C00197D8 (ndisIndicateOffloadChangeInternal.c)
 *     ?ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@@PEAK@Z @ 0x1C001B330 (-ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@.c)
 *     ndisSetupWmiNode @ 0x1C001C8F4 (ndisSetupWmiNode.c)
 *     ndisIfUpdateInterfaceOnInitialize @ 0x1C001D500 (ndisIfUpdateInterfaceOnInitialize.c)
 *     ndisOidPostEthMulticastList @ 0x1C001D9C0 (ndisOidPostEthMulticastList.c)
 *     ndisPostOpenSetMulticastList @ 0x1C001DAB0 (ndisPostOpenSetMulticastList.c)
 *     ndisIfUpdateInterfaceOnAddDevice @ 0x1C001DD24 (ndisIfUpdateInterfaceOnAddDevice.c)
 *     ?ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1C001EF4C (-ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ndisOidPreSupportedList @ 0x1C001F840 (ndisOidPreSupportedList.c)
 *     NdisAllocateSharedMemory @ 0x1C001FF30 (NdisAllocateSharedMemory.c)
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C0020200 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     NdisFIndicateStatus @ 0x1C0020AA0 (NdisFIndicateStatus.c)
 *     NdisGetProcessorInformationEx @ 0x1C0020B30 (NdisGetProcessorInformationEx.c)
 *     NdisRegisterDeviceEx @ 0x1C0020E40 (NdisRegisterDeviceEx.c)
 *     ndisPostSetOpenRSSParameters @ 0x1C0021378 (ndisPostSetOpenRSSParameters.c)
 *     ndisSetOpenRSSParameters @ 0x1C0021618 (ndisSetOpenRSSParameters.c)
 *     ndisPostSetMiniportRSSParameters @ 0x1C00218A0 (ndisPostSetMiniportRSSParameters.c)
 *     NdisIfRegisterProvider @ 0x1C00225E0 (NdisIfRegisterProvider.c)
 *     ?RtlCopyMdlToBuffer@@YAJPEAU_MDL@@_KPEAX1PEA_K@Z @ 0x1C00260B8 (-RtlCopyMdlToBuffer@@YAJPEAU_MDL@@_KPEAX1PEA_K@Z.c)
 *     ndisMIndicateReceiveFilterCapsChange @ 0x1C0026514 (ndisMIndicateReceiveFilterCapsChange.c)
 *     ndisMIndicateNicSwitchCapsChange @ 0x1C00265B0 (ndisMIndicateNicSwitchCapsChange.c)
 *     ndisFIndicateOffloadChange @ 0x1C00267E4 (ndisFIndicateOffloadChange.c)
 *     NdisWriteErrorLogEntry @ 0x1C0026910 (NdisWriteErrorLogEntry.c)
 *     ndisMIndicateOffloadChange @ 0x1C0026A54 (ndisMIndicateOffloadChange.c)
 *     ndisAllocateReceiveQueue @ 0x1C003CC6C (ndisAllocateReceiveQueue.c)
 *     ndisOidPreRcvFilterParameters @ 0x1C003E720 (ndisOidPreRcvFilterParameters.c)
 *     ndisOidPreRcvFilterQueueParameters @ 0x1C003E920 (ndisOidPreRcvFilterQueueParameters.c)
 *     ndisSetReceiveFilter @ 0x1C003EB5C (ndisSetReceiveFilter.c)
 *     NdisMAllocatePort @ 0x1C003F280 (NdisMAllocatePort.c)
 *     ?ndisIfUpdateStringIfNeeded@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_UNICODE_STRING@@PEAU_IF_COUNTED_STRING_LH@@W4_NSI_STRUCT_TYPE@@K@Z @ 0x1C0041514 (-ndisIfUpdateStringIfNeeded@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_UNICODE_STRING@@PEAU_IF_COUNTED_STRING_.c)
 *     ?ndisNsiGetNetworkInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00427D0 (-ndisNsiGetNetworkInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C0043050 (-ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ?ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C0043260 (-ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ndisIfAliasChange @ 0x1C00446C8 (ndisIfAliasChange.c)
 *     ndisIfSetIfDescr @ 0x1C0044FFC (ndisIfSetIfDescr.c)
 *     ndisIfUpdateCurrentMacAddress @ 0x1C0045244 (ndisIfUpdateCurrentMacAddress.c)
 *     ndisMAllocateRequest @ 0x1C00471FC (ndisMAllocateRequest.c)
 *     ndisOidPostMiniportStats @ 0x1C00486E0 (ndisOidPostMiniportStats.c)
 *     ndisOidPostTcpConnectionOffloadParameters @ 0x1C0048930 (ndisOidPostTcpConnectionOffloadParameters.c)
 *     ndisOidPreQosGetParameters @ 0x1C0049070 (ndisOidPreQosGetParameters.c)
 *     ndisOidPreQueryOffloadEncapsulation @ 0x1C0049220 (ndisOidPreQueryOffloadEncapsulation.c)
 *     ndisQueryMiniportRSSParameters @ 0x1C0049A90 (ndisQueryMiniportRSSParameters.c)
 *     ndisQueryOpenRSSParameters @ 0x1C0049BE4 (ndisQueryOpenRSSParameters.c)
 *     ndisClonePMPatternList @ 0x1C004ACC4 (ndisClonePMPatternList.c)
 *     ndisQueryWakeUpPatternList @ 0x1C004CB98 (ndisQueryWakeUpPatternList.c)
 *     ?RtlCopyBufferToMdl@@YAJPEAXPEAU_MDL@@_K2PEA_K@Z @ 0x1C004D138 (-RtlCopyBufferToMdl@@YAJPEAXPEAU_MDL@@_K2PEA_K@Z.c)
 *     ndisReadUpperBindings @ 0x1C0051500 (ndisReadUpperBindings.c)
 *     NdisCopyFromPacketToPacket @ 0x1C0051B70 (NdisCopyFromPacketToPacket.c)
 *     NdisCopyFromPacketToPacketSafe @ 0x1C0051D50 (NdisCopyFromPacketToPacketSafe.c)
 *     ndisDoLoopbackNetBufferList @ 0x1C005512C (ndisDoLoopbackNetBufferList.c)
 *     ndisMCopyFromPacketToBuffer @ 0x1C00555DC (ndisMCopyFromPacketToBuffer.c)
 *     NdisEnumerateFilterModules @ 0x1C0058C90 (NdisEnumerateFilterModules.c)
 *     ndisFDoLoopbackNetBufferList @ 0x1C0059DF8 (ndisFDoLoopbackNetBufferList.c)
 *     NdisMWriteLogData @ 0x1C005B520 (NdisMWriteLogData.c)
 *     ndisMGetLogData @ 0x1C005B7F0 (ndisMGetLogData.c)
 *     NdisWriteEventLogEntry @ 0x1C005C210 (NdisWriteEventLogEntry.c)
 *     ndisGetPowerInfo @ 0x1C005D5A8 (ndisGetPowerInfo.c)
 *     ndisCheckIfTypeMismatch @ 0x1C005EFE0 (ndisCheckIfTypeMismatch.c)
 *     ndisMIndicateQosParametersChange @ 0x1C005FA8C (ndisMIndicateQosParametersChange.c)
 *     EthQueryGlobalFilterAddresses @ 0x1C0062DF0 (EthQueryGlobalFilterAddresses.c)
 *     EthQueryOpenFilterAddresses @ 0x1C0062E88 (EthQueryOpenFilterAddresses.c)
 *     ndisTopTcpConnectionOffloadStatus @ 0x1C0066FAC (ndisTopTcpConnectionOffloadStatus.c)
 *     NdisSetSessionCompartmentId @ 0x1C00675E0 (NdisSetSessionCompartmentId.c)
 *     ?ndisCopyPeriodicReceiveNbl@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@KPEAU1@@Z @ 0x1C00678C8 (-ndisCopyPeriodicReceiveNbl@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@KPEAU1@@Z.c)
 *     ndisLWM5IndicateReceive @ 0x1C0068314 (ndisLWM5IndicateReceive.c)
 *     ?ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z @ 0x1C0069BA4 (-ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_.c)
 *     ndisIovCopyVFInfo @ 0x1C006A3D8 (ndisIovCopyVFInfo.c)
 *     ?ndisExpandStackTrace@@YAEPEAPEAU_NDIS_STACK_TRACE@@PEAU_RTL_DYNAMIC_HASH_TABLE_CONTEXT@@PEA_K@Z @ 0x1C006C4A0 (-ndisExpandStackTrace@@YAEPEAPEAU_NDIS_STACK_TRACE@@PEAU_RTL_DYNAMIC_HASH_TABLE_CONTEXT@@PEA_K@Z.c)
 *     ndisNicAutoPowerInsertIntoSortedArray @ 0x1C006CC00 (ndisNicAutoPowerInsertIntoSortedArray.c)
 *     ndisSSUpdateOidCacheValue @ 0x1C006F538 (ndisSSUpdateOidCacheValue.c)
 *     ?ndisGetPdInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0074908 (-ndisGetPdInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ndisMIndicatePDConfigChange @ 0x1C00760DC (ndisMIndicatePDConfigChange.c)
 *     ndisOidPrePDQueryConfig @ 0x1C0076380 (ndisOidPrePDQueryConfig.c)
 *     NetPacketShallowCopyOne @ 0x1C00785E0 (NetPacketShallowCopyOne.c)
 *     Duplicate802_11AttachAttributesCommon @ 0x1C00789FC (Duplicate802_11AttachAttributesCommon.c)
 *     ?ndisNsiGetInterfaceRosEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00A3320 (-ndisNsiGetInterfaceRosEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRosInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00A3570 (-ndisNsiGetInterfaceRosInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00A3830 (-ndisNsiGetInterfaceRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRodEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00A4190 (-ndisNsiGetInterfaceRodEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRwInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00A4804 (-ndisNsiGetInterfaceRwInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ndisDeviceControlHandler @ 0x1C00A5594 (ndisDeviceControlHandler.c)
 *     ndisOidPreEthAddress @ 0x1C00A5BE0 (ndisOidPreEthAddress.c)
 *     ndisQueryStatisticsOids @ 0x1C00A5E9C (ndisQueryStatisticsOids.c)
 *     ndisQueryGuidData @ 0x1C00A651C (ndisQueryGuidData.c)
 *     ndisWmiExecuteMethod @ 0x1C00A6DE0 (ndisWmiExecuteMethod.c)
 *     ndisWmiQueryAllData @ 0x1C00A72F4 (ndisWmiQueryAllData.c)
 *     ndisNotifyDevicePowerStateChange @ 0x1C00A75FC (ndisNotifyDevicePowerStateChange.c)
 *     ndisSetOpenEthAddDeleteMulticast @ 0x1C00A7EEC (ndisSetOpenEthAddDeleteMulticast.c)
 *     ethAddOneOpenMulticastAddress @ 0x1C00A8224 (ethAddOneOpenMulticastAddress.c)
 *     SeSddlSecurityDescriptorFromSDDL @ 0x1C00A86DC (SeSddlSecurityDescriptorFromSDDL.c)
 *     ndisCreateSecurityDescriptor @ 0x1C00A9F88 (ndisCreateSecurityDescriptor.c)
 *     NdisMSetMiniportAttributes @ 0x1C00AA760 (NdisMSetMiniportAttributes.c)
 *     ndisMSetRssCapabilities @ 0x1C00AAB48 (ndisMSetRssCapabilities.c)
 *     ndisMSetOffloadAttributes @ 0x1C00AAC50 (ndisMSetOffloadAttributes.c)
 *     ndisPnPStartDevice @ 0x1C00AB254 (ndisPnPStartDevice.c)
 *     ndisInitializeMiniportRestartAttributes @ 0x1C00AB5F8 (ndisInitializeMiniportRestartAttributes.c)
 *     ??$CopyPartialStringToBuffer@$0EA@@@YAXAEAY0EA@GPEBU_UNICODE_STRING@@@Z @ 0x1C00AC47C (--$CopyPartialStringToBuffer@$0EA@@@YAXAEAY0EA@GPEBU_UNICODE_STRING@@@Z.c)
 *     NdisReadConfiguration @ 0x1C00AE8B0 (NdisReadConfiguration.c)
 *     Ndis::BindRegistry::LoadNetworkInterfaceString @ 0x1C00AF1CC (Ndis--BindRegistry--LoadNetworkInterfaceString.c)
 *     NdisOpenConfigurationKeyByName @ 0x1C00AF9D0 (NdisOpenConfigurationKeyByName.c)
 *     NdisOpenProtocolConfiguration @ 0x1C00B06E0 (NdisOpenProtocolConfiguration.c)
 *     KRegKey::QueryValueBlob__lambda_0a0f4a6e234c0d615b3ff6ea32737ef1___ @ 0x1C00B0CB4 (KRegKey--QueryValueBlob__lambda_0a0f4a6e234c0d615b3ff6ea32737ef1___.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z @ 0x1C00B1474 (-Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z.c)
 *     ?reserve@?$KArray@PEAX@Rtl@@QEAA_N_K@Z @ 0x1C00B5A1C (-reserve@-$KArray@PEAX@Rtl@@QEAA_N_K@Z.c)
 *     ndisEnumerateFilterInstances @ 0x1C00B5CAC (ndisEnumerateFilterInstances.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00B5D68 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?reserve@?$KArray@E@Rtl@@QEAA_N_K@Z @ 0x1C00B655C (-reserve@-$KArray@E@Rtl@@QEAA_N_K@Z.c)
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C00B673C (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEAT_NET_L.c)
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C00B7034 (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 *     ndisNotifyWmiBindUnbind @ 0x1C00B739C (ndisNotifyWmiBindUnbind.c)
 *     ndisWmiRegister @ 0x1C00B9248 (ndisWmiRegister.c)
 *     ndisQuerySupportedGuidToOidList @ 0x1C00B93F0 (ndisQuerySupportedGuidToOidList.c)
 *     ndisSetMiniportEthMulticastList @ 0x1C00B9FB8 (ndisSetMiniportEthMulticastList.c)
 *     ndisSetOpenEthMulticastList @ 0x1C00BA148 (ndisSetOpenEthMulticastList.c)
 *     ndisSaveParameters @ 0x1C00BA5B0 (ndisSaveParameters.c)
 *     ndisCreateWoLPatternEntry @ 0x1C00BAAA0 (ndisCreateWoLPatternEntry.c)
 *     ndisMNotifyMachineName @ 0x1C00BD424 (ndisMNotifyMachineName.c)
 *     ndisOidPreRSSCaps @ 0x1C00BD870 (ndisOidPreRSSCaps.c)
 *     ndisReadParameter @ 0x1C00BDC40 (ndisReadParameter.c)
 *     ndisEtwRegisterGuids @ 0x1C00BE134 (ndisEtwRegisterGuids.c)
 *     ?RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z @ 0x1C00BF650 (-RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z.c)
 *     ndisMSetReceiveFilterAttributes @ 0x1C00BFD4C (ndisMSetReceiveFilterAttributes.c)
 *     ndisMSetNicSwitchAttributes @ 0x1C00BFF90 (ndisMSetNicSwitchAttributes.c)
 *     ndisMSetSriovAttributes @ 0x1C00C018C (ndisMSetSriovAttributes.c)
 *     ndisOidPreReceiveFilterCaps @ 0x1C00CFE50 (ndisOidPreReceiveFilterCaps.c)
 *     ?ndisNsiGetIfRcvAddressRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_IF_RCV_ADDRESS@@PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00D0C20 (-ndisNsiGetIfRcvAddressRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_IF_RCV_ADDRESS@@PEAU_NM_.c)
 *     ndisIfCreateInterfaceForiScsi @ 0x1C00D0F3C (ndisIfCreateInterfaceForiScsi.c)
 *     ndisOidPreFriendlyName @ 0x1C00D19C0 (ndisOidPreFriendlyName.c)
 *     ndisOidPreMacAddress @ 0x1C00D1CC0 (ndisOidPreMacAddress.c)
 *     ndisOidPreQueryTcpConnectionParameters @ 0x1C00D244C (ndisOidPreQueryTcpConnectionParameters.c)
 *     ndisSetRestoreMulticastList @ 0x1C00D315C (ndisSetRestoreMulticastList.c)
 *     ndisCreatePMPacketPattern @ 0x1C00D4988 (ndisCreatePMPacketPattern.c)
 *     ndisCreatePMProtocolOffloadEntry @ 0x1C00D4A60 (ndisCreatePMProtocolOffloadEntry.c)
 *     ndisCreateWakeUpPatternEntry @ 0x1C00D4AFC (ndisCreateWakeUpPatternEntry.c)
 *     ndisQueryWolPatternList @ 0x1C00D67B0 (ndisQueryWolPatternList.c)
 *     ndisXlateAddPacketPatternToWolPatternOid @ 0x1C00D7F88 (ndisXlateAddPacketPatternToWolPatternOid.c)
 *     ndisXlateAddWolPatternToPacketPatternOid @ 0x1C00D81C8 (ndisXlateAddWolPatternToPacketPatternOid.c)
 *     ndisXlateRemoveWolPatternToPacketPatternOid @ 0x1C00D84B0 (ndisXlateRemoveWolPatternToPacketPatternOid.c)
 *     ndisXlateWakeUpPatternListToWolPatternList @ 0x1C00D8740 (ndisXlateWakeUpPatternListToWolPatternList.c)
 *     ndisXlateWolPatternListToWakeUpPatternList @ 0x1C00D89B0 (ndisXlateWolPatternListToWakeUpPatternList.c)
 *     ?ndisMoveUnicodeStringToNdisVarDataDesc@@YAXPEAU_UNICODE_STRING@@PEAEPEAPEAEPEAU_NDIS_VAR_DATA_DESC@@@Z @ 0x1C00D8CF4 (-ndisMoveUnicodeStringToNdisVarDataDesc@@YAXPEAU_UNICODE_STRING@@PEAEPEAPEAEPEAU_NDIS_VAR_DATA_D.c)
 *     WppTraceCallback @ 0x1C00D9060 (WppTraceCallback.c)
 *     NdisWriteConfiguration @ 0x1C00D9970 (NdisWriteConfiguration.c)
 *     ndisGetOrCreateFilterInstanceKey @ 0x1C00DB224 (ndisGetOrCreateFilterInstanceKey.c)
 *     ndisGetAdapterRssInfo @ 0x1C00DCB30 (ndisGetAdapterRssInfo.c)
 *     ndisGetHardwareInfo @ 0x1C00DCDAC (ndisGetHardwareInfo.c)
 *     ndisMSetQosAttributes @ 0x1C00DE8B4 (ndisMSetQosAttributes.c)
 *     NdisInitializeWrapper @ 0x1C00DEAF0 (NdisInitializeWrapper.c)
 *     NdisMQueryAdapterResources @ 0x1C00DFA50 (NdisMQueryAdapterResources.c)
 *     ethDeleteOneOpenMulticastAddress @ 0x1C00E0C78 (ethDeleteOneOpenMulticastAddress.c)
 *     ndisWmiXlateEnumNdisRecvQueuesToWmiRecvQueues @ 0x1C00E2A28 (ndisWmiXlateEnumNdisRecvQueuesToWmiRecvQueues.c)
 *     ?ndisPcwAddCounter@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@@Z @ 0x1C00E49D0 (-ndisPcwAddCounter@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@@Z.c)
 *     ndisIovCreateVPort @ 0x1C00E5D54 (ndisIovCreateVPort.c)
 *     ndisIovReadSwitchConfiguration @ 0x1C00E63DC (ndisIovReadSwitchConfiguration.c)
 *     ndisOidPreIovNicSwitchParameters @ 0x1C00E71B0 (ndisOidPreIovNicSwitchParameters.c)
 *     ndisSriovInterfaceReadVFConfig @ 0x1C00E8AE0 (ndisSriovInterfaceReadVFConfig.c)
 *     ndisSriovInterfaceReadVfConfigBlock @ 0x1C00E8C80 (ndisSriovInterfaceReadVfConfigBlock.c)
 *     ndisSriovInterfaceWriteVFConfig @ 0x1C00E9070 (ndisSriovInterfaceWriteVFConfig.c)
 *     ndisSriovInterfaceWriteVfConfigBlock @ 0x1C00E9200 (ndisSriovInterfaceWriteVfConfigBlock.c)
 *     ndisSSGetCachedOidValue @ 0x1C00E95F0 (ndisSSGetCachedOidValue.c)
 *     ?NdisPDPISetReceiveFilter@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_FILTER_PARAMETERS@@PEAPEAUNDIS_PD_FILTER_HANDLE__@@@Z @ 0x1C00ED300 (-NdisPDPISetReceiveFilter@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_FILTER_PARAMETERS@@PEA.c)
 *     NdisMRegisterWdiMiniportDriver @ 0x1C00F2120 (NdisMRegisterWdiMiniportDriver.c)
 *     NetPacketExtensionAllocate @ 0x1C00F2B80 (NetPacketExtensionAllocate.c)
 *     SepSddlAddAceToAcl @ 0x1C00F3084 (SepSddlAddAceToAcl.c)
 *     CmRegUtilUcValueSetUcString @ 0x1C00F40C0 (CmRegUtilUcValueSetUcString.c)
 *     ndisEnumerateInterfaces @ 0x1C00F6F00 (ndisEnumerateInterfaces.c)
 *     ndisHandlePnPRequest @ 0x1C00F7108 (ndisHandlePnPRequest.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00F821C (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ndisMInitializeAdapter @ 0x1C00F904C (ndisMInitializeAdapter.c)
 *     ndisPnPRemoveDevice @ 0x1C00FA8D0 (ndisPnPRemoveDevice.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00FAB6C (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ndisEnumerateInterfaces32 @ 0x1C0101F14 (ndisEnumerateInterfaces32.c)
 *     NdisMRegisterDevice @ 0x1C0103DE0 (NdisMRegisterDevice.c)
 *     ndisRegisterMiniportDriver @ 0x1C01046B8 (ndisRegisterMiniportDriver.c)
 *     ndisIfInitialize @ 0x1C011412C (ndisIfInitialize.c)
 *     ndisAddMediaTypeToArray @ 0x1C0114CC0 (ndisAddMediaTypeToArray.c)
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
        goto xmov40;
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
xmov40:
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
        goto xcpy40;
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
xcpy40:
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
