/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180173710
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18000FA24 (-LockExclusive@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsP.c)
 *     _TlgCreateWsz @ 0x180058BCC (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x180058D78 (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x18005AB44 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x1800FF1BC (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

char __fastcall wil::ActivityBase<StartMenuExperienceLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
        _QWORD *a1,
        int *a2)
{
  void *v4; // r8
  const CHAR *v5; // rdx
  const CHAR *v6; // rdx
  const WCHAR *v7; // rdx
  const CHAR *v8; // rdx
  const CHAR *v9; // rdx
  const CHAR *v10; // rdx
  TraceLoggingHProvider v11; // r10
  void *v12; // r8
  const CHAR *v13; // rdx
  const CHAR *v14; // rdx
  const WCHAR *v15; // rdx
  const CHAR *v16; // rdx
  const CHAR *v17; // rdx
  const CHAR *v18; // rdx
  int v19; // ecx
  const CHAR *v20; // rdx
  TraceLoggingHProvider v21; // r10
  _DWORD *v22; // rcx
  int v23; // eax
  WINBOOL fPending; // [rsp+30h] [rbp-D0h] BYREF
  int v26; // [rsp+34h] [rbp-CCh] BYREF
  int v27; // [rsp+38h] [rbp-C8h] BYREF
  int v28; // [rsp+3Ch] [rbp-C4h] BYREF
  int v29; // [rsp+40h] [rbp-C0h] BYREF
  WINBOOL v30; // [rsp+44h] [rbp-BCh] BYREF
  LPVOID Context; // [rsp+48h] [rbp-B8h] BYREF
  PSRWLOCK SRWLock; // [rsp+50h] [rbp-B0h] BYREF
  int v33; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  int *v35; // [rsp+80h] [rbp-80h]
  __int64 v36; // [rsp+88h] [rbp-78h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-70h] BYREF
  int *v38; // [rsp+A0h] [rbp-60h]
  __int64 v39; // [rsp+A8h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+B0h] [rbp-50h] BYREF
  int *v41; // [rsp+C0h] [rbp-40h]
  __int64 v42; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+D0h] [rbp-30h] BYREF
  int *v44; // [rsp+E0h] [rbp-20h]
  __int64 v45; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+F0h] [rbp-10h] BYREF
  int *v47; // [rsp+100h] [rbp+0h]
  __int64 v48; // [rsp+108h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+120h] [rbp+20h] BYREF
  WINBOOL *p_fPending; // [rsp+130h] [rbp+30h]
  __int64 v52; // [rsp+138h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+140h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+150h] [rbp+50h] BYREF
  int *v55; // [rsp+160h] [rbp+60h]
  __int64 v56; // [rsp+168h] [rbp+68h]
  LPVOID *p_Context; // [rsp+170h] [rbp+70h]
  __int64 v58; // [rsp+178h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+180h] [rbp+80h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 16LL))(a1, (unsigned int)a2[2]) )
  {
    SRWLock = 0LL;
    if ( InitOnceBeginInitialize(&`StartMenuExperienceLogging::Instance'::`2'::wrapper, 0, &v30, (LPVOID *)&SRWLock)
      && v30 )
    {
      SRWLock = (PSRWLOCK)qword_180438878;
      qword_180438878[0] = &LockScreenServiceLogging::`vftable';
      qword_180438890 = (struct _TlgProvider_t *)&`StartMenuExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_b070bc67e2c9c03cf4cc93f221b7b97d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438878, qword_180438890, v12);
      InitOnceComplete(&`StartMenuExperienceLogging::Instance'::`2'::wrapper, 0, qword_180438878);
    }
    if ( *(_DWORD *)SRWLock[1].Ptr > 5u )
    {
      v13 = (const CHAR *)*((_QWORD *)a2 + 6);
      v29 = a2[1];
      v35 = &v29;
      v36 = 4LL;
      TlgCreateSz(&pDesc, v13);
      v14 = (const CHAR *)*((_QWORD *)a2 + 15);
      v38 = a2 + 14;
      v39 = 4LL;
      TlgCreateSz(&v40, v14);
      v15 = (const WCHAR *)*((_QWORD *)a2 + 2);
      v28 = *a2;
      v41 = &v28;
      v42 = 4LL;
      TlgCreateWsz(&v43, v15);
      v16 = (const CHAR *)*((_QWORD *)a2 + 8);
      v27 = a2[6];
      v44 = &v27;
      v45 = 4LL;
      TlgCreateSz(&v46, v16);
      v17 = (const CHAR *)*((_QWORD *)a2 + 10);
      v26 = a2[18];
      v47 = &v26;
      v48 = 4LL;
      TlgCreateSz(&v49, v17);
      TlgCreateWsz(&v50, *((LPCWSTR *)a2 + 11));
      v18 = (const CHAR *)*((_QWORD *)a2 + 13);
      fPending = a2[24];
      p_fPending = &fPending;
      v52 = 4LL;
      TlgCreateSz(&v53, v18);
      TlgCreateWsz(&v54, *((LPCWSTR *)a2 + 14));
      v19 = a2[2];
      v20 = (const CHAR *)*((_QWORD *)a2 + 5);
      v55 = &v33;
      LODWORD(Context) = a2[15];
      v33 = v19;
      p_Context = &Context;
      v56 = 4LL;
      v58 = 4LL;
      TlgCreateSz(&v59, v20);
      TlgWrite(v21, &unk_18039A9C4, (LPCGUID)(a1[6] + 8LL), 0LL, 0x13u, &pData);
    }
  }
  else
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`StartMenuExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = qword_180438878;
      qword_180438878[0] = &LockScreenServiceLogging::`vftable';
      qword_180438890 = (struct _TlgProvider_t *)&`StartMenuExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_b070bc67e2c9c03cf4cc93f221b7b97d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438878, qword_180438890, v4);
      InitOnceComplete(&`StartMenuExperienceLogging::Instance'::`2'::wrapper, 0, qword_180438878);
    }
    if ( **((_DWORD **)Context + 1) > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x200000000000uLL) )
    {
      v5 = (const CHAR *)*((_QWORD *)a2 + 6);
      v26 = a2[1];
      v35 = &v26;
      v36 = 4LL;
      TlgCreateSz(&pDesc, v5);
      v6 = (const CHAR *)*((_QWORD *)a2 + 15);
      v38 = a2 + 14;
      v39 = 4LL;
      TlgCreateSz(&v40, v6);
      v7 = (const WCHAR *)*((_QWORD *)a2 + 2);
      v27 = *a2;
      v41 = &v27;
      v42 = 4LL;
      TlgCreateWsz(&v43, v7);
      v8 = (const CHAR *)*((_QWORD *)a2 + 8);
      v28 = a2[6];
      v44 = &v28;
      v45 = 4LL;
      TlgCreateSz(&v46, v8);
      v9 = (const CHAR *)*((_QWORD *)a2 + 10);
      v29 = a2[18];
      v47 = &v29;
      v48 = 4LL;
      TlgCreateSz(&v49, v9);
      TlgCreateWsz(&v50, *((LPCWSTR *)a2 + 11));
      v10 = (const CHAR *)*((_QWORD *)a2 + 13);
      v30 = a2[24];
      p_fPending = &v30;
      v52 = 4LL;
      TlgCreateSz(&v53, v10);
      TlgCreateWsz(&v54, *((LPCWSTR *)a2 + 14));
      TlgWrite(v11, &unk_1803913B8, (LPCGUID)(a1[6] + 8LL), 0LL, 0x10u, &pData);
    }
  }
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)a1,
    &SRWLock);
  v22 = (_DWORD *)a1[6];
  v23 = a2[1];
  if ( v23 != v22[21] && (v23 != v22[19] || (int)v22[19] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v22 + 20), (const struct wil::FailureInfo *)a2);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 1;
}
