/*
 * XREFs of ndisReferencePackage @ 0x1C00A502C
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
 *     ndisWmiQuerySingleInstance @ 0x1C00A69C8 (ndisWmiQuerySingleInstance.c)
 *     ndisWmiExecuteMethod @ 0x1C00A6DE0 (ndisWmiExecuteMethod.c)
 *     ndisWmiQueryAllData @ 0x1C00A72F4 (ndisWmiQueryAllData.c)
 *     ndisSetPower @ 0x1C00A7918 (ndisSetPower.c)
 *     ndisStartDeviceWorkItem @ 0x1C00AB1E0 (ndisStartDeviceWorkItem.c)
 *     ndisInitializeAdapter @ 0x1C00AB3E8 (ndisInitializeAdapter.c)
 *     ?ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00AB4E4 (-ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 *     ndisPnPDispatch @ 0x1C00ACD70 (ndisPnPDispatch.c)
 *     ?ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00AF8D8 (-ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INF.c)
 *     ?ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00AFD6C (-ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00B2BA4 (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 *     ndisPnPNotifyBindingUnlocked @ 0x1C00B547C (ndisPnPNotifyBindingUnlocked.c)
 *     NdisRegisterProtocolDriver @ 0x1C00B7D70 (NdisRegisterProtocolDriver.c)
 *     ndisInitModeTimeoutWorkItem @ 0x1C00B8590 (ndisInitModeTimeoutWorkItem.c)
 *     NdisIMInitializeDeviceInstanceEx @ 0x1C00D9DE0 (NdisIMInitializeDeviceInstanceEx.c)
 *     NdisRegisterProtocol @ 0x1C00DC150 (NdisRegisterProtocol.c)
 *     NdisWdfPnpPowerEventHandler @ 0x1C00DFED0 (NdisWdfPnpPowerEventHandler.c)
 *     ndisPnPHandlePagingIrp @ 0x1C00E130C (ndisPnPHandlePagingIrp.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00E2244 (ndisWmiChangeSingleInstance.c)
 *     ndisQueryPower @ 0x1C00F51BC (ndisQueryPower.c)
 *     ndisDevicePowerOn @ 0x1C00F5400 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C00F58C0 (ndisDevicePowerDown.c)
 *     NdisMSetAttributesEx @ 0x1C00F5ED0 (NdisMSetAttributesEx.c)
 *     ndisAddDevice @ 0x1C00F6250 (ndisAddDevice.c)
 *     NdisOpenAdapterEx @ 0x1C00F7950 (NdisOpenAdapterEx.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00F821C (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ndisNotifyMiniports @ 0x1C00F9EE8 (ndisNotifyMiniports.c)
 *     ndisQueueMiniportOnDriver @ 0x1C00F9F78 (ndisQueueMiniportOnDriver.c)
 *     NdisMRegisterInterruptEx @ 0x1C00FA020 (NdisMRegisterInterruptEx.c)
 *     ndisPnPNotifyAllTransports @ 0x1C00FA564 (ndisPnPNotifyAllTransports.c)
 *     ndisPnPRemoveDevice @ 0x1C00FA8D0 (ndisPnPRemoveDevice.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00FAB6C (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C00FADCC (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ndisMCommonHaltMiniport @ 0x1C00FB074 (ndisMCommonHaltMiniport.c)
 *     ndisDeQueueMiniportOnDriver @ 0x1C00FB748 (ndisDeQueueMiniportOnDriver.c)
 *     NdisCloseAdapter @ 0x1C00FB7F0 (NdisCloseAdapter.c)
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
 *     NdisMSleep @ 0x1C00BC470 (NdisMSleep.c)
 */

void __fastcall ndisReferencePackage(__int64 a1)
{
  signed __int32 v2; // eax
  PVOID v3; // rax

  v2 = _InterlockedIncrement((volatile signed __int32 *)a1);
  if ( !*(_QWORD *)(a1 + 16) )
  {
    if ( v2 == 1 )
    {
      v3 = MmLockPagableDataSection(*(PVOID *)(a1 + 8));
      *(_QWORD *)(a1 + 16) = v3;
      MmUnlockPagableImageSection(v3);
    }
    else
    {
      do
        NdisMSleep(0x32u);
      while ( !*(_QWORD *)(a1 + 16) );
    }
  }
  MmLockPagableSectionByHandle(*(PVOID *)(a1 + 16));
}
