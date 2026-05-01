/*
 * XREFs of ?OnShellHookMessage@ViewEventDispatcher@@UEAAJ_K_J@Z @ 0x180034860
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180003FE4 (--4-$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?LockExclusive@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18000FA24 (-LockExclusive@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18001833C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?_ViewFromFrameOrWindow@ViewEventDispatcher@@AEAAJPEAUHWND__@@PEAPEAUIViewWrapperInternal@@@Z @ 0x180032BA0 (-_ViewFromFrameOrWindow@ViewEventDispatcher@@AEAAJPEAUHWND__@@PEAPEAUIViewWrapperInternal@@@Z.c)
 *     ?_HandleWindowDestroyed@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x180032E50 (-_HandleWindowDestroyed@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z.c)
 *     ?_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z @ 0x180032FD0 (-_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z.c)
 *     ?SetFocusState@ViewWrapperBase@@UEAAXW4FocusState@@@Z @ 0x180052F70 (-SetFocusState@ViewWrapperBase@@UEAAXW4FocusState@@@Z.c)
 *     ??$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@Z @ 0x180054420 (--$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@ViewManagerI.c)
 *     ?ReportStopActivity@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x180058DA8 (-ReportStopActivity@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Para.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180058F40 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Clear@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z @ 0x18005A5A4 (-Clear@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z.c)
 *     ?_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ @ 0x18005B5B4 (-_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WindowReadiness_PendingPositionRemoved@AEBQEAUHWND__@@AEA_K@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEA_K@Z @ 0x180087E50 (--$WindowReadiness_PendingPositionRemoved@AEBQEAUHWND__@@AEA_K@ViewManagerInteropTraceLogging@@S.c)
 *     ??R?$_Func_class@X_N@std@@QEBAX_N@Z @ 0x18008E184 (--R-$_Func_class@X_N@std@@QEBAX_N@Z.c)
 *     ??1?$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18008FD64 (--1-$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activit.c)
 *     ?reset@?$shared_object@V?$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1800958A4 (-reset@-$shared_object@V-$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsPro.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180097C0C (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     ??$WindowReadiness_ExtraPositionAcknowledgment@AEAPEAUHWND__@@@ViewManagerInteropTraceLogging@@SAXAEAPEAUHWND__@@@Z @ 0x1800A0148 (--$WindowReadiness_ExtraPositionAcknowledgment@AEAPEAUHWND__@@@ViewManagerInteropTraceLogging@@S.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_HandleWindowCreated@ViewEventDispatcher@@AEAAJPEAUHWND__@@W4WindowType@1@@Z @ 0x1800F04C0 (-_HandleWindowCreated@ViewEventDispatcher@@AEAAJPEAUHWND__@@W4WindowType@1@@Z.c)
 *     ??1HandleWindowCreated@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1800F7248 (--1HandleWindowCreated@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x180103574 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x1801D016C (-_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall ViewEventDispatcher::OnShellHookMessage(ViewEventDispatcher *this, unsigned __int64 a2, HWND a3)
{
  __int64 v6; // r13
  __int64 v7; // rbx
  _QWORD *v8; // rcx
  HWND (__fastcall *v9)(ViewWrapperBase *__hidden); // rax
  HWND v10; // rax
  int v11; // ebx
  __int64 (__fastcall ***v12)(_QWORD, GUID *, _QWORD **); // rcx
  int v13; // eax
  _QWORD *v14; // rbx
  void (__fastcall *v15)(ViewWrapperBase *__hidden, unsigned __int64); // rax
  RTL_SRWLOCK *v16; // rsi
  __int64 v17; // rdx
  _QWORD *v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  ViewEventDispatcher *v23; // r14
  int *v24; // rbx
  __int64 v25; // rbx
  const GUID *v26; // rax
  __int64 v27; // rdi
  unsigned __int64 v28; // rbx
  signed __int64 *v29; // rdi
  signed __int64 v30; // rcx
  unsigned int PropW; // eax
  int v32; // eax
  volatile signed __int32 *v33; // rdx
  int *v34; // r8
  struct IViewWrapperInternal *v35; // r8
  struct IViewWrapperInternal *v36; // rcx
  void (__fastcall *v37)(__int64, _QWORD); // rax
  __int64 v38; // rcx
  void (__fastcall *v39)(struct IViewWrapperInternal *, __int64); // rax
  struct IViewWrapperInternal *v40; // rcx
  int v41; // eax
  __int64 v42; // rdx
  int v43; // eax
  HANDLE v44; // rax
  _DWORD *v45; // rax
  signed __int64 v46; // rax
  int v47; // eax
  char v48; // bl
  void *v49; // rdi
  HANDLE ProcessHeap; // rax
  HANDLE v51; // rax
  ULONG UserDataCount; // [rsp+20h] [rbp-E0h]
  struct IViewWrapperInternal *v53; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD *v54; // [rsp+38h] [rbp-C8h] BYREF
  WINBOOL fPending; // [rsp+40h] [rbp-C0h] BYREF
  WINBOOL v56; // [rsp+44h] [rbp-BCh] BYREF
  DWORD CurrentThreadId; // [rsp+48h] [rbp-B8h] BYREF
  int v58; // [rsp+50h] [rbp-B0h] BYREF
  WINBOOL v59; // [rsp+58h] [rbp-A8h] BYREF
  int v60; // [rsp+5Ch] [rbp-A4h] BYREF
  LPVOID Context; // [rsp+60h] [rbp-A0h] BYREF
  LPVOID v62; // [rsp+68h] [rbp-98h] BYREF
  LPVOID v63; // [rsp+70h] [rbp-90h] BYREF
  HWND v64; // [rsp+78h] [rbp-88h] BYREF
  PSRWLOCK SRWLock; // [rsp+80h] [rbp-80h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+88h] [rbp-78h] BYREF
  __int64 v67; // [rsp+98h] [rbp-68h]
  char *v68; // [rsp+A0h] [rbp-60h]
  char *v69; // [rsp+A8h] [rbp-58h]
  __int64 v70; // [rsp+B0h] [rbp-50h]
  RTL_SRWLOCK *v71; // [rsp+B8h] [rbp-48h]
  void **v72; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v73[2]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v74; // [rsp+D8h] [rbp-28h]
  DWORD v75; // [rsp+E0h] [rbp-20h]
  int *v76; // [rsp+E8h] [rbp-18h]
  int *v77; // [rsp+F0h] [rbp-10h]
  int v78; // [rsp+F8h] [rbp-8h] BYREF
  char v79; // [rsp+FCh] [rbp-4h]
  char v80[32]; // [rsp+100h] [rbp+0h] BYREF
  int v81; // [rsp+120h] [rbp+20h] BYREF
  const char *v82; // [rsp+128h] [rbp+28h]
  LPVOID v83; // [rsp+130h] [rbp+30h]
  char v84; // [rsp+138h] [rbp+38h]
  __int64 v85; // [rsp+140h] [rbp+40h]
  char v86[144]; // [rsp+148h] [rbp+48h] BYREF
  LPVOID lpMem; // [rsp+1D8h] [rbp+D8h]
  __int64 v88; // [rsp+1E0h] [rbp+E0h]
  __int64 v89; // [rsp+1E8h] [rbp+E8h]
  void *v90; // [rsp+1F0h] [rbp+F0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+200h] [rbp+100h] BYREF
  void *v92; // [rsp+210h] [rbp+110h]
  int v93; // [rsp+218h] [rbp+118h]
  int v94; // [rsp+21Ch] [rbp+11Ch]
  DWORD *p_CurrentThreadId; // [rsp+220h] [rbp+120h]
  __int64 v96; // [rsp+228h] [rbp+128h]
  HWND *v97; // [rsp+230h] [rbp+130h]
  __int64 v98; // [rsp+238h] [rbp+138h]
  int *v99; // [rsp+240h] [rbp+140h]
  __int64 v100; // [rsp+248h] [rbp+148h]
  wil::details::in1diag3 *retaddr; // [rsp+298h] [rbp+198h]

  v67 = -2LL;
  if ( a2 > 0x26 )
    return 0LL;
  if ( (_DWORD)a2 != 31 )
  {
    if ( (_DWORD)a2 != 17 )
    {
      switch ( (int)a2 )
      {
        case 18:
          ViewEventDispatcher::_HandleWindowDestroyed((RTL_SRWLOCK *)this - 9, a3);
          return 0LL;
        case 19:
        case 23:
        case 25:
        case 26:
        case 27:
          AcquireSRWLockExclusive((PSRWLOCK)this + 28);
          v68 = (char *)this + 224;
          v53 = 0LL;
          if ( (unsigned int)IsShellManagedWindow(a3) )
          {
            Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v53);
            ViewEventDispatcher::_ViewFromFrameOrWindow((ViewEventDispatcher *)((char *)this - 72), a3, &v53);
          }
          v35 = (struct IViewWrapperInternal *)*((_QWORD *)this + 31);
          v36 = v53;
          if ( v35 != v53 )
          {
            if ( v35 )
            {
              v37 = *(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v35 + 752LL);
              v38 = *((_QWORD *)this + 31);
              if ( (char *)v37 == (char *)ViewWrapperBase::SetFocusState )
                ViewWrapperBase::SetFocusState(v38, 0LL);
              else
                v37(v38, 0LL);
              v36 = v53;
            }
            if ( v36 )
            {
              v39 = *(void (__fastcall **)(struct IViewWrapperInternal *, __int64))(*(_QWORD *)v36 + 752LL);
              if ( (char *)v39 == (char *)ViewWrapperBase::SetFocusState )
                ViewWrapperBase::SetFocusState(v36, 1LL);
              else
                v39(v36, 1LL);
            }
          }
          Microsoft::WRL::ComPtr<IViewWrapperInternal>::operator=((__int64 *)this + 31, &v53);
          *((_QWORD *)this + 30) = a3;
          v40 = v53;
          if ( v53 )
          {
            v53 = 0LL;
            (*(void (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v40 + 16LL))(v40);
          }
          if ( this != (ViewEventDispatcher *)-224LL )
            ReleaseSRWLockExclusive((PSRWLOCK)this + 28);
          return 0LL;
        case 21:
          ViewEventDispatcher::_HandleWindowCreated((char *)this - 72, a3, 1LL);
          return 0LL;
        case 36:
        case 38:
          goto LABEL_5;
        default:
          return 0LL;
      }
    }
    v23 = (ViewEventDispatcher *)((char *)this - 72);
    v73[0] = 0LL;
    v73[1] = &v72;
    v74 = 0LL;
    v75 = 0;
    v76 = &v81;
    v77 = &v78;
    v78 = 0;
    v79 = 0;
    v84 = 0;
    v81 = 0;
    v82 = "HandleWindowCreated";
    v83 = 0LL;
    v85 = 1LL;
    lpMem = 0LL;
    memset_0(v86, 0, sizeof(v86));
    v88 = 0LL;
    v89 = 0LL;
    v90 = 0LL;
    v72 = &ViewManagerInteropTraceLogging::HandleWindowCreated::`vftable';
    v58 = 0;
    v64 = a3;
    v24 = v77;
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
      *((_QWORD *)v24 + 1) = 0LL;
    else
      EventActivityIdControl(3u, (LPGUID)(v24 + 2));
    *v24 = 1;
    v62 = 0LL;
    if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &v56, &v62) && v56 )
    {
      v62 = qword_180438940;
      qword_180438940[0] = &LockScreenServiceLogging::`vftable';
      qword_180438958 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438940, qword_180438958);
      InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180438940);
    }
    v25 = *((_QWORD *)v62 + 1);
    if ( *(_DWORD *)v25 > 5u )
    {
      CurrentThreadId = GetCurrentThreadId();
      p_CurrentThreadId = &CurrentThreadId;
      v96 = 4LL;
      v97 = &v64;
      v98 = 8LL;
      v99 = &v58;
      v100 = 4LL;
      v26 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(&v72);
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180393E86 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      *(_DWORD *)&EventDescriptor.Level = 261;
      EventDescriptor.Keyword = 0LL;
      UserData.Ptr = *(_QWORD *)(v25 + 8);
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      UserData.Reserved = 2;
      v92 = &unk_180393E91;
      v93 = 67;
      v94 = 1;
      EventWriteTransfer(*(_QWORD *)(v25 + 32), &EventDescriptor, (LPCGUID)(v77 + 2), v26, 5u, &UserData);
    }
    if ( v75 )
    {
LABEL_54:
      if ( (unsigned int)IsShellManagedWindow(a3)
        && !(unsigned int)IsShellFrameWindow(a3)
        && !GetPropW(a3, L"Microsoft.Windows.ShellManagedWindowAsNormalWindow")
        && !GetPropW(a3, L"Shell_Logical_Owner_Window_Prop") )
      {
        PropW = (unsigned int)GetPropW(a3, L"Microsoft.Windows.WindowFactory.ViewId");
        if ( PropW )
        {
          v32 = ViewEventDispatcher::_HandleWindowCreatedForExistingView(v23, a3, PropW);
          if ( v32 >= 0 )
            goto LABEL_60;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x881,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
            (const char *)(unsigned int)v32,
            UserDataCount);
          ViewManagerInteropTraceLogging::HandleWindowCreated::~HandleWindowCreated((ViewManagerInteropTraceLogging::HandleWindowCreated *)&v72);
          return 0LL;
        }
        v47 = ViewEventDispatcher::_HandleWindowCreatedWithNoView(v23, a3);
        if ( v47 >= 0 )
        {
LABEL_60:
          wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(&v72);
          v72 = &ViewManagerInteropTraceLogging::HandleWindowCreated::`vftable';
          v33 = (volatile signed __int32 *)v90;
          if ( !v90 )
            goto LABEL_61;
          wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
            (__int64)&v72,
            &SRWLock);
          v33 = (volatile signed __int32 *)v90;
          if ( v90 && *(_DWORD *)v90 == 1 )
          {
            v48 = 1;
          }
          else
          {
            v48 = 0;
            wil::details::shared_object<wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v90);
            v33 = (volatile signed __int32 *)v90;
          }
          if ( SRWLock )
          {
            ReleaseSRWLockExclusive(SRWLock);
            v33 = (volatile signed __int32 *)v90;
          }
          if ( v48 )
          {
LABEL_61:
            v34 = v77;
            if ( *v77 == 1 )
            {
              v41 = v77[21];
              v42 = 2147942974LL;
              if ( v41 < 0 )
                v42 = (unsigned int)v41;
              v43 = v77[18];
              if ( v43 < 1 )
                __fastfail(7u);
              if ( v77[19] >= 0 )
                v77[19] = v42;
              v34[18] = v43 - 1;
              wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
                &v72,
                v42);
              v33 = (volatile signed __int32 *)v90;
            }
          }
          if ( v33 )
          {
            if ( _InterlockedExchangeAdd(v33, 0xFFFFFFFF) == 1 )
            {
              v49 = v90;
              if ( v90 )
              {
                wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v90 + 8);
                operator delete(v49, (const struct std::nothrow_t *)0x100);
              }
            }
            v90 = 0LL;
          }
          if ( lpMem )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)lpMem, 0xFFFFFFFF) == 1 )
            {
              ProcessHeap = GetProcessHeap();
              HeapFree(ProcessHeap, 0, lpMem);
            }
            lpMem = 0LL;
            v88 = 0LL;
          }
          if ( v84 )
          {
            v51 = GetProcessHeap();
            HeapFree(v51, 0, v83);
            v84 = 0;
          }
          v83 = 0LL;
          if ( v78 == 1 )
          {
            v78 = 2;
            v63 = 0LL;
            if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &v59, &v63) && v59 )
            {
              v63 = qword_180438940;
              qword_180438940[0] = &LockScreenServiceLogging::`vftable';
              qword_180438958 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
              atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
              wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438940, qword_180438958);
              InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180438940);
            }
            _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)v63 + 1), v80);
          }
          v78 = 3;
          if ( v75 )
            wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v73);
          return 0LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x87C,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)(unsigned int)v47,
          UserDataCount);
      }
      ViewManagerInteropTraceLogging::HandleWindowCreated::~HandleWindowCreated((ViewManagerInteropTraceLogging::HandleWindowCreated *)&v72);
      return 0LL;
    }
    v27 = wil::details::g_pThreadFailureCallbacks;
    if ( !wil::details::g_pThreadFailureCallbacks )
      goto LABEL_106;
    v28 = GetCurrentThreadId();
    v29 = (signed __int64 *)(v27 + 8 * (v28 % 0xA));
    v30 = *v29;
    if ( *v29 )
    {
      while ( *(_DWORD *)(v30 + 8) != (_DWORD)v28 )
      {
        v30 = *(_QWORD *)(v30 + 16);
        if ( !v30 )
          goto LABEL_102;
      }
      goto LABEL_52;
    }
LABEL_102:
    v44 = GetProcessHeap();
    v45 = HeapAlloc(v44, 0, 0x18uLL);
    v30 = (signed __int64)v45;
    if ( v45 )
    {
      *(_QWORD *)v45 = 0LL;
      v45[2] = v28;
      *((_QWORD *)v45 + 2) = 0LL;
      _m_prefetchw(v29);
      do
      {
        v46 = *v29;
        *(_QWORD *)(v30 + 16) = *v29;
      }
      while ( v46 != _InterlockedCompareExchange64(v29, v30, v46) );
    }
    else
    {
LABEL_106:
      v30 = 0LL;
    }
LABEL_52:
    v73[0] = v30;
    if ( v30 )
    {
      v74 = *(_QWORD *)v30;
      *(_QWORD *)v30 = v73;
      v75 = GetCurrentThreadId();
    }
    goto LABEL_54;
  }
LABEL_5:
  v54 = 0LL;
  AcquireSRWLockShared((PSRWLOCK)this + 28);
  v69 = (char *)this + 224;
  v70 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( *((_QWORD *)this + 38) )
  {
    while ( 1 )
    {
      v8 = *(_QWORD **)(*((_QWORD *)this + 37) + 8 * v7);
      v9 = *(HWND (__fastcall **)(ViewWrapperBase *__hidden))(*v8 + 648LL);
      v10 = (HWND)(v9 == ViewWrapperBase::GetWindow
                 ? v8[32]
                 : ((__int64 (__fastcall *)(_QWORD *, HWND (__fastcall *)(ViewWrapperBase *__hidden)))v9)(
                     v8,
                     ViewWrapperBase::GetWindow));
      if ( v10 == a3 )
        break;
      if ( (unsigned __int64)++v7 >= *((_QWORD *)this + 38) )
        goto LABEL_10;
    }
    v6 = v7;
    v11 = 0;
  }
  else
  {
LABEL_10:
    v11 = -2147319765;
  }
  if ( v11 >= 0 )
  {
    v12 = *(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD **))(*((_QWORD *)this + 37) + 8 * v6);
    v13 = (**v12)(v12, &GUID_24d7afb3_7eca_48a5_b2ba_1e21c012e15f, &v54);
    v11 = v13;
    if ( v13 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9AF,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v13,
        UserDataCount);
    if ( v11 >= 0 )
    {
      if ( this != (ViewEventDispatcher *)-224LL )
        ReleaseSRWLockShared((PSRWLOCK)this + 28);
      v14 = v54;
      v15 = *(void (__fastcall **)(ViewWrapperBase *__hidden, unsigned __int64))(*v54 + 688LL);
      if ( v15 == ViewWrapperBase::HandlePresentationReadinessChange )
      {
        v16 = (RTL_SRWLOCK *)(v54[20] + 296LL);
        AcquireSRWLockExclusive(v16);
        v71 = v16;
        v18 = v14 + 43;
        if ( !*v18 || *((_DWORD *)v18 + 2) )
        {
          switch ( a2 )
          {
            case 0x1FuLL:
              v19 = v18[2];
              if ( v19 )
              {
                v18[2] = v19 - 1;
                ViewManagerInteropTraceLogging::WindowReadiness_PendingPositionRemoved<HWND__ * const &,unsigned __int64 &>(
                  v18,
                  v18 + 2);
                if ( !v18[2] )
                {
                  v60 = *((_DWORD *)v18 + 2);
                  *((_DWORD *)v18 + 2) = v60 & 0xFFFFFFF7;
                  ViewManagerInteropTraceLogging::WindowReadiness_FlagChange<HWND__ * const &,enum WindowReadinessWaitFlags const &,enum WindowReadinessWaitFlags &>(
                    v18,
                    &v60,
                    v18 + 1);
                }
              }
              else
              {
                ViewManagerInteropTraceLogging::WindowReadiness_ExtraPositionAcknowledgment<HWND__ * &>(v18);
              }
              break;
            case 0x24uLL:
              WindowReadyState::WaitFlags::Clear(v18 + 1, v18, 4LL);
              break;
            case 0x26uLL:
              WindowReadyState::WaitFlags::Clear(v18 + 1, v18, 2LL);
              break;
          }
          v20 = *v18;
          if ( *v18 )
          {
            if ( !*((_DWORD *)v18 + 2) )
            {
              WindowReadyState::_WaitForUnfreezeIfNecessary((WindowReadyState *)v18);
              v20 = *v18;
            }
            if ( v20 && !*((_DWORD *)v18 + 2) )
            {
              LOBYTE(v17) = 1;
              std::_Func_class<void,bool>::operator()(v18 + 5, v17);
            }
          }
        }
        if ( v16 )
          ReleaseSRWLockExclusive(v16);
      }
      else
      {
        v15((ViewWrapperBase *)v54, a2);
      }
      v21 = (__int64)v54;
      if ( v54 )
      {
        v54 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      }
      return 0LL;
    }
  }
  if ( this != (ViewEventDispatcher *)-224LL )
    ReleaseSRWLockShared((PSRWLOCK)this + 28);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v54);
  return (unsigned int)v11;
}
