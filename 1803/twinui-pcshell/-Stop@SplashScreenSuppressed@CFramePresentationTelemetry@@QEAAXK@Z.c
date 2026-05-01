/*
 * XREFs of ?Stop@SplashScreenSuppressed@CFramePresentationTelemetry@@QEAAXK@Z @ 0x18000DE54
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d2fa7908b891c12cbb1669318d2d4613__&___ptr64_::Run @ 0x18000E5E0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d2fa7908b891c12cbb1669318d2d4613__-___ptr64.c)
 *     ?SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z @ 0x180014950 (-SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z.c)
 *     ?ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppressionReason@2@@Z @ 0x1800F9780 (-ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppress.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18001833C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgCreateWsz @ 0x180058BCC (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x180058D78 (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x18005AB44 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?zInternalStop@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800F6804 (-zInternalStop@-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

void __fastcall CFramePresentationTelemetry::SplashScreenSuppressed::Stop(
        CFramePresentationTelemetry::SplashScreenSuppressed *this,
        int a2)
{
  int *v3; // rsi
  int v4; // eax
  int *v5; // rsi
  RTL_SRWLOCK *v6; // rsi
  _QWORD *p_Context; // rax
  char v8; // di
  RTL_SRWLOCK *v9; // rsi
  const struct _TlgProvider_t *v10; // rdi
  const CHAR *v11; // rdx
  const CHAR *v12; // rdx
  const WCHAR *v13; // rdx
  const CHAR *v14; // rdx
  const CHAR *v15; // rdx
  const CHAR *v16; // rdx
  TraceLoggingHProvider v17; // r10
  int v18; // ecx
  DWORD CurrentThreadId; // eax
  LPVOID Context; // [rsp+30h] [rbp-D0h] BYREF
  DWORD v21; // [rsp+38h] [rbp-C8h] BYREF
  int v22; // [rsp+3Ch] [rbp-C4h] BYREF
  WINBOOL fPending[2]; // [rsp+40h] [rbp-C0h] BYREF
  WINBOOL v24; // [rsp+48h] [rbp-B8h] BYREF
  int v25; // [rsp+4Ch] [rbp-B4h] BYREF
  int v26; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR v27; // [rsp+60h] [rbp-A0h] BYREF
  int *v28; // [rsp+80h] [rbp-80h]
  __int64 v29; // [rsp+88h] [rbp-78h]
  DWORD *v30; // [rsp+90h] [rbp-70h]
  __int64 v31; // [rsp+98h] [rbp-68h]
  int *v32; // [rsp+A0h] [rbp-60h]
  __int64 v33; // [rsp+A8h] [rbp-58h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp-50h] BYREF
  int *v35; // [rsp+D0h] [rbp-30h]
  __int64 v36; // [rsp+D8h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+E0h] [rbp-20h] BYREF
  int *v38; // [rsp+F0h] [rbp-10h]
  __int64 v39; // [rsp+F8h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+100h] [rbp+0h] BYREF
  int *v41; // [rsp+110h] [rbp+10h]
  __int64 v42; // [rsp+118h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+120h] [rbp+20h] BYREF
  DWORD *v44; // [rsp+130h] [rbp+30h]
  __int64 v45; // [rsp+138h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+140h] [rbp+40h] BYREF
  int *v47; // [rsp+150h] [rbp+50h]
  __int64 v48; // [rsp+158h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+160h] [rbp+60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+170h] [rbp+70h] BYREF
  WINBOOL *v51; // [rsp+180h] [rbp+80h]
  __int64 v52; // [rsp+188h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+190h] [rbp+90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+1A0h] [rbp+A0h] BYREF
  int *v55; // [rsp+1B0h] [rbp+B0h]
  __int64 v56; // [rsp+1B8h] [rbp+B8h]
  int v57; // [rsp+208h] [rbp+108h] BYREF

  v57 = a2;
  fPending[0] = 0;
  v3 = (int *)*((_QWORD *)this + 6);
  v4 = v3[19];
  if ( v4 < 0 && v4 == v3[21] )
    v5 = v3 + 20;
  else
    v5 = 0LL;
  if ( v5 )
  {
    wil::ActivityBase<StartMenuExperienceLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStop();
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v24, &Context) && v24 )
    {
      Context = qword_180438670;
      qword_180438670[0] = &LockScreenServiceLogging::`vftable';
      qword_180438688 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438670, qword_180438688);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_180438670);
    }
    if ( **((_DWORD **)Context + 1) > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000000uLL) )
    {
      v11 = (const CHAR *)*((_QWORD *)v5 + 6);
      v25 = v5[1];
      v35 = &v25;
      v36 = 4LL;
      TlgCreateSz(&pDesc, v11);
      v12 = (const CHAR *)*((_QWORD *)v5 + 15);
      v38 = v5 + 14;
      v39 = 4LL;
      TlgCreateSz(&v40, v12);
      v13 = (const WCHAR *)*((_QWORD *)v5 + 2);
      v26 = *v5;
      v41 = &v26;
      v42 = 4LL;
      TlgCreateWsz(&v43, v13);
      v14 = (const CHAR *)*((_QWORD *)v5 + 8);
      v21 = v5[6];
      v44 = &v21;
      v45 = 4LL;
      TlgCreateSz(&v46, v14);
      v15 = (const CHAR *)*((_QWORD *)v5 + 10);
      v22 = v5[18];
      v47 = &v22;
      v48 = 4LL;
      TlgCreateSz(&v49, v15);
      TlgCreateWsz(&v50, *((LPCWSTR *)v5 + 11));
      v16 = (const CHAR *)*((_QWORD *)v5 + 13);
      fPending[0] = v5[24];
      v51 = fPending;
      v52 = 4LL;
      TlgCreateSz(&v53, v16);
      TlgCreateWsz(&v54, *((LPCWSTR *)v5 + 14));
      v56 = 4LL;
      v55 = &v57;
      TlgWrite(v17, &unk_1803898CB, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x11u, &pData);
    }
  }
  else
  {
    v6 = (RTL_SRWLOCK *)*((_QWORD *)this + 38);
    if ( v6 )
    {
      v9 = v6 + 31;
      AcquireSRWLockExclusive(v9);
      p_Context = fPending;
      *(_QWORD *)fPending = v9;
      v8 = 1;
    }
    else
    {
      Context = 0LL;
      p_Context = &Context;
      v8 = 2;
      v9 = 0LL;
    }
    *p_Context = 0LL;
    if ( (v8 & 2) != 0 )
    {
      v8 &= ~2u;
      if ( Context )
        ReleaseSRWLockExclusive((PSRWLOCK)Context);
    }
    if ( (v8 & 1) != 0 && *(_QWORD *)fPending )
      ReleaseSRWLockExclusive(*(PSRWLOCK *)fPending);
    **((_DWORD **)this + 6) = 2;
    if ( v9 )
      ReleaseSRWLockExclusive(v9);
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, fPending, &Context) && fPending[0] )
    {
      Context = qword_180438670;
      qword_180438670[0] = &LockScreenServiceLogging::`vftable';
      qword_180438688 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438670, qword_180438688);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_180438670);
    }
    v10 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v10 > 5u
      && (*((_QWORD *)v10 + 2) & 0x400000000000LL) != 0
      && (*((_QWORD *)v10 + 3) & 0x400000000000LL) == *((_QWORD *)v10 + 3) )
    {
      v18 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v28 = &v22;
      v22 = v18;
      v29 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v31 = 4LL;
      v21 = CurrentThreadId;
      v33 = 4LL;
      v30 = &v21;
      v32 = &v57;
      TlgWrite(v10, &unk_1803899EE, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 5u, &v27);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((CFramePresentationTelemetry::SplashScreenSuppressed *)((char *)this + 8));
}
