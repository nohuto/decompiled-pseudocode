/*
 * XREFs of AudioServerIsRawStreamSupported @ 0x1800A3810
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004B548 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?IsValidRequestedConnectorType@@YAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18004B8FC (-IsValidRequestedConnectorType@@YAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z.c)
 *     ?GetAliasedEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x18004CA8C (-GetAliasedEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z.c)
 *     ??1?$CComPtr@VCEndpointCharacteristics@@@ATL@@QEAA@XZ @ 0x18007C1B0 (--1-$CComPtr@VCEndpointCharacteristics@@@ATL@@QEAA@XZ.c)
 *     ?AllowRawStreamCreation@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800BC1C8 (-AllowRawStreamCreation@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_.c)
 */

__int64 __fastcall AudioServerIsRawStreamSupported(
        __int64 a1,
        __int64 a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        _DWORD *a4)
{
  const unsigned __int16 *v6; // r10
  int AliasedEndpointCharacteristics; // ebx
  struct CEndpointCharacteristics *v9[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v9[0] = 0LL;
  if ( !IsValidRequestedConnectorType(a3) )
  {
    AliasedEndpointCharacteristics = -2147024809;
LABEL_3:
    AudSrvTraceLoggingErrorHelper("AudioServerIsRawStreamSupported", 4334, AliasedEndpointCharacteristics);
    goto LABEL_4;
  }
  AliasedEndpointCharacteristics = GetAliasedEndpointCharacteristics(v6, 0, v9);
  if ( AliasedEndpointCharacteristics < 0 )
    goto LABEL_3;
  *a4 = CEndpointCharacteristics::AllowRawStreamCreation(v9[0], a3);
LABEL_4:
  if ( AliasedEndpointCharacteristics < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10EF,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)AliasedEndpointCharacteristics);
  ATL::CComPtr<CEndpointCharacteristics>::~CComPtr<CEndpointCharacteristics>((volatile signed __int32 **)v9);
  return (unsigned int)AliasedEndpointCharacteristics;
}
