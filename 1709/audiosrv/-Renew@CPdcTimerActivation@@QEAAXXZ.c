/*
 * XREFs of ?Renew@CPdcTimerActivation@@QEAAXXZ @ 0x18009CB9C
 * Callers:
 *     ?ActivatorCallback@CPdcActivationClient@@IEAAXPEAVCVADServer@@@Z @ 0x18009C9C8 (-ActivatorCallback@CPdcActivationClient@@IEAAXPEAVCVADServer@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     ?GetUniqueStreamIdentifier@CVADServer@@QEAA_KXZ @ 0x180025BC4 (-GetUniqueStreamIdentifier@CVADServer@@QEAA_KXZ.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     atexit @ 0x18003313C (atexit.c)
 *     memset @ 0x180033A5A (memset.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18005FD5C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     Pdcv2ActivationClientRenewActivation @ 0x1800DE320 (Pdcv2ActivationClientRenewActivation.c)
 */

void __fastcall CPdcTimerActivation::Renew(CPdcTimerActivation *this)
{
  __int64 v2; // rcx
  void *v3; // r8
  const struct _TlgProvider_t *v4; // rbx
  CVADServer *v5; // rcx
  int v6; // eax
  __int64 UniqueStreamIdentifier; // rax
  LPCGUID v8; // r8
  LPCGUID v9; // r9
  WINBOOL fPending; // [rsp+30h] [rbp-D0h] BYREF
  int v11; // [rsp+34h] [rbp-CCh] BYREF
  int v12; // [rsp+38h] [rbp-C8h] BYREF
  int v13; // [rsp+3Ch] [rbp-C4h] BYREF
  int v14; // [rsp+40h] [rbp-C0h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-B8h] BYREF
  CVADServer *v16; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v17; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD v18[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v19; // [rsp+68h] [rbp-98h]
  __int64 v20; // [rsp+70h] [rbp-90h]
  _QWORD *v21; // [rsp+78h] [rbp-88h]
  _QWORD v22[22]; // [rsp+80h] [rbp-80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+130h] [rbp+30h] BYREF
  CVADServer **v24; // [rsp+150h] [rbp+50h]
  int v25; // [rsp+158h] [rbp+58h]
  int v26; // [rsp+15Ch] [rbp+5Ch]
  int *v27; // [rsp+160h] [rbp+60h]
  int v28; // [rsp+168h] [rbp+68h]
  int v29; // [rsp+16Ch] [rbp+6Ch]
  __int64 *v30; // [rsp+170h] [rbp+70h]
  int v31; // [rsp+178h] [rbp+78h]
  int v32; // [rsp+17Ch] [rbp+7Ch]
  int *v33; // [rsp+180h] [rbp+80h]
  int v34; // [rsp+188h] [rbp+88h]
  int v35; // [rsp+18Ch] [rbp+8Ch]
  int *v36; // [rsp+190h] [rbp+90h]
  int v37; // [rsp+198h] [rbp+98h]
  int v38; // [rsp+19Ch] [rbp+9Ch]

  v22[1] = *((_QWORD *)this + 2);
  v22[0] = 1LL;
  v22[2] = 456LL;
  memset(&v22[3], 0, 0x90uLL);
  v2 = *(_QWORD *)this;
  v19 = 0LL;
  v20 = 0LL;
  v18[0] = 1;
  v18[1] = 300;
  v21 = v22;
  if ( v2 )
  {
    v12 = Pdcv2ActivationClientRenewActivation(v2, v18, &v13);
    InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context);
    if ( fPending )
    {
      Context = qword_18014C2B8;
      qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
      qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0, v3);
      InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
    }
    v4 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v4 > 4u )
    {
      v5 = (CVADServer *)*((_QWORD *)this + 2);
      v26 = 0;
      v24 = &v16;
      v16 = v5;
      v25 = 8;
      v6 = *((_DWORD *)v5 + 16);
      v29 = 0;
      v11 = v6;
      v27 = &v11;
      v28 = 4;
      UniqueStreamIdentifier = CVADServer::GetUniqueStreamIdentifier(v5);
      v32 = 0;
      v35 = 0;
      v38 = 0;
      v17 = UniqueStreamIdentifier;
      v30 = &v17;
      v33 = &v12;
      v14 = v13;
      v36 = &v14;
      v31 = 8;
      v34 = 4;
      v37 = 4;
      TlgWrite(v4, &unk_18011062C, v8, v9, 7u, &pData);
    }
  }
}
