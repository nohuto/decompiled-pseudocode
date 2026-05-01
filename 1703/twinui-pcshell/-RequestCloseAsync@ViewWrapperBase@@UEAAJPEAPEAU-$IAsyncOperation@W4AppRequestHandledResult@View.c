/*
 * XREFs of ?RequestCloseAsync@ViewWrapperBase@@UEAAJPEAPEAU?$IAsyncOperation@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Foundation@Windows@@@Z @ 0x180115F10
 * Callers:
 *     <none>
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800024A8 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001E2E8 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?AcquireLockExclusive@ViewEventDispatcher@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x1800F185C (-AcquireLockExclusive@ViewEventDispatcher@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_p.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ViewClosingAPIs_CloseRequested_Desktop@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180119248 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ViewClosingAPIs_CloseRequest.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ViewWrapperBase::RequestCloseAsync(__int64 a1, volatile __int32 **a2)
{
  volatile __int32 *v4; // rax
  volatile __int32 *v5; // rbx
  unsigned int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // rdx
  int v9; // eax
  volatile __int32 *v10; // rcx
  volatile __int32 *v11; // rdx
  volatile __int32 *v12; // rbx
  __int64 v13; // rcx
  void (*v14)(void); // rax
  volatile __int32 *v15; // rcx
  PSRWLOCK SRWLock[2]; // [rsp+40h] [rbp-20h] BYREF
  int v18; // [rsp+50h] [rbp-10h]
  __int16 v19; // [rsp+54h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  int v21; // [rsp+A0h] [rbp+40h] BYREF
  __int16 v22; // [rsp+A4h] [rbp+44h]
  volatile __int32 *v23; // [rsp+A8h] [rbp+48h]

  SRWLock[1] = (PSRWLOCK)-2LL;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_ViewClosingAPIs_CloseRequested_Desktop>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_ViewClosingAPIs_CloseRequested_Desktop>::GetCachedFeatureEnabledState();
  v18 = 0;
  LOBYTE(v19) = 3;
  v21 = 0;
  v22 = v19;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_ViewClosingAPIs_CloseRequested_Desktop>::GetFeaturePropertyCache'::`2'::data,
    0x98878Du,
    (const struct FEATURE_LOGGED_TRAITS *)&v21,
    1,
    3);
  ViewEventDispatcher::AcquireLockExclusive(*(RTL_SRWLOCK **)(a1 + 144), SRWLock);
  v23 = 0LL;
  v4 = (volatile __int32 *)operator new(0x98uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( !v4 )
  {
    v6 = -2147024882;
    v7 = 2147942414LL;
    v8 = 1533LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
      (const char *)v7);
    v10 = v23;
    goto LABEL_19;
  }
  *(_QWORD *)v4 = &Microsoft::WRL::ChainInterfaces<IHolographicPositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  *((_QWORD *)v4 + 2) = &Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<enum Windows::Internal::Shell::ViewManagerInterop::AppRequestHandledResult>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::`vftable';
  *((_QWORD *)v4 + 3) = 0LL;
  *((_QWORD *)v4 + 4) = 0LL;
  *((_QWORD *)v4 + 5) = 0LL;
  *((_QWORD *)v4 + 6) = 0LL;
  *((_DWORD *)v4 + 14) = -1;
  *((_DWORD *)v4 + 15) = 0;
  *((_DWORD *)v4 + 16) = 1;
  *((_QWORD *)v4 + 9) = 0LL;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v4 + 20));
  *((_QWORD *)v5 + 2) = &Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<enum Windows::Internal::Shell::ViewManagerInterop::AppRequestHandledResult>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::`vftable'{for `Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<enum Windows::Internal::Shell::ViewManagerInterop::AppRequestHandledResult>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>'};
  *((_QWORD *)v5 + 10) = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  *((_QWORD *)v5 + 13) = 0LL;
  *((_QWORD *)v5 + 14) = 0LL;
  *((_DWORD *)v5 + 30) = 0;
  InitOnceExecuteOnce(
    &Windows::Internal::s_bIsEnvironmentCheckDone,
    Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<enum Windows::Internal::Shell::ViewManagerInterop::AppRequestHandledResult>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::CheckExecutionEnvironment,
    0LL,
    0LL);
  *((_QWORD *)v5 + 17) = 1LL;
  *(_QWORD *)v5 = &Microsoft::WRL::RuntimeClass<Windows::Foundation::IAsyncOperation<enum Windows::Internal::Shell::ViewManagerInterop::AppRequestHandledResult>,Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<enum Windows::Internal::Shell::ViewManagerInterop::AppRequestHandledResult>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Windows::Foundation::IAsyncOperation<enum Windows::Internal::Shell::ViewManagerInterop::AppRequestHandledResult>'};
  *((_QWORD *)v5 + 1) = &Microsoft::WRL::RuntimeClass<Windows::Foundation::IAsyncOperation<enum Windows::Internal::Shell::ViewManagerInterop::AppRequestHandledResult>,Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<enum Windows::Internal::Shell::ViewManagerInterop::AppRequestHandledResult>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<enum Windows::Internal::Shell::ViewManagerInterop::AppRequestHandledResult>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>,Microsoft::WRL::Details::Nil>>,1,0>'};
  *((_QWORD *)v5 + 2) = &Microsoft::WRL::RuntimeClass<Windows::Foundation::IAsyncOperation<enum Windows::Internal::Shell::ViewManagerInterop::AppRequestHandledResult>,Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<enum Windows::Internal::Shell::ViewManagerInterop::AppRequestHandledResult>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<enum Windows::Internal::Shell::ViewManagerInterop::AppRequestHandledResult>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>'};
  *((_QWORD *)v5 + 10) = &Microsoft::WRL::RuntimeClass<Windows::Foundation::IAsyncOperation<enum Windows::Internal::Shell::ViewManagerInterop::AppRequestHandledResult>,Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<enum Windows::Internal::Shell::ViewManagerInterop::AppRequestHandledResult>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v5 = &AppRequestOperation::`vftable'{for `Windows::Foundation::IAsyncOperation<enum Windows::Internal::Shell::ViewManagerInterop::AppRequestHandledResult>'};
  *((_QWORD *)v5 + 1) = &Microsoft::WRL::RuntimeClass<Windows::Foundation::IAsyncOperation<enum Windows::Internal::Shell::ViewManagerInterop::AppRequestHandledResult>,Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<enum Windows::Internal::Shell::ViewManagerInterop::AppRequestHandledResult>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<enum Windows::Internal::Shell::ViewManagerInterop::AppRequestHandledResult>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>,Microsoft::WRL::Details::Nil>>,1,0>'};
  *((_QWORD *)v5 + 2) = &AppRequestOperation::`vftable'{for `Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<enum Windows::Internal::Shell::ViewManagerInterop::AppRequestHandledResult>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>'};
  *((_QWORD *)v5 + 10) = &Microsoft::WRL::RuntimeClass<Windows::Foundation::IAsyncOperation<enum Windows::Internal::Shell::ViewManagerInterop::AppRequestHandledResult>,Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<enum Windows::Internal::Shell::ViewManagerInterop::AppRequestHandledResult>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  *((_DWORD *)v5 + 36) = 0;
  (*(void (__fastcall **)(volatile __int32 *))(*((_QWORD *)v5 + 2) + 104LL))(v5 + 4);
  (*(void (__fastcall **)(volatile __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
  v23 = v5;
  (*(void (__fastcall **)(volatile __int32 *))(*(_QWORD *)v5 + 16LL))(v5);
  if ( *(_QWORD *)(a1 + 440) )
  {
    v15 = v23;
    _InterlockedExchange(v23 + 36, 1);
    v14 = *(void (**)(void))(*((_QWORD *)v15 + 2) + 128LL);
    goto LABEL_17;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 144) + 448LL) + 112LL))(
         *(_QWORD *)(*(_QWORD *)(a1 + 144) + 448LL),
         *(unsigned int *)(a1 + 124));
  v6 = v9;
  if ( v9 < 0 )
  {
    v7 = (unsigned int)v9;
    v8 = 1539LL;
    goto LABEL_10;
  }
  v11 = v23;
  if ( *(volatile __int32 **)(a1 + 440) != v23 )
  {
    v12 = v23;
    if ( v23 )
    {
      (*(void (__fastcall **)(volatile __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
      v11 = v23;
    }
    v13 = *(_QWORD *)(a1 + 440);
    *(_QWORD *)(a1 + 440) = v12;
    if ( v13 )
    {
      v14 = *(void (**)(void))(*(_QWORD *)v13 + 16LL);
LABEL_17:
      v14();
      v11 = v23;
    }
  }
  v10 = 0LL;
  v23 = 0LL;
  *a2 = v11;
  v6 = 0;
LABEL_19:
  if ( v10 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(volatile __int32 *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  if ( SRWLock[0] )
    ReleaseSRWLockExclusive(SRWLock[0]);
  return v6;
}
