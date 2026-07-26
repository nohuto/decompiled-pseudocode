/*
 * XREFs of Template_jqxq @ 0x1C003F728
 * Callers:
 *     ndisOidRequestComplete @ 0x1C000B560 (ndisOidRequestComplete.c)
 *     ndisSignalD0RequestComplete @ 0x1C0011EF8 (ndisSignalD0RequestComplete.c)
 *     ndisMRestoreOpenHandlers @ 0x1C0012060 (ndisMRestoreOpenHandlers.c)
 *     ndisSetDevicePower @ 0x1C0012104 (ndisSetDevicePower.c)
 *     ndisQueryPowerCompleteSystemState @ 0x1C0012920 (ndisQueryPowerCompleteSystemState.c)
 *     ndisQueryPowerComplete @ 0x1C0012A40 (ndisQueryPowerComplete.c)
 *     ndisIndicateStatusInternal @ 0x1C00185E4 (ndisIndicateStatusInternal.c)
 *     ndisRestoreFilterHandlersForMediaDisconnect @ 0x1C00222B0 (ndisRestoreFilterHandlersForMediaDisconnect.c)
 *     ndisCancelWaitWake @ 0x1C002375C (ndisCancelWaitWake.c)
 *     ndisGenericWaitWakeCallback @ 0x1C00238B0 (ndisGenericWaitWakeCallback.c)
 *     ndisMAbortRequests @ 0x1C0025880 (ndisMAbortRequests.c)
 *     ndisPnPPortActivation @ 0x1C003FA74 (ndisPnPPortActivation.c)
 *     ndisPnPPortDeactivation @ 0x1C003FFFC (ndisPnPPortDeactivation.c)
 *     ndisMProcessDeferred @ 0x1C005FF14 (ndisMProcessDeferred.c)
 *     ndisMProcessResetRequested @ 0x1C00602AC (ndisMProcessResetRequested.c)
 *     ndisMReset @ 0x1C0060660 (ndisMReset.c)
 *     ndisMResetMiniportInternal @ 0x1C0060C24 (ndisMResetMiniportInternal.c)
 *     ?ndisMSendOidPmParametersForSx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0064AF8 (-ndisMSendOidPmParametersForSx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisPnPDispatch @ 0x1C00ACD70 (ndisPnPDispatch.c)
 *     ndisRequestWaitWake @ 0x1C00BDE48 (ndisRequestWaitWake.c)
 *     ndisPnPIrpQueryPnPDeviceState @ 0x1C00BE568 (ndisPnPIrpQueryPnPDeviceState.c)
 *     ndisDevicePowerOn @ 0x1C00F5400 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C00F58C0 (ndisDevicePowerDown.c)
 *     ndisMPowerPolicy @ 0x1C00F5B54 (ndisMPowerPolicy.c)
 *     ndisMOpenAdapter @ 0x1C00F7CE4 (ndisMOpenAdapter.c)
 *     ndisMInitializeAdapter @ 0x1C00F904C (ndisMInitializeAdapter.c)
 *     ndisPnPRemoveDevice @ 0x1C00FA8D0 (ndisPnPRemoveDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_jqxq(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        const GUID *a3,
        unsigned __int64 a4,
        char a5,
        char a6,
        char a7)
{
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-21h] BYREF
  char *v9; // [rsp+40h] [rbp-11h]
  __int64 v10; // [rsp+48h] [rbp-9h]
  char *v11; // [rsp+50h] [rbp-1h]
  __int64 v12; // [rsp+58h] [rbp+7h]
  char *v13; // [rsp+60h] [rbp+Fh]
  __int64 v14; // [rsp+68h] [rbp+17h]

  v9 = &a5;
  v11 = &a6;
  v13 = &a7;
  UserData.Ptr = a4;
  *(_QWORD *)&UserData.Size = 16LL;
  v10 = 4LL;
  v12 = 8LL;
  v14 = 4LL;
  return EtwWrite(Microsoft_Windows_NDISHandle, a2, a3, 4u, &UserData);
}
