/*
 * XREFs of ?Renew@CPdcTimerActivation@@QEAAXXZ @ 0x1800AE0DC
 * Callers:
 *     ?ActivatorCallback@CPdcActivationClient@@IEAAXPEAVCVADServer@@@Z @ 0x1800ADF80 (-ActivatorCallback@CPdcActivationClient@@IEAAXPEAVCVADServer@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180004334 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     memset @ 0x180049B8A (memset.c)
 *     ?GetUniqueStreamIdentifier@CVADServer@@QEAA_KXZ @ 0x18007AB70 (-GetUniqueStreamIdentifier@CVADServer@@QEAA_KXZ.c)
 *     Pdcv2ActivationClientRenewActivation @ 0x1800D1608 (Pdcv2ActivationClientRenewActivation.c)
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
  _QWORD v20[22]; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+120h] [rbp+20h] BYREF
  CVADServer **v22; // [rsp+140h] [rbp+40h]
  int v23; // [rsp+148h] [rbp+48h]
  int v24; // [rsp+14Ch] [rbp+4Ch]
  int *v25; // [rsp+150h] [rbp+50h]
  int v26; // [rsp+158h] [rbp+58h]
  int v27; // [rsp+15Ch] [rbp+5Ch]
  __int64 *v28; // [rsp+160h] [rbp+60h]
  int v29; // [rsp+168h] [rbp+68h]
  int v30; // [rsp+16Ch] [rbp+6Ch]
  int *v31; // [rsp+170h] [rbp+70h]
  int v32; // [rsp+178h] [rbp+78h]
  int v33; // [rsp+17Ch] [rbp+7Ch]
  int *v34; // [rsp+180h] [rbp+80h]
  int v35; // [rsp+188h] [rbp+88h]
  int v36; // [rsp+18Ch] [rbp+8Ch]

  v20[1] = *((_QWORD *)this + 2);
  v20[0] = 1LL;
  v20[2] = 432LL;
  memset(&v20[3], 0, 0x90uLL);
  v2 = *(_QWORD *)this;
  v17 = 0LL;
  v18 = 0LL;
  v16[0] = 1;
  v16[1] = 300;
  v19 = v20;
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
      v24 = 0;
      v22 = &v14;
      v14 = v5;
      v23 = 8;
      v6 = *((_DWORD *)v5 + 16);
      v27 = 0;
      v10 = v6;
      v25 = &v10;
      v26 = 4;
      UniqueStreamIdentifier = CVADServer::GetUniqueStreamIdentifier(v5);
      v30 = 0;
      v33 = 0;
      v36 = 0;
      v15 = UniqueStreamIdentifier;
      v28 = &v15;
      v31 = &v11;
      v13 = v12;
      v34 = &v13;
      v29 = 8;
      v32 = 4;
      v35 = 4;
      TlgWrite(v4, &unk_1800FA367, v8, v9, 7u, &pData);
    }
  }
}
