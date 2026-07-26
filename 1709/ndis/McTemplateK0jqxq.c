/*
 * XREFs of McTemplateK0jqxq @ 0x1C003BDB8
 * Callers:
 *     ndisMAbortRequests @ 0x1C0001808 (ndisMAbortRequests.c)
 *     ndisIndicateStatusInternal @ 0x1C0007254 (ndisIndicateStatusInternal.c)
 *     ndisOidRequestComplete @ 0x1C000C470 (ndisOidRequestComplete.c)
 *     ndisRestoreFilterHandlersForMediaDisconnect @ 0x1C001DA70 (ndisRestoreFilterHandlersForMediaDisconnect.c)
 *     ndisCancelWaitWake @ 0x1C001F088 (ndisCancelWaitWake.c)
 *     ndisGenericWaitWakeCallback @ 0x1C001F1E0 (ndisGenericWaitWakeCallback.c)
 *     ndisSignalD0RequestComplete @ 0x1C001F758 (ndisSignalD0RequestComplete.c)
 *     ndisMRestoreOpenHandlers @ 0x1C001F9A8 (ndisMRestoreOpenHandlers.c)
 *     ndisSetDevicePower @ 0x1C001FA4C (ndisSetDevicePower.c)
 *     ndisQueryPowerCompleteSystemState @ 0x1C0020140 (ndisQueryPowerCompleteSystemState.c)
 *     ndisQueryPowerComplete @ 0x1C0020260 (ndisQueryPowerComplete.c)
 *     ndisPnPPortActivation @ 0x1C003C5AC (ndisPnPPortActivation.c)
 *     ndisPnPPortDeactivation @ 0x1C003CB2C (ndisPnPPortDeactivation.c)
 *     ndisMProcessDeferred @ 0x1C005FF50 (ndisMProcessDeferred.c)
 *     ndisMProcessResetRequested @ 0x1C00602E8 (ndisMProcessResetRequested.c)
 *     ndisMReset @ 0x1C00606A0 (ndisMReset.c)
 *     ndisMResetMiniportInternal @ 0x1C0060C64 (ndisMResetMiniportInternal.c)
 *     ?ndisMSendOidPmParametersForSx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0065140 (-ndisMSendOidPmParametersForSx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisRequestWaitWake @ 0x1C00AE030 (ndisRequestWaitWake.c)
 *     ndisPnPDispatch @ 0x1C00C0CB0 (ndisPnPDispatch.c)
 *     ndisPnPIrpQueryPnPDeviceState @ 0x1C00C15B0 (ndisPnPIrpQueryPnPDeviceState.c)
 *     ndisPnPRemoveDevice @ 0x1C00FE208 (ndisPnPRemoveDevice.c)
 *     ndisMInitializeAdapter @ 0x1C00FF8D8 (ndisMInitializeAdapter.c)
 *     ndisMOpenAdapter @ 0x1C01033B8 (ndisMOpenAdapter.c)
 *     ndisDevicePowerOn @ 0x1C01053F0 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C01058B0 (ndisDevicePowerDown.c)
 *     ndisMPowerPolicy @ 0x1C0105D94 (ndisMPowerPolicy.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     McGenEventWriteKM @ 0x1C003BD2C (McGenEventWriteKM.c)
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
