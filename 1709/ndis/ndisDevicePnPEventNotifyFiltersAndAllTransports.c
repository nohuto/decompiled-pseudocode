/*
 * XREFs of ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C00C4168
 * Callers:
 *     ndisPnPPortActivation @ 0x1C003C5AC (ndisPnPPortActivation.c)
 *     ndisPnPPortDeactivation @ 0x1C003CB2C (ndisPnPPortDeactivation.c)
 *     ndisPnPQueryRemoveDevice @ 0x1C00AC300 (ndisPnPQueryRemoveDevice.c)
 *     ndisIssueNetEventSetPowerEvent @ 0x1C00C641C (ndisIssueNetEventSetPowerEvent.c)
 *     ndisPnPCancelRemoveDevice @ 0x1C00EA1BC (ndisPnPCancelRemoveDevice.c)
 *     NdisMNetPnPEvent @ 0x1C00EAF10 (NdisMNetPnPEvent.c)
 *     ndisPnPIrpSurpriseRemovalInner @ 0x1C00EB838 (ndisPnPIrpSurpriseRemovalInner.c)
 *     ndisQueryPower @ 0x1C0105B58 (ndisQueryPower.c)
 * Callees:
 *     ndisDereferenceRef @ 0x1C0004F50 (ndisDereferenceRef.c)
 *     ndisIsMiniportStarted @ 0x1C0008960 (ndisIsMiniportStarted.c)
 *     ndisGetHigherFilterWithPnpRef @ 0x1C001C788 (ndisGetHigherFilterWithPnpRef.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     ndisShallowCopyNetPnPEvent @ 0x1C00BA908 (ndisShallowCopyNetPnPEvent.c)
 *     ndisFForwardNetPnPEventToFilter @ 0x1C00C436C (ndisFForwardNetPnPEventToFilter.c)
 *     ndisInitializeNetPnPEvent @ 0x1C00C44BC (ndisInitializeNetPnPEvent.c)
 *     ndisPnPNotifyAllTransports @ 0x1C0104EDC (ndisPnPNotifyAllTransports.c)
 */

__int64 __fastcall ndisDevicePnPEventNotifyFiltersAndAllTransports(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2)
{
  int v2; // esi
  int *v4; // rbp
  _NDIS_PNP_DEVICE_STATE PnPDeviceState; // ecx
  __int64 HigherFilterWithPnpRef; // rax
  __int64 v8; // rsi
  unsigned int v9; // edi
  _BYTE v11[160]; // [rsp+20h] [rbp-D8h] BYREF
  int v12; // [rsp+C0h] [rbp-38h]

  v2 = *(_DWORD *)(a2 + 8);
  v4 = *(int **)(a2 + 16);
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_qD(0x3Du, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, (__int64)a1, v2);
  ndisInitializeNetPnPEvent(v11, 0LL);
  ndisShallowCopyNetPnPEvent((__int64)v11, a2);
  if ( !ndisIsMiniportStarted(a1) )
    goto LABEL_15;
  PnPDeviceState = a1->PnPDeviceState;
  if ( ((PnPDeviceState - 1) & 0xFFFFFFFC) != 0 || PnPDeviceState == NdisPnPDeviceStopped )
    goto LABEL_15;
  if ( !v2 && *v4 > 1 && (a1->PnPFlags & 0x20) == 0 )
    v12 |= 1u;
  HigherFilterWithPnpRef = ndisGetHigherFilterWithPnpRef((__int64)a1, 0LL);
  v8 = HigherFilterWithPnpRef;
  if ( !HigherFilterWithPnpRef )
  {
LABEL_15:
    v9 = ndisPnPNotifyAllTransports(a1);
  }
  else
  {
    v9 = ndisFForwardNetPnPEventToFilter(HigherFilterWithPnpRef, v11);
    ndisDereferenceRef((PKSPIN_LOCK)(v8 + 320));
  }
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_q(0x3Eu, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, (__int64)a1);
  return v9;
}
