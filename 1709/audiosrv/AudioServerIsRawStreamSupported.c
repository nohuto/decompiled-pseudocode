/*
 * XREFs of AudioServerIsRawStreamSupported @ 0x1800900C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800353A0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsValidRequestedConnectorType@@YAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180035664 (-IsValidRequestedConnectorType@@YAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??1?$CComPtr@VCEndpointCharacteristics@@@ATL@@QEAA@XZ @ 0x18005B8BC (--1-$CComPtr@VCEndpointCharacteristics@@@ATL@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?AllowRawStreamCreation@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800B2108 (-AllowRawStreamCreation@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_.c)
 */

__int64 __fastcall AudioServerIsRawStreamSupported(
        __int64 a1,
        __int64 a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        _DWORD *a4)
{
  __int64 v6; // rdx
  int v7; // ebx
  CEndpointCharacteristics *v9[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v9[0] = 0LL;
  if ( !IsValidRequestedConnectorType(a3) )
  {
    v7 = -2147024809;
LABEL_3:
    AudSrvTraceLoggingErrorHelper("AudioServerIsRawStreamSupported", 4325, v7);
    goto LABEL_4;
  }
  v7 = (*(__int64 (__fastcall **)(CEndpointCharacteristicsCache *, __int64, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
         g_pEndpointCharacteristicsCache,
         v6,
         0LL,
         v9);
  if ( v7 < 0 )
    goto LABEL_3;
  *a4 = CEndpointCharacteristics::AllowRawStreamCreation(v9[0], a3);
LABEL_4:
  if ( v7 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10E6,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v7);
  ATL::CComPtr<CEndpointCharacteristics>::~CComPtr<CEndpointCharacteristics>((volatile signed __int32 **)v9);
  return (unsigned int)v7;
}
