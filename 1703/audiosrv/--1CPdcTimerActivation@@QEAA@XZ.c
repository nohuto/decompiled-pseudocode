/*
 * XREFs of ??1CPdcTimerActivation@@QEAA@XZ @ 0x1800274A0
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj@VCPdcTimerActivation@@@std@@EEAAXXZ @ 0x180027230 (-_Destroy@-$_Ref_count_obj@VCPdcTimerActivation@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?GetUniqueStreamIdentifier@CAudioStream@@UEAA_JXZ @ 0x180018110 (-GetUniqueStreamIdentifier@CAudioStream@@UEAA_JXZ.c)
 *     Pdcv2ActivationClientDeactivate @ 0x180027E28 (Pdcv2ActivationClientDeactivate.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180038800 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     atexit @ 0x18004925C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CPdcTimerActivation::~CPdcTimerActivation(CPdcTimerActivation *this)
{
  __int64 v2; // r14
  __int64 v3; // rsi
  int v4; // eax
  char *v5; // rax
  char *v6; // rcx
  int v7; // eax
  __int64 v8; // rbx
  __int64 v9; // rcx
  CAudioStream *v10; // rcx
  __int64 (*v11)(void); // rax
  WINBOOL fPending; // [rsp+38h] [rbp-79h] BYREF
  int v13; // [rsp+3Ch] [rbp-75h] BYREF
  int v14; // [rsp+40h] [rbp-71h] BYREF
  __int64 UniqueStreamIdentifier; // [rsp+48h] [rbp-69h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-61h] BYREF
  __int64 v17; // [rsp+58h] [rbp-59h] BYREF
  _DWORD v18[2]; // [rsp+60h] [rbp-51h] BYREF
  __int64 v19; // [rsp+68h] [rbp-49h]
  __int64 v20; // [rsp+70h] [rbp-41h]
  unsigned __int16 *v21; // [rsp+78h] [rbp-39h]
  int v22; // [rsp+80h] [rbp-31h]
  int v23; // [rsp+84h] [rbp-2Dh]
  void *v24; // [rsp+88h] [rbp-29h]
  int v25; // [rsp+90h] [rbp-21h]
  int v26; // [rsp+94h] [rbp-1Dh]
  __int64 *v27; // [rsp+98h] [rbp-19h]
  __int64 v28; // [rsp+A0h] [rbp-11h]
  int *v29; // [rsp+A8h] [rbp-9h]
  __int64 v30; // [rsp+B0h] [rbp-1h]
  __int64 *p_UniqueStreamIdentifier; // [rsp+B8h] [rbp+7h]
  __int64 v32; // [rsp+C0h] [rbp+Fh]
  int *v33; // [rsp+C8h] [rbp+17h]
  __int64 v34; // [rsp+D0h] [rbp+1Fh]

  v20 = -2LL;
  v2 = *((_QWORD *)this + 2);
  v3 = *((_QWORD *)this + 1);
  v4 = _Mtx_lock((_Mtx_t)(v3 + 32));
  if ( v4 )
    std::_Throw_C_error(v4);
  v5 = *(char **)(v3 + 16);
  v6 = *(char **)(v3 + 8);
  if ( v6 != v5 )
  {
    do
    {
      if ( *(_QWORD *)v6 == v2 )
        break;
      v6 += 8;
    }
    while ( v6 != v5 );
    if ( v6 != v5 )
    {
      memmove(v6, v6 + 8, v5 - (v6 + 8));
      *(_QWORD *)(v3 + 16) -= 8LL;
    }
  }
  v7 = _Mtx_unlock((_Mtx_t)(v3 + 32));
  if ( v7 )
    std::_Throw_C_error(v7);
  if ( *(_QWORD *)this )
  {
    v14 = Pdcv2ActivationClientDeactivate(*(PVOID *)this);
    *(_QWORD *)this = 0LL;
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
    v8 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v8 > 4u )
    {
      v17 = *((_QWORD *)this + 2);
      v27 = &v17;
      v28 = 8LL;
      v13 = *(_DWORD *)(v17 + 64);
      v29 = &v13;
      v30 = 4LL;
      v9 = *(_QWORD *)(v17 + 192);
      if ( v9 )
      {
        v10 = (CAudioStream *)(v9 + 8);
        v11 = *(__int64 (**)(void))(*(_QWORD *)v10 + 72LL);
        if ( (char *)v11 == (char *)CAudioStream::GetUniqueStreamIdentifier )
          UniqueStreamIdentifier = CAudioStream::GetUniqueStreamIdentifier(v10);
        else
          UniqueStreamIdentifier = v11();
      }
      else
      {
        UniqueStreamIdentifier = 0LL;
      }
      p_UniqueStreamIdentifier = &UniqueStreamIdentifier;
      v32 = 8LL;
      v33 = &v14;
      v34 = 4LL;
      v18[0] = ((unsigned int)&unk_1800FA42F - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      v18[1] = 4;
      v19 = 0LL;
      v21 = *(unsigned __int16 **)(v8 + 8);
      v22 = *v21;
      v23 = 2;
      v24 = &unk_1800FA43A;
      v25 = 76;
      v26 = 1;
      EtwEventWriteTransfer(*(_QWORD *)(v8 + 32), v18, 0LL, 0LL);
    }
  }
}
