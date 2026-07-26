/*
 * XREFs of ndisDereferencePackage @ 0x1C00A5008
 * Callers:
 *     ndisQuerySetMiniportEx @ 0x1C0009F70 (ndisQuerySetMiniportEx.c)
 *     ndisCloseHandler @ 0x1C000C6A0 (ndisCloseHandler.c)
 *     ndisCreateHandler @ 0x1C000C8D8 (ndisCreateHandler.c)
 *     ndisIsMiniportStarted @ 0x1C0019CC0 (ndisIsMiniportStarted.c)
 *     ndisQueueFilterOnDriver @ 0x1C001CFB4 (ndisQueueFilterOnDriver.c)
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C0020200 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     NdisRegisterDeviceEx @ 0x1C0020E40 (NdisRegisterDeviceEx.c)
 *     NdisDeregisterDeviceEx @ 0x1C00270B0 (NdisDeregisterDeviceEx.c)
 *     NdisClOpenAddressFamilyEx @ 0x1C0052500 (NdisClOpenAddressFamilyEx.c)
 *     NdisCmRegisterAddressFamilyEx @ 0x1C0052B90 (NdisCmRegisterAddressFamilyEx.c)
 *     NdisMCmRegisterAddressFamilyEx @ 0x1C0052EA0 (NdisMCmRegisterAddressFamilyEx.c)
 *     NdisEnumerateFilterModules @ 0x1C0058C90 (NdisEnumerateFilterModules.c)
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005C920 (ndisOpenAdapterLegacyProtocol.c)
 *     NdisMDeregisterDevice @ 0x1C00613D0 (NdisMDeregisterDevice.c)
 *     ndisDeviceInternalDispatch @ 0x1C006475C (ndisDeviceInternalDispatch.c)
 *     ndisQueryPower @ 0x1C00F51BC (ndisQueryPower.c)
 *     ndisDevicePowerOn @ 0x1C00F5400 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C00F58C0 (ndisDevicePowerDown.c)
 *     ndisAddDevice @ 0x1C00F6250 (ndisAddDevice.c)
 *     NdisOpenAdapterEx @ 0x1C00F7950 (NdisOpenAdapterEx.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00F821C (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ndisNotifyMiniports @ 0x1C00F9EE8 (ndisNotifyMiniports.c)
 *     ndisQueueMiniportOnDriver @ 0x1C00F9F78 (ndisQueueMiniportOnDriver.c)
 *     NdisMRegisterInterruptEx @ 0x1C00FA020 (NdisMRegisterInterruptEx.c)
 *     ndisPnPNotifyAllTransports @ 0x1C00FA564 (ndisPnPNotifyAllTransports.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00FA6C4 (ndisPnPIrpRemoveDevice.c)
 *     ndisPnPRemoveDevice @ 0x1C00FA8D0 (ndisPnPRemoveDevice.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00FAB6C (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C00FADCC (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ndisMCommonHaltMiniport @ 0x1C00FB074 (ndisMCommonHaltMiniport.c)
 *     ndisDeQueueMiniportOnDriver @ 0x1C00FB748 (ndisDeQueueMiniportOnDriver.c)
 *     ndisMKillOpen @ 0x1C00FB908 (ndisMKillOpen.c)
 *     NdisMDeregisterInterruptEx @ 0x1C00FBDC0 (NdisMDeregisterInterruptEx.c)
 *     ndisFindRootDevice @ 0x1C0102110 (ndisFindRootDevice.c)
 *     ndisMUnload @ 0x1C0102AF0 (ndisMUnload.c)
 *     NdisMCmRegisterAddressFamily @ 0x1C0102CE0 (NdisMCmRegisterAddressFamily.c)
 *     ndisNotifyAfRegistration @ 0x1C0103150 (ndisNotifyAfRegistration.c)
 *     NdisDeregisterProtocol @ 0x1C0103230 (NdisDeregisterProtocol.c)
 *     NdisMAllocateMapRegisters @ 0x1C0103650 (NdisMAllocateMapRegisters.c)
 *     NdisMDeregisterDmaChannel @ 0x1C0103BD0 (NdisMDeregisterDmaChannel.c)
 *     NdisMFreeMapRegisters @ 0x1C0103C90 (NdisMFreeMapRegisters.c)
 *     NdisMRegisterDevice @ 0x1C0103DE0 (NdisMRegisterDevice.c)
 *     NdisMRegisterDmaChannel @ 0x1C0104090 (NdisMRegisterDmaChannel.c)
 *     ndisFindMiniportOnGlobalList @ 0x1C0104398 (ndisFindMiniportOnGlobalList.c)
 *     ndisMFinishQueuedPendingOpen @ 0x1C01044D0 (ndisMFinishQueuedPendingOpen.c)
 *     ndisRegisterMiniportDriver @ 0x1C01046B8 (ndisRegisterMiniportDriver.c)
 *     ndisPmHaltMiniport @ 0x1C0104E6C (ndisPmHaltMiniport.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisDereferencePackage(__int64 a1)
{
  MmUnlockPagableImageSection(*(PVOID *)(a1 + 16));
  _InterlockedDecrement((volatile signed __int32 *)a1);
}
