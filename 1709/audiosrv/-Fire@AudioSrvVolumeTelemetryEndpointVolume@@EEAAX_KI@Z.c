/*
 * XREFs of ?Fire@AudioSrvVolumeTelemetryEndpointVolume@@EEAAX_KI@Z @ 0x18005F850
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18002C198 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1800312F4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     atexit @ 0x18003313C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18005FD5C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

void __fastcall AudioSrvVolumeTelemetryEndpointVolume::Fire(
        AudioSrvVolumeTelemetryEndpointVolume *this,
        __int64 a2,
        unsigned int a3)
{
  __int64 v3; // rdi
  int v5; // r11d
  const WCHAR *v6; // rdx
  int v7; // ecx
  int v8; // r11d
  LPCGUID v9; // r8
  LPCGUID v10; // r9
  TraceLoggingHProvider v11; // r10
  WINBOOL fPending; // [rsp+30h] [rbp-89h] BYREF
  int v13; // [rsp+34h] [rbp-85h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-81h] BYREF
  __int64 v15; // [rsp+40h] [rbp-79h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-69h] BYREF
  char *v17; // [rsp+70h] [rbp-49h]
  int v18; // [rsp+78h] [rbp-41h]
  int v19; // [rsp+7Ch] [rbp-3Dh]
  char *v20; // [rsp+80h] [rbp-39h]
  int v21; // [rsp+88h] [rbp-31h]
  int v22; // [rsp+8Ch] [rbp-2Dh]
  char *v23; // [rsp+90h] [rbp-29h]
  int v24; // [rsp+98h] [rbp-21h]
  int v25; // [rsp+9Ch] [rbp-1Dh]
  char *v26; // [rsp+A0h] [rbp-19h]
  int v27; // [rsp+A8h] [rbp-11h]
  int v28; // [rsp+ACh] [rbp-Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B0h] [rbp-9h] BYREF
  int *v30; // [rsp+C0h] [rbp+7h]
  int v31; // [rsp+C8h] [rbp+Fh]
  int v32; // [rsp+CCh] [rbp+13h]
  __int64 *v33; // [rsp+D0h] [rbp+17h]
  int v34; // [rsp+D8h] [rbp+1Fh]
  int v35; // [rsp+DCh] [rbp+23h]
  __int64 *v36; // [rsp+E0h] [rbp+27h]
  int v37; // [rsp+E8h] [rbp+2Fh]
  int v38; // [rsp+ECh] [rbp+33h]
  __int64 v39; // [rsp+128h] [rbp+6Fh] BYREF

  v39 = a2;
  v3 = a3;
  InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    Context = qword_18014C2B8;
    qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
  }
  if ( **((_DWORD **)Context + 1) > 4u )
  {
    if ( TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000000uLL) )
    {
      v6 = (const WCHAR *)*((_QWORD *)this + 11);
      v19 = 0;
      v22 = 0;
      v25 = 0;
      v28 = 0;
      v17 = (char *)this + 72;
      v20 = (char *)this + 76;
      v23 = (char *)this + 80;
      v26 = (char *)this + 84;
      v18 = v5;
      v21 = v5;
      v24 = v5;
      v27 = v5;
      TlgCreateWsz(&pDesc, v6);
      v7 = *((_DWORD *)this + 24);
      v32 = 0;
      v35 = 0;
      v38 = 0;
      v30 = &v13;
      v33 = &v15;
      v13 = v7;
      v36 = &v39;
      v31 = v8;
      v15 = v3;
      v34 = v8 + 4;
      v37 = v8 + 4;
      TlgWrite(v11, &unk_18010E7D8, v9, v10, 0xAu, &pData);
    }
  }
}
