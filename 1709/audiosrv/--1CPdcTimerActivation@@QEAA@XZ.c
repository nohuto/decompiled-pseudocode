/*
 * XREFs of ??1CPdcTimerActivation@@QEAA@XZ @ 0x18002A6F8
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj@VCPdcTimerActivation@@@std@@EEAAXXZ @ 0x18002A3E0 (-_Destroy@-$_Ref_count_obj@VCPdcTimerActivation@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?GetUniqueStreamIdentifier@CVADServer@@QEAA_KXZ @ 0x180025BC4 (-GetUniqueStreamIdentifier@CVADServer@@QEAA_KXZ.c)
 *     Pdcv2ActivationClientDeactivate @ 0x18002BB08 (Pdcv2ActivationClientDeactivate.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     atexit @ 0x18003313C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18005FD5C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CPdcTimerActivation::~CPdcTimerActivation(CPdcTimerActivation *this)
{
  __int64 v2; // r14
  __int64 v3; // rdi
  int v4; // eax
  char *v5; // r8
  char *i; // rcx
  int v7; // eax
  __int64 v8; // rbx
  WINBOOL fPending; // [rsp+38h] [rbp-69h] BYREF
  int v10; // [rsp+3Ch] [rbp-65h] BYREF
  int v11; // [rsp+40h] [rbp-61h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-59h] BYREF
  CVADServer *v13; // [rsp+50h] [rbp-51h] BYREF
  __int64 UniqueStreamIdentifier; // [rsp+58h] [rbp-49h] BYREF
  _DWORD v15[2]; // [rsp+60h] [rbp-41h] BYREF
  __int64 v16; // [rsp+68h] [rbp-39h]
  __int64 v17; // [rsp+70h] [rbp-31h]
  unsigned __int16 *v18; // [rsp+78h] [rbp-29h] BYREF
  int v19; // [rsp+80h] [rbp-21h]
  int v20; // [rsp+84h] [rbp-1Dh]
  void *v21; // [rsp+88h] [rbp-19h]
  int v22; // [rsp+90h] [rbp-11h]
  int v23; // [rsp+94h] [rbp-Dh]
  CVADServer **v24; // [rsp+98h] [rbp-9h]
  int v25; // [rsp+A0h] [rbp-1h]
  int v26; // [rsp+A4h] [rbp+3h]
  int *v27; // [rsp+A8h] [rbp+7h]
  int v28; // [rsp+B0h] [rbp+Fh]
  int v29; // [rsp+B4h] [rbp+13h]
  __int64 *p_UniqueStreamIdentifier; // [rsp+B8h] [rbp+17h]
  int v31; // [rsp+C0h] [rbp+1Fh]
  int v32; // [rsp+C4h] [rbp+23h]
  int *v33; // [rsp+C8h] [rbp+27h]
  int v34; // [rsp+D0h] [rbp+2Fh]
  int v35; // [rsp+D4h] [rbp+33h]

  v17 = -2LL;
  v2 = *((_QWORD *)this + 2);
  v3 = *((_QWORD *)this + 1);
  v4 = _Mtx_lock((_Mtx_t)(v3 + 32));
  if ( v4 )
    std::_Throw_C_error(v4);
  v5 = *(char **)(v3 + 16);
  for ( i = *(char **)(v3 + 8); i != v5 && *(_QWORD *)i != v2; i += 8 )
    ;
  if ( i != v5 )
  {
    memmove(i, i + 8, v5 - (i + 8));
    *(_QWORD *)(v3 + 16) -= 8LL;
  }
  v7 = _Mtx_unlock((_Mtx_t)(v3 + 32));
  if ( v7 )
    std::_Throw_C_error(v7);
  if ( *(_QWORD *)this )
  {
    v11 = Pdcv2ActivationClientDeactivate(*(PVOID *)this);
    *(_QWORD *)this = 0LL;
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
    v8 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v8 > 4u )
    {
      v13 = (CVADServer *)*((_QWORD *)this + 2);
      v24 = &v13;
      v25 = 8;
      v26 = 0;
      v10 = *((_DWORD *)v13 + 16);
      v27 = &v10;
      v28 = 4;
      v29 = 0;
      UniqueStreamIdentifier = CVADServer::GetUniqueStreamIdentifier(v13);
      p_UniqueStreamIdentifier = &UniqueStreamIdentifier;
      v31 = 8;
      v32 = 0;
      v33 = &v11;
      v34 = 4;
      v35 = 0;
      v15[0] = ((unsigned int)&unk_1801105D4 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      v15[1] = 4;
      v16 = 0LL;
      v18 = *(unsigned __int16 **)(v8 + 8);
      v19 = *v18;
      v20 = 2;
      v21 = &unk_1801105DF;
      v22 = 76;
      v23 = 1;
      EtwEventWriteTransfer(*(_QWORD *)(v8 + 32), v15, 0LL, 0LL, 6, &v18);
    }
  }
}
