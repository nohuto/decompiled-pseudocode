/*
 * XREFs of ?ApproveWinRtActivation@ViewWrapperBase@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@5@@Z @ 0x180051D30
 * Callers:
 *     ?ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800368C0 (-ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIProp.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     ?QueuePendingActivation@ViewEventDispatcher@@QEAAJPEAUIViewWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@_N@Z @ 0x180031B50 (-QueuePendingActivation@ViewEventDispatcher@@QEAAJPEAUIViewWrapperInternal@@PEAUIPropertySet@Col.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003BB30 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180054260 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?ResumeAndNavigateView@ViewManagerBridge@@UEAAXIIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180055D70 (-ResumeAndNavigateView@ViewManagerBridge@@UEAAXIIW4NavigationLevel@ViewManagerInterop@Shell@Inte.c)
 *     ?SetHolographicActivationForTokenView@ViewManagerBridge@@UEAAJI_N@Z @ 0x180055F40 (-SetHolographicActivationForTokenView@ViewManagerBridge@@UEAAJI_N@Z.c)
 *     ?wil_details_SetPropertyFlagCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z @ 0x18005FD80 (-wil_details_SetPropertyFlagCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z.c)
 *     ??$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAE@Z1@Z @ 0x18006CDD0 (--$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCDelayedTask@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18007120C (-InternalRelease@-$ComPtr@VCDelayedTask@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$MakeAllocator@VTaskFlowImmersiveShellBroker@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180097C44 (--1-$MakeAllocator@VTaskFlowImmersiveShellBroker@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1801073E4 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CA-AW4wil_de.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801082C0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18010A800 (-ResultFromKnownLastError@@YAJXZ.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall ViewWrapperBase::ApproveWinRtActivation(
        ViewWrapperBase *this,
        struct Windows::Foundation::Collections::IPropertySet *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *a3)
{
  struct Windows::Foundation::Collections::IPropertySet *v3; // r14
  ViewWrapperBase *v4; // r13
  RTL_SRWLOCK **v5; // r15
  RTL_SRWLOCK *v6; // rsi
  HRESULT v7; // eax
  __int64 v8; // r8
  int v9; // eax
  unsigned int v10; // r12d
  char *v11; // rsi
  char *v12; // r14
  char *v13; // rdi
  _QWORD *v14; // r15
  _QWORD *v15; // rax
  _QWORD *v16; // rbx
  __int64 (*v17)(); // rax
  volatile int *v18; // rdx
  int Error; // ebx
  char *v20; // rax
  char *v21; // rdi
  void (*v22)(void); // rax
  _DWORD *v23; // rax
  _DWORD *v24; // r14
  char *v25; // rcx
  void (__fastcall *v26)(char *); // rax
  char *v27; // rcx
  void (*v28)(void); // rax
  void (__fastcall *v29)(_QWORD *); // rax
  __int64 (__fastcall *v30)(__int64, GUID *, _QWORD **); // rax
  __int64 v31; // r8
  _QWORD *v32; // r9
  _QWORD *v33; // r9
  int v34; // ebx
  _QWORD *v35; // rcx
  __int64 (__fastcall *v36)(__int64); // rax
  signed __int64 v37; // rax
  signed __int64 v38; // rtt
  _QWORD *v39; // r8
  __int64 v40; // r9
  _QWORD *v41; // r8
  int v42; // eax
  _BOOL8 v43; // r8
  unsigned __int64 v44; // r9
  __int64 v45; // rdx
  ViewManagerBridge *Ptr; // rcx
  __int64 v47; // rdx
  __int64 (__fastcall *v48)(ViewManagerBridge *__hidden, unsigned int, bool); // rax
  int v49; // eax
  unsigned int v51; // edi
  unsigned int v52; // ebx
  __int64 v53; // r8
  __int64 *v54; // rcx
  __int64 v55; // rax
  void (__fastcall *v56)(__int64 *, _QWORD, _QWORD); // rax
  int v57; // eax
  __int64 v58; // r10
  void (__fastcall *v59)(__int64 *, _QWORD, _QWORD, _QWORD); // rax
  _QWORD *v60; // rcx
  __int64 v61; // rcx
  signed __int32 v62; // ebx
  int DueTime; // [rsp+20h] [rbp-E0h]
  char v64; // [rsp+50h] [rbp-B0h] BYREF
  char v65[7]; // [rsp+51h] [rbp-AFh] BYREF
  _QWORD *v66; // [rsp+58h] [rbp-A8h] BYREF
  signed __int32 v67; // [rsp+60h] [rbp-A0h] BYREF
  char v68; // [rsp+64h] [rbp-9Ch]
  DWORD CurrentThreadId; // [rsp+68h] [rbp-98h]
  int v70; // [rsp+6Ch] [rbp-94h]
  __int16 v71; // [rsp+70h] [rbp-90h]
  char *v72; // [rsp+78h] [rbp-88h] BYREF
  char *v73; // [rsp+80h] [rbp-80h]
  char *v74; // [rsp+88h] [rbp-78h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v75; // [rsp+90h] [rbp-70h] BYREF
  WINBOOL fPending; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v77; // [rsp+9Ch] [rbp-64h] BYREF
  unsigned int v78; // [rsp+A0h] [rbp-60h] BYREF
  int v79; // [rsp+A8h] [rbp-58h] BYREF
  int v80; // [rsp+B0h] [rbp-50h] BYREF
  __int16 v81; // [rsp+B4h] [rbp-4Ch]
  char *v82; // [rsp+B8h] [rbp-48h]
  PSRWLOCK SRWLock; // [rsp+C0h] [rbp-40h]
  LPVOID Context; // [rsp+C8h] [rbp-38h] BYREF
  char *v85; // [rsp+D0h] [rbp-30h] BYREF
  char *v86; // [rsp+D8h] [rbp-28h]
  _QWORD *v87; // [rsp+E0h] [rbp-20h]
  struct Windows::Foundation::Collections::IPropertySet *v88; // [rsp+E8h] [rbp-18h]
  RTL_SRWLOCK **v89; // [rsp+F0h] [rbp-10h]
  char *v90; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v91; // [rsp+100h] [rbp+0h] BYREF
  __int64 v92; // [rsp+110h] [rbp+10h]
  __int64 v93; // [rsp+118h] [rbp+18h]
  struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *v94; // [rsp+120h] [rbp+20h]
  signed __int64 v95; // [rsp+128h] [rbp+28h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+130h] [rbp+30h] BYREF
  __int128 *v97; // [rsp+140h] [rbp+40h] BYREF
  int v98; // [rsp+148h] [rbp+48h]
  int v99; // [rsp+14Ch] [rbp+4Ch]
  __int64 v100; // [rsp+150h] [rbp+50h]
  RTL_SRWLOCK *v101; // [rsp+158h] [rbp+58h]
  __int64 v102; // [rsp+160h] [rbp+60h]
  _QWORD v103[2]; // [rsp+168h] [rbp+68h] BYREF
  int v104; // [rsp+178h] [rbp+78h]
  int v105; // [rsp+17Ch] [rbp+7Ch]
  __int128 v106; // [rsp+180h] [rbp+80h] BYREF
  __int64 v107; // [rsp+190h] [rbp+90h]
  HSTRING_HEADER hstringHeader; // [rsp+198h] [rbp+98h] BYREF
  HSTRING string; // [rsp+1B0h] [rbp+B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+1C0h] [rbp+C0h] BYREF
  void *v111; // [rsp+1D0h] [rbp+D0h]
  int v112; // [rsp+1D8h] [rbp+D8h]
  int v113; // [rsp+1DCh] [rbp+DCh]
  int *v114; // [rsp+1E0h] [rbp+E0h]
  __int64 v115; // [rsp+1E8h] [rbp+E8h]
  unsigned int *v116; // [rsp+1F0h] [rbp+F0h]
  __int64 v117; // [rsp+1F8h] [rbp+F8h]
  wil::details::in1diag3 *retaddr; // [rsp+248h] [rbp+148h]

  v100 = -2LL;
  v94 = a3;
  v3 = a2;
  v88 = a2;
  v4 = this;
  v64 = 0;
  v5 = (RTL_SRWLOCK **)((char *)this + 160);
  v89 = (RTL_SRWLOCK **)((char *)this + 160);
  v6 = (RTL_SRWLOCK *)(*((_QWORD *)this + 20) + 296LL);
  SRWLock = v6;
  AcquireSRWLockExclusive(v6);
  v101 = v6;
  v75 = v3;
  if ( v3 )
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v3 + 8LL))(v3);
  string = 0LL;
  v7 = WindowsCreateStringReference(L"ApplicationMultiviewActivationPolicy", 0x24u, &hstringHeader, &string);
  if ( v7 < 0 )
    RaiseException(v7, 1u, 0, 0LL);
  v9 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned char>(&v75, string, v8, &v64);
  string = 0LL;
  if ( v9 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\inc\\viewmanagerinteroppropertysethelpers.h",
      (const char *)(unsigned int)v9,
      DueTime);
  v10 = *((_DWORD *)v4 + 69);
  if ( v10 - 4 <= 1 || !v10 )
    goto LABEL_69;
  if ( (*((_BYTE *)v4 + 88) & 4) != 0 )
  {
    v10 = 4 - (v64 != 0);
  }
  else if ( v10 == 1 )
  {
    v10 = 2;
  }
  v11 = (char *)v4 - 8;
  v74 = (char *)v4 - 8;
  if ( v4 != (ViewWrapperBase *)8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))((__int64)v4 - 8);
  v12 = (char *)v4 - 8;
  v73 = (char *)v4 - 8;
  v85 = (char *)v4 - 8;
  if ( v4 != (ViewWrapperBase *)8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))((__int64)v4 - 8);
  v13 = (char *)v4 - 8;
  v86 = (char *)v4 - 8;
  v14 = 0LL;
  v93 = 0LL;
  v15 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v16 = v15;
  if ( v15 )
  {
    *v15 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
    *((_DWORD *)v15 + 3) = 1;
    *v15 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
    {
      v17 = *(__int64 (**)())(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL);
      if ( v17 == Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
      {
        _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
        v11 = v74;
        v13 = v86;
        v12 = v85;
        v73 = v85;
      }
      else
      {
        ((void (__fastcall *)(struct Microsoft::WRL::Details::ModuleBase *, __int64 (*)()))v17)(
          Microsoft::WRL::Details::ModuleBase::module_,
          Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount);
      }
    }
    *v16 = off_1803212A8;
    v16[2] = 0LL;
    if ( v16 + 2 != &v85 )
    {
      v16[2] = v12;
      v73 = 0LL;
      v85 = 0LL;
    }
    v16[3] = v13;
    v14 = v16;
  }
  v87 = v14;
  v93 = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  if ( v14 )
  {
    v102 = 0LL;
    v82 = 0LL;
    v20 = (char *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v21 = v20;
    v72 = v20;
    if ( v20 )
    {
      *((_DWORD *)v20 + 3) = 1;
      *(_QWORD *)v20 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
      {
        v22 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL);
        if ( (char *)v22 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
        {
          _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
          v11 = v74;
          v73 = v85;
          v14 = v87;
          v21 = v72;
        }
        else
        {
          v22();
        }
      }
      *(_QWORD *)v21 = &Windows::Internal::ComTaskPool::CDelayedTask::`vftable';
      *((_QWORD *)v21 + 2) = 0LL;
      *((_QWORD *)v21 + 3) = 0LL;
      *((_QWORD *)v21 + 4) = 0LL;
      v90 = v21;
      v72 = 0LL;
      v23 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
      v24 = v23;
      if ( v23 )
      {
        *(_QWORD *)v23 = 0LL;
        v23[2] = CurrentThreadId;
        *((_QWORD *)v23 + 2) = v14;
        (*(void (__fastcall **)(_QWORD *))(*v14 + 8LL))(v14);
        *((_QWORD *)v24 + 3) = 0LL;
      }
      else
      {
        v24 = 0LL;
      }
      *((_QWORD *)v21 + 3) = v24;
      if ( v24 )
      {
        v25 = (char *)*((_QWORD *)v21 + 4);
        if ( v25 != v21 )
        {
          if ( v21 )
          {
            (*(void (__fastcall **)(char *))(*(_QWORD *)v21 + 8LL))(v21);
            v25 = (char *)*((_QWORD *)v21 + 4);
          }
          *((_QWORD *)v21 + 4) = v21;
          if ( v25 )
            (*(void (__fastcall **)(char *))(*(_QWORD *)v25 + 16LL))(v25);
        }
        if ( CreateTimerQueueTimer(
               (PHANDLE)v21 + 2,
               0LL,
               Windows::Internal::ComTaskPool::CDelayedTask::s_TPWake,
               v21,
               0x3E80u,
               0,
               8u)
          || (Error = ResultFromKnownLastError(), Error >= 0) )
        {
          if ( v21 )
            (*(void (__fastcall **)(char *))(*(_QWORD *)v21 + 8LL))(v21);
          v82 = v21;
          if ( v21 )
          {
            v90 = 0LL;
            v26 = *(void (__fastcall **)(char *))(*(_QWORD *)v21 + 16LL);
            if ( (char *)v26 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release )
              Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v21);
            else
              v26(v21);
          }
          Error = 0;
          goto LABEL_54;
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v21 + 32);
      }
      else
      {
        Error = -2147024882;
      }
      Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease(&v90);
      Microsoft::WRL::Details::MakeAllocator<TaskFlowImmersiveShellBroker>::~MakeAllocator<TaskFlowImmersiveShellBroker>(&v72);
    }
    else
    {
      Microsoft::WRL::Details::MakeAllocator<TaskFlowImmersiveShellBroker>::~MakeAllocator<TaskFlowImmersiveShellBroker>(&v72);
      Error = -2147024882;
    }
LABEL_54:
    v27 = v82;
    if ( v82 )
    {
      v82 = 0LL;
      v28 = *(void (**)(void))(*(_QWORD *)v27 + 16LL);
      if ( (char *)v28 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v27);
      else
        v28();
    }
    goto LABEL_58;
  }
  Error = -2147024882;
LABEL_58:
  if ( v14 )
  {
    v87 = 0LL;
    v29 = *(void (__fastcall **)(_QWORD *))(*v14 + 16LL);
    if ( (char *)v29 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
        v14,
        v18);
    else
      v29(v14);
  }
  if ( v73 )
  {
    v85 = 0LL;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v73 + 16LL))(v73);
  }
  if ( Error < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x12D,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
      (const char *)(unsigned int)Error,
      DueTime);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v74);
LABEL_100:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v75);
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    return (unsigned int)Error;
  }
  if ( v11 )
  {
    v74 = 0LL;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v5 = v89;
  v3 = v88;
  v6 = SRWLock;
LABEL_69:
  v66 = 0LL;
  v30 = **(__int64 (__fastcall ***)(__int64, GUID *, _QWORD **))v94;
  if ( (char *)v30 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForNavigationRequest>::QueryInterface )
  {
    v66 = 0LL;
    if ( InlineIsEqualGUID(&GUID_a8d2a90c_a403_4593_95ff_012516ae9351, &GUID_00000000_0000_0000_c000_000000000046)
      || InlineIsEqualGUID(&GUID_a8d2a90c_a403_4593_95ff_012516ae9351, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
    {
      v66 = v32;
      (*(void (__fastcall **)(_QWORD *))(v31 + 8))(v32);
      v34 = 0;
    }
    else
    {
      if ( InlineIsEqualGUID(&GUID_a8d2a90c_a403_4593_95ff_012516ae9351, &GUID_96c11dea_68de_44ef_a7f7_3aa869663d57) )
      {
        v66 = v33;
        v34 = 0;
      }
      else
      {
        if ( InlineIsEqualGUID(&GUID_a8d2a90c_a403_4593_95ff_012516ae9351, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90) )
        {
          v66 = v39;
          v34 = 0;
        }
        else if ( InlineIsEqualGUID(
                    &GUID_a8d2a90c_a403_4593_95ff_012516ae9351,
                    &GUID_00000003_0000_0000_c000_000000000046) )
        {
          v66 = v41;
          v34 = 0;
        }
        else
        {
          v34 = -2147467262;
        }
        if ( v34 == -2147467262 )
        {
          v66 = (_QWORD *)(v40 + 72);
          v34 = 0;
        }
      }
      v35 = v66;
      v36 = *(__int64 (__fastcall **)(__int64))(*v66 + 8LL);
      if ( v36 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForNavigationRequest>::AddRef )
      {
        v37 = v66[11];
        v95 = v37;
        while ( v37 >= 0 )
        {
          if ( (_DWORD)v37 != 0x7FFFFFFF )
          {
            v38 = v37;
            v37 = _InterlockedCompareExchange64(v35 + 11, v37 + 1, v37);
            if ( v38 != v37 )
              continue;
          }
          goto LABEL_91;
        }
        Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v37 + 16));
      }
      else
      {
        v36((__int64)v66);
      }
    }
  }
  else
  {
    v34 = v30((__int64)v94, &GUID_a8d2a90c_a403_4593_95ff_012516ae9351, &v66);
  }
LABEL_91:
  if ( v34 >= 0 )
  {
    v65[0] = 0;
    v42 = (*(__int64 (__fastcall **)(_QWORD *, char *))(*v66 + 48LL))(v66, v65);
    Error = v42;
    if ( v42 < 0 )
    {
      v44 = (unsigned int)v42;
      v45 = 309LL;
LABEL_99:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v45,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
        (const char *)v44,
        DueTime);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v66);
      goto LABEL_100;
    }
    LOBYTE(v43) = v65[0] != 0;
    Ptr = (ViewManagerBridge *)(*v5)[65].Ptr;
    v47 = *((unsigned int *)v4 + 82);
    v48 = *(__int64 (__fastcall **)(ViewManagerBridge *__hidden, unsigned int, bool))(*(_QWORD *)Ptr + 216LL);
    if ( v48 == ViewManagerBridge::SetHolographicActivationForTokenView )
      v49 = ViewManagerBridge::SetHolographicActivationForTokenView(Ptr, v47, v43);
    else
      v49 = v48(Ptr, v47, v43);
    Error = v49;
    if ( v49 < 0 )
    {
      v44 = (unsigned int)v49;
      v45 = 310LL;
      goto LABEL_99;
    }
  }
  v51 = *((_DWORD *)v4 + 82);
  v52 = *((_DWORD *)v4 + 35);
  if ( v10 )
  {
    v54 = *(__int64 **)(*((_QWORD *)v4 + 20) + 520LL);
    v55 = *v54;
    if ( v51 == v52 )
    {
      v56 = *(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v55 + 32);
      if ( (char *)v56 == (char *)ViewManagerBridge::NavigateView )
      {
        if ( !*((_BYTE *)v54 + 145) )
        {
          v57 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v54[13] + 112LL))(
                  v54[13],
                  v52,
                  v10,
                  0LL);
          if ( v57 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x63,
              (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
              (const char *)(unsigned int)v57,
              1);
          v68 = 0;
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
          v58 = *((_QWORD *)Context + 1);
          if ( *(_DWORD *)v58 > 5u
            && (*(_QWORD *)(v58 + 16) & 0x200000000000LL) != 0
            && (*(_QWORD *)(v58 + 24) & 0x200000000000LL) == *(_QWORD *)(v58 + 24) )
          {
            v77 = v52;
            v114 = (int *)&v77;
            v115 = 4LL;
            v78 = v10;
            v116 = &v78;
            v117 = 4LL;
            *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180394A08 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
            *(_DWORD *)&EventDescriptor.Level = 5;
            EventDescriptor.Keyword = 0x200000000000LL;
            UserData.Ptr = *(_QWORD *)(v58 + 8);
            UserData.Size = *(unsigned __int16 *)UserData.Ptr;
            UserData.Reserved = 2;
            v111 = &unk_180394A13;
            v112 = 49;
            v113 = 1;
            EventWriteTransfer(*(_QWORD *)(v58 + 32), &EventDescriptor, 0LL, 0LL, 4u, &UserData);
          }
        }
      }
      else
      {
        v56(v54, v52, v10);
      }
    }
    else
    {
      v59 = *(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(v55 + 40);
      if ( (char *)v59 == (char *)ViewManagerBridge::ResumeAndNavigateView )
        ViewManagerBridge::ResumeAndNavigateView(v54, v52, v51, v10);
      else
        v59(v54, v52, v51, v10);
    }
  }
  else
  {
    if ( v51 == v52 )
      v53 = *((_QWORD *)v4 + 23);
    else
      v53 = 0LL;
    (*(void (__fastcall **)(PVOID, _QWORD, __int64, _QWORD))(*(_QWORD *)(*v5)[65].Ptr + 48LL))(
      (*v5)[65].Ptr,
      v51,
      v53,
      0LL);
    if ( v51 != v52 )
      (*(void (__fastcall **)(PVOID, _QWORD, _QWORD))(*(_QWORD *)(*v5)[65].Ptr + 32LL))(
        (*v5)[65].Ptr,
        *((unsigned int *)v4 + 35),
        0LL);
  }
  *((_DWORD *)v4 + 82) = 0;
  *((_DWORD *)v4 + 22) |= 4u;
  v60 = v66;
  if ( v66 )
  {
    v66 = 0LL;
    (*(void (__fastcall **)(_QWORD *))(*v60 + 16LL))(v60);
  }
  v61 = (__int64)v75;
  if ( v75 )
  {
    v75 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v61 + 16LL))(v61);
  }
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetCachedFeatureEnabledState();
  v70 = 0;
  LOBYTE(v71) = 1;
  v80 = 0;
  v81 = v71;
  v79 = 3;
  v91 = 0uLL;
  v92 = 0LL;
  CurrentThreadId = 0x20000;
  v97 = &v91;
  v98 = 0x20000;
  v99 = 0;
  while ( 1 )
  {
    v67 = `wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetFeaturePropertyCache'::`2'::data;
    v62 = `wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetFeaturePropertyCache'::`2'::data;
    if ( !(unsigned int)wil_details_SetPropertyFlagCallback((union wil_details_FeaturePropertyCache *)&v67, &v97) )
      break;
    if ( v62 == _InterlockedCompareExchange(
                  (volatile signed __int32 *)&`wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetFeaturePropertyCache'::`2'::data,
                  v67,
                  v62) )
    {
      LODWORD(v92) = 0;
      goto LABEL_138;
    }
  }
  LODWORD(v92) = 1;
LABEL_138:
  v106 = v91;
  v107 = v92;
  if ( g_wil_details_recordFeatureUsage )
  {
    g_wil_details_recordFeatureUsage(
      0xA3B12Du,
      (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetFeaturePropertyCache'::`2'::data,
      (struct wil_details_RecordUsageResult *)&v106);
    if ( (`wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0x20 )
    {
      v103[0] = 0LL;
      v104 = 0;
      v103[1] = 6LL;
      v105 = (`wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
      ((void (__fastcall *)(__int64, _QWORD, _QWORD *))g_wil_details_recordFeatureUsage)(10727725LL, 0LL, v103);
    }
  }
  if ( !(_DWORD)v107 && g_wil_details_pfnFeatureLoggingHook )
    g_wil_details_pfnFeatureLoggingHook(
      0xA3B12Du,
      (const struct FEATURE_LOGGED_TRAITS *)&v80,
      0LL,
      0,
      (const enum wil_ReportingKind *)&v79,
      0LL,
      0,
      1uLL);
  if ( v64 )
  {
    if ( v4 == (ViewWrapperBase *)8 )
      v4 = 0LL;
    ViewEventDispatcher::QueuePendingActivation(*v5, v4, v3, 1);
  }
  return 0LL;
}
