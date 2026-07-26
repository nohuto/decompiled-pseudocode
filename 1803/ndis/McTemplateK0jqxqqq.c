/*
 * XREFs of McTemplateK0jqxqqq @ 0x1C00434E4
 * Callers:
 *     ndisOidRequestComplete @ 0x1C000D290 (ndisOidRequestComplete.c)
 *     ndisMDoOidRequest @ 0x1C000DFB0 (ndisMDoOidRequest.c)
 *     ndisSetDevicePower @ 0x1C000F884 (ndisSetDevicePower.c)
 *     ndisGenericWaitWakeCallback @ 0x1C0010690 (ndisGenericWaitWakeCallback.c)
 *     ndisSetMiniportRSSParameters @ 0x1C001553C (ndisSetMiniportRSSParameters.c)
 *     ndisSetOpenRSSParameters @ 0x1C0015640 (ndisSetOpenRSSParameters.c)
 *     ndisIndicateStatusInternal @ 0x1C0017E84 (ndisIndicateStatusInternal.c)
 *     ndisCancelOidRequestOnFilter @ 0x1C004431C (ndisCancelOidRequestOnFilter.c)
 *     ndisCancelOidRequestOnMiniport @ 0x1C00444B0 (ndisCancelOidRequestOnMiniport.c)
 *     ?ndisSetMiniportRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C007C748 (-ndisSetMiniportRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C007C8EC (-ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ndisWmiExecuteMethod @ 0x1C00AC874 (ndisWmiExecuteMethod.c)
 *     ndisSetOpenEthMulticastList @ 0x1C00C4A78 (ndisSetOpenEthMulticastList.c)
 *     ndisSetOpenEthAddDeleteMulticast @ 0x1C00CB110 (ndisSetOpenEthAddDeleteMulticast.c)
 *     ndisGetMiniportInfo @ 0x1C00E970C (ndisGetMiniportInfo.c)
 *     NdisMRegisterInterrupt @ 0x1C00ED1F0 (NdisMRegisterInterrupt.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00EEE20 (ndisWmiChangeSingleInstance.c)
 *     ndisDevicePowerOn @ 0x1C0100560 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C0100A70 (ndisDevicePowerDown.c)
 *     ndisQueryPower @ 0x1C0100D1C (ndisQueryPower.c)
 *     NdisMRegisterInterruptEx @ 0x1C0106A70 (NdisMRegisterInterruptEx.c)
 *     ndisPmInitializeMiniport @ 0x1C010FEDC (ndisPmInitializeMiniport.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     McGenEventWriteKM @ 0x1C003D074 (McGenEventWriteKM.c)
 */

NTSTATUS __fastcall McTemplateK0jqxqqq(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        const GUID *a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9)
{
  _EVENT_DATA_DESCRIPTOR v10; // [rsp+30h] [rbp-51h] BYREF
  __int64 v11; // [rsp+40h] [rbp-41h]
  __int64 v12; // [rsp+48h] [rbp-39h]
  char *v13; // [rsp+50h] [rbp-31h]
  __int64 v14; // [rsp+58h] [rbp-29h]
  char *v15; // [rsp+60h] [rbp-21h]
  __int64 v16; // [rsp+68h] [rbp-19h]
  char *v17; // [rsp+70h] [rbp-11h]
  __int64 v18; // [rsp+78h] [rbp-9h]
  char *v19; // [rsp+80h] [rbp-1h]
  __int64 v20; // [rsp+88h] [rbp+7h]
  char *v21; // [rsp+90h] [rbp+Fh]
  __int64 v22; // [rsp+98h] [rbp+17h]

  v11 = a4;
  v13 = &a5;
  v12 = 16LL;
  v15 = &a6;
  v14 = 4LL;
  v17 = &a7;
  v19 = &a8;
  v21 = &a9;
  v16 = 8LL;
  v18 = 4LL;
  v20 = 4LL;
  v22 = 4LL;
  return McGenEventWriteKM(NDIS_PROVIDER_ID_Context, a2, a3, 7u, &v10);
}
