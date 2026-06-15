/*
 * XREFs of ?LogEPCError@@YAXPEBDHJ@Z @ 0x18002D7BC
 * Callers:
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2___ @ 0x18004BC5C (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2___.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2___ @ 0x18004C114 (CEndpointCharacteristics--GetDefaultFormat__lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2___.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2___ @ 0x18004C1F0 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2___.c)
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x18004CAC0 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHPEAPEAVCEndpointChar.c)
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___ @ 0x1800BA638 (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___.c)
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_4d461d498790dddb1db29f8fdd447ecc___ @ 0x1800BAB88 (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_4d461d498790dddb1db29f8fdd447ecc___.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___ @ 0x1800BB150 (CEndpointCharacteristics--GetDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_4d461d498790dddb1db29f8fdd447ecc___ @ 0x1800BB264 (CEndpointCharacteristics--GetDefaultFormat__lambda_4d461d498790dddb1db29f8fdd447ecc___.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_4d461d498790dddb1db29f8fdd447ecc___ @ 0x1800BB3A4 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_4d461d498790dddb1db29f8fdd447ecc___.c)
 *     ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJXZ @ 0x1800BC5EC (-ClearMixFormatCache@CEndpointCharacteristics@@QEAAJXZ.c)
 *     ?GetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x1800BD5AC (-GetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x1800BF070 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 * Callees:
 *     _TlgCreateSz @ 0x180016D60 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800266D8 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 */

void __fastcall LogEPCError(const char *a1, int a2, int a3)
{
  const CHAR *v3; // r9
  int v4; // r10d
  LPCGUID v5; // r8
  LPCGUID v6; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp+7h] BYREF
  int *v9; // [rsp+60h] [rbp+17h]
  int v10; // [rsp+68h] [rbp+1Fh]
  int v11; // [rsp+6Ch] [rbp+23h]
  int *v12; // [rsp+70h] [rbp+27h]
  int v13; // [rsp+78h] [rbp+2Fh]
  int v14; // [rsp+7Ch] [rbp+33h]
  int v15; // [rsp+B8h] [rbp+6Fh] BYREF
  int v16; // [rsp+C0h] [rbp+77h] BYREF

  if ( a3 < 0 )
  {
    v16 = a3;
    v15 = a2;
    if ( (unsigned int)hProvider > 3 )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 4uLL) )
      {
        TlgCreateSz(&pDesc, v3);
        v11 = 0;
        v14 = 0;
        v12 = &v16;
        v9 = &v15;
        v10 = v4;
        v13 = v4;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800FA8C5, v5, v6, 5u, &pData);
      }
    }
  }
}
