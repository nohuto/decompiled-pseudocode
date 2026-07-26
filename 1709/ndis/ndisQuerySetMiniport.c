/*
 * XREFs of ndisQuerySetMiniport @ 0x1C0009A28
 * Callers:
 *     ndisQueueOidRequest @ 0x1C000B550 (ndisQueueOidRequest.c)
 *     ndisOidTranslateBetweenOids @ 0x1C000D5AC (ndisOidTranslateBetweenOids.c)
 *     ndisMDoProtocolRequest @ 0x1C00ABBF8 (ndisMDoProtocolRequest.c)
 *     ndisIovCreateDefaultNicSwitch @ 0x1C00AD4D8 (ndisIovCreateDefaultNicSwitch.c)
 *     ndisMDoMiniportOp @ 0x1C00AD748 (ndisMDoMiniportOp.c)
 *     ndisQueryCustomGuids @ 0x1C00AE7A0 (ndisQueryCustomGuids.c)
 *     ndisQueryGuidData @ 0x1C00B6788 (ndisQueryGuidData.c)
 *     ndisQueryGuidDataSize @ 0x1C00B6A0C (ndisQueryGuidDataSize.c)
 *     ndisDeviceControlHandler @ 0x1C00B74EC (ndisDeviceControlHandler.c)
 *     ndisWmiExecuteMethod @ 0x1C00B7E2C (ndisWmiExecuteMethod.c)
 *     ?ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00B81A8 (-ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ndisQuerySetMiniportDeviceState @ 0x1C00C6640 (ndisQuerySetMiniportDeviceState.c)
 *     ndisQueryDeviceOid @ 0x1C00C91E4 (ndisQueryDeviceOid.c)
 *     ?ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C00C9984 (-ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     ?ndisIfQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00DAE84 (-ndisIfQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_FILTER_BL.c)
 *     ndisQueuedUpdatePMCapabilities @ 0x1C00E0CF0 (ndisQueuedUpdatePMCapabilities.c)
 *     ndisRejectUnsupportedPMOffloads @ 0x1C00E0E74 (ndisRejectUnsupportedPMOffloads.c)
 *     ndisRejectUnsupportedWoLPatterns @ 0x1C00E1068 (ndisRejectUnsupportedWoLPatterns.c)
 *     ndisMethodDeviceOid @ 0x1C00E7330 (ndisMethodDeviceOid.c)
 *     ndisMediaDisconnectWorker @ 0x1C00EBCC0 (ndisMediaDisconnectWorker.c)
 *     ndisQueryMediaStatus @ 0x1C00EBF20 (ndisQueryMediaStatus.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00EC100 (ndisWmiChangeSingleInstance.c)
 *     ndisDisableRsc @ 0x1C00ED360 (ndisDisableRsc.c)
 *     ndisGetMiniportOffloadCapability @ 0x1C00ED4B4 (ndisGetMiniportOffloadCapability.c)
 *     ndisNDKHandleWmiChangeRequest @ 0x1C00EDF60 (ndisNDKHandleWmiChangeRequest.c)
 *     ndisNdkPcwCollectMiniportStats @ 0x1C00EE2B8 (ndisNdkPcwCollectMiniportStats.c)
 *     ndisIovInvalidateBlockCompletion @ 0x1C00EF850 (ndisIovInvalidateBlockCompletion.c)
 *     ndisSriovGetResourceForBar @ 0x1C00F1B60 (ndisSriovGetResourceForBar.c)
 *     ndisSriovInterfaceGetVendorAndDeviceIds @ 0x1C00F1D80 (ndisSriovInterfaceGetVendorAndDeviceIds.c)
 *     ndisSriovInterfaceQueryProbedBars @ 0x1C00F1EC0 (ndisSriovInterfaceQueryProbedBars.c)
 *     ndisSriovInterfaceReadVFConfig @ 0x1C00F2040 (ndisSriovInterfaceReadVFConfig.c)
 *     ndisSriovInterfaceReadVfConfigBlock @ 0x1C00F21E0 (ndisSriovInterfaceReadVfConfigBlock.c)
 *     ndisSriovInterfaceResetVF @ 0x1C00F2380 (ndisSriovInterfaceResetVF.c)
 *     ndisSriovInterfaceSetVfPowerState @ 0x1C00F24A0 (ndisSriovInterfaceSetVfPowerState.c)
 *     ndisSriovInterfaceWriteVFConfig @ 0x1C00F25D0 (ndisSriovInterfaceWriteVFConfig.c)
 *     ndisSriovInterfaceWriteVfConfigBlock @ 0x1C00F2760 (ndisSriovInterfaceWriteVfConfigBlock.c)
 *     ?ndisMSendOidPmParametersForAoAc@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00F33DC (-ndisMSendOidPmParametersForAoAc@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisMPowerPolicy @ 0x1C0105D94 (ndisMPowerPolicy.c)
 * Callees:
 *     ndisQuerySetMiniportEx @ 0x1C0009A50 (ndisQuerySetMiniportEx.c)
 */

__int64 __fastcall ndisQuerySetMiniport(void *a1, void *a2, struct _NDIS_OID_REQUEST *a3, __int64 a4, __int64 a5)
{
  return ndisQuerySetMiniportEx(a1, a2, a3, a5, 0LL);
}
