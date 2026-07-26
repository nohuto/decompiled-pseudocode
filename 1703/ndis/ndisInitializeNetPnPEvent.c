/*
 * XREFs of ndisInitializeNetPnPEvent @ 0x1C00B64CC
 * Callers:
 *     ndisPnPPortActivation @ 0x1C003FA74 (ndisPnPPortActivation.c)
 *     ndisPnPPortDeactivation @ 0x1C003FFFC (ndisPnPPortDeactivation.c)
 *     ndisIssueNetEventSetPowerEvent @ 0x1C00A773C (ndisIssueNetEventSetPowerEvent.c)
 *     ?NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ @ 0x1C00B63F0 (-NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ.c)
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C00BBE98 (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ndisFNetPnPEventInternal @ 0x1C00BBFA0 (ndisFNetPnPEventInternal.c)
 *     ndisNotifyBindFailure @ 0x1C00BDB0C (ndisNotifyBindFailure.c)
 *     ndisPnPQueryRemoveDevice @ 0x1C00C0464 (ndisPnPQueryRemoveDevice.c)
 *     ndisIMCheckDeviceInstance @ 0x1C00DA0A8 (ndisIMCheckDeviceInstance.c)
 *     ndisPnPCancelRemoveDevice @ 0x1C00E031C (ndisPnPCancelRemoveDevice.c)
 *     NdisIMNotifyPnPEvent @ 0x1C00E0FF0 (NdisIMNotifyPnPEvent.c)
 *     NdisMNetPnPEvent @ 0x1C00E1070 (NdisMNetPnPEvent.c)
 *     ndisPnPIrpSurpriseRemovalInner @ 0x1C00E199C (ndisPnPIrpSurpriseRemovalInner.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00E2244 (ndisWmiChangeSingleInstance.c)
 *     ndisQueryPower @ 0x1C00F51BC (ndisQueryPower.c)
 *     ndisHandleProtocolReconfigNotification @ 0x1C01023B0 (ndisHandleProtocolReconfigNotification.c)
 * Callees:
 *     memset @ 0x1C0028B80 (memset.c)
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
