/*
 * XREFs of ndisReferencePackage @ 0x1C00ADB10
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
 *     ndisWmiQueryAllData @ 0x1C00AC238 (ndisWmiQueryAllData.c)
 *     ndisSetPower @ 0x1C00B092C (ndisSetPower.c)
 *     ?ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00B2F6C (-ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00B7060 (-ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 *     ndisPnPNotifyBindingUnlocked @ 0x1C00B85A4 (ndisPnPNotifyBindingUnlocked.c)
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00BC30C (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 *     NdisRegisterProtocolDriver @ 0x1C00C18B0 (NdisRegisterProtocolDriver.c)
 *     ndisInitModeTimeoutWorkItem @ 0x1C00C2280 (ndisInitModeTimeoutWorkItem.c)
 *     NdisMSetMiniportAttributes @ 0x1C00C2BB0 (NdisMSetMiniportAttributes.c)
 *     ndisStartDeviceWorkItem @ 0x1C00C6200 (ndisStartDeviceWorkItem.c)
 *     ndisPnPDispatch @ 0x1C00C6470 (ndisPnPDispatch.c)
 *     ndisInitializeAdapter @ 0x1C00C6B08 (ndisInitializeAdapter.c)
 *     ?ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00C7270 (-ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INF.c)
 *     NdisSetOptionalHandlers @ 0x1C00C79F0 (NdisSetOptionalHandlers.c)
 *     NdisIMInitializeDeviceInstanceEx @ 0x1C00E5660 (NdisIMInitializeDeviceInstanceEx.c)
 *     NdisRegisterProtocol @ 0x1C00E79E0 (NdisRegisterProtocol.c)
 *     NdisLWMInitializeNetworkInterface @ 0x1C00EB720 (NdisLWMInitializeNetworkInterface.c)
 *     NdisLWMStartNetworkInterface @ 0x1C00EBA00 (NdisLWMStartNetworkInterface.c)
 *     NdisLWMUninitializeNetworkInterface @ 0x1C00EBB10 (NdisLWMUninitializeNetworkInterface.c)
 *     NdisWdfPnpPowerEventHandler @ 0x1C00EC2B0 (NdisWdfPnpPowerEventHandler.c)
 *     ndisPnPHandlePagingIrp @ 0x1C00EDD4C (ndisPnPHandlePagingIrp.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00EEE20 (ndisWmiChangeSingleInstance.c)
 *     ndisDevicePowerOn @ 0x1C0100560 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C0100A70 (ndisDevicePowerDown.c)
 *     ndisQueryPower @ 0x1C0100D1C (ndisQueryPower.c)
 *     ndisPnPNotifyAllTransports @ 0x1C0101810 (ndisPnPNotifyAllTransports.c)
 *     ndisPnPRemoveDevice @ 0x1C0101968 (ndisPnPRemoveDevice.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0101C04 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0101E78 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ndisMCommonHaltMiniport @ 0x1C0102134 (ndisMCommonHaltMiniport.c)
 *     ndisDeQueueMiniportOnDriver @ 0x1C0102828 (ndisDeQueueMiniportOnDriver.c)
 *     NdisCloseAdapter @ 0x1C0102A80 (NdisCloseAdapter.c)
 *     ndisMKillOpen @ 0x1C0102BA4 (ndisMKillOpen.c)
 *     NdisMDeregisterInterruptEx @ 0x1C0103240 (NdisMDeregisterInterruptEx.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C01036D4 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     NdisOpenAdapterEx @ 0x1C0104520 (NdisOpenAdapterEx.c)
 *     NdisMSetAttributesEx @ 0x1C0104F50 (NdisMSetAttributesEx.c)
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
 *     NdisMSleep @ 0x1C00C8450 (NdisMSleep.c)
 */

void __fastcall ndisReferencePackage(__int64 a1)
{
  signed __int32 v2; // eax
  void *v3; // rcx
  signed __int32 v4; // eax
  PVOID v5; // rax

  v2 = _InterlockedExchangeAdd((volatile signed __int32 *)a1, 1u);
  v3 = *(void **)(a1 + 16);
  v4 = v2 + 1;
  if ( !v3 )
  {
    if ( v4 == 1 )
    {
      v5 = MmLockPagableDataSection(*(PVOID *)(a1 + 8));
      *(_QWORD *)(a1 + 16) = v5;
      MmUnlockPagableImageSection(v5);
      v3 = *(void **)(a1 + 16);
    }
    else
    {
      do
      {
        NdisMSleep(0x32u);
        v3 = *(void **)(a1 + 16);
      }
      while ( !v3 );
    }
  }
  MmLockPagableSectionByHandle(v3);
}
