/*
 * XREFs of ?Fire@AudioSrvVolumeTelemetrySessionVolume@@EEAAX_KI@Z @ 0x18007F7E0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180004334 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800266D8 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x18002854C (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 */

void __fastcall AudioSrvVolumeTelemetrySessionVolume::Fire(LPCWSTR *this, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  TraceLoggingHProvider *v5; // rax
  LPCGUID v6; // r8
  LPCGUID v7; // r9
  TraceLoggingHProvider v8; // r10
  __int64 v9; // [rsp+38h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+68h] [rbp-29h] BYREF
  char *v12; // [rsp+78h] [rbp-19h]
  __int64 v13; // [rsp+80h] [rbp-11h]
  char *v14; // [rsp+88h] [rbp-9h]
  __int64 v15; // [rsp+90h] [rbp-1h]
  char *v16; // [rsp+98h] [rbp+7h]
  __int64 v17; // [rsp+A0h] [rbp+Fh]
  __int64 *v18; // [rsp+A8h] [rbp+17h]
  __int64 v19; // [rsp+B0h] [rbp+1Fh]
  __int64 *v20; // [rsp+B8h] [rbp+27h]
  __int64 v21; // [rsp+C0h] [rbp+2Fh]
  __int64 v22; // [rsp+100h] [rbp+6Fh] BYREF

  v22 = a2;
  v3 = a3;
  v5 = (TraceLoggingHProvider *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                  (__int64)this,
                                  lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v5[1] > 4u )
  {
    if ( TlgKeywordOn(v5[1], 0x400000000000uLL) )
    {
      TlgCreateWsz(&pDesc, this[9]);
      v13 = 4LL;
      v12 = (char *)(this + 10);
      v14 = (char *)this + 84;
      v15 = 4LL;
      v16 = (char *)(this + 11);
      v18 = &v9;
      v20 = &v22;
      v17 = 4LL;
      v9 = v3;
      v19 = 8LL;
      v21 = 8LL;
      TlgWrite(v8, &unk_1800F8789, v6, v7, 8u, &pData);
    }
  }
}
