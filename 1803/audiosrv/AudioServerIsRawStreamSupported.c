/*
 * XREFs of AudioServerIsRawStreamSupported @ 0x1800C5500
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800097F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800098C8 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsValidRequestedConnectorType@@YAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180063980 (-IsValidRequestedConnectorType@@YAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??1?$CComPtr@VCEndpointCharacteristics@@@ATL@@QEAA@XZ @ 0x180098358 (--1-$CComPtr@VCEndpointCharacteristics@@@ATL@@QEAA@XZ.c)
 *     ?AllowRawStreamCreation@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800E9D14 (-AllowRawStreamCreation@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_.c)
 */

__int64 __fastcall AudioServerIsRawStreamSupported(
        __int64 a1,
        __int64 a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        _DWORD *a4)
{
  struct _TP_TIMER **v7; // rax
  __int64 v8; // r8
  int v9; // ebx
  CEndpointCharacteristics *v11; // [rsp+30h] [rbp-48h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v11 = 0LL;
  v7 = (struct _TP_TIMER **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                              a1,
                              lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, v7[1], v8, (struct _TP_TIMER *)L"AudioServerIsRawStreamSupported");
  if ( !IsValidRequestedConnectorType(a3) )
  {
    v9 = -2147024809;
LABEL_3:
    AudSrvTraceLoggingErrorHelper("AudioServerIsRawStreamSupported", 4641, v9);
    goto LABEL_4;
  }
  v9 = (*(__int64 (__fastcall **)(CEndpointCharacteristicsCache *, __int64, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
         g_pEndpointCharacteristicsCache,
         a2,
         0LL,
         &v11);
  if ( v9 < 0 )
    goto LABEL_3;
  *a4 = CEndpointCharacteristics::AllowRawStreamCreation(v11, a3);
LABEL_4:
  if ( v9 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1222,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v9);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  ATL::CComPtr<CEndpointCharacteristics>::~CComPtr<CEndpointCharacteristics>((__int64 *)&v11);
  return (unsigned int)v9;
}
