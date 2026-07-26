/*
 * XREFs of ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C00BBE98
 * Callers:
 *     ndisPnPPortActivation @ 0x1C003FA74 (ndisPnPPortActivation.c)
 *     ndisPnPPortDeactivation @ 0x1C003FFFC (ndisPnPPortDeactivation.c)
 *     ndisIssueNetEventSetPowerEvent @ 0x1C00A773C (ndisIssueNetEventSetPowerEvent.c)
 *     ndisPnPQueryRemoveDevice @ 0x1C00C0464 (ndisPnPQueryRemoveDevice.c)
 *     ndisPnPCancelRemoveDevice @ 0x1C00E031C (ndisPnPCancelRemoveDevice.c)
 *     NdisMNetPnPEvent @ 0x1C00E1070 (NdisMNetPnPEvent.c)
 *     ndisPnPIrpSurpriseRemovalInner @ 0x1C00E199C (ndisPnPIrpSurpriseRemovalInner.c)
 *     ndisQueryPower @ 0x1C00F51BC (ndisQueryPower.c)
 * Callees:
 *     ndisDereferenceRef @ 0x1C001807C (ndisDereferenceRef.c)
 *     ndisIsMiniportStarted @ 0x1C0019CC0 (ndisIsMiniportStarted.c)
 *     ndisGetHigherFilterWithPnpRef @ 0x1C00206BC (ndisGetHigherFilterWithPnpRef.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     ndisShallowCopyNetPnPEvent @ 0x1C00B5940 (ndisShallowCopyNetPnPEvent.c)
 *     ndisInitializeNetPnPEvent @ 0x1C00B64CC (ndisInitializeNetPnPEvent.c)
 *     ndisFForwardNetPnPEventToFilter @ 0x1C00BC09C (ndisFForwardNetPnPEventToFilter.c)
 *     ndisPnPNotifyAllTransports @ 0x1C00FA564 (ndisPnPNotifyAllTransports.c)
 */

__int64 __fastcall ndisDevicePnPEventNotifyFiltersAndAllTransports(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2)
{
  int v2; // esi
  int *v4; // rbp
  _NDIS_PNP_DEVICE_STATE PnPDeviceState; // ecx
  __int64 HigherFilterWithPnpRef; // rax
  __int64 v8; // rsi
  unsigned int v9; // edi
  _QWORD v11[20]; // [rsp+20h] [rbp-D8h] BYREF
  int v12; // [rsp+C0h] [rbp-38h]

  v2 = *(_DWORD *)(a2 + 8);
  v4 = *(int **)(a2 + 16);
  if ( (unsigned __int8)byte_1C0092614 >= 4u )
    WPP_SF_qD(0x3Fu, &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids, (__int64)a1, v2);
  ndisInitializeNetPnPEvent(v11, 0LL);
  ndisShallowCopyNetPnPEvent((__int64)v11, a2);
  if ( !ndisIsMiniportStarted(a1) )
    goto LABEL_15;
  PnPDeviceState = a1->PnPDeviceState;
  if ( ((PnPDeviceState - 1) & 0xFFFFFFFC) != 0 || PnPDeviceState == NdisPnPDeviceStopped )
    goto LABEL_15;
  if ( !v2 && *v4 > 1 && (a1->PnPFlags & 0x20) == 0 )
    v12 |= 1u;
  HigherFilterWithPnpRef = ndisGetHigherFilterWithPnpRef((__int64)a1, 0LL, 7u);
  v8 = HigherFilterWithPnpRef;
  if ( !HigherFilterWithPnpRef )
  {
LABEL_15:
    v9 = ndisPnPNotifyAllTransports(a1);
  }
  else
  {
    v9 = ndisFForwardNetPnPEventToFilter(HigherFilterWithPnpRef, v11);
    ndisDereferenceRef((PKSPIN_LOCK)(v8 + 320), 7u);
  }
  if ( (unsigned __int8)byte_1C0092614 >= 4u )
    WPP_SF_q(0x40u, &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids, (__int64)a1);
  return v9;
}
