/*
 * XREFs of ?LogEPCError@@YAXPEBDHJ@Z @ 0x1800EFDC8
 * Callers:
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_1a1596b8a660531830807c55faa94ced___ @ 0x180063DC4 (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_1a1596b8a660531830807c55faa94ced___.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_1a1596b8a660531830807c55faa94ced___ @ 0x18006428C (CEndpointCharacteristics--GetDefaultFormat__lambda_1a1596b8a660531830807c55faa94ced___.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_1a1596b8a660531830807c55faa94ced___ @ 0x180064368 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_1a1596b8a660531830807c55faa94ced___.c)
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___ @ 0x1800E7E64 (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___.c)
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_2bd14234de5ddbaffe4847539b299dd7___ @ 0x1800E83B8 (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_2bd14234de5ddbaffe4847539b299dd7___.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___ @ 0x1800E8984 (CEndpointCharacteristics--GetDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_2bd14234de5ddbaffe4847539b299dd7___ @ 0x1800E8A98 (CEndpointCharacteristics--GetDefaultFormat__lambda_2bd14234de5ddbaffe4847539b299dd7___.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_2bd14234de5ddbaffe4847539b299dd7___ @ 0x1800E8BD8 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_2bd14234de5ddbaffe4847539b299dd7___.c)
 *     ?GetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x1800EB598 (-GetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x1800ED620 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 * Callees:
 *     _TlgCreateSz @ 0x1800059B0 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180043F18 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 */

void __fastcall LogEPCError(const char *a1, unsigned int a2, int a3)
{
  const CHAR *v3; // r9
  int v4; // r10d
  LPCGUID v5; // r8
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp+17h] BYREF
  GUID *p_pRelatedActivityId; // [rsp+60h] [rbp+27h]
  int v9; // [rsp+68h] [rbp+2Fh]
  int v10; // [rsp+6Ch] [rbp+33h]
  unsigned __int8 *Data4; // [rsp+70h] [rbp+37h]
  int v12; // [rsp+78h] [rbp+3Fh]
  int v13; // [rsp+7Ch] [rbp+43h]
  GUID pRelatedActivityId; // [rsp+A8h] [rbp+6Fh] BYREF

  if ( a3 < 0 )
  {
    *(_DWORD *)pRelatedActivityId.Data4 = a3;
    pRelatedActivityId.Data1 = a2;
    if ( (unsigned int)hProvider > 3 )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 4uLL) )
      {
        TlgCreateSz(&pDesc, v3);
        v10 = 0;
        v13 = 0;
        Data4 = pRelatedActivityId.Data4;
        p_pRelatedActivityId = &pRelatedActivityId;
        v9 = v4;
        v12 = v4;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18014791D, v5, &pRelatedActivityId, 5u, &pData);
      }
    }
  }
}
