/*
 * XREFs of ndisInitializeNetPnPEvent @ 0x1C00C261C
 * Callers:
 *     ndisPnPPortActivation @ 0x1C003D8FC (ndisPnPPortActivation.c)
 *     ndisPnPPortDeactivation @ 0x1C003DE80 (ndisPnPPortDeactivation.c)
 *     ndisIssueNetEventSetPowerEvent @ 0x1C00B05E4 (ndisIssueNetEventSetPowerEvent.c)
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C00B0E0C (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ndisFNetPnPEventInternal @ 0x1C00B0F20 (ndisFNetPnPEventInternal.c)
 *     ndisPnPQueryRemoveDevice @ 0x1C00B4124 (ndisPnPQueryRemoveDevice.c)
 *     ndisNotifyBindFailure @ 0x1C00C24F0 (ndisNotifyBindFailure.c)
 *     ndisIMCheckDeviceInstance @ 0x1C00E5928 (ndisIMCheckDeviceInstance.c)
 *     ndisPnPCancelRemoveDevice @ 0x1C00ECB2C (ndisPnPCancelRemoveDevice.c)
 *     NdisIMNotifyPnPEvent @ 0x1C00EDA30 (NdisIMNotifyPnPEvent.c)
 *     NdisMNetPnPEvent @ 0x1C00EDAB0 (NdisMNetPnPEvent.c)
 *     ndisPnPIrpSurpriseRemovalInner @ 0x1C00EE3E8 (ndisPnPIrpSurpriseRemovalInner.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00EEE20 (ndisWmiChangeSingleInstance.c)
 *     ndisQueryPower @ 0x1C0100D1C (ndisQueryPower.c)
 *     ndisHandleProtocolReconfigNotification @ 0x1C010D2D0 (ndisHandleProtocolReconfigNotification.c)
 * Callees:
 *     memset @ 0x1C0026180 (memset.c)
 */

void __fastcall ndisInitializeNetPnPEvent(_QWORD *a1, struct _KEVENT *a2)
{
  memset(a1, 0, 0xB0uLL);
  *a1 = 11272832LL;
  *(_QWORD *)((char *)a1 + 164) = 0LL;
  *((_DWORD *)a1 + 40) = 0;
  *((_DWORD *)a1 + 2) = 23;
  a1[2] = 0LL;
  *((_DWORD *)a1 + 6) = 0;
  if ( a2 )
  {
    KeInitializeEvent(a2, NotificationEvent, 0);
    a1[4] = a2;
  }
}
