/*
 * XREFs of MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C00220E8
 * Callers:
 *     InitializeTelemetryAssertsKM @ 0x1C0021ED8 (InitializeTelemetryAssertsKM.c)
 *     ndisMUpdateNameOnPMWakePacket @ 0x1C0048FE8 (ndisMUpdateNameOnPMWakePacket.c)
 *     ?ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z @ 0x1C0071F98 (-ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z.c)
 *     ?ndisIfSetFilterIfInfoInRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@U_GUID@@@Z @ 0x1C00B0BA8 (-ndisIfSetFilterIfInfoInRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@U_GUID@@@Z.c)
 *     ndisQuerySetMiniportDeviceState @ 0x1C00C6640 (ndisQuerySetMiniportDeviceState.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1C0022104 (MicrosoftTelemetryAssertTriggeredWorker.c)
 */

__int64 MicrosoftTelemetryAssertTriggeredNoArgsKM()
{
  void *retaddr; // [rsp+38h] [rbp+0h]

  return MicrosoftTelemetryAssertTriggeredWorker(retaddr);
}
