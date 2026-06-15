/*
 * XREFs of ??0CPdcTimerActivation@@QEAA@PEAVCPdcActivationClient@@PEAVCVADServer@@@Z @ 0x1800276B4
 * Callers:
 *     ??$make_shared@VCPdcTimerActivation@@QEAVCPdcActivationClient@@AEAPEAVCVADServer@@@std@@YA?AV?$shared_ptr@VCPdcTimerActivation@@@0@$$QEBQEAVCPdcActivationClient@@AEAPEAVCVADServer@@@Z @ 0x18002711C (--$make_shared@VCPdcTimerActivation@@QEAVCPdcActivationClient@@AEAPEAVCVADServer@@@std@@YA-AV-$s.c)
 * Callees:
 *     ?GetUniqueStreamIdentifier@CAudioStream@@UEAA_JXZ @ 0x180018110 (-GetUniqueStreamIdentifier@CAudioStream@@UEAA_JXZ.c)
 *     ?GetClientFriendlyName@CAudioStream@@QEAAPEBGXZ @ 0x180018144 (-GetClientFriendlyName@CAudioStream@@QEAAPEBGXZ.c)
 *     Pdcv2ActivationClientActivate @ 0x1800279B0 (Pdcv2ActivationClientActivate.c)
 *     PdcReleaseRwLockExclusive2 @ 0x180028014 (PdcReleaseRwLockExclusive2.c)
 *     PdcAcquireRwLockExclusive2 @ 0x180028268 (PdcAcquireRwLockExclusive2.c)
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_SET_BROKERED_PROCESSID @ 0x180028360 (Pdcv2EventWrite_ACTIVATION_CLIENT_SET_BROKERED_PROCESSID.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180038800 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     atexit @ 0x18004925C (atexit.c)
 *     memset @ 0x180049B8A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
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
  char v10; // r15
  int v11; // r12d
  __int64 v12; // r14
  _DWORD *v13; // rbx
  __int64 v14; // r8
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rcx
  CAudioStream *v18; // rcx
  __int64 (*v19)(void); // rax
  __int64 UniqueStreamIdentifier; // rax
  __int64 v21; // rcx
  _BYTE v23[4]; // [rsp+40h] [rbp-C0h] BYREF
  WINBOOL fPending; // [rsp+44h] [rbp-BCh] BYREF
  int v25; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v26[2]; // [rsp+4Ch] [rbp-B4h] BYREF
  int v27; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v28; // [rsp+58h] [rbp-A8h] BYREF
  LPVOID Context; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v30; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v31[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v32; // [rsp+78h] [rbp-88h]
  _DWORD v33[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v34; // [rsp+88h] [rbp-78h]
  const wchar_t *v35; // [rsp+90h] [rbp-70h]
  _QWORD *v36; // [rsp+98h] [rbp-68h]
  _QWORD v37[22]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int16 *v38; // [rsp+150h] [rbp+50h]
  int v39; // [rsp+158h] [rbp+58h]
  int v40; // [rsp+15Ch] [rbp+5Ch]
  void *v41; // [rsp+160h] [rbp+60h]
  int v42; // [rsp+168h] [rbp+68h]
  int v43; // [rsp+16Ch] [rbp+6Ch]
  __int64 *v44; // [rsp+170h] [rbp+70h]
  __int64 v45; // [rsp+178h] [rbp+78h]
  int *v46; // [rsp+180h] [rbp+80h]
  __int64 v47; // [rsp+188h] [rbp+88h]
  __int64 *v48; // [rsp+190h] [rbp+90h]
  __int64 v49; // [rsp+198h] [rbp+98h]
  _DWORD *v50; // [rsp+1A0h] [rbp+A0h]
  __int64 v51; // [rsp+1A8h] [rbp+A8h]
  int *v52; // [rsp+1B0h] [rbp+B0h]
  __int64 v53; // [rsp+1B8h] [rbp+B8h]

  *((_QWORD *)this + 1) = a2;
  *((_QWORD *)this + 2) = a3;
  v37[0] = 1LL;
  *(_QWORD *)this = 0LL;
  v37[1] = a3;
  v37[2] = 432LL;
  memset(&v37[3], 0, 0x90uLL);
  ClientFriendlyName = CAudioStream::GetClientFriendlyName(a3[24]);
  v33[0] = 1;
  v33[1] = 300;
  v36 = v37;
  v7 = L"Unknown";
  v34 = 0LL;
  v35 = L"Unknown";
  if ( ClientFriendlyName )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( ClientFriendlyName[v8] );
    if ( v8 )
      v7 = ClientFriendlyName;
    v35 = v7;
  }
  v26[0] = Pdcv2ActivationClientActivate(**((_QWORD **)this + 1), (unsigned int)v33, *((_QWORD *)this + 2), v6);
  if ( v26[0] >= 0 )
  {
    v9 = *(_QWORD *)this;
    v10 = 0;
    v11 = *((_DWORD *)a3 + 16);
    v12 = 0LL;
    v23[0] = 0;
    v13 = 0LL;
    if ( v9 )
    {
      v12 = v9;
      if ( *(_DWORD *)(v9 + 16) == 1094927440 )
      {
        v13 = *(_DWORD **)(v9 + 24);
        if ( *v13 == 843138128 )
        {
          PdcAcquireRwLockExclusive2(v13 + 2, v23);
          v10 = v23[0];
          v14 = 0LL;
          *(_DWORD *)(v9 + 584) = v11;
        }
        else
        {
          v14 = 3221225711LL;
          v12 = 0LL;
          v13 = 0LL;
        }
      }
      else
      {
        v14 = 3221225711LL;
        v12 = 0LL;
      }
    }
    else
    {
      v14 = 3221225711LL;
    }
    Pdcv2EventWrite_ACTIVATION_CLIENT_SET_BROKERED_PROCESSID(v12, v13, v14);
    if ( v10 )
      PdcReleaseRwLockExclusive2(v13 + 2, v23);
  }
  InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    Context = qword_18012BF30;
    qword_18012BF30[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_18012BF48 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18012BF30, qword_18012BF48);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18012BF30);
  }
  v15 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v15 > 4u )
  {
    v16 = *((_QWORD *)this + 2);
    v44 = &v30;
    v30 = v16;
    v45 = 8LL;
    v25 = *(_DWORD *)(v16 + 64);
    v46 = &v25;
    v47 = 4LL;
    v17 = *(_QWORD *)(v16 + 192);
    if ( v17 )
    {
      v18 = (CAudioStream *)(v17 + 8);
      v19 = *(__int64 (**)(void))(*(_QWORD *)v18 + 72LL);
      if ( (char *)v19 == (char *)CAudioStream::GetUniqueStreamIdentifier )
        UniqueStreamIdentifier = CAudioStream::GetUniqueStreamIdentifier(v18);
      else
        UniqueStreamIdentifier = v19();
      v28 = UniqueStreamIdentifier;
    }
    else
    {
      v28 = 0LL;
    }
    v49 = 8LL;
    v48 = &v28;
    v50 = v26;
    v27 = v26[1];
    v52 = &v27;
    v51 = 4LL;
    v53 = 4LL;
    v31[1] = 4;
    v38 = *(unsigned __int16 **)(v15 + 8);
    v31[0] = ((unsigned int)&unk_1800FA3CA - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v21 = *(_QWORD *)(v15 + 32);
    v32 = 0LL;
    v39 = *v38;
    v41 = &unk_1800FA3D5;
    v40 = 2;
    v42 = 89;
    v43 = 1;
    EtwEventWriteTransfer(v21, v31, 0LL, 0LL);
  }
  return this;
}
