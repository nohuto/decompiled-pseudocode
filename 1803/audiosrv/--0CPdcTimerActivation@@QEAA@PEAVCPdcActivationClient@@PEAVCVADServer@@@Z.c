/*
 * XREFs of ??0CPdcTimerActivation@@QEAA@PEAVCPdcActivationClient@@PEAVCVADServer@@@Z @ 0x180060130
 * Callers:
 *     ??$make_shared@VCPdcTimerActivation@@PEAVCPdcActivationClient@@AEAPEAVCVADServer@@@std@@YA?AV?$shared_ptr@VCPdcTimerActivation@@@0@$$QEAPEAVCPdcActivationClient@@AEAPEAVCVADServer@@@Z @ 0x18006398C (--$make_shared@VCPdcTimerActivation@@PEAVCPdcActivationClient@@AEAPEAVCVADServer@@@std@@YA-AV-$s.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     Pdcv2ActivationClientActivate @ 0x180029C80 (Pdcv2ActivationClientActivate.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     ?GetUniqueStreamIdentifier@CVADServer@@QEAA_KXZ @ 0x1800481F4 (-GetUniqueStreamIdentifier@CVADServer@@QEAA_KXZ.c)
 *     ?GetClientFriendlyName@CAudioStream@@QEAAPEBGXZ @ 0x180060024 (-GetClientFriendlyName@CAudioStream@@QEAAPEBGXZ.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     Pdcv2ActivationClientSetBrokeredProcessId @ 0x180065238 (Pdcv2ActivationClientSetBrokeredProcessId.c)
 */

CPdcTimerActivation *__fastcall CPdcTimerActivation::CPdcTimerActivation(
        CPdcTimerActivation *this,
        struct CPdcActivationClient *a2,
        CAudioStream **a3)
{
  wchar_t *ClientFriendlyName; // rdx
  __int64 v6; // r9
  const wchar_t *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  const struct _TlgProvider_t *v10; // rdi
  CVADServer *v11; // rcx
  LPCGUID v12; // r8
  LPCGUID v13; // r9
  struct _FILETIME cData; // [rsp+20h] [rbp-E0h]
  int pData; // [rsp+28h] [rbp-D8h]
  int v17; // [rsp+40h] [rbp-C0h] BYREF
  int v18; // [rsp+44h] [rbp-BCh] BYREF
  int v19; // [rsp+48h] [rbp-B8h] BYREF
  int v20; // [rsp+4Ch] [rbp-B4h] BYREF
  CVADServer *v21; // [rsp+50h] [rbp-B0h] BYREF
  __int64 UniqueStreamIdentifier; // [rsp+58h] [rbp-A8h] BYREF
  int v23[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v24; // [rsp+68h] [rbp-98h]
  const wchar_t *v25; // [rsp+70h] [rbp-90h]
  _QWORD *v26; // [rsp+78h] [rbp-88h]
  __int64 v27; // [rsp+80h] [rbp-80h]
  _QWORD v28[3]; // [rsp+90h] [rbp-70h] BYREF
  char v29[152]; // [rsp+A8h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR v30; // [rsp+140h] [rbp+40h] BYREF
  CVADServer **v31; // [rsp+160h] [rbp+60h]
  __int64 v32; // [rsp+168h] [rbp+68h]
  int *v33; // [rsp+170h] [rbp+70h]
  __int64 v34; // [rsp+178h] [rbp+78h]
  __int64 *p_UniqueStreamIdentifier; // [rsp+180h] [rbp+80h]
  __int64 v36; // [rsp+188h] [rbp+88h]
  int *v37; // [rsp+190h] [rbp+90h]
  __int64 v38; // [rsp+198h] [rbp+98h]
  int *v39; // [rsp+1A0h] [rbp+A0h]
  __int64 v40; // [rsp+1A8h] [rbp+A8h]

  *((_QWORD *)this + 1) = a2;
  *((_QWORD *)this + 2) = a3;
  v28[1] = a3;
  *(_QWORD *)this = 0LL;
  v28[0] = 1LL;
  v28[2] = 496LL;
  memset_0(v29, 0, 0x90uLL);
  ClientFriendlyName = CAudioStream::GetClientFriendlyName(a3[24]);
  v23[0] = 1;
  v23[1] = 300;
  v26 = v28;
  v7 = L"Unknown";
  v24 = 0LL;
  v25 = L"Unknown";
  v27 = 0LL;
  if ( ClientFriendlyName )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( ClientFriendlyName[v8] );
    if ( v8 )
      v7 = ClientFriendlyName;
    v25 = v7;
  }
  v18 = Pdcv2ActivationClientActivate(**((_QWORD **)this + 1), v23, *((_QWORD *)this + 2), v6, cData, pData, this, &v19);
  if ( v18 >= 0 )
    Pdcv2ActivationClientSetBrokeredProcessId(*(_QWORD *)this, *((unsigned int *)a3 + 16));
  v10 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                                     v9,
                                                     lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                                       + 1);
  if ( *(_DWORD *)v10 > 4u )
  {
    v11 = (CVADServer *)*((_QWORD *)this + 2);
    v31 = &v21;
    v21 = v11;
    v32 = 8LL;
    v17 = *((_DWORD *)v11 + 16);
    v33 = &v17;
    v34 = 4LL;
    UniqueStreamIdentifier = CVADServer::GetUniqueStreamIdentifier(v11);
    p_UniqueStreamIdentifier = &UniqueStreamIdentifier;
    v37 = &v18;
    v39 = &v20;
    v36 = 8LL;
    v38 = 4LL;
    v20 = v19;
    v40 = 4LL;
    TlgWrite(v10, &unk_18014719E, v12, v13, 7u, &v30);
  }
  return this;
}
