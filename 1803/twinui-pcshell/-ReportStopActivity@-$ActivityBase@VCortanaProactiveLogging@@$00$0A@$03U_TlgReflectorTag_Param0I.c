/*
 * XREFs of ?ReportStopActivity@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x180074F70
 * Callers:
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800750CC (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Destroy@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18007523C (-Destroy@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderTy.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180058BCC (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x180058D78 (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x18005AB44 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     ?StopActivity@CortanaExperienceManager_GetCortanaEntryPointAndArgs@CortanaProactiveTelemetry@@MEAAXXZ @ 0x180072F70 (-StopActivity@CortanaExperienceManager_GetCortanaEntryPointAndArgs@CortanaProactiveTelemetry@@ME.c)
 *     ?StopActivity@CortanaExperienceManager_ShowWithStart@CortanaProactiveTelemetry@@MEAAXXZ @ 0x1800746D0 (-StopActivity@CortanaExperienceManager_ShowWithStart@CortanaProactiveTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@CortanaExperienceManager_OnViewPropertiesChanging@CortanaProactiveTelemetry@@MEAAXXZ @ 0x1800752C0 (-StopActivity@CortanaExperienceManager_OnViewPropertiesChanging@CortanaProactiveTelemetry@@MEAAX.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

void __fastcall wil::ActivityBase<CortanaProactiveLogging,1,0,4,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
        CortanaProactiveTelemetry::CortanaExperienceManager_ShowWithStart *this,
        int a2)
{
  void (__fastcall *v4)(CortanaProactiveTelemetry::CortanaExperienceManager_GetCortanaEntryPointAndArgs *); // rax
  int *v5; // rsi
  int v6; // eax
  int *v7; // rsi
  const CHAR *v8; // rdx
  const CHAR *v9; // rdx
  const WCHAR *v10; // rdx
  const CHAR *v11; // rdx
  const CHAR *v12; // rdx
  const CHAR *v13; // rdx
  TraceLoggingHProvider v14; // r10
  const struct _TlgProvider_t *v15; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v17; // rdx
  DWORD v18; // [rsp+38h] [rbp-D0h] BYREF
  int v19; // [rsp+3Ch] [rbp-CCh] BYREF
  WINBOOL v20[2]; // [rsp+40h] [rbp-C8h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-C0h] BYREF
  WINBOOL fPending; // [rsp+50h] [rbp-B8h] BYREF
  int v23; // [rsp+54h] [rbp-B4h] BYREF
  int v24; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-A0h] BYREF
  int *v26; // [rsp+88h] [rbp-80h]
  __int64 v27; // [rsp+90h] [rbp-78h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+98h] [rbp-70h] BYREF
  int *v29; // [rsp+A8h] [rbp-60h]
  __int64 v30; // [rsp+B0h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+B8h] [rbp-50h] BYREF
  int *v32; // [rsp+C8h] [rbp-40h]
  __int64 v33; // [rsp+D0h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+D8h] [rbp-30h] BYREF
  DWORD *v35; // [rsp+E8h] [rbp-20h]
  __int64 v36; // [rsp+F0h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+F8h] [rbp-10h] BYREF
  int *v38; // [rsp+108h] [rbp+0h]
  __int64 v39; // [rsp+110h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+118h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+128h] [rbp+20h] BYREF
  WINBOOL *v42; // [rsp+138h] [rbp+30h]
  __int64 v43; // [rsp+140h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+148h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+158h] [rbp+50h] BYREF
  EVENT_DATA_DESCRIPTOR v46; // [rsp+168h] [rbp+60h] BYREF
  int *v47; // [rsp+188h] [rbp+80h]
  __int64 v48; // [rsp+190h] [rbp+88h]
  DWORD *v49; // [rsp+198h] [rbp+90h]
  __int64 v50; // [rsp+1A0h] [rbp+98h]
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+1A8h] [rbp+A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+1B8h] [rbp+B0h] BYREF

  if ( a2 < 0 )
  {
    v5 = (int *)*((_QWORD *)this + 6);
    v6 = v5[19];
    if ( v6 < 0 && v6 == v5[21] )
      v7 = v5 + 20;
    else
      v7 = 0LL;
    Context = 0LL;
    if ( v7 )
    {
      if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
        && fPending )
      {
        Context = &qword_180438828;
        qword_180438828 = &LockScreenServiceLogging::`vftable';
        qword_180438840 = (struct _TlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180438828, qword_180438840);
        InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &qword_180438828);
      }
      if ( **((_DWORD **)Context + 1) > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x200000000000uLL) )
      {
        v8 = (const CHAR *)*((_QWORD *)v7 + 6);
        v23 = v7[1];
        v26 = &v23;
        v27 = 4LL;
        TlgCreateSz(&pDesc, v8);
        v9 = (const CHAR *)*((_QWORD *)v7 + 15);
        v29 = v7 + 14;
        v30 = 4LL;
        TlgCreateSz(&v31, v9);
        v10 = (const WCHAR *)*((_QWORD *)v7 + 2);
        v24 = *v7;
        v32 = &v24;
        v33 = 4LL;
        TlgCreateWsz(&v34, v10);
        v11 = (const CHAR *)*((_QWORD *)v7 + 8);
        v18 = v7[6];
        v35 = &v18;
        v36 = 4LL;
        TlgCreateSz(&v37, v11);
        v12 = (const CHAR *)*((_QWORD *)v7 + 10);
        v19 = v7[18];
        v38 = &v19;
        v39 = 4LL;
        TlgCreateSz(&v40, v12);
        TlgCreateWsz(&v41, *((LPCWSTR *)v7 + 11));
        v13 = (const CHAR *)*((_QWORD *)v7 + 13);
        v20[0] = v7[24];
        v42 = v20;
        v43 = 4LL;
        TlgCreateSz(&v44, v13);
        TlgCreateWsz(&v45, *((LPCWSTR *)v7 + 14));
        TlgWrite(v14, &unk_180389DAA, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x10u, &pData);
      }
    }
    else
    {
      if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, v20, &Context) && v20[0] )
      {
        Context = &qword_180438828;
        qword_180438828 = &LockScreenServiceLogging::`vftable';
        qword_180438840 = (struct _TlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180438828, qword_180438840);
        InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &qword_180438828);
      }
      v15 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
      if ( *(_DWORD *)v15 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x200000000000uLL) )
      {
        v19 = a2;
        v47 = &v19;
        v48 = 4LL;
        CurrentThreadId = GetCurrentThreadId();
        v17 = *((_QWORD *)this + 6);
        v18 = CurrentThreadId;
        v49 = &v18;
        v50 = 4LL;
        TlgCreateSz(&v51, *(LPCSTR *)(v17 + 48));
        TlgCreateWsz(&v52, *(LPCWSTR *)(*((_QWORD *)this + 6) + 56LL));
        TlgWrite(v15, &unk_18039BA24, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 6u, &v46);
      }
    }
  }
  v4 = *(void (__fastcall **)(CortanaProactiveTelemetry::CortanaExperienceManager_GetCortanaEntryPointAndArgs *))(*(_QWORD *)this + 8LL);
  if ( v4 == CortanaProactiveTelemetry::CortanaExperienceManager_OnViewPropertiesChanging::StopActivity )
  {
    CortanaProactiveTelemetry::CortanaExperienceManager_OnViewPropertiesChanging::StopActivity(this);
  }
  else if ( v4 == CortanaProactiveTelemetry::CortanaExperienceManager_ShowWithStart::StopActivity )
  {
    CortanaProactiveTelemetry::CortanaExperienceManager_ShowWithStart::StopActivity(this);
  }
  else if ( v4 == CortanaProactiveTelemetry::CortanaExperienceManager_GetCortanaEntryPointAndArgs::StopActivity )
  {
    CortanaProactiveTelemetry::CortanaExperienceManager_GetCortanaEntryPointAndArgs::StopActivity(this);
  }
  else
  {
    v4(this);
  }
}
