/*
 * XREFs of WPP_SF_qqqL @ 0x1C004457C
 * Callers:
 *     ndisQuerySetMiniportEx @ 0x1C0009F70 (ndisQuerySetMiniportEx.c)
 *     ?ndisIfCreateNetworkBlock@@YAJPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEAU_GUID@@PEAU_NDIS_NSI_NETWORK_RW@@PEAPEAU_NDIS_IF_NETWORK_BLOCK@@@Z @ 0x1C00134C8 (-ndisIfCreateNetworkBlock@@YAJPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEAU_GUID@@PEAU_NDIS_NSI_NETWORK_R.c)
 *     ndisIfUpdateInterfaceOnInitialize @ 0x1C001D500 (ndisIfUpdateInterfaceOnInitialize.c)
 *     ndisPostOpenSetMulticastList @ 0x1C001DAB0 (ndisPostOpenSetMulticastList.c)
 *     ndisPostSetOpenRSSParameters @ 0x1C0021378 (ndisPostSetOpenRSSParameters.c)
 *     ndisOidPMAddRemove @ 0x1C00230F8 (ndisOidPMAddRemove.c)
 *     ndisPMAddWOLPattern @ 0x1C002319C (ndisPMAddWOLPattern.c)
 *     ndisCancelOidRequestInternal @ 0x1C0045EE0 (ndisCancelOidRequestInternal.c)
 *     ndisCompleteLegacyRequest @ 0x1C004634C (ndisCompleteLegacyRequest.c)
 *     ndisOidPostTaskOffload @ 0x1C0048800 (ndisOidPostTaskOffload.c)
 *     ndisPMAddProtocolOffload @ 0x1C004C21C (ndisPMAddProtocolOffload.c)
 *     ndisQueryWakeUpPatternList @ 0x1C004CB98 (ndisQueryWakeUpPatternList.c)
 *     NdisCmRegisterAddressFamilyEx @ 0x1C0052B90 (NdisCmRegisterAddressFamilyEx.c)
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005C920 (ndisOpenAdapterLegacyProtocol.c)
 *     ?ndisNsiGetInterfaceRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00A3830 (-ndisNsiGetInterfaceRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRwInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00A4804 (-ndisNsiGetInterfaceRwInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00A4E40 (-ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ndisOidPrePacketFilter @ 0x1C00B6F50 (ndisOidPrePacketFilter.c)
 *     ?ndisNsiClientParameterChangeHandler@@YAXPEAXPEAU_NSI_KEYSTRUCT_DESC@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NSI_NOTIFICATION@@@Z @ 0x1C00BC4E0 (-ndisNsiClientParameterChangeHandler@@YAXPEAXPEAU_NSI_KEYSTRUCT_DESC@@PEAU_NSI_SINGLE_PARAM_DESC.c)
 *     ?ndisNsiGetIfRcvAddressRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_IF_RCV_ADDRESS@@PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00D0C20 (-ndisNsiGetIfRcvAddressRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_IF_RCV_ADDRESS@@PEAU_NM_.c)
 *     ndisOidPrePMProtocolOffloadList @ 0x1C00D55F0 (ndisOidPrePMProtocolOffloadList.c)
 *     ndisOidPrePMWOLPatternList @ 0x1C00D5A00 (ndisOidPrePMWOLPatternList.c)
 *     NdisIMInitializeDeviceInstanceEx @ 0x1C00D9DE0 (NdisIMInitializeDeviceInstanceEx.c)
 *     ndisIMQueueDeviceInstance @ 0x1C00DA4D4 (ndisIMQueueDeviceInstance.c)
 *     ndisCreateFilterInstanceRegistry @ 0x1C00DB110 (ndisCreateFilterInstanceRegistry.c)
 *     ndisGetOrCreateFilterInstanceKey @ 0x1C00DB224 (ndisGetOrCreateFilterInstanceKey.c)
 *     ndisSetAllFilterDefaultParameters @ 0x1C00DB9CC (ndisSetAllFilterDefaultParameters.c)
 *     ndisSetFilterDefaultParameter @ 0x1C00DBC48 (ndisSetFilterDefaultParameter.c)
 *     ?NdisPDAllocateBufferSet@@YAJPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@KGPEAKKPEAPEAUPD_BUFFER_SET_HANDLE__@@@Z @ 0x1C00EB430 (-NdisPDAllocateBufferSet@@YAJPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@KGPEAKKPEAPEAUPD_BUFFER_SE.c)
 *     ?NdisPDStartEC@@YAJPEAUPD_CLIENT_HANDLE__@@PEAPEAUPD_EC_HANDLE__@@@Z @ 0x1C00ED750 (-NdisPDStartEC@@YAJPEAUPD_CLIENT_HANDLE__@@PEAPEAUPD_EC_HANDLE__@@@Z.c)
 *     NdisOpenAdapterEx @ 0x1C00F7950 (NdisOpenAdapterEx.c)
 *     ndisMOpenAdapter @ 0x1C00F7CE4 (ndisMOpenAdapter.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004FBEC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqqL(unsigned __int16 a1, const struct _GUID *a2, ...)
{
  va_list va; // [rsp+80h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(a2, a1, va);
}
