/*
 * XREFs of Template_jqxqqq @ 0x1C0045A18
 * Callers:
 *     ndisMDoOidRequest @ 0x1C000AB80 (ndisMDoOidRequest.c)
 *     ndisOidRequestComplete @ 0x1C000B560 (ndisOidRequestComplete.c)
 *     ndisSetDevicePower @ 0x1C0012104 (ndisSetDevicePower.c)
 *     ndisIndicateStatusInternal @ 0x1C00185E4 (ndisIndicateStatusInternal.c)
 *     ndisSetMiniportRSSParameters @ 0x1C002150C (ndisSetMiniportRSSParameters.c)
 *     ndisSetOpenRSSParameters @ 0x1C0021618 (ndisSetOpenRSSParameters.c)
 *     ndisGenericWaitWakeCallback @ 0x1C00238B0 (ndisGenericWaitWakeCallback.c)
 *     ndisCancelOidRequestOnFilter @ 0x1C0046030 (ndisCancelOidRequestOnFilter.c)
 *     ndisCancelOidRequestOnMiniport @ 0x1C00461C4 (ndisCancelOidRequestOnMiniport.c)
 *     ndisWmiExecuteMethod @ 0x1C00A6DE0 (ndisWmiExecuteMethod.c)
 *     ndisSetOpenEthAddDeleteMulticast @ 0x1C00A7EEC (ndisSetOpenEthAddDeleteMulticast.c)
 *     ndisSetOpenEthMulticastList @ 0x1C00BA148 (ndisSetOpenEthMulticastList.c)
 *     ndisGetMiniportInfo @ 0x1C00DDD7C (ndisGetMiniportInfo.c)
 *     NdisMRegisterInterrupt @ 0x1C00E07B0 (NdisMRegisterInterrupt.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00E2244 (ndisWmiChangeSingleInstance.c)
 *     ndisQueryPower @ 0x1C00F51BC (ndisQueryPower.c)
 *     ndisDevicePowerOn @ 0x1C00F5400 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C00F58C0 (ndisDevicePowerDown.c)
 *     NdisMRegisterInterruptEx @ 0x1C00FA020 (NdisMRegisterInterruptEx.c)
 *     ndisPmInitializeMiniport @ 0x1C0104FCC (ndisPmInitializeMiniport.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_jqxqqq(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        const GUID *a3,
        unsigned __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9)
{
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-51h] BYREF
  char *v11; // [rsp+40h] [rbp-41h]
  __int64 v12; // [rsp+48h] [rbp-39h]
  char *v13; // [rsp+50h] [rbp-31h]
  __int64 v14; // [rsp+58h] [rbp-29h]
  char *v15; // [rsp+60h] [rbp-21h]
  __int64 v16; // [rsp+68h] [rbp-19h]
  char *v17; // [rsp+70h] [rbp-11h]
  __int64 v18; // [rsp+78h] [rbp-9h]
  char *v19; // [rsp+80h] [rbp-1h]
  __int64 v20; // [rsp+88h] [rbp+7h]

  v11 = &a5;
  v13 = &a6;
  v15 = &a7;
  v17 = &a8;
  v19 = &a9;
  UserData.Ptr = a4;
  *(_QWORD *)&UserData.Size = 16LL;
  v12 = 4LL;
  v14 = 8LL;
  v16 = 4LL;
  v18 = 4LL;
  v20 = 4LL;
  return EtwWrite(Microsoft_Windows_NDISHandle, a2, a3, 6u, &UserData);
}
