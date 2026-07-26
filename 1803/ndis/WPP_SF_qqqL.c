/*
 * XREFs of WPP_SF_qqqL @ 0x1C0043FB4
 * Callers:
 *     ndisQuerySetMiniportEx @ 0x1C000AE70 (ndisQuerySetMiniportEx.c)
 *     ndisPMAddProtocolOffload @ 0x1C0014590 (ndisPMAddProtocolOffload.c)
 *     ndisPostSetOpenRSSParameters @ 0x1C0015348 (ndisPostSetOpenRSSParameters.c)
 *     ndisIfUpdateInterfaceOnInitialize @ 0x1C001D6D8 (ndisIfUpdateInterfaceOnInitialize.c)
 *     ndisPostOpenSetMulticastList @ 0x1C001DB8C (ndisPostOpenSetMulticastList.c)
 *     ?ndisIfCreateNetworkBlock@@YAJPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEAU_GUID@@PEAU_NDIS_NSI_NETWORK_RW@@PEAPEAU_NDIS_IF_NETWORK_BLOCK@@@Z @ 0x1C00235EC (-ndisIfCreateNetworkBlock@@YAJPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEAU_GUID@@PEAU_NDIS_NSI_NETWORK_R.c)
 *     ndisOidPMAddRemove @ 0x1C00248FC (ndisOidPMAddRemove.c)
 *     ndisPMAddWOLPattern @ 0x1C00249E0 (ndisPMAddWOLPattern.c)
 *     ndisCancelOidRequestInternal @ 0x1C00441CC (ndisCancelOidRequestInternal.c)
 *     ndisCompleteLegacyRequest @ 0x1C0044638 (ndisCompleteLegacyRequest.c)
 *     ndisOidPostTaskOffload @ 0x1C0046E20 (ndisOidPostTaskOffload.c)
 *     ndisQueryWakeUpPatternList @ 0x1C004B3F8 (ndisQueryWakeUpPatternList.c)
 *     NdisCmRegisterAddressFamilyEx @ 0x1C0052330 (NdisCmRegisterAddressFamilyEx.c)
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005CC08 (ndisOpenAdapterLegacyProtocol.c)
 *     ?ndisPostSetOpenRSSv2Parameters@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C007BB38 (-ndisPostSetOpenRSSv2Parameters@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ?ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00AD91C (-ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisNsiGetInterfaceRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00AE350 (-ndisNsiGetInterfaceRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRwInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00AEBB0 (-ndisNsiGetInterfaceRwInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ndisOidPrePacketFilter @ 0x1C00C0B40 (ndisOidPrePacketFilter.c)
 *     ?ndisNsiClientParameterChangeHandler@@YAXPEAXPEAU_NSI_KEYSTRUCT_DESC@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NSI_NOTIFICATION@@@Z @ 0x1C00C84C0 (-ndisNsiClientParameterChangeHandler@@YAXPEAXPEAU_NSI_KEYSTRUCT_DESC@@PEAU_NSI_SINGLE_PARAM_DESC.c)
 *     ?ndisNsiGetIfRcvAddressRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_IF_RCV_ADDRESS@@PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00DD060 (-ndisNsiGetIfRcvAddressRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_IF_RCV_ADDRESS@@PEAU_NM_.c)
 *     ndisOidPrePMProtocolOffloadList @ 0x1C00E1460 (ndisOidPrePMProtocolOffloadList.c)
 *     ndisOidPrePMWOLPatternList @ 0x1C00E1870 (ndisOidPrePMWOLPatternList.c)
 *     NdisIMInitializeDeviceInstanceEx @ 0x1C00E5660 (NdisIMInitializeDeviceInstanceEx.c)
 *     ndisIMQueueDeviceInstance @ 0x1C00E5D58 (ndisIMQueueDeviceInstance.c)
 *     ndisCreateFilterInstanceRegistry @ 0x1C00E6970 (ndisCreateFilterInstanceRegistry.c)
 *     ndisGetOrCreateFilterInstanceKey @ 0x1C00E6A84 (ndisGetOrCreateFilterInstanceKey.c)
 *     ndisSetAllFilterDefaultParameters @ 0x1C00E7230 (ndisSetAllFilterDefaultParameters.c)
 *     ndisSetFilterDefaultParameter @ 0x1C00E74AC (ndisSetFilterDefaultParameter.c)
 *     ?NdisPDAllocateBufferSet@@YAJPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@KGPEAKKPEAPEAUPD_BUFFER_SET_HANDLE__@@@Z @ 0x1C00F75E0 (-NdisPDAllocateBufferSet@@YAJPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@KGPEAKKPEAPEAUPD_BUFFER_SE.c)
 *     ?NdisPDStartEC@@YAJPEAUPD_CLIENT_HANDLE__@@PEAPEAUPD_EC_HANDLE__@@@Z @ 0x1C00F9920 (-NdisPDStartEC@@YAJPEAUPD_CLIENT_HANDLE__@@PEAPEAUPD_EC_HANDLE__@@@Z.c)
 *     NdisOpenAdapterEx @ 0x1C0104520 (NdisOpenAdapterEx.c)
 *     ndisMOpenAdapter @ 0x1C01048C0 (ndisMOpenAdapter.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F104 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqqL(unsigned __int16 a1, const struct _GUID *a2, ...)
{
  va_list va; // [rsp+80h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(a2, a1, va);
}
