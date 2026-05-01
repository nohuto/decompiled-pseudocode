/*
 * XREFs of ?Stop@CortanaExperienceManager_PositionCortanaWindow@CortanaProactiveTelemetry@@QEAAXHHHH@Z @ 0x180073DDC
 * Callers:
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x180062350 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18000FA24 (-LockExclusive@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18001833C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgCreateWsz @ 0x180058BCC (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x180058D78 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?zInternalStop@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800F6804 (-zInternalStop@-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

void __fastcall CortanaProactiveTelemetry::CortanaExperienceManager_PositionCortanaWindow::Stop(
        CortanaProactiveTelemetry::CortanaExperienceManager_PositionCortanaWindow *this,
        int a2,
        int a3,
        int a4,
        char a5)
{
  int *v5; // rsi
  int v7; // eax
  int *v8; // rsi
  RTL_SRWLOCK *v9; // rcx
  __int64 v10; // rsi
  int v11; // ecx
  const GUID *v12; // r8
  REGHANDLE v13; // rcx
  const CHAR *v14; // rdx
  const CHAR *v15; // rdx
  const WCHAR *v16; // rdx
  const CHAR *v17; // rdx
  const CHAR *v18; // rdx
  const CHAR *v19; // rdx
  int v20; // ecx
  const CHAR *v21; // rdx
  TraceLoggingHProvider v22; // r10
  WINBOOL v23; // [rsp+38h] [rbp-D0h] BYREF
  int v24; // [rsp+3Ch] [rbp-CCh] BYREF
  int v25; // [rsp+40h] [rbp-C8h] BYREF
  int v26; // [rsp+44h] [rbp-C4h] BYREF
  int v27; // [rsp+48h] [rbp-C0h] BYREF
  int v28; // [rsp+4Ch] [rbp-BCh] BYREF
  int v29; // [rsp+50h] [rbp-B8h] BYREF
  int v30; // [rsp+54h] [rbp-B4h] BYREF
  WINBOOL fPending; // [rsp+58h] [rbp-B0h] BYREF
  int v32; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v33; // [rsp+60h] [rbp-A8h] BYREF
  LPVOID v34; // [rsp+68h] [rbp-A0h] BYREF
  LPVOID Context; // [rsp+70h] [rbp-98h] BYREF
  PSRWLOCK SRWLock; // [rsp+78h] [rbp-90h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+80h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+98h] [rbp-70h] BYREF
  void *v39; // [rsp+A8h] [rbp-60h]
  int v40; // [rsp+B0h] [rbp-58h]
  int v41; // [rsp+B4h] [rbp-54h]
  int *v42; // [rsp+B8h] [rbp-50h]
  __int64 v43; // [rsp+C0h] [rbp-48h]
  __int64 *v44; // [rsp+C8h] [rbp-40h]
  __int64 v45; // [rsp+D0h] [rbp-38h]
  int *v46; // [rsp+D8h] [rbp-30h]
  __int64 v47; // [rsp+E0h] [rbp-28h]
  int *v48; // [rsp+E8h] [rbp-20h]
  __int64 v49; // [rsp+F0h] [rbp-18h]
  int *v50; // [rsp+F8h] [rbp-10h]
  __int64 v51; // [rsp+100h] [rbp-8h]
  char *v52; // [rsp+108h] [rbp+0h]
  __int64 v53; // [rsp+110h] [rbp+8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+118h] [rbp+10h] BYREF
  int *v55; // [rsp+138h] [rbp+30h]
  __int64 v56; // [rsp+140h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+148h] [rbp+40h] BYREF
  int *v58; // [rsp+158h] [rbp+50h]
  __int64 v59; // [rsp+160h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+168h] [rbp+60h] BYREF
  int *v61; // [rsp+178h] [rbp+70h]
  __int64 v62; // [rsp+180h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+188h] [rbp+80h] BYREF
  int *v64; // [rsp+198h] [rbp+90h]
  __int64 v65; // [rsp+1A0h] [rbp+98h]
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+1A8h] [rbp+A0h] BYREF
  int *v67; // [rsp+1B8h] [rbp+B0h]
  __int64 v68; // [rsp+1C0h] [rbp+B8h]
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+1C8h] [rbp+C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v70; // [rsp+1D8h] [rbp+D0h] BYREF
  int *v71; // [rsp+1E8h] [rbp+E0h]
  __int64 v72; // [rsp+1F0h] [rbp+E8h]
  struct _EVENT_DATA_DESCRIPTOR v73; // [rsp+1F8h] [rbp+F0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v74; // [rsp+208h] [rbp+100h] BYREF
  int *v75; // [rsp+218h] [rbp+110h]
  __int64 v76; // [rsp+220h] [rbp+118h]
  int *v77; // [rsp+228h] [rbp+120h]
  __int64 v78; // [rsp+230h] [rbp+128h]
  struct _EVENT_DATA_DESCRIPTOR v79; // [rsp+238h] [rbp+130h] BYREF
  int *v80; // [rsp+248h] [rbp+140h]
  __int64 v81; // [rsp+250h] [rbp+148h]
  int *v82; // [rsp+258h] [rbp+150h]
  __int64 v83; // [rsp+260h] [rbp+158h]
  int *v84; // [rsp+268h] [rbp+160h]
  __int64 v85; // [rsp+270h] [rbp+168h]
  char *v86; // [rsp+278h] [rbp+170h]
  __int64 v87; // [rsp+280h] [rbp+178h]
  int v88; // [rsp+2D0h] [rbp+1C8h] BYREF
  int v89; // [rsp+2D8h] [rbp+1D0h] BYREF
  int v90; // [rsp+2E0h] [rbp+1D8h] BYREF

  v90 = a4;
  v89 = a3;
  v88 = a2;
  v5 = (int *)*((_QWORD *)this + 6);
  v7 = v5[19];
  if ( v7 < 0 && v7 == v5[21] )
    v8 = v5 + 20;
  else
    v8 = 0LL;
  if ( v8 )
  {
    wil::ActivityBase<StartMenuExperienceLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(this);
    v34 = 0LL;
    if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &v23, &v34) && v23 )
    {
      v34 = &qword_180438828;
      qword_180438828 = &LockScreenServiceLogging::`vftable';
      qword_180438840 = (struct _TlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180438828, qword_180438840);
      InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &qword_180438828);
    }
    if ( **((_DWORD **)v34 + 1) > 5u )
    {
      v14 = (const CHAR *)*((_QWORD *)v8 + 6);
      v24 = v8[1];
      v55 = &v24;
      v56 = 4LL;
      TlgCreateSz(&pDesc, v14);
      v15 = (const CHAR *)*((_QWORD *)v8 + 15);
      v58 = v8 + 14;
      v59 = 4LL;
      TlgCreateSz(&v60, v15);
      v16 = (const WCHAR *)*((_QWORD *)v8 + 2);
      v25 = *v8;
      v61 = &v25;
      v62 = 4LL;
      TlgCreateWsz(&v63, v16);
      v17 = (const CHAR *)*((_QWORD *)v8 + 8);
      v26 = v8[6];
      v64 = &v26;
      v65 = 4LL;
      TlgCreateSz(&v66, v17);
      v18 = (const CHAR *)*((_QWORD *)v8 + 10);
      v27 = v8[18];
      v67 = &v27;
      v68 = 4LL;
      TlgCreateSz(&v69, v18);
      TlgCreateWsz(&v70, *((LPCWSTR *)v8 + 11));
      v19 = (const CHAR *)*((_QWORD *)v8 + 13);
      v28 = v8[24];
      v71 = &v28;
      v72 = 4LL;
      TlgCreateSz(&v73, v19);
      TlgCreateWsz(&v74, *((LPCWSTR *)v8 + 14));
      v20 = v8[2];
      v21 = (const CHAR *)*((_QWORD *)v8 + 5);
      v75 = &v29;
      v30 = v8[15];
      v29 = v20;
      v77 = &v30;
      v76 = 4LL;
      v78 = 4LL;
      TlgCreateSz(&v79, v21);
      v81 = 4LL;
      v82 = &v89;
      v80 = &v88;
      v84 = &v90;
      v86 = &a5;
      v83 = 4LL;
      v85 = 4LL;
      v87 = 4LL;
      TlgWrite(v22, &unk_180391048, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x17u, &pData);
    }
  }
  else
  {
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
      (__int64)this,
      &SRWLock);
    v9 = SRWLock;
    **((_DWORD **)this + 6) = 2;
    if ( v9 )
      ReleaseSRWLockExclusive(v9);
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
    v10 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v10 > 5u )
    {
      v11 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v42 = &v32;
      v32 = v11;
      v43 = 4LL;
      LODWORD(v33) = GetCurrentThreadId();
      v44 = &v33;
      v46 = &v88;
      v48 = &v89;
      v50 = &v90;
      v52 = &a5;
      v45 = 4LL;
      v47 = 4LL;
      v49 = 4LL;
      v51 = 4LL;
      v53 = 4LL;
      v12 = (const GUID *)(*((_QWORD *)this + 6) + 8LL);
      *(_DWORD *)&EventDescriptor.Level = 517;
      UserData.Ptr = *(_QWORD *)(v10 + 8);
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180390FCF - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      v13 = *(_QWORD *)(v10 + 32);
      EventDescriptor.Keyword = 0LL;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v39 = &unk_180390FDA;
      UserData.Reserved = 2;
      v40 = 109;
      v41 = 1;
      EventWriteTransfer(v13, &EventDescriptor, v12, 0LL, 8u, &UserData);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((CortanaProactiveTelemetry::CortanaExperienceManager_PositionCortanaWindow *)((char *)this + 8));
}
