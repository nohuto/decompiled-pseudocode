/*
 * XREFs of ?StopActivity@ProcessNewWindow@CImmersiveAppTelemetry@@MEAAXXZ @ 0x18000D9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?zInternalStop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180010140 (-zInternalStop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvider.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18001833C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgCreateWsz @ 0x180058BCC (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x180058D78 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

void __fastcall CImmersiveAppTelemetry::ProcessNewWindow::StopActivity(CImmersiveAppTelemetry::ProcessNewWindow *this)
{
  int *v2; // rsi
  int v3; // eax
  int *v4; // rsi
  RTL_SRWLOCK *v5; // rsi
  char v6; // di
  RTL_SRWLOCK *v7; // rsi
  PSRWLOCK *p_SRWLock; // rax
  __int64 v9; // rdi
  int v10; // ecx
  const GUID *v11; // r8
  REGHANDLE v12; // rcx
  const CHAR *v13; // rdx
  const CHAR *v14; // rdx
  const WCHAR *v15; // rdx
  const CHAR *v16; // rdx
  const CHAR *v17; // rdx
  const CHAR *v18; // rdx
  int v19; // ecx
  const CHAR *v20; // rdx
  TraceLoggingHProvider v21; // r10
  DWORD CurrentThreadId; // [rsp+38h] [rbp-D0h] BYREF
  WINBOOL v23; // [rsp+3Ch] [rbp-CCh] BYREF
  int v24; // [rsp+40h] [rbp-C8h] BYREF
  int v25; // [rsp+44h] [rbp-C4h] BYREF
  int v26; // [rsp+48h] [rbp-C0h] BYREF
  int v27; // [rsp+4Ch] [rbp-BCh] BYREF
  int v28; // [rsp+50h] [rbp-B8h] BYREF
  int v29; // [rsp+54h] [rbp-B4h] BYREF
  int v30; // [rsp+58h] [rbp-B0h] BYREF
  WINBOOL fPending; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v32; // [rsp+60h] [rbp-A8h] BYREF
  LPVOID v33; // [rsp+68h] [rbp-A0h] BYREF
  LPVOID Context; // [rsp+70h] [rbp-98h] BYREF
  PSRWLOCK SRWLock; // [rsp+78h] [rbp-90h] BYREF
  PSRWLOCK v36; // [rsp+80h] [rbp-88h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+88h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+98h] [rbp-70h] BYREF
  void *v39; // [rsp+A8h] [rbp-60h]
  int v40; // [rsp+B0h] [rbp-58h]
  int v41; // [rsp+B4h] [rbp-54h]
  __int64 *v42; // [rsp+B8h] [rbp-50h]
  __int64 v43; // [rsp+C0h] [rbp-48h]
  DWORD *p_CurrentThreadId; // [rsp+C8h] [rbp-40h]
  __int64 v45; // [rsp+D0h] [rbp-38h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D8h] [rbp-30h] BYREF
  int *v47; // [rsp+F8h] [rbp-10h]
  __int64 v48; // [rsp+100h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+108h] [rbp+0h] BYREF
  int *v50; // [rsp+118h] [rbp+10h]
  __int64 v51; // [rsp+120h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+128h] [rbp+20h] BYREF
  int *v53; // [rsp+138h] [rbp+30h]
  __int64 v54; // [rsp+140h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+148h] [rbp+40h] BYREF
  int *v56; // [rsp+158h] [rbp+50h]
  __int64 v57; // [rsp+160h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+168h] [rbp+60h] BYREF
  int *v59; // [rsp+178h] [rbp+70h]
  __int64 v60; // [rsp+180h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+188h] [rbp+80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+198h] [rbp+90h] BYREF
  int *v63; // [rsp+1A8h] [rbp+A0h]
  __int64 v64; // [rsp+1B0h] [rbp+A8h]
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+1B8h] [rbp+B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+1C8h] [rbp+C0h] BYREF
  int *v67; // [rsp+1D8h] [rbp+D0h]
  __int64 v68; // [rsp+1E0h] [rbp+D8h]
  int *v69; // [rsp+1E8h] [rbp+E0h]
  __int64 v70; // [rsp+1F0h] [rbp+E8h]
  struct _EVENT_DATA_DESCRIPTOR v71; // [rsp+1F8h] [rbp+F0h] BYREF

  CurrentThreadId = 0;
  v2 = (int *)*((_QWORD *)this + 6);
  v3 = v2[19];
  if ( v3 < 0 && v3 == v2[21] )
    v4 = v2 + 20;
  else
    v4 = 0LL;
  if ( v4 )
  {
    wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStop();
    v33 = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v23, &v33) && v23 )
    {
      v33 = qword_180438670;
      qword_180438670[0] = &LockScreenServiceLogging::`vftable';
      qword_180438688 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438670, qword_180438688);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_180438670);
    }
    if ( **((_DWORD **)v33 + 1) > 5u )
    {
      v13 = (const CHAR *)*((_QWORD *)v4 + 6);
      v24 = v4[1];
      v47 = &v24;
      v48 = 4LL;
      TlgCreateSz(&pDesc, v13);
      v14 = (const CHAR *)*((_QWORD *)v4 + 15);
      v50 = v4 + 14;
      v51 = 4LL;
      TlgCreateSz(&v52, v14);
      v15 = (const WCHAR *)*((_QWORD *)v4 + 2);
      v25 = *v4;
      v53 = &v25;
      v54 = 4LL;
      TlgCreateWsz(&v55, v15);
      v16 = (const CHAR *)*((_QWORD *)v4 + 8);
      v26 = v4[6];
      v56 = &v26;
      v57 = 4LL;
      TlgCreateSz(&v58, v16);
      v17 = (const CHAR *)*((_QWORD *)v4 + 10);
      v27 = v4[18];
      v59 = &v27;
      v60 = 4LL;
      TlgCreateSz(&v61, v17);
      TlgCreateWsz(&v62, *((LPCWSTR *)v4 + 11));
      v18 = (const CHAR *)*((_QWORD *)v4 + 13);
      v28 = v4[24];
      v63 = &v28;
      v64 = 4LL;
      TlgCreateSz(&v65, v18);
      TlgCreateWsz(&v66, *((LPCWSTR *)v4 + 14));
      v19 = v4[2];
      v20 = (const CHAR *)*((_QWORD *)v4 + 5);
      v67 = &v29;
      v30 = v4[15];
      v29 = v19;
      v69 = &v30;
      v68 = 4LL;
      v70 = 4LL;
      TlgCreateSz(&v71, v20);
      TlgWrite(v21, &unk_1803884B5, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x13u, &pData);
    }
  }
  else
  {
    v5 = (RTL_SRWLOCK *)*((_QWORD *)this + 38);
    if ( v5 )
    {
      v7 = v5 + 31;
      AcquireSRWLockExclusive(v7);
      p_SRWLock = &v36;
      v36 = v7;
      v6 = 1;
    }
    else
    {
      v6 = 2;
      SRWLock = 0LL;
      v7 = 0LL;
      p_SRWLock = &SRWLock;
    }
    *p_SRWLock = 0LL;
    if ( (v6 & 2) != 0 )
    {
      v6 &= ~2u;
      if ( SRWLock )
        ReleaseSRWLockExclusive(SRWLock);
    }
    if ( (v6 & 1) != 0 && v36 )
      ReleaseSRWLockExclusive(v36);
    **((_DWORD **)this + 6) = 2;
    if ( v7 )
      ReleaseSRWLockExclusive(v7);
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = qword_180438670;
      qword_180438670[0] = &LockScreenServiceLogging::`vftable';
      qword_180438688 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438670, qword_180438688);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_180438670);
    }
    v9 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v9 > 5u )
    {
      v10 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v42 = &v32;
      LODWORD(v32) = v10;
      v43 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      p_CurrentThreadId = &CurrentThreadId;
      v45 = 4LL;
      v11 = (const GUID *)(*((_QWORD *)this + 6) + 8LL);
      *(_DWORD *)&EventDescriptor.Level = 517;
      UserData.Ptr = *(_QWORD *)(v9 + 8);
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_1803885E0 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      v12 = *(_QWORD *)(v9 + 32);
      EventDescriptor.Keyword = 0LL;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v39 = &unk_1803885EB;
      UserData.Reserved = 2;
      v40 = 53;
      v41 = 1;
      EventWriteTransfer(v12, &EventDescriptor, v11, 0LL, 4u, &UserData);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((CImmersiveAppTelemetry::ProcessNewWindow *)((char *)this + 8));
}
