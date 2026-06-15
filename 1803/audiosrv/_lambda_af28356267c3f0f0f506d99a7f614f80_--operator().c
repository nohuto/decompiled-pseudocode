/*
 * XREFs of _lambda_af28356267c3f0f0f506d99a7f614f80_::operator() @ 0x1800C67B4
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_af28356267c3f0f0f506d99a7f614f80__void_::_Do_call @ 0x1800C70C0 (std--_Func_impl_no_alloc__lambda_af28356267c3f0f0f506d99a7f614f80__void_--_Do_call.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180043DA4 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A66F8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RefreshConnectorFormats@CPolicyConfig@@SAJPEBG@Z @ 0x1800BCB5C (-RefreshConnectorFormats@CPolicyConfig@@SAJPEBG@Z.c)
 */

void __fastcall lambda_af28356267c3f0f0f506d99a7f614f80_::operator()(__int64 a1)
{
  const WCHAR **v2; // rax
  const WCHAR *v3; // rdx
  LPCGUID v4; // r8
  LPCGUID v5; // r9
  TraceLoggingHProvider v6; // r10
  UINT32 cData; // r11d
  const WCHAR **v8; // rax
  const WCHAR *v9; // rcx
  int refreshed; // eax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  __int64 v12; // [rsp+50h] [rbp-38h]
  int v13; // [rsp+58h] [rbp-30h]
  int v14; // [rsp+5Ch] [rbp-2Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  if ( **((_DWORD **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                       a1,
                       lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
        + 1) > 4u )
  {
    v14 = 0;
    v2 = *(const WCHAR ***)(a1 + 8);
    v12 = a1;
    v13 = 4;
    if ( v2 )
      v3 = *v2;
    else
      v3 = 0LL;
    TlgCreateWsz(&pDesc, v3);
    TlgWrite(v6, &unk_1801459D7, v4, v5, cData, &pData);
  }
  v8 = *(const WCHAR ***)(a1 + 8);
  if ( v8 )
    v9 = *v8;
  else
    v9 = 0LL;
  refreshed = CPolicyConfig::RefreshConnectorFormats(v9);
  if ( refreshed < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      192LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\softwarecaps.cpp",
      (const char *)(unsigned int)refreshed);
}
