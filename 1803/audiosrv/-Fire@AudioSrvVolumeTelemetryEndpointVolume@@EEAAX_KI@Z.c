/*
 * XREFs of ?Fire@AudioSrvVolumeTelemetryEndpointVolume@@EEAAX_KI@Z @ 0x18009BB40
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180043DA4 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180043F18 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 */

void __fastcall AudioSrvVolumeTelemetryEndpointVolume::Fire(
        AudioSrvVolumeTelemetryEndpointVolume *this,
        __int64 a2,
        unsigned int a3)
{
  __int64 v3; // rdi
  TraceLoggingHProvider *v5; // rax
  const WCHAR *v6; // rdx
  int v7; // ecx
  LPCGUID v8; // r8
  LPCGUID v9; // r9
  TraceLoggingHProvider v10; // r10
  int v11; // [rsp+30h] [rbp-79h] BYREF
  __int64 v12; // [rsp+38h] [rbp-71h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-69h] BYREF
  char *v14; // [rsp+60h] [rbp-49h]
  __int64 v15; // [rsp+68h] [rbp-41h]
  char *v16; // [rsp+70h] [rbp-39h]
  __int64 v17; // [rsp+78h] [rbp-31h]
  char *v18; // [rsp+80h] [rbp-29h]
  __int64 v19; // [rsp+88h] [rbp-21h]
  char *v20; // [rsp+90h] [rbp-19h]
  __int64 v21; // [rsp+98h] [rbp-11h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A0h] [rbp-9h] BYREF
  int *v23; // [rsp+B0h] [rbp+7h]
  __int64 v24; // [rsp+B8h] [rbp+Fh]
  __int64 *v25; // [rsp+C0h] [rbp+17h]
  __int64 v26; // [rsp+C8h] [rbp+1Fh]
  __int64 *v27; // [rsp+D0h] [rbp+27h]
  __int64 v28; // [rsp+D8h] [rbp+2Fh]
  __int64 v29; // [rsp+118h] [rbp+6Fh] BYREF

  v29 = a2;
  v3 = a3;
  v5 = (TraceLoggingHProvider *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                  (__int64)this,
                                  lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v5[1] > 4u )
  {
    if ( TlgKeywordOn(v5[1], 0x400000000000uLL) )
    {
      v6 = (const WCHAR *)*((_QWORD *)this + 11);
      v14 = (char *)this + 72;
      v15 = 4LL;
      v16 = (char *)this + 76;
      v18 = (char *)this + 80;
      v20 = (char *)this + 84;
      v17 = 4LL;
      v19 = 4LL;
      v21 = 4LL;
      TlgCreateWsz(&pDesc, v6);
      v7 = *((_DWORD *)this + 24);
      v23 = &v11;
      v25 = &v12;
      v27 = &v29;
      v11 = v7;
      v24 = 4LL;
      v12 = v3;
      v26 = 8LL;
      v28 = 8LL;
      TlgWrite(v10, &unk_180144A52, v8, v9, 0xAu, &pData);
    }
  }
}
