/*
 * XREFs of ??0CPdcTimerActivation@@QEAA@PEAVCPdcActivationClient@@PEAVCVADServer@@@Z @ 0x18002A8D4
 * Callers:
 *     ??$make_shared@VCPdcTimerActivation@@PEAVCPdcActivationClient@@AEAPEAVCVADServer@@@std@@YA?AV?$shared_ptr@VCPdcTimerActivation@@@0@$$QEAPEAVCPdcActivationClient@@AEAPEAVCVADServer@@@Z @ 0x18002CA6C (--$make_shared@VCPdcTimerActivation@@PEAVCPdcActivationClient@@AEAPEAVCVADServer@@@std@@YA-AV-$s.c)
 * Callees:
 *     ?GetClientFriendlyName@CAudioStream@@QEAAPEBGXZ @ 0x18001B6D4 (-GetClientFriendlyName@CAudioStream@@QEAAPEBGXZ.c)
 *     ?GetUniqueStreamIdentifier@CVADServer@@QEAA_KXZ @ 0x180025BC4 (-GetUniqueStreamIdentifier@CVADServer@@QEAA_KXZ.c)
 *     Pdcv2ActivationClientActivate @ 0x18002B784 (Pdcv2ActivationClientActivate.c)
 *     Pdcv2ActivationClientSetBrokeredProcessId @ 0x18002BCAC (Pdcv2ActivationClientSetBrokeredProcessId.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     atexit @ 0x18003313C (atexit.c)
 *     memset @ 0x180033A5A (memset.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18005FD5C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

CPdcTimerActivation *__fastcall CPdcTimerActivation::CPdcTimerActivation(
        CPdcTimerActivation *this,
        struct CPdcActivationClient *a2,
        CAudioStream **a3)
{
  wchar_t *ClientFriendlyName; // rdx
  int v6; // r9d
  const wchar_t *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdi
  CVADServer *v10; // rcx
  __int64 v11; // rcx
  WINBOOL fPending; // [rsp+40h] [rbp-C0h] BYREF
  int v14; // [rsp+44h] [rbp-BCh] BYREF
  _DWORD v15[2]; // [rsp+48h] [rbp-B8h] BYREF
  int v16; // [rsp+50h] [rbp-B0h] BYREF
  LPVOID Context; // [rsp+58h] [rbp-A8h] BYREF
  CVADServer *v18; // [rsp+60h] [rbp-A0h] BYREF
  __int64 UniqueStreamIdentifier; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v20[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v21; // [rsp+78h] [rbp-88h]
  _DWORD v22[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v23; // [rsp+88h] [rbp-78h]
  const wchar_t *v24; // [rsp+90h] [rbp-70h]
  _QWORD *v25; // [rsp+98h] [rbp-68h]
  _QWORD v26[22]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int16 *v27; // [rsp+150h] [rbp+50h] BYREF
  int v28; // [rsp+158h] [rbp+58h]
  int v29; // [rsp+15Ch] [rbp+5Ch]
  void *v30; // [rsp+160h] [rbp+60h]
  int v31; // [rsp+168h] [rbp+68h]
  int v32; // [rsp+16Ch] [rbp+6Ch]
  CVADServer **v33; // [rsp+170h] [rbp+70h]
  __int64 v34; // [rsp+178h] [rbp+78h]
  int *v35; // [rsp+180h] [rbp+80h]
  __int64 v36; // [rsp+188h] [rbp+88h]
  __int64 *p_UniqueStreamIdentifier; // [rsp+190h] [rbp+90h]
  __int64 v38; // [rsp+198h] [rbp+98h]
  _DWORD *v39; // [rsp+1A0h] [rbp+A0h]
  __int64 v40; // [rsp+1A8h] [rbp+A8h]
  int *v41; // [rsp+1B0h] [rbp+B0h]
  __int64 v42; // [rsp+1B8h] [rbp+B8h]

  *((_QWORD *)this + 1) = a2;
  *((_QWORD *)this + 2) = a3;
  v26[1] = a3;
  *(_QWORD *)this = 0LL;
  v26[0] = 1LL;
  v26[2] = 456LL;
  memset(&v26[3], 0, 0x90uLL);
  ClientFriendlyName = CAudioStream::GetClientFriendlyName(a3[24]);
  v22[0] = 1;
  v22[1] = 300;
  v25 = v26;
  v7 = L"Unknown";
  v23 = 0LL;
  v24 = L"Unknown";
  if ( ClientFriendlyName )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( ClientFriendlyName[v8] );
    if ( v8 )
      v7 = ClientFriendlyName;
    v24 = v7;
  }
  v15[0] = Pdcv2ActivationClientActivate(**((_QWORD **)this + 1), (unsigned int)v22, *((_QWORD *)this + 2), v6);
  if ( v15[0] >= 0 )
    Pdcv2ActivationClientSetBrokeredProcessId(*(_QWORD *)this, *((unsigned int *)a3 + 16));
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
  v9 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v9 > 4u )
  {
    v10 = (CVADServer *)*((_QWORD *)this + 2);
    v33 = &v18;
    v18 = v10;
    v34 = 8LL;
    v14 = *((_DWORD *)v10 + 16);
    v35 = &v14;
    v36 = 4LL;
    UniqueStreamIdentifier = CVADServer::GetUniqueStreamIdentifier(v10);
    p_UniqueStreamIdentifier = &UniqueStreamIdentifier;
    v39 = v15;
    v16 = v15[1];
    v41 = &v16;
    v38 = 8LL;
    v40 = 4LL;
    v42 = 4LL;
    v20[1] = 4;
    v27 = *(unsigned __int16 **)(v9 + 8);
    v20[0] = ((unsigned int)&unk_18011068F - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v11 = *(_QWORD *)(v9 + 32);
    v21 = 0LL;
    v28 = *v27;
    v30 = &unk_18011069A;
    v29 = 2;
    v31 = 89;
    v32 = 1;
    EtwEventWriteTransfer(v11, v20, 0LL, 0LL, 7, &v27);
  }
  return this;
}
