/*
 * XREFs of McTemplateK0jqxq @ 0x1C003D100
 * Callers:
 *     ndisOidRequestComplete @ 0x1C000D290 (ndisOidRequestComplete.c)
 *     ndisSignalD0RequestComplete @ 0x1C000F564 (ndisSignalD0RequestComplete.c)
 *     ndisMRestoreOpenHandlers @ 0x1C000F7E0 (ndisMRestoreOpenHandlers.c)
 *     ndisSetDevicePower @ 0x1C000F884 (ndisSetDevicePower.c)
 *     ndisQueryPowerCompleteSystemState @ 0x1C00100B0 (ndisQueryPowerCompleteSystemState.c)
 *     ndisQueryPowerComplete @ 0x1C00101D0 (ndisQueryPowerComplete.c)
 *     ndisCancelWaitWake @ 0x1C0010580 (ndisCancelWaitWake.c)
 *     ndisGenericWaitWakeCallback @ 0x1C0010690 (ndisGenericWaitWakeCallback.c)
 *     ndisMAbortRequests @ 0x1C00124B0 (ndisMAbortRequests.c)
 *     ndisRestoreFilterHandlersForMediaDisconnect @ 0x1C001673C (ndisRestoreFilterHandlersForMediaDisconnect.c)
 *     ndisIndicateStatusInternal @ 0x1C0017E84 (ndisIndicateStatusInternal.c)
 *     ndisPnPPortActivation @ 0x1C003D8FC (ndisPnPPortActivation.c)
 *     ndisPnPPortDeactivation @ 0x1C003DE80 (ndisPnPPortDeactivation.c)
 *     ndisMProcessDeferred @ 0x1C006098C (ndisMProcessDeferred.c)
 *     ndisMProcessResetRequested @ 0x1C0060CF4 (ndisMProcessResetRequested.c)
 *     ndisMReset @ 0x1C00610B0 (ndisMReset.c)
 *     ndisMResetMiniportInternal @ 0x1C0061680 (ndisMResetMiniportInternal.c)
 *     ?ndisMSendOidPmParametersForSx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0065C60 (-ndisMSendOidPmParametersForSx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisPnPDispatch @ 0x1C00C6470 (ndisPnPDispatch.c)
 *     ndisPnPIrpQueryPnPDeviceState @ 0x1C00C6D04 (ndisPnPIrpQueryPnPDeviceState.c)
 *     ndisRequestWaitWake @ 0x1C00CA3B0 (ndisRequestWaitWake.c)
 *     ndisDevicePowerOn @ 0x1C0100560 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C0100A70 (ndisDevicePowerDown.c)
 *     ndisMPowerPolicy @ 0x1C0100F58 (ndisMPowerPolicy.c)
 *     ndisPnPRemoveDevice @ 0x1C0101968 (ndisPnPRemoveDevice.c)
 *     ndisMOpenAdapter @ 0x1C01048C0 (ndisMOpenAdapter.c)
 *     ndisMInitializeAdapter @ 0x1C0105A70 (ndisMInitializeAdapter.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     McGenEventWriteKM @ 0x1C003D074 (McGenEventWriteKM.c)
 */

NTSTATUS __fastcall McTemplateK0jqxq(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        const GUID *a3,
        __int64 a4,
        char a5,
        char a6,
        char a7)
{
  _EVENT_DATA_DESCRIPTOR v8; // [rsp+30h] [rbp-21h] BYREF
  __int64 v9; // [rsp+40h] [rbp-11h]
  __int64 v10; // [rsp+48h] [rbp-9h]
  char *v11; // [rsp+50h] [rbp-1h]
  __int64 v12; // [rsp+58h] [rbp+7h]
  char *v13; // [rsp+60h] [rbp+Fh]
  __int64 v14; // [rsp+68h] [rbp+17h]
  char *v15; // [rsp+70h] [rbp+1Fh]
  __int64 v16; // [rsp+78h] [rbp+27h]

  v9 = a4;
  v11 = &a5;
  v10 = 16LL;
  v13 = &a6;
  v12 = 4LL;
  v15 = &a7;
  v14 = 8LL;
  v16 = 4LL;
  return McGenEventWriteKM(NDIS_PROVIDER_ID_Context, a2, a3, 5u, &v8);
}
