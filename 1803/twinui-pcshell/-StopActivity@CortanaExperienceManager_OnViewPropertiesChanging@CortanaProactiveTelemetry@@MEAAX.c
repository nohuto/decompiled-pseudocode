/*
 * XREFs of ?StopActivity@CortanaExperienceManager_OnViewPropertiesChanging@CortanaProactiveTelemetry@@MEAAXXZ @ 0x1800752C0
 * Callers:
 *     ?ReportStopActivity@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x180074F70 (-ReportStopActivity@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0I.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18000FA24 (-LockExclusive@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18001833C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgCreateWsz @ 0x180058BCC (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x180058D78 (_TlgCreateSz.c)
 *     ?zInternalStop@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180059028 (-zInternalStop@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProv.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

void __fastcall CortanaProactiveTelemetry::CortanaExperienceManager_OnViewPropertiesChanging::StopActivity(
        CortanaProactiveTelemetry::CortanaExperienceManager_OnViewPropertiesChanging *this)
{
  int *v1; // rsi
  int v3; // eax
  int *v4; // rsi
  RTL_SRWLOCK *v5; // rcx
  __int64 v6; // rsi
  int v7; // ecx
  const GUID *v8; // r8
  REGHANDLE v9; // rcx
  const CHAR *v10; // rdx
  const CHAR *v11; // rdx
  const WCHAR *v12; // rdx
  const CHAR *v13; // rdx
  const CHAR *v14; // rdx
  const CHAR *v15; // rdx
  int v16; // ecx
  const CHAR *v17; // rdx
  TraceLoggingHProvider v18; // r10
  WINBOOL v19; // [rsp+30h] [rbp-D0h] BYREF
  int v20; // [rsp+34h] [rbp-CCh] BYREF
  int v21; // [rsp+38h] [rbp-C8h] BYREF
  int v22; // [rsp+3Ch] [rbp-C4h] BYREF
  int v23; // [rsp+40h] [rbp-C0h] BYREF
  int v24; // [rsp+44h] [rbp-BCh] BYREF
  int v25; // [rsp+48h] [rbp-B8h] BYREF
  int v26; // [rsp+4Ch] [rbp-B4h] BYREF
  WINBOOL fPending; // [rsp+50h] [rbp-B0h] BYREF
  int v28; // [rsp+54h] [rbp-ACh] BYREF
  DWORD CurrentThreadId; // [rsp+58h] [rbp-A8h] BYREF
  LPVOID v30; // [rsp+60h] [rbp-A0h] BYREF
  LPVOID Context; // [rsp+68h] [rbp-98h] BYREF
  PSRWLOCK SRWLock; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+78h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-70h] BYREF
  void *v35; // [rsp+A0h] [rbp-60h]
  int v36; // [rsp+A8h] [rbp-58h]
  int v37; // [rsp+ACh] [rbp-54h]
  int *v38; // [rsp+B0h] [rbp-50h]
  __int64 v39; // [rsp+B8h] [rbp-48h]
  DWORD *p_CurrentThreadId; // [rsp+C0h] [rbp-40h]
  __int64 v41; // [rsp+C8h] [rbp-38h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  int *v43; // [rsp+F0h] [rbp-10h]
  __int64 v44; // [rsp+F8h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+100h] [rbp+0h] BYREF
  int *v46; // [rsp+110h] [rbp+10h]
  __int64 v47; // [rsp+118h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+120h] [rbp+20h] BYREF
  int *v49; // [rsp+130h] [rbp+30h]
  __int64 v50; // [rsp+138h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+140h] [rbp+40h] BYREF
  int *v52; // [rsp+150h] [rbp+50h]
  __int64 v53; // [rsp+158h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+160h] [rbp+60h] BYREF
  int *v55; // [rsp+170h] [rbp+70h]
  __int64 v56; // [rsp+178h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+180h] [rbp+80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+190h] [rbp+90h] BYREF
  int *v59; // [rsp+1A0h] [rbp+A0h]
  __int64 v60; // [rsp+1A8h] [rbp+A8h]
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+1B0h] [rbp+B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+1C0h] [rbp+C0h] BYREF
  int *v63; // [rsp+1D0h] [rbp+D0h]
  __int64 v64; // [rsp+1D8h] [rbp+D8h]
  int *v65; // [rsp+1E0h] [rbp+E0h]
  __int64 v66; // [rsp+1E8h] [rbp+E8h]
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+1F0h] [rbp+F0h] BYREF

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 < 0 && v3 == v1[21] )
    v4 = v1 + 20;
  else
    v4 = 0LL;
  if ( v4 )
  {
    wil::ActivityBase<CortanaProactiveLogging,1,0,4,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v30 = 0LL;
    if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &v19, &v30) && v19 )
    {
      v30 = &qword_180438828;
      qword_180438828 = &LockScreenServiceLogging::`vftable';
      qword_180438840 = (struct _TlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180438828, qword_180438840);
      InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &qword_180438828);
    }
    if ( **((_DWORD **)v30 + 1) > 4u )
    {
      v10 = (const CHAR *)*((_QWORD *)v4 + 6);
      v20 = v4[1];
      v43 = &v20;
      v44 = 4LL;
      TlgCreateSz(&pDesc, v10);
      v11 = (const CHAR *)*((_QWORD *)v4 + 15);
      v46 = v4 + 14;
      v47 = 4LL;
      TlgCreateSz(&v48, v11);
      v12 = (const WCHAR *)*((_QWORD *)v4 + 2);
      v21 = *v4;
      v49 = &v21;
      v50 = 4LL;
      TlgCreateWsz(&v51, v12);
      v13 = (const CHAR *)*((_QWORD *)v4 + 8);
      v22 = v4[6];
      v52 = &v22;
      v53 = 4LL;
      TlgCreateSz(&v54, v13);
      v14 = (const CHAR *)*((_QWORD *)v4 + 10);
      v23 = v4[18];
      v55 = &v23;
      v56 = 4LL;
      TlgCreateSz(&v57, v14);
      TlgCreateWsz(&v58, *((LPCWSTR *)v4 + 11));
      v15 = (const CHAR *)*((_QWORD *)v4 + 13);
      v24 = v4[24];
      v59 = &v24;
      v60 = 4LL;
      TlgCreateSz(&v61, v15);
      TlgCreateWsz(&v62, *((LPCWSTR *)v4 + 14));
      v16 = v4[2];
      v17 = (const CHAR *)*((_QWORD *)v4 + 5);
      v63 = &v25;
      v26 = v4[15];
      v25 = v16;
      v65 = &v26;
      v64 = 4LL;
      v66 = 4LL;
      TlgCreateSz(&v67, v17);
      TlgWrite(v18, &unk_18038C2BE, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x13u, &pData);
    }
  }
  else
  {
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
      (__int64)this,
      &SRWLock);
    v5 = SRWLock;
    **((_DWORD **)this + 6) = 2;
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = &qword_180438828;
      qword_180438828 = &LockScreenServiceLogging::`vftable';
      qword_180438840 = (struct _TlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180438828, qword_180438840);
      InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &qword_180438828);
    }
    v6 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v6 > 4u )
    {
      v7 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v38 = &v28;
      v28 = v7;
      v39 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      p_CurrentThreadId = &CurrentThreadId;
      v41 = 4LL;
      v8 = (const GUID *)(*((_QWORD *)this + 6) + 8LL);
      *(_DWORD *)&EventDescriptor.Level = 516;
      UserData.Ptr = *(_QWORD *)(v6 + 8);
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18038C25C - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      v9 = *(_QWORD *)(v6 + 32);
      EventDescriptor.Keyword = 0LL;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v35 = &unk_18038C267;
      UserData.Reserved = 2;
      v36 = 86;
      v37 = 1;
      EventWriteTransfer(v9, &EventDescriptor, v8, 0LL, 4u, &UserData);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((CortanaProactiveTelemetry::CortanaExperienceManager_OnViewPropertiesChanging *)((char *)this + 8));
}
