/*
 * XREFs of ?ReconcileApplicationViewState@CFrameApplicationPresentation@@UEAAJPEAUAPPLICATION_VIEW_DATA_UPDATE@@@Z @ 0x180013FD0
 * Callers:
 *     ?ReconcileApplicationViewState@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUAPPLICATION_VIEW_DATA_UPDATE@@@Z @ 0x18005D0A0 (-ReconcileApplicationViewState@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUAPPLICATION_VI.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18000FD7C (-LockExclusive@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorT.c)
 *     ?ReportStopActivity@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x1800100A4 (-ReportStopActivity@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsPro.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180010180 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ?_ComputeApplicationViewData@CFrameApplicationPresentation@@AEAAJAEBUtagRECT@@PEAUAPPLICATION_VIEW_DATA@@@Z @ 0x180014480 (-_ComputeApplicationViewData@CFrameApplicationPresentation@@AEAAJAEBUtagRECT@@PEAUAPPLICATION_VI.c)
 *     ?_ComputeDesiredApplicationRect@CFrameApplicationPresentation@@AEAAJPEAUtagRECT@@@Z @ 0x180014734 (-_ComputeDesiredApplicationRect@CFrameApplicationPresentation@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?AreAppViewDataEqual@ImmersiveApplicationLayout@@YA_NPEBUAPPLICATION_VIEW_DATA@@0@Z @ 0x1800170E0 (-AreAppViewDataEqual@ImmersiveApplicationLayout@@YA_NPEBUAPPLICATION_VIEW_DATA@@0@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18001833C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180072F34 (--1-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$A_ea_180072F34.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18008DE98 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param_ea_18008DE98.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180097C0C (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     ?SetStopResult@?$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x1800F7E4C (-SetStopResult@-$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x180103574 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFrameApplicationPresentation::ReconcileApplicationViewState(
        CFrameApplicationPresentation *this,
        struct APPLICATION_VIEW_DATA_UPDATE *a2)
{
  const WCHAR *v4; // rbx
  int *v5; // rdi
  __int64 v6; // rdi
  const WCHAR *v7; // rcx
  __int64 v8; // rax
  const GUID *v9; // rax
  __int64 v10; // rdi
  DWORD v11; // ebx
  signed __int64 *v12; // rdi
  signed __int64 v13; // rcx
  HANDLE ProcessHeap; // rax
  _DWORD *v15; // rax
  signed __int64 v16; // rax
  int v17; // ebx
  __int64 v18; // rcx
  int v19; // r8d
  int v20; // r9d
  int v21; // r10d
  int v22; // r11d
  __int128 v23; // xmm3
  __int128 v24; // xmm2
  int v25; // eax
  volatile signed __int32 *v26; // rdx
  char v28; // di
  int v29; // eax
  __int64 v30; // rdx
  void *v31; // rdi
  HANDLE v32; // rax
  HANDLE v33; // rax
  WINBOOL fPending; // [rsp+30h] [rbp-D0h] BYREF
  WINBOOL v35; // [rsp+34h] [rbp-CCh] BYREF
  DWORD CurrentThreadId; // [rsp+38h] [rbp-C8h] BYREF
  WINBOOL v37; // [rsp+3Ch] [rbp-C4h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-C0h] BYREF
  LPVOID v39; // [rsp+48h] [rbp-B8h] BYREF
  LPVOID v40; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v41[8]; // [rsp+58h] [rbp-A8h] BYREF
  PSRWLOCK SRWLock; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+68h] [rbp-98h] BYREF
  __int128 v44; // [rsp+78h] [rbp-88h] BYREF
  __int128 v45; // [rsp+88h] [rbp-78h]
  int v46; // [rsp+98h] [rbp-68h]
  __int64 v47; // [rsp+A0h] [rbp-60h]
  struct tagRECT rc; // [rsp+A8h] [rbp-58h] BYREF
  void **v49; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v50[2]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v51; // [rsp+D8h] [rbp-28h]
  DWORD v52; // [rsp+E0h] [rbp-20h]
  int *v53; // [rsp+E8h] [rbp-18h]
  int *v54; // [rsp+F0h] [rbp-10h]
  int v55; // [rsp+F8h] [rbp-8h] BYREF
  char v56; // [rsp+FCh] [rbp-4h]
  _BYTE v57[32]; // [rsp+100h] [rbp+0h] BYREF
  int v58; // [rsp+120h] [rbp+20h] BYREF
  const char *v59; // [rsp+128h] [rbp+28h]
  LPVOID v60; // [rsp+130h] [rbp+30h]
  char v61; // [rsp+138h] [rbp+38h]
  __int64 v62; // [rsp+140h] [rbp+40h]
  _BYTE v63[144]; // [rsp+148h] [rbp+48h] BYREF
  LPVOID lpMem; // [rsp+1D8h] [rbp+D8h]
  __int64 v65; // [rsp+1E0h] [rbp+E0h]
  __int64 v66; // [rsp+1E8h] [rbp+E8h]
  void *v67; // [rsp+1F0h] [rbp+F0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+200h] [rbp+100h] BYREF
  void *v69; // [rsp+210h] [rbp+110h]
  int v70; // [rsp+218h] [rbp+118h]
  int v71; // [rsp+21Ch] [rbp+11Ch]
  DWORD *p_CurrentThreadId; // [rsp+220h] [rbp+120h]
  __int64 v73; // [rsp+228h] [rbp+128h]
  const WCHAR *v74; // [rsp+230h] [rbp+130h]
  int v75; // [rsp+238h] [rbp+138h]
  int v76; // [rsp+23Ch] [rbp+13Ch]

  v47 = -2LL;
  *(_QWORD *)a2 = 0LL;
  *((_QWORD *)a2 + 1) = 0LL;
  *((_QWORD *)a2 + 2) = 0LL;
  *((_QWORD *)a2 + 3) = 0LL;
  *((_QWORD *)a2 + 4) = 0LL;
  v50[0] = 0LL;
  v50[1] = &v49;
  v51 = 0LL;
  v52 = 0;
  v53 = &v58;
  v54 = &v55;
  v55 = 0;
  v56 = 0;
  v61 = 0;
  v58 = 0;
  v59 = "ReconcileApplicationViewState";
  v60 = 0LL;
  v62 = 1LL;
  lpMem = 0LL;
  memset_0(v63, 0, sizeof(v63));
  v65 = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  v49 = &CFramePresentationTelemetry::ReconcileApplicationViewState::`vftable';
  v4 = (const WCHAR *)*((_QWORD *)this + 68);
  v5 = v54;
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
  if ( **((_DWORD **)Context + 1) <= 5u )
    *((_QWORD *)v5 + 1) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v5 + 2));
  *v5 = 1;
  v39 = 0LL;
  if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v35, &v39) && v35 )
  {
    v39 = qword_180438670;
    qword_180438670[0] = &LockScreenServiceLogging::`vftable';
    qword_180438688 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438670, qword_180438688);
    InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_180438670);
  }
  v6 = *((_QWORD *)v39 + 1);
  if ( *(_DWORD *)v6 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    p_CurrentThreadId = &CurrentThreadId;
    v73 = 4LL;
    v7 = &word_18035ABCC;
    LODWORD(v8) = 0;
    if ( v4 )
    {
      v7 = v4;
      v8 = -1LL;
      do
        ++v8;
      while ( v4[v8] );
    }
    v74 = v7;
    v75 = 2 * v8 + 2;
    v76 = 0;
    v9 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(&v49);
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180388DFD - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    *(_DWORD *)&EventDescriptor.Level = 261;
    EventDescriptor.Keyword = 0LL;
    UserData.Ptr = *(_QWORD *)(v6 + 8);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    UserData.Reserved = 2;
    v69 = &unk_180388E08;
    v70 = 64;
    v71 = 1;
    EventWriteTransfer(*(_QWORD *)(v6 + 32), &EventDescriptor, (LPCGUID)(v54 + 2), v9, 4u, &UserData);
  }
  if ( !v52 )
  {
    v10 = wil::details::g_pThreadFailureCallbacks;
    if ( !wil::details::g_pThreadFailureCallbacks )
      goto LABEL_41;
    v11 = GetCurrentThreadId();
    v12 = (signed __int64 *)(v10 + 8 * (v11 % 0xAuLL));
    v13 = *v12;
    if ( *v12 )
    {
      while ( *(_DWORD *)(v13 + 8) != v11 )
      {
        v13 = *(_QWORD *)(v13 + 16);
        if ( !v13 )
          goto LABEL_19;
      }
      goto LABEL_22;
    }
LABEL_19:
    ProcessHeap = GetProcessHeap();
    v15 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
    v13 = (signed __int64)v15;
    if ( v15 )
    {
      *(_QWORD *)v15 = 0LL;
      v15[2] = v11;
      *((_QWORD *)v15 + 2) = 0LL;
      _m_prefetchw(v12);
      do
      {
        v16 = *v12;
        *(_QWORD *)(v13 + 16) = *v12;
      }
      while ( v16 != _InterlockedCompareExchange64(v12, v13, v16) );
    }
    else
    {
LABEL_41:
      v13 = 0LL;
    }
LABEL_22:
    v50[0] = v13;
    if ( v13 )
    {
      v51 = *(_QWORD *)v13;
      *(_QWORD *)v13 = v50;
      v52 = GetCurrentThreadId();
    }
  }
  v17 = CFrameApplicationPresentation::_ComputeDesiredApplicationRect(this, &rc);
  if ( v17 >= 0 )
  {
    v17 = CFrameApplicationPresentation::_ComputeApplicationViewData(this, &rc, (struct APPLICATION_VIEW_DATA *)&v44);
    if ( v17 >= 0 )
    {
      if ( !ImmersiveApplicationLayout::AreAppViewDataEqual(
              (CFrameApplicationPresentation *)((char *)this + 168),
              (const struct APPLICATION_VIEW_DATA *)&v44,
              (const struct APPLICATION_VIEW_DATA *)(unsigned int)(*((_DWORD *)this + 36) - *((_DWORD *)this + 34)))
        && v20 == v19
        && v22 == v21 )
      {
        *((_DWORD *)a2 + 9) |= 1u;
      }
      v23 = v44;
      *(_OWORD *)v18 = v44;
      v24 = v45;
      *(_OWORD *)(v18 + 16) = v45;
      v25 = v46;
      *(_DWORD *)(v18 + 32) = v46;
      *(struct tagRECT *)((char *)this + 136) = rc;
      *(_OWORD *)a2 = v23;
      *((_OWORD *)a2 + 1) = v24;
      *((_DWORD *)a2 + 8) = v25;
    }
  }
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)&v49, v17);
  v49 = &CFramePresentationTelemetry::ReconcileApplicationViewState::`vftable';
  v26 = (volatile signed __int32 *)v67;
  if ( !v67 )
    goto LABEL_29;
  wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)&v49,
    &SRWLock);
  v26 = (volatile signed __int32 *)v67;
  if ( v67 && *(_DWORD *)v67 == 1 )
  {
    v28 = 1;
  }
  else
  {
    v28 = 0;
    wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v67);
    v26 = (volatile signed __int32 *)v67;
  }
  if ( SRWLock )
  {
    ReleaseSRWLockExclusive(SRWLock);
    v26 = (volatile signed __int32 *)v67;
  }
  if ( v28 )
  {
LABEL_29:
    if ( *v54 == 1 )
    {
      v29 = v54[21];
      v30 = 2147942974LL;
      if ( v29 < 0 )
        v30 = (unsigned int)v29;
      wil::ActivityBase<TrayNotificationAreaLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TrayNotificationAreaLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        v54,
        v30,
        v41);
      wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity((IamTraceLogging::OnShellHookMessage *)&v49);
      v26 = (volatile signed __int32 *)v67;
    }
  }
  if ( v26 )
  {
    if ( _InterlockedExchangeAdd(v26, 0xFFFFFFFF) == 1 )
    {
      v31 = v67;
      if ( v67 )
      {
        wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v67 + 8);
        operator delete(v31, (const struct std::nothrow_t *)0x100);
      }
    }
    v67 = 0LL;
  }
  if ( lpMem )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)lpMem, 0xFFFFFFFF) == 1 )
    {
      v32 = GetProcessHeap();
      HeapFree(v32, 0, lpMem);
    }
    lpMem = 0LL;
    v65 = 0LL;
  }
  if ( v61 )
  {
    v33 = GetProcessHeap();
    HeapFree(v33, 0, v60);
    v61 = 0;
  }
  v60 = 0LL;
  if ( v55 == 1 )
  {
    v55 = 2;
    v40 = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v37, &v40) && v37 )
    {
      v40 = qword_180438670;
      qword_180438670[0] = &LockScreenServiceLogging::`vftable';
      qword_180438688 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438670, qword_180438688);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_180438670);
    }
    _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)v40 + 1), v57);
  }
  v55 = 3;
  if ( v52 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v50);
  return (unsigned int)v17;
}
