/*
 * XREFs of ?ReportStopActivity@?$ActivityBase@VWindowManagementLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x1802C9548
 * Callers:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1802C6148 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1802CC06C (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180058BCC (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x180058D78 (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x18005AB44 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x180104258 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

__int64 __fastcall wil::ActivityBase<WindowManagementLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
        _QWORD *a1,
        int a2)
{
  int *v4; // rsi
  int v5; // eax
  int *v6; // rsi
  void *v7; // r8
  const CHAR *v8; // rdx
  const CHAR *v9; // rdx
  const WCHAR *v10; // rdx
  const CHAR *v11; // rdx
  const CHAR *v12; // rdx
  const CHAR *v13; // rdx
  TraceLoggingHProvider v14; // r10
  void *v15; // r8
  const struct _TlgProvider_t *v16; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v18; // rdx
  DWORD v20; // [rsp+38h] [rbp-D0h] BYREF
  int v21; // [rsp+3Ch] [rbp-CCh] BYREF
  WINBOOL v22[2]; // [rsp+40h] [rbp-C8h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-C0h] BYREF
  WINBOOL fPending; // [rsp+50h] [rbp-B8h] BYREF
  int v25; // [rsp+54h] [rbp-B4h] BYREF
  int v26; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-A0h] BYREF
  int *v28; // [rsp+88h] [rbp-80h]
  __int64 v29; // [rsp+90h] [rbp-78h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+98h] [rbp-70h] BYREF
  int *v31; // [rsp+A8h] [rbp-60h]
  __int64 v32; // [rsp+B0h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+B8h] [rbp-50h] BYREF
  int *v34; // [rsp+C8h] [rbp-40h]
  __int64 v35; // [rsp+D0h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+D8h] [rbp-30h] BYREF
  DWORD *v37; // [rsp+E8h] [rbp-20h]
  __int64 v38; // [rsp+F0h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+F8h] [rbp-10h] BYREF
  int *v40; // [rsp+108h] [rbp+0h]
  __int64 v41; // [rsp+110h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+118h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+128h] [rbp+20h] BYREF
  WINBOOL *v44; // [rsp+138h] [rbp+30h]
  __int64 v45; // [rsp+140h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+148h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+158h] [rbp+50h] BYREF
  EVENT_DATA_DESCRIPTOR v48; // [rsp+168h] [rbp+60h] BYREF
  int *v49; // [rsp+188h] [rbp+80h]
  __int64 v50; // [rsp+190h] [rbp+88h]
  DWORD *v51; // [rsp+198h] [rbp+90h]
  __int64 v52; // [rsp+1A0h] [rbp+98h]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+1A8h] [rbp+A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+1B8h] [rbp+B0h] BYREF

  if ( a2 < 0 )
  {
    v4 = (int *)a1[6];
    v5 = v4[19];
    if ( v5 < 0 && v5 == v4[21] )
      v6 = v4 + 20;
    else
      v6 = 0LL;
    Context = 0LL;
    if ( v6 )
    {
      if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
        && fPending )
      {
        Context = qword_1804387B0;
        wil::TraceLoggingProvider::TraceLoggingProvider((wil::TraceLoggingProvider *)qword_1804387B0);
        qword_1804387B0[0] = &ImmersiveIconsLogging::`vftable';
        qword_1804387C8 = (struct _TlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1804387B0, qword_1804387C8, v7);
        InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, qword_1804387B0);
      }
      if ( **((_DWORD **)Context + 1) > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x200000000000uLL) )
      {
        v8 = (const CHAR *)*((_QWORD *)v6 + 6);
        v25 = v6[1];
        v28 = &v25;
        v29 = 4LL;
        TlgCreateSz(&pDesc, v8);
        v9 = (const CHAR *)*((_QWORD *)v6 + 15);
        v31 = v6 + 14;
        v32 = 4LL;
        TlgCreateSz(&v33, v9);
        v10 = (const WCHAR *)*((_QWORD *)v6 + 2);
        v26 = *v6;
        v34 = &v26;
        v35 = 4LL;
        TlgCreateWsz(&v36, v10);
        v11 = (const CHAR *)*((_QWORD *)v6 + 8);
        v20 = v6[6];
        v37 = &v20;
        v38 = 4LL;
        TlgCreateSz(&v39, v11);
        v12 = (const CHAR *)*((_QWORD *)v6 + 10);
        v21 = v6[18];
        v40 = &v21;
        v41 = 4LL;
        TlgCreateSz(&v42, v12);
        TlgCreateWsz(&v43, *((LPCWSTR *)v6 + 11));
        v13 = (const CHAR *)*((_QWORD *)v6 + 13);
        v22[0] = v6[24];
        v44 = v22;
        v45 = 4LL;
        TlgCreateSz(&v46, v13);
        TlgCreateWsz(&v47, *((LPCWSTR *)v6 + 14));
        TlgWrite(v14, &unk_180389DAA, (LPCGUID)(a1[6] + 8LL), 0LL, 0x10u, &pData);
      }
    }
    else
    {
      if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, v22, &Context) && v22[0] )
      {
        Context = qword_1804387B0;
        wil::TraceLoggingProvider::TraceLoggingProvider((wil::TraceLoggingProvider *)qword_1804387B0);
        qword_1804387B0[0] = &ImmersiveIconsLogging::`vftable';
        qword_1804387C8 = (struct _TlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1804387B0, qword_1804387C8, v15);
        InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, qword_1804387B0);
      }
      v16 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
      if ( *(_DWORD *)v16 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x200000000000uLL) )
      {
        v21 = a2;
        v49 = &v21;
        v50 = 4LL;
        CurrentThreadId = GetCurrentThreadId();
        v18 = a1[6];
        v20 = CurrentThreadId;
        v51 = &v20;
        v52 = 4LL;
        TlgCreateSz(&v53, *(LPCSTR *)(v18 + 48));
        TlgCreateWsz(&v54, *(LPCWSTR *)(a1[6] + 56LL));
        TlgWrite(v16, &unk_18039BA24, (LPCGUID)(a1[6] + 8LL), 0LL, 6u, &v48);
      }
    }
  }
  return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
}
