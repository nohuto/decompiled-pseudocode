/*
 * XREFs of ?OnRequestNavigateToView@ViewManagerBridge@@UEAAJIIW4ViewActivationFlags@Navigation@@_KPEAUMsgBlob@@@Z @ 0x180057FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18000FA24 (-LockExclusive@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18001833C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?DeserializePropertySet@@YAJPEAUMsgBlob@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180030EA0 (-DeserializePropertySet@@YAJPEAUMsgBlob@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z.c)
 *     ?ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800368C0 (-ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIProp.c)
 *     ?OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180055748 (-OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collection.c)
 *     ?ReportStopActivity@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x180058DA8 (-ReportStopActivity@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Para.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180058F40 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??1?$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18008FD64 (--1-$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activit.c)
 *     ?reset@?$shared_object@V?$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1800958A4 (-reset@-$shared_object@V-$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsPro.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180097C0C (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x180103574 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewManagerBridge::OnRequestNavigateToView(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        struct MsgBlob *a6)
{
  int *v10; // rbx
  __int64 v11; // rbx
  const GUID *v12; // rax
  ULONGLONG v13; // r10
  __int64 v14; // rdi
  DWORD v15; // ebx
  LPVOID *v16; // rdi
  _QWORD *v17; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v18; // rbx
  int v19; // eax
  volatile signed __int32 *v20; // rdx
  int *v21; // r8
  wil::details::in1diag3 *v23; // rcx
  int v24; // eax
  wil::details::in1diag3 *v25; // rcx
  HANDLE v26; // rax
  signed __int64 v27; // rax
  char v28; // bl
  int v29; // eax
  __int64 v30; // rdx
  int v31; // eax
  void *v32; // rdi
  HANDLE ProcessHeap; // rax
  HANDLE v34; // rax
  int UserDataCount; // [rsp+20h] [rbp-278h]
  WINBOOL fPending; // [rsp+30h] [rbp-268h] BYREF
  WINBOOL v37; // [rsp+34h] [rbp-264h] BYREF
  DWORD CurrentThreadId; // [rsp+38h] [rbp-260h] BYREF
  unsigned int v39; // [rsp+40h] [rbp-258h] BYREF
  unsigned int v40; // [rsp+48h] [rbp-250h] BYREF
  int v41; // [rsp+50h] [rbp-248h] BYREF
  WINBOOL v42; // [rsp+58h] [rbp-240h] BYREF
  unsigned int v43; // [rsp+60h] [rbp-238h]
  LPVOID Context; // [rsp+68h] [rbp-230h] BYREF
  LPVOID v45; // [rsp+70h] [rbp-228h] BYREF
  LPVOID v46; // [rsp+78h] [rbp-220h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v47; // [rsp+80h] [rbp-218h] BYREF
  PSRWLOCK SRWLock; // [rsp+88h] [rbp-210h] BYREF
  __int64 v49; // [rsp+90h] [rbp-208h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+98h] [rbp-200h] BYREF
  __int64 v51; // [rsp+A8h] [rbp-1F0h]
  void **v52; // [rsp+B0h] [rbp-1E8h] BYREF
  _QWORD v53[2]; // [rsp+B8h] [rbp-1E0h] BYREF
  __int64 v54; // [rsp+C8h] [rbp-1D0h]
  DWORD v55; // [rsp+D0h] [rbp-1C8h]
  int *v56; // [rsp+D8h] [rbp-1C0h]
  int *v57; // [rsp+E0h] [rbp-1B8h]
  int v58; // [rsp+E8h] [rbp-1B0h] BYREF
  char v59; // [rsp+ECh] [rbp-1ACh]
  char v60[32]; // [rsp+F0h] [rbp-1A8h] BYREF
  int v61; // [rsp+110h] [rbp-188h] BYREF
  const char *v62; // [rsp+118h] [rbp-180h]
  LPVOID v63; // [rsp+120h] [rbp-178h]
  char v64; // [rsp+128h] [rbp-170h]
  __int64 v65; // [rsp+130h] [rbp-168h]
  __int64 v66; // [rsp+138h] [rbp-160h] BYREF
  LPVOID lpMem; // [rsp+1C8h] [rbp-D0h]
  __int64 v68; // [rsp+1D0h] [rbp-C8h]
  __int64 v69; // [rsp+1D8h] [rbp-C0h]
  void *v70; // [rsp+1E0h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+1F0h] [rbp-A8h] BYREF
  void *v72; // [rsp+200h] [rbp-98h]
  int v73; // [rsp+208h] [rbp-90h]
  int v74; // [rsp+20Ch] [rbp-8Ch]
  DWORD *p_CurrentThreadId; // [rsp+210h] [rbp-88h]
  __int64 v76; // [rsp+218h] [rbp-80h]
  unsigned int *v77; // [rsp+220h] [rbp-78h]
  __int64 v78; // [rsp+228h] [rbp-70h]
  unsigned int *v79; // [rsp+230h] [rbp-68h]
  __int64 v80; // [rsp+238h] [rbp-60h]
  int *v81; // [rsp+240h] [rbp-58h]
  __int64 v82; // [rsp+248h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+298h] [rbp+0h]

  v51 = -2LL;
  v49 = a1;
  v43 = a2;
  try
  {
    v53[0] = 0LL;
    v53[1] = &v52;
    v54 = 0LL;
    v55 = 0;
    v56 = &v61;
    v57 = &v58;
    v58 = 0;
    v59 = 0;
    v64 = 0;
    v61 = 0;
    v62 = "OnRequestNavigateToView";
    v63 = 0LL;
    v65 = 1LL;
    lpMem = 0LL;
    memset_0(&v66, 0, 0x90uLL);
    v68 = 0LL;
    v69 = 0LL;
    v70 = 0LL;
    v52 = &ViewManagerInteropTraceLogging::OnRequestNavigateToView::`vftable';
    v41 = a4;
    v40 = a3;
    v39 = a2;
    v10 = v57;
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = qword_180438940;
      qword_180438940[0] = &LockScreenServiceLogging::`vftable';
      qword_180438958 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438940, qword_180438958);
      InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180438940);
    }
    if ( **((_DWORD **)Context + 1) <= 5u )
      *((_QWORD *)v10 + 1) = 0LL;
    else
      EventActivityIdControl(3u, (LPGUID)(v10 + 2));
    *v10 = 1;
    v45 = 0LL;
    if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &v37, &v45) && v37 )
    {
      v45 = qword_180438940;
      qword_180438940[0] = &LockScreenServiceLogging::`vftable';
      qword_180438958 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438940, qword_180438958);
      InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180438940);
    }
    v11 = *((_QWORD *)v45 + 1);
    if ( *(_DWORD *)v11 > 5u )
    {
      CurrentThreadId = GetCurrentThreadId();
      p_CurrentThreadId = &CurrentThreadId;
      v76 = 4LL;
      v77 = &v39;
      v78 = 4LL;
      v79 = &v40;
      v80 = 4LL;
      v81 = &v41;
      v82 = 4LL;
      v12 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(&v52);
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180395894 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      *(_DWORD *)&EventDescriptor.Level = 261;
      EventDescriptor.Keyword = v13;
      UserData.Ptr = *(_QWORD *)(v11 + 8);
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      UserData.Reserved = 2;
      v72 = &unk_18039589F;
      v73 = 114;
      v74 = 1;
      EventWriteTransfer(*(_QWORD *)(v11 + 32), &EventDescriptor, (LPCGUID)(v57 + 2), v12, 6u, &UserData);
    }
    if ( v55 )
    {
LABEL_20:
      v18 = 0LL;
      v47 = 0LL;
      if ( a6 )
      {
        v19 = DeserializePropertySet(a6, &v47);
        if ( v19 < 0 )
        {
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x470,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
            (const char *)(unsigned int)v19,
            UserDataCount);
          goto LABEL_47;
        }
        v18 = v47;
      }
      if ( (a4 & 0x20) == 0 )
      {
        ViewEventDispatcher::ViewNavigationRequested(*(_QWORD *)(a1 + 48), a2, a3, a4, v18);
        goto LABEL_25;
      }
      v23 = retaddr;
      if ( v18 )
      {
        v24 = ViewManagerBridge::OnRequestApplicationViewSwitcherOperation((ViewManagerBridge *)(a1 - 32), a2, a3, v18);
        v25 = retaddr;
        if ( v24 >= 0 )
        {
LABEL_25:
          wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(&v52);
          if ( v18 )
            (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v18 + 16LL))(v18);
          v52 = &ViewManagerInteropTraceLogging::OnRequestNavigateToView::`vftable';
          v20 = (volatile signed __int32 *)v70;
          if ( !v70 )
          {
LABEL_28:
            v21 = v57;
            if ( *v57 == 1 )
            {
              v29 = v57[21];
              v30 = 2147942974LL;
              if ( v29 < 0 )
                v30 = (unsigned int)v29;
              v31 = v57[18];
              if ( v31 < 1 )
                __fastfail(7u);
              if ( v57[19] >= 0 )
                v57[19] = v30;
              v21[18] = v31 - 1;
              wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
                &v52,
                v30);
              v20 = (volatile signed __int32 *)v70;
            }
LABEL_29:
            if ( v20 )
            {
              if ( _InterlockedExchangeAdd(v20, 0xFFFFFFFF) == 1 )
              {
                v32 = v70;
                if ( v70 )
                {
                  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v70 + 8);
                  operator delete(v32, (const struct std::nothrow_t *)0x100);
                }
              }
              v70 = 0LL;
            }
            if ( lpMem )
            {
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)lpMem, 0xFFFFFFFF) == 1 )
              {
                ProcessHeap = GetProcessHeap();
                HeapFree(ProcessHeap, 0, lpMem);
              }
              lpMem = 0LL;
              v68 = 0LL;
            }
            if ( v64 )
            {
              v34 = GetProcessHeap();
              HeapFree(v34, 0, v63);
              v64 = 0;
            }
            v63 = 0LL;
            if ( v58 == 1 )
            {
              v58 = 2;
              v46 = 0LL;
              if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &v42, &v46) && v42 )
              {
                v46 = qword_180438940;
                qword_180438940[0] = &LockScreenServiceLogging::`vftable';
                qword_180438958 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
                atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
                wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438940, qword_180438958);
                InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180438940);
              }
              _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)v46 + 1), v60);
            }
            v58 = 3;
            if ( v55 )
              wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v53);
            return 0LL;
          }
LABEL_49:
          wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
            (__int64)&v52,
            &SRWLock);
          v20 = (volatile signed __int32 *)v70;
          if ( v70 && *(_DWORD *)v70 == 1 )
          {
            v28 = 1;
          }
          else
          {
            v28 = 0;
            wil::details::shared_object<wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v70);
            v20 = (volatile signed __int32 *)v70;
          }
          if ( SRWLock )
          {
            ReleaseSRWLockExclusive(SRWLock);
            v20 = (volatile signed __int32 *)v70;
          }
          if ( !v28 )
            goto LABEL_29;
          goto LABEL_28;
        }
LABEL_48:
        wil::details::in1diag3::Throw_Hr(
          v25,
          (void *)0x479,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
          (const char *)(unsigned int)v24,
          UserDataCount);
        goto LABEL_49;
      }
LABEL_47:
      wil::details::in1diag3::Throw_Hr(
        v23,
        (void *)0x478,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)0x80070057LL,
        UserDataCount);
      goto LABEL_48;
    }
    v14 = wil::details::g_pThreadFailureCallbacks;
    if ( !wil::details::g_pThreadFailureCallbacks )
      goto LABEL_45;
    v15 = GetCurrentThreadId();
    v16 = (LPVOID *)(v14 + 8 * (v15 % 0xAuLL));
    v17 = *v16;
    if ( *v16 )
    {
      while ( *((_DWORD *)v17 + 2) != v15 )
      {
        v17 = (_QWORD *)v17[2];
        if ( !v17 )
          goto LABEL_41;
      }
      goto LABEL_18;
    }
LABEL_41:
    v26 = GetProcessHeap();
    v17 = HeapAlloc(v26, 0, 0x18uLL);
    if ( v17 )
    {
      *v17 = 0LL;
      *((_DWORD *)v17 + 2) = v15;
      v17[2] = 0LL;
      _m_prefetchw(v16);
      do
      {
        v27 = (signed __int64)*v16;
        v17[2] = *v16;
      }
      while ( v27 != _InterlockedCompareExchange64((volatile signed __int64 *)v16, (signed __int64)v17, v27) );
    }
    else
    {
LABEL_45:
      v17 = 0LL;
    }
LABEL_18:
    v53[0] = v17;
    if ( v17 )
    {
      v54 = *v17;
      *v17 = v53;
      v55 = GetCurrentThreadId();
    }
    goto LABEL_20;
  }
  catch ( ... )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int))(**(_QWORD **)(v49 + 72) + 112LL))(
      *(_QWORD *)(v49 + 72),
      v43,
      0LL,
      0LL,
      1);
  }
  return 0LL;
}
