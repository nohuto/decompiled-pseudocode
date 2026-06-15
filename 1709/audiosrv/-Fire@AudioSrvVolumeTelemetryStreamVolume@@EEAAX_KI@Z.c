/*
 * XREFs of ?Fire@AudioSrvVolumeTelemetryStreamVolume@@EEAAX_KI@Z @ 0x180011680
 * Callers:
 *     ?RecalculateVolume@CAudioStream@@UEAAJXZ @ 0x18001B730 (-RecalculateVolume@CAudioStream@@UEAAJXZ.c)
 *     ?LogTelemetry@AudioSrvVolumeTelemetry@@IEAA_NXZ @ 0x180030FA8 (-LogTelemetry@AudioSrvVolumeTelemetry@@IEAA_NXZ.c)
 * Callees:
 *     _TlgCreateWsz @ 0x18002C198 (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     atexit @ 0x18003313C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18005FD5C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

void __fastcall AudioSrvVolumeTelemetryStreamVolume::Fire(
        AudioSrvVolumeTelemetryStreamVolume *this,
        __int64 a2,
        unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v5; // r10
  const CHAR *v6; // rdx
  const WCHAR *v7; // rdx
  const WCHAR *v8; // rdx
  unsigned __int64 v9; // r11
  int v10; // r11d
  __int64 v11; // r10
  __int64 v12; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-D0h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v15; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v16[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+50h] [rbp-B0h]
  unsigned __int16 *v18; // [rsp+60h] [rbp-A0h] BYREF
  int v19; // [rsp+68h] [rbp-98h]
  int v20; // [rsp+6Ch] [rbp-94h]
  void *v21; // [rsp+70h] [rbp-90h]
  int v22; // [rsp+78h] [rbp-88h]
  int v23; // [rsp+7Ch] [rbp-84h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+90h] [rbp-70h] BYREF
  char *v26; // [rsp+A0h] [rbp-60h]
  int v27; // [rsp+A8h] [rbp-58h]
  int v28; // [rsp+ACh] [rbp-54h]
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+B0h] [rbp-50h] BYREF
  char *v30; // [rsp+C0h] [rbp-40h]
  int v31; // [rsp+C8h] [rbp-38h]
  int v32; // [rsp+CCh] [rbp-34h]
  char *v33; // [rsp+D0h] [rbp-30h]
  int v34; // [rsp+D8h] [rbp-28h]
  int v35; // [rsp+DCh] [rbp-24h]
  __int64 *v36; // [rsp+E0h] [rbp-20h]
  int v37; // [rsp+E8h] [rbp-18h]
  int v38; // [rsp+ECh] [rbp-14h]
  __int64 *v39; // [rsp+F0h] [rbp-10h]
  int v40; // [rsp+F8h] [rbp-8h]
  int v41; // [rsp+FCh] [rbp-4h]
  __int64 v42; // [rsp+138h] [rbp+38h] BYREF

  v42 = a2;
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
  v5 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v5 > 4u
    && (*(_QWORD *)(v5 + 16) & 0x400000000000LL) != 0
    && (*(_QWORD *)(v5 + 24) & 0x400000000000LL) == *(_QWORD *)(v5 + 24) )
  {
    v6 = (char *)this + 72;
    if ( *((_QWORD *)this + 12) >= 0x10uLL )
      v6 = *(const CHAR **)v6;
    TlgCreateSz(&pDesc, v6);
    v7 = (const WCHAR *)((char *)this + 104);
    if ( *((_QWORD *)this + 16) >= 8uLL )
      v7 = *(const WCHAR **)v7;
    TlgCreateWsz(&v25, v7);
    v28 = 0;
    v8 = (const WCHAR *)((char *)this + 144);
    v27 = v9;
    v26 = (char *)this + 136;
    if ( *((_QWORD *)this + 21) >= v9 )
      v8 = *(const WCHAR **)v8;
    TlgCreateWsz(&v29, v8);
    v32 = 0;
    v35 = 0;
    v38 = 0;
    v41 = 0;
    v33 = (char *)this + 180;
    v36 = &v15;
    v39 = &v42;
    v30 = (char *)this + 176;
    v31 = 4;
    v34 = 4;
    v15 = v3;
    v37 = v10;
    v40 = v10;
    v16[1] = 4;
    v18 = *(unsigned __int16 **)(v11 + 8);
    v16[0] = ((unsigned int)&unk_18010E722 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v12 = *(_QWORD *)(v11 + 32);
    v17 = 0x400000000000LL;
    v19 = *v18;
    v21 = &unk_18010E72D;
    v20 = 2;
    v22 = 170;
    v23 = 1;
    EtwEventWriteTransfer(v12, v16, 0LL, 0LL, 10, &v18);
  }
}
