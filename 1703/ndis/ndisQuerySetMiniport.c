/*
 * XREFs of ndisQuerySetMiniport @ 0x1C0009F4C
 * Callers:
 *     ndisQueueOidRequest @ 0x1C000A240 (ndisQueueOidRequest.c)
 *     ndisOidTranslateBetweenOids @ 0x1C000AFAC (ndisOidTranslateBetweenOids.c)
 *     ?ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00A4E40 (-ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ndisDeviceControlHandler @ 0x1C00A5594 (ndisDeviceControlHandler.c)
 *     ndisQueryDeviceOid @ 0x1C00A6220 (ndisQueryDeviceOid.c)
 *     ndisQueryGuidData @ 0x1C00A651C (ndisQueryGuidData.c)
 *     ndisQueryGuidDataSize @ 0x1C00A6788 (ndisQueryGuidDataSize.c)
 *     ndisWmiExecuteMethod @ 0x1C00A6DE0 (ndisWmiExecuteMethod.c)
 *     ndisQuerySetMiniportDeviceState @ 0x1C00A77E0 (ndisQuerySetMiniportDeviceState.c)
 *     ndisQueryCustomGuids @ 0x1C00B98D4 (ndisQueryCustomGuids.c)
 *     ndisIovCreateDefaultNicSwitch @ 0x1C00BCD98 (ndisIovCreateDefaultNicSwitch.c)
 *     ndisMDoMiniportOp @ 0x1C00BD580 (ndisMDoMiniportOp.c)
 *     ?ndisIfQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00D04F0 (-ndisIfQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_FILTER_BL.c)
 *     ndisQueuedUpdatePMCapabilities @ 0x1C00D6890 (ndisQueuedUpdatePMCapabilities.c)
 *     ndisRejectUnsupportedPMOffloads @ 0x1C00D6A14 (ndisRejectUnsupportedPMOffloads.c)
 *     ndisRejectUnsupportedWoLPatterns @ 0x1C00D6C10 (ndisRejectUnsupportedWoLPatterns.c)
 *     ndisMDoProtocolRequest @ 0x1C00DC648 (ndisMDoProtocolRequest.c)
 *     ndisMethodDeviceOid @ 0x1C00DD408 (ndisMethodDeviceOid.c)
 *     ndisMediaDisconnectWorker @ 0x1C00E1E10 (ndisMediaDisconnectWorker.c)
 *     ndisQueryMediaStatus @ 0x1C00E2060 (ndisQueryMediaStatus.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00E2244 (ndisWmiChangeSingleInstance.c)
 *     ndisDisableRsc @ 0x1C00E3340 (ndisDisableRsc.c)
 *     ndisGetMiniportOffloadCapability @ 0x1C00E3494 (ndisGetMiniportOffloadCapability.c)
 *     ndisNDKHandleWmiChangeRequest @ 0x1C00E3F44 (ndisNDKHandleWmiChangeRequest.c)
 *     ndisNdkPcwCollectMiniportStats @ 0x1C00E429C (ndisNdkPcwCollectMiniportStats.c)
 *     ?ndisPcwQueryPcfMatchCount@@YA_KPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00E52C4 (-ndisPcwQueryPcfMatchCount@@YA_KPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisIovInvalidateBlockCompletion @ 0x1C00E6220 (ndisIovInvalidateBlockCompletion.c)
 *     ndisSriovGetResourceForBar @ 0x1C00E85F0 (ndisSriovGetResourceForBar.c)
 *     ndisSriovInterfaceGetVendorAndDeviceIds @ 0x1C00E8820 (ndisSriovInterfaceGetVendorAndDeviceIds.c)
 *     ndisSriovInterfaceQueryProbedBars @ 0x1C00E8960 (ndisSriovInterfaceQueryProbedBars.c)
 *     ndisSriovInterfaceReadVFConfig @ 0x1C00E8AE0 (ndisSriovInterfaceReadVFConfig.c)
 *     ndisSriovInterfaceReadVfConfigBlock @ 0x1C00E8C80 (ndisSriovInterfaceReadVfConfigBlock.c)
 *     ndisSriovInterfaceResetVF @ 0x1C00E8E20 (ndisSriovInterfaceResetVF.c)
 *     ndisSriovInterfaceSetVfPowerState @ 0x1C00E8F40 (ndisSriovInterfaceSetVfPowerState.c)
 *     ndisSriovInterfaceWriteVFConfig @ 0x1C00E9070 (ndisSriovInterfaceWriteVFConfig.c)
 *     ndisSriovInterfaceWriteVfConfigBlock @ 0x1C00E9200 (ndisSriovInterfaceWriteVfConfigBlock.c)
 *     ?ndisMSendOidPmParametersForAoAc@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00E9E30 (-ndisMSendOidPmParametersForAoAc@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisMPowerPolicy @ 0x1C00F5B54 (ndisMPowerPolicy.c)
 * Callees:
 *     ndisQuerySetMiniportEx @ 0x1C0009F70 (ndisQuerySetMiniportEx.c)
 */

__int64 __fastcall ndisQuerySetMiniport(void *a1, void *a2, struct _NDIS_OID_REQUEST *a3, __int64 a4, __int64 a5)
{
  return ndisQuerySetMiniportEx(a1, a2, a3, a5, 0LL);
}
