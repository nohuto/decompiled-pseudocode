/*
 * XREFs of ?Renew@CPdcTimerActivation@@QEAAXXZ @ 0x1800D449C
 * Callers:
 *     ?ActivatorCallback@CPdcActivationClient@@IEAAXPEAVCVADServer@@@Z @ 0x1800D433C (-ActivatorCallback@CPdcActivationClient@@IEAAXPEAVCVADServer@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     ?GetUniqueStreamIdentifier@CVADServer@@QEAA_KXZ @ 0x1800481F4 (-GetUniqueStreamIdentifier@CVADServer@@QEAA_KXZ.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     Pdcv2ActivationClientRenewActivation @ 0x18010BC88 (Pdcv2ActivationClientRenewActivation.c)
 */

void __fastcall CPdcTimerActivation::Renew(CPdcTimerActivation *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  const struct _TlgProvider_t *v4; // rdi
  CVADServer *v5; // rcx
  int v6; // eax
  __int64 UniqueStreamIdentifier; // rax
  LPCGUID v8; // r8
  LPCGUID v9; // r9
  int v10; // [rsp+30h] [rbp-D0h] BYREF
  int v11; // [rsp+34h] [rbp-CCh] BYREF
  int v12; // [rsp+38h] [rbp-C8h] BYREF
  int v13; // [rsp+3Ch] [rbp-C4h] BYREF
  CVADServer *v14; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v16[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v17; // [rsp+58h] [rbp-A8h]
  __int64 v18; // [rsp+60h] [rbp-A0h]
  _QWORD *v19; // [rsp+68h] [rbp-98h]
  __int64 v20; // [rsp+70h] [rbp-90h]
  _QWORD v21[3]; // [rsp+80h] [rbp-80h] BYREF
  char v22[152]; // [rsp+98h] [rbp-68h] BYREF
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

  v21[1] = *((_QWORD *)this + 2);
  v21[0] = 1LL;
  v21[2] = 496LL;
  memset_0(v22, 0, 0x90uLL);
  v17 = 0LL;
  v18 = 0LL;
  v2 = *(_QWORD *)this;
  v19 = v21;
  v16[0] = 1;
  v16[1] = 300;
  v20 = 0LL;
  if ( v2 )
  {
    v11 = Pdcv2ActivationClientRenewActivation(v2, v16, &v12);
    v4 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                                      v3,
                                                      lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                                        + 1);
    if ( *(_DWORD *)v4 > 4u )
    {
      v5 = (CVADServer *)*((_QWORD *)this + 2);
      v26 = 0;
      v24 = &v14;
      v14 = v5;
      v25 = 8;
      v6 = *((_DWORD *)v5 + 16);
      v29 = 0;
      v10 = v6;
      v27 = &v10;
      v28 = 4;
      UniqueStreamIdentifier = CVADServer::GetUniqueStreamIdentifier(v5);
      v32 = 0;
      v35 = 0;
      v38 = 0;
      v15 = UniqueStreamIdentifier;
      v30 = &v15;
      v33 = &v11;
      v13 = v12;
      v36 = &v13;
      v31 = 8;
      v34 = 4;
      v37 = 4;
      TlgWrite(v4, &unk_1801470E3, v8, v9, 7u, &pData);
    }
  }
}
