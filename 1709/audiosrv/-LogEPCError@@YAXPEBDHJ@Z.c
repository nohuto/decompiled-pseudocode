/*
 * XREFs of ?LogEPCError@@YAXPEBDHJ@Z @ 0x180031248
 * Callers:
 *     ?GetStreamGroupFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180022708 (-GetStreamGroupFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ?GetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x180022814 (-GetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_e9af1581bd6c783f369e35704f6cd4a0___ @ 0x180035CC0 (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_e9af1581bd6c783f369e35704f6cd4a0___.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_e9af1581bd6c783f369e35704f6cd4a0___ @ 0x180036178 (CEndpointCharacteristics--GetDefaultFormat__lambda_e9af1581bd6c783f369e35704f6cd4a0___.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_e9af1581bd6c783f369e35704f6cd4a0___ @ 0x180036254 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_e9af1581bd6c783f369e35704f6cd4a0___.c)
 *     ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJH@Z @ 0x180036398 (-ClearMixFormatCache@CEndpointCharacteristics@@QEAAJH@Z.c)
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___ @ 0x1800AE59C (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___.c)
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_2bd14234de5ddbaffe4847539b299dd7___ @ 0x1800AEAEC (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_2bd14234de5ddbaffe4847539b299dd7___.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___ @ 0x1800AF0B4 (CEndpointCharacteristics--GetDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_2bd14234de5ddbaffe4847539b299dd7___ @ 0x1800AF1C8 (CEndpointCharacteristics--GetDefaultFormat__lambda_2bd14234de5ddbaffe4847539b299dd7___.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_2bd14234de5ddbaffe4847539b299dd7___ @ 0x1800AF308 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_2bd14234de5ddbaffe4847539b299dd7___.c)
 *     ?GetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x1800B56C8 (-GetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x1800B8530 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 */

void __fastcall LogEPCError(LPCSTR psz, int a2, int a3)
{
  LPCGUID v3; // r8
  LPCGUID v4; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp+17h] BYREF
  int *v7; // [rsp+60h] [rbp+27h]
  int v8; // [rsp+68h] [rbp+2Fh]
  int v9; // [rsp+6Ch] [rbp+33h]
  int *v10; // [rsp+70h] [rbp+37h]
  int v11; // [rsp+78h] [rbp+3Fh]
  int v12; // [rsp+7Ch] [rbp+43h]
  int v13; // [rsp+A8h] [rbp+6Fh] BYREF
  int v14; // [rsp+B0h] [rbp+77h] BYREF

  if ( a3 < 0 )
  {
    v14 = a3;
    v13 = a2;
    if ( (unsigned int)hProvider > 3 && (byte_18014A340 & 4) != 0 && (qword_18014A348 & 4) == qword_18014A348 )
    {
      TlgCreateSz(&pDesc, psz);
      v9 = 0;
      v12 = 0;
      v10 = &v14;
      v7 = &v13;
      v8 = 4;
      v11 = 4;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180110C20, v3, v4, 5u, &pData);
    }
  }
}
