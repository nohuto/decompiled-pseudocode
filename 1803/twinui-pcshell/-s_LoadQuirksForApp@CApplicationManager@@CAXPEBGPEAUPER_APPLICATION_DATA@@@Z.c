/*
 * XREFs of ?s_LoadQuirksForApp@CApplicationManager@@CAXPEBGPEAUPER_APPLICATION_DATA@@@Z @ 0x180088EE0
 * Callers:
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x180041C70 (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18000FD7C (-LockExclusive@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorT.c)
 *     ?ReportStopActivity@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x1800100A4 (-ReportStopActivity@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsPro.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180010180 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18001833C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgCreateWsz @ 0x180058BCC (_TlgCreateWsz.c)
 *     ??1?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180072F34 (--1-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$A_ea_180072F34.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180085EE0 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18008DE98 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param_ea_18008DE98.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180097C0C (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetStopResult@?$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x1800F7E4C (-SetStopResult@-$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x180103574 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

void __fastcall CApplicationManager::s_LoadQuirksForApp(LPCWSTR pwsz, struct PER_APPLICATION_DATA *a2)
{
  int *v4; // rbx
  __int64 v5; // rbx
  const GUID *v6; // rax
  REGHANDLE v7; // rcx
  ULONG UserDataCount; // r10d
  __int64 v9; // rdi
  DWORD v10; // r14d
  unsigned __int64 v11; // rbx
  signed __int64 i; // rcx
  int IsEnabledForPackage4; // eax
  int v14; // ebx
  volatile signed __int32 *v15; // rdx
  HANDLE ProcessHeap; // rax
  _DWORD *v17; // rax
  signed __int64 v18; // rax
  char v19; // bl
  __int64 v20; // rdx
  void *v21; // rbx
  HANDLE v22; // rax
  HANDLE v23; // rax
  unsigned int v24; // [rsp+30h] [rbp-D0h] BYREF
  WINBOOL fPending; // [rsp+34h] [rbp-CCh] BYREF
  WINBOOL v26; // [rsp+38h] [rbp-C8h] BYREF
  DWORD CurrentThreadId; // [rsp+3Ch] [rbp-C4h] BYREF
  WINBOOL v28; // [rsp+40h] [rbp-C0h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-B8h] BYREF
  LPVOID v30; // [rsp+50h] [rbp-B0h] BYREF
  LPVOID v31; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v32[8]; // [rsp+60h] [rbp-A0h] BYREF
  PSRWLOCK SRWLock; // [rsp+68h] [rbp-98h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+70h] [rbp-90h] BYREF
  void **v35; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v36[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v37; // [rsp+98h] [rbp-68h]
  DWORD v38; // [rsp+A0h] [rbp-60h]
  int *v39; // [rsp+A8h] [rbp-58h]
  int *v40; // [rsp+B0h] [rbp-50h]
  int v41; // [rsp+B8h] [rbp-48h] BYREF
  char v42; // [rsp+BCh] [rbp-44h]
  _BYTE v43[32]; // [rsp+C0h] [rbp-40h] BYREF
  int v44; // [rsp+E0h] [rbp-20h] BYREF
  const char *v45; // [rsp+E8h] [rbp-18h]
  LPVOID v46; // [rsp+F0h] [rbp-10h]
  char v47; // [rsp+F8h] [rbp-8h]
  __int64 v48; // [rsp+100h] [rbp+0h]
  _BYTE v49[144]; // [rsp+108h] [rbp+8h] BYREF
  LPVOID lpMem; // [rsp+198h] [rbp+98h]
  __int64 v51; // [rsp+1A0h] [rbp+A0h]
  __int64 v52; // [rsp+1A8h] [rbp+A8h]
  void *v53; // [rsp+1B0h] [rbp+B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+1C0h] [rbp+C0h] BYREF
  void *v55; // [rsp+1D0h] [rbp+D0h]
  int v56; // [rsp+1D8h] [rbp+D8h]
  int v57; // [rsp+1DCh] [rbp+DCh]
  DWORD *p_CurrentThreadId; // [rsp+1E0h] [rbp+E0h]
  __int64 v59; // [rsp+1E8h] [rbp+E8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+1F0h] [rbp+F0h] BYREF
  int v61; // [rsp+200h] [rbp+100h] BYREF
  char *v62; // [rsp+208h] [rbp+108h]
  int v63; // [rsp+210h] [rbp+110h]
  char *v64; // [rsp+218h] [rbp+118h]
  int v65; // [rsp+220h] [rbp+120h]
  char *v66; // [rsp+228h] [rbp+128h]
  int v67; // [rsp+230h] [rbp+130h]
  char *v68; // [rsp+238h] [rbp+138h]
  int v69; // [rsp+240h] [rbp+140h]
  char *v70; // [rsp+248h] [rbp+148h]
  int v71; // [rsp+250h] [rbp+150h]
  char *v72; // [rsp+258h] [rbp+158h]
  int v73; // [rsp+260h] [rbp+160h]
  char *v74; // [rsp+268h] [rbp+168h]
  int v75; // [rsp+270h] [rbp+170h]
  char *v76; // [rsp+278h] [rbp+178h]
  int v77; // [rsp+280h] [rbp+180h]
  char *v78; // [rsp+288h] [rbp+188h]
  int v79; // [rsp+290h] [rbp+190h]
  char *v80; // [rsp+298h] [rbp+198h]
  int v81; // [rsp+2A0h] [rbp+1A0h]
  char *v82; // [rsp+2A8h] [rbp+1A8h]
  wil::details::in1diag3 *retaddr; // [rsp+2E8h] [rbp+1E8h]

  v48 = 1LL;
  v36[0] = 0LL;
  v36[1] = &v35;
  v37 = 0LL;
  v39 = &v44;
  v38 = 0;
  v40 = &v41;
  v41 = 0;
  v45 = "LoadQuirksForPackage";
  v42 = 0;
  v47 = 0;
  v44 = 0;
  v46 = 0LL;
  lpMem = 0LL;
  memset_0(v49, 0, sizeof(v49));
  v4 = v40;
  v53 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  Context = 0LL;
  v35 = &CAppManagerTelemetry::LoadQuirksForPackage::`vftable';
  if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_180438670;
    qword_180438670[0] = &LockScreenServiceLogging::`vftable';
    qword_180438688 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438670, qword_180438688);
    InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_180438670);
  }
  if ( **((_DWORD **)Context + 1) <= 5u )
    *((_QWORD *)v4 + 1) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v4 + 2));
  *v4 = 1;
  v30 = 0LL;
  if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v26, &v30) && v26 )
  {
    v30 = qword_180438670;
    qword_180438670[0] = &LockScreenServiceLogging::`vftable';
    qword_180438688 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438670, qword_180438688);
    InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_180438670);
  }
  v5 = *((_QWORD *)v30 + 1);
  if ( *(_DWORD *)v5 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v59 = 4LL;
    p_CurrentThreadId = &CurrentThreadId;
    TlgCreateWsz(&pDesc, pwsz);
    v6 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(&v35);
    *(_DWORD *)&EventDescriptor.Level = 261;
    v7 = *(_QWORD *)(v5 + 32);
    UserData.Ptr = *(_QWORD *)(v5 + 8);
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180385D96 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v55 = &unk_180385DA1;
    UserData.Reserved = 2;
    v56 = 67;
    v57 = 1;
    EventWriteTransfer(v7, &EventDescriptor, (LPCGUID)(v40 + 2), v6, UserDataCount, &UserData);
  }
  if ( !v38 )
  {
    v9 = wil::details::g_pThreadFailureCallbacks;
    if ( !wil::details::g_pThreadFailureCallbacks )
      goto LABEL_37;
    v10 = GetCurrentThreadId();
    v11 = v10 % 0xAuLL;
    for ( i = *(_QWORD *)(v9 + 8 * v11); i; i = *(_QWORD *)(i + 16) )
    {
      if ( *(_DWORD *)(i + 8) == v10 )
        goto LABEL_18;
    }
    ProcessHeap = GetProcessHeap();
    v17 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
    i = (signed __int64)v17;
    if ( v17 )
    {
      *(_QWORD *)v17 = 0LL;
      v17[2] = v10;
      *((_QWORD *)v17 + 2) = 0LL;
      _m_prefetchw((const void *)(v9 + 8 * v11));
      do
      {
        v18 = *(_QWORD *)(v9 + 8 * v11);
        *(_QWORD *)(i + 16) = v18;
      }
      while ( v18 != _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 8 * v11), i, v18) );
    }
    else
    {
LABEL_37:
      i = 0LL;
    }
LABEL_18:
    v36[0] = i;
    if ( i )
    {
      v37 = *(_QWORD *)i;
      *(_QWORD *)i = v36;
      v38 = GetCurrentThreadId();
    }
  }
  v61 = 589824;
  v64 = (char *)a2 + 27;
  v62 = (char *)a2 + 28;
  v66 = (char *)a2 + 29;
  v63 = 589825;
  v68 = (char *)a2 + 30;
  v65 = 589826;
  v70 = (char *)a2 + 31;
  v67 = 327684;
  v72 = (char *)a2 + 32;
  v69 = 589830;
  v74 = (char *)a2 + 33;
  v76 = (char *)a2 + 34;
  v78 = (char *)a2 + 35;
  v80 = (char *)a2 + 36;
  v82 = (char *)a2 + 37;
  v71 = 589829;
  v73 = 589827;
  v75 = 589828;
  v77 = 589832;
  v79 = 589840;
  v81 = 589841;
  IsEnabledForPackage4 = QuirkIsEnabledForPackage4(0LL, pwsz, 0LL, &v61);
  v14 = IsEnabledForPackage4;
  if ( IsEnabledForPackage4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1ED0,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)IsEnabledForPackage4,
      11);
  if ( byte_18043755A )
  {
    v24 = 0;
    if ( SHRegGetDWORD(
           HKEY_CURRENT_USER,
           L"Software\\Microsoft\\Windows\\CurrentVersion\\ApplicationView",
           L"DisableWin8AppCompatBehavior",
           &v24) < 0 )
      byte_18043755A = 0;
    else
      *((_BYTE *)a2 + 28) = v24 != 0;
  }
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)&v35, v14);
  v15 = (volatile signed __int32 *)v53;
  v35 = &CAppManagerTelemetry::LoadQuirksForPackage::`vftable';
  if ( !v53 )
    goto LABEL_24;
  wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)&v35,
    &SRWLock);
  v15 = (volatile signed __int32 *)v53;
  if ( v53 && *(_DWORD *)v53 == 1 )
  {
    v19 = 1;
  }
  else
  {
    v19 = 0;
    wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v53);
    v15 = (volatile signed __int32 *)v53;
  }
  if ( SRWLock )
  {
    ReleaseSRWLockExclusive(SRWLock);
    v15 = (volatile signed __int32 *)v53;
  }
  if ( v19 )
  {
LABEL_24:
    if ( *v40 == 1 )
    {
      v20 = 2147942974LL;
      if ( v40[21] < 0 )
        v20 = (unsigned int)v40[21];
      wil::ActivityBase<TrayNotificationAreaLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TrayNotificationAreaLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        v40,
        v20,
        v32);
      wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity((IamTraceLogging::OnShellHookMessage *)&v35);
      v15 = (volatile signed __int32 *)v53;
    }
  }
  if ( v15 )
  {
    if ( !_InterlockedDecrement(v15) )
    {
      v21 = v53;
      if ( v53 )
      {
        wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)v53 + 8);
        operator delete(v21, (const struct std::nothrow_t *)0x100);
      }
    }
    v53 = 0LL;
  }
  if ( lpMem )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)lpMem) )
    {
      v22 = GetProcessHeap();
      HeapFree(v22, 0, lpMem);
    }
    lpMem = 0LL;
    v51 = 0LL;
  }
  if ( v47 )
  {
    v23 = GetProcessHeap();
    HeapFree(v23, 0, v46);
    v47 = 0;
  }
  v46 = 0LL;
  if ( v41 == 1 )
  {
    v41 = 2;
    v31 = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v28, &v31) && v28 )
    {
      v31 = qword_180438670;
      qword_180438670[0] = &LockScreenServiceLogging::`vftable';
      qword_180438688 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438670, qword_180438688);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_180438670);
    }
    _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)v31 + 1), v43);
  }
  v41 = 3;
  if ( v38 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v36);
}
