/*
 * XREFs of MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C007EA58
 * Callers:
 *     ndisFreeReceiveQueue @ 0x1C003B538 (ndisFreeReceiveQueue.c)
 *     ndisMUpdateNameOnPMWakePacket @ 0x1C004A42C (ndisMUpdateNameOnPMWakePacket.c)
 *     ?ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z @ 0x1C0072814 (-ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z.c)
 *     ndisQuerySetMiniportDeviceState @ 0x1C00B0810 (ndisQuerySetMiniportDeviceState.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00B1B84 (ndisPnPIrpRemoveDevice.c)
 *     ?ndisIfSetFilterIfInfoInRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@U_GUID@@@Z @ 0x1C00B796C (-ndisIfSetFilterIfInfoInRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@U_GUID@@@Z.c)
 *     ndisWdfPreReleaseHardware @ 0x1C00EE6D8 (ndisWdfPreReleaseHardware.c)
 *     ndisAddDevice @ 0x1C0105194 (ndisAddDevice.c)
 *     ndisMInitializeAdapter @ 0x1C0105A70 (ndisMInitializeAdapter.c)
 *     ndisPmInitializeMiniport @ 0x1C010FEDC (ndisPmInitializeMiniport.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1C007EA74 (MicrosoftTelemetryAssertTriggeredWorker.c)
 */

__int64 MicrosoftTelemetryAssertTriggeredNoArgsKM()
{
  void *retaddr; // [rsp+38h] [rbp+0h]

  return MicrosoftTelemetryAssertTriggeredWorker(retaddr);
}
