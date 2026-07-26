/*
 * XREFs of ndisQuerySetMiniport @ 0x1C000AE40
 * Callers:
 *     ndisQueueOidRequest @ 0x1C000C3B0 (ndisQueueOidRequest.c)
 *     ndisOidTranslateBetweenOids @ 0x1C000E404 (ndisOidTranslateBetweenOids.c)
 *     ndisQueryDeviceOid @ 0x1C00AC7DC (ndisQueryDeviceOid.c)
 *     ndisWmiExecuteMethod @ 0x1C00AC874 (ndisWmiExecuteMethod.c)
 *     ndisQueryGuidData @ 0x1C00ACC5C (ndisQueryGuidData.c)
 *     ndisQueryGuidDataSize @ 0x1C00ACEE0 (ndisQueryGuidDataSize.c)
 *     ?ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00AD91C (-ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ndisDeviceControlHandler @ 0x1C00AF99C (ndisDeviceControlHandler.c)
 *     ndisQuerySetMiniportDeviceState @ 0x1C00B0810 (ndisQuerySetMiniportDeviceState.c)
 *     ?ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C00B1284 (-ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     ndisIovCreateDefaultNicSwitch @ 0x1C00B6CD8 (ndisIovCreateDefaultNicSwitch.c)
 *     ndisQueryCustomGuids @ 0x1C00C3F80 (ndisQueryCustomGuids.c)
 *     ndisMDoMiniportOp @ 0x1C00C9AC8 (ndisMDoMiniportOp.c)
 *     ?ndisIfQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00DCA24 (-ndisIfQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_FILTER_BL.c)
 *     ndisQueuedUpdatePMCapabilities @ 0x1C00E24D0 (ndisQueuedUpdatePMCapabilities.c)
 *     ndisRejectUnsupportedPMOffloads @ 0x1C00E264C (ndisRejectUnsupportedPMOffloads.c)
 *     ndisRejectUnsupportedWoLPatterns @ 0x1C00E2840 (ndisRejectUnsupportedWoLPatterns.c)
 *     ndisMDoProtocolRequest @ 0x1C00E7EDC (ndisMDoProtocolRequest.c)
 *     ndisMethodDeviceOid @ 0x1C00E8D6C (ndisMethodDeviceOid.c)
 *     ndisMediaDisconnectWorker @ 0x1C00EE880 (ndisMediaDisconnectWorker.c)
 *     ndisQueryMediaStatus @ 0x1C00EEAE0 (ndisQueryMediaStatus.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00EEE20 (ndisWmiChangeSingleInstance.c)
 *     ndisDisableRsc @ 0x1C00F0090 (ndisDisableRsc.c)
 *     ndisGetMiniportOffloadCapability @ 0x1C00F01E4 (ndisGetMiniportOffloadCapability.c)
 *     ndisNDKHandleWmiChangeRequest @ 0x1C00F0BFC (ndisNDKHandleWmiChangeRequest.c)
 *     ndisNdkPcwCollectMiniportStats @ 0x1C00F0F54 (ndisNdkPcwCollectMiniportStats.c)
 *     ndisIovInvalidateBlockCompletion @ 0x1C00F2470 (ndisIovInvalidateBlockCompletion.c)
 *     ndisSriovGetResourceForBar @ 0x1C00F46B0 (ndisSriovGetResourceForBar.c)
 *     ndisSriovInterfaceGetVendorAndDeviceIds @ 0x1C00F48D0 (ndisSriovInterfaceGetVendorAndDeviceIds.c)
 *     ndisSriovInterfaceQueryProbedBars @ 0x1C00F4A10 (ndisSriovInterfaceQueryProbedBars.c)
 *     ndisSriovInterfaceReadVFConfig @ 0x1C00F4B90 (ndisSriovInterfaceReadVFConfig.c)
 *     ndisSriovInterfaceReadVfConfigBlock @ 0x1C00F4D30 (ndisSriovInterfaceReadVfConfigBlock.c)
 *     ndisSriovInterfaceResetVF @ 0x1C00F4ED0 (ndisSriovInterfaceResetVF.c)
 *     ndisSriovInterfaceSetVfPowerState @ 0x1C00F4FF0 (ndisSriovInterfaceSetVfPowerState.c)
 *     ndisSriovInterfaceWriteVFConfig @ 0x1C00F5120 (ndisSriovInterfaceWriteVFConfig.c)
 *     ndisSriovInterfaceWriteVfConfigBlock @ 0x1C00F52B0 (ndisSriovInterfaceWriteVfConfigBlock.c)
 *     ?ndisMSendOidPmParametersForAoAc@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00F5F94 (-ndisMSendOidPmParametersForAoAc@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisMPowerPolicy @ 0x1C0100F58 (ndisMPowerPolicy.c)
 * Callees:
 *     ndisQuerySetMiniportEx @ 0x1C000AE70 (ndisQuerySetMiniportEx.c)
 */

__int64 __fastcall ndisQuerySetMiniport(void *a1, void *a2, struct _NDIS_OID_REQUEST *a3, __int64 a4, __int64 a5)
{
  return ndisQuerySetMiniportEx(a1, a2, a3, a5, 0LL);
}
