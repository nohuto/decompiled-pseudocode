/*
 * XREFs of ndisDereferencePackage @ 0x1C00ADAEC
 * Callers:
 *     ndisCreateHandler @ 0x1C00098C0 (ndisCreateHandler.c)
 *     ndisCloseIrpHandler @ 0x1C0009DD0 (ndisCloseIrpHandler.c)
 *     ndisQuerySetMiniportEx @ 0x1C000AE70 (ndisQuerySetMiniportEx.c)
 *     NdisDeregisterDeviceEx @ 0x1C0014730 (NdisDeregisterDeviceEx.c)
 *     ndisIsMiniportStarted @ 0x1C001AB20 (ndisIsMiniportStarted.c)
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C002209C (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     NdisRegisterDeviceEx @ 0x1C0022B10 (NdisRegisterDeviceEx.c)
 *     ndisQueueFilterOnDriver @ 0x1C0023E70 (ndisQueueFilterOnDriver.c)
 *     NdisClOpenAddressFamilyEx @ 0x1C0051C90 (NdisClOpenAddressFamilyEx.c)
 *     NdisCmRegisterAddressFamilyEx @ 0x1C0052330 (NdisCmRegisterAddressFamilyEx.c)
 *     NdisMCmRegisterAddressFamilyEx @ 0x1C0052650 (NdisMCmRegisterAddressFamilyEx.c)
 *     NdisEnumerateFilterModules @ 0x1C0058770 (NdisEnumerateFilterModules.c)
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005CC08 (ndisOpenAdapterLegacyProtocol.c)
 *     ndisCleanupUserOpenContext @ 0x1C005D7EC (ndisCleanupUserOpenContext.c)
 *     NdisMDeregisterDevice @ 0x1C0062100 (NdisMDeregisterDevice.c)
 *     ndisDeviceInternalDispatch @ 0x1C00658FC (ndisDeviceInternalDispatch.c)
 *     ndisDevicePowerOn @ 0x1C0100560 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C0100A70 (ndisDevicePowerDown.c)
 *     ndisQueryPower @ 0x1C0100D1C (ndisQueryPower.c)
 *     ndisPnPNotifyAllTransports @ 0x1C0101810 (ndisPnPNotifyAllTransports.c)
 *     ndisPnPRemoveDevice @ 0x1C0101968 (ndisPnPRemoveDevice.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0101C04 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0101E78 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ndisMCommonHaltMiniport @ 0x1C0102134 (ndisMCommonHaltMiniport.c)
 *     ndisDeQueueMiniportOnDriver @ 0x1C0102828 (ndisDeQueueMiniportOnDriver.c)
 *     ndisMKillOpen @ 0x1C0102BA4 (ndisMKillOpen.c)
 *     NdisMDeregisterInterruptEx @ 0x1C0103240 (NdisMDeregisterInterruptEx.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C01036D4 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     NdisOpenAdapterEx @ 0x1C0104520 (NdisOpenAdapterEx.c)
 *     ndisAddDevice @ 0x1C0105194 (ndisAddDevice.c)
 *     ndisNotifyMiniports @ 0x1C010693C (ndisNotifyMiniports.c)
 *     ndisQueueMiniportOnDriver @ 0x1C01069CC (ndisQueueMiniportOnDriver.c)
 *     NdisMRegisterInterruptEx @ 0x1C0106A70 (NdisMRegisterInterruptEx.c)
 *     ndisFindRootDevice @ 0x1C010D030 (ndisFindRootDevice.c)
 *     ndisMUnload @ 0x1C010DA10 (ndisMUnload.c)
 *     NdisMCmRegisterAddressFamily @ 0x1C010DC00 (NdisMCmRegisterAddressFamily.c)
 *     ndisNotifyAfRegistration @ 0x1C010E070 (ndisNotifyAfRegistration.c)
 *     NdisDeregisterProtocol @ 0x1C010E150 (NdisDeregisterProtocol.c)
 *     NdisMAllocateMapRegisters @ 0x1C010E570 (NdisMAllocateMapRegisters.c)
 *     NdisMDeregisterDmaChannel @ 0x1C010EAF0 (NdisMDeregisterDmaChannel.c)
 *     NdisMFreeMapRegisters @ 0x1C010EBB0 (NdisMFreeMapRegisters.c)
 *     NdisMRegisterDevice @ 0x1C010ED00 (NdisMRegisterDevice.c)
 *     NdisMRegisterDmaChannel @ 0x1C010EFB0 (NdisMRegisterDmaChannel.c)
 *     ndisFindMiniportOnGlobalList @ 0x1C010F2A8 (ndisFindMiniportOnGlobalList.c)
 *     ndisMFinishQueuedPendingOpen @ 0x1C010F3E0 (ndisMFinishQueuedPendingOpen.c)
 *     ndisRegisterMiniportDriver @ 0x1C010F5AC (ndisRegisterMiniportDriver.c)
 *     ndisPmHaltMiniport @ 0x1C010FD6C (ndisPmHaltMiniport.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisDereferencePackage(__int64 a1)
{
  MmUnlockPagableImageSection(*(PVOID *)(a1 + 16));
  _InterlockedDecrement((volatile signed __int32 *)a1);
}
