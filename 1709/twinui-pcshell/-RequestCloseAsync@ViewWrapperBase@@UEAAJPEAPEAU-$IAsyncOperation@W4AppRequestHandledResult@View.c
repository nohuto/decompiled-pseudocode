/*
 * XREFs of ?RequestCloseAsync@ViewWrapperBase@@UEAAJPEAPEAU?$IAsyncOperation@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Foundation@Windows@@@Z @ 0x180140440
 * Callers:
 *     <none>
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001F064 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?AcquireLockExclusive@ViewEventDispatcher@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18011C2F8 (-AcquireLockExclusive@ViewEventDispatcher@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_p.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ViewClosingAPIs_CloseRequested_Desktop@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180143C18 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ViewClosingAPIs_CloseRequest.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ViewWrapperBase::RequestCloseAsync(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  unsigned int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // rdx
  int v9; // eax
  _QWORD *v10; // rcx
  _QWORD *v11; // rdx
  __int64 v12; // rcx
  void (*v13)(void); // rax
  _QWORD *v15; // [rsp+30h] [rbp-30h]
  PSRWLOCK SRWLock[4]; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  __int16 v18; // [rsp+A4h] [rbp+44h]
  int v19; // [rsp+A8h] [rbp+48h] BYREF
  __int16 v20; // [rsp+ACh] [rbp+4Ch]

  SRWLock[1] = (PSRWLOCK)-2LL;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_ViewClosingAPIs_CloseRequested_Desktop>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_ViewClosingAPIs_CloseRequested_Desktop>::GetCachedFeatureEnabledState();
  LOBYTE(v18) = 3;
  v19 = 0;
  v20 = v18;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_ViewClosingAPIs_CloseRequested_Desktop>::GetFeaturePropertyCache'::`2'::data,
    0x98878Du,
    (const struct FEATURE_LOGGED_TRAITS *)&v19,
    1,
    3);
  ViewEventDispatcher::AcquireLockExclusive(*(RTL_SRWLOCK **)(a1 + 168), SRWLock);
  v15 = 0LL;
  v4 = operator new(0xB8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( !v4 )
  {
    v6 = -2147024882;
    v7 = 2147942414LL;
    v8 = 1534LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
      (const char *)v7);
    v10 = v15;
    goto LABEL_19;
  }
  *v4 = &Microsoft::WRL::ChainInterfaces<IHolographicPositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  v4[2] = &Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<enum Windows::Internal::Shell::ViewManagerInterop::AppRequestHandledResult>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::`vftable';
  v4[4] = 0LL;
  v4[5] = 0LL;
  v4[6] = 0LL;
  v4[7] = 0LL;
  *((_DWORD *)v4 + 16) = -1;
  *((_DWORD *)v4 + 17) = 0;
  *((_DWORD *)v4 + 18) = 1;
  v4[10] = 0LL;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v4 + 11));
  v5[2] = &Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<enum Windows::Internal::Shell::ViewManagerInterop::AppRequestHandledResult>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::`vftable'{for `Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<enum Windows::Internal::Shell::ViewManagerInterop::AppRequestHandledResult>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>'};
  v5[11] = &Microsoft::WRL::FtmBase::`vftable';
  v5[17] = 0LL;
  v5[18] = 0LL;
  *((_DWORD *)v5 + 38) = 0;
  InitOnceExecuteOnce(
    &Windows::Internal::s_bIsEnvironmentCheckDone,
    Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<enum Windows::Internal::Shell::ViewManagerInterop::AppRequestHandledResult>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::CheckExecutionEnvironment,
    0LL,
    0LL);
  v5[21] = 1LL;
  *v5 = &Microsoft::WRL::RuntimeClass<Windows::Foundation::IAsyncOperation<enum Windows::Internal::Shell::ViewManagerInterop::AppRequestHandledResult>,Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<enum Windows::Internal::Shell::ViewManagerInterop::AppRequestHandledResult>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>>::`vftable'{for `Windows::Foundation::IAsyncOperation<enum Windows::Internal::Shell::ViewManagerInterop::AppRequestHandledResult>'};
  v5[1] = &AppRequestOperation::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<enum Windows::Internal::Shell::ViewManagerInterop::AppRequestHandledResult>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>>'};
  v5[2] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::IAsyncOperation<enum Windows::Internal::Shell::ViewManagerInterop::AppRequestHandledResult>,Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<enum Windows::Internal::Shell::ViewManagerInterop::AppRequestHandledResult>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>>::`vftable'{for `Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<enum Windows::Internal::Shell::ViewManagerInterop::AppRequestHandledResult>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>'};
  v5[11] = &AppRequestOperation::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::FtmBase>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *v5 = &AppRequestOperation::`vftable'{for `Windows::Foundation::IAsyncOperation<enum Windows::Internal::Shell::ViewManagerInterop::AppRequestHandledResult>'};
  v5[1] = &AppRequestOperation::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<enum Windows::Internal::Shell::ViewManagerInterop::AppRequestHandledResult>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>>'};
  v5[2] = &AppRequestOperation::`vftable'{for `Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<enum Windows::Internal::Shell::ViewManagerInterop::AppRequestHandledResult>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>'};
  v5[11] = &AppRequestOperation::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::FtmBase>'};
  *((_DWORD *)v5 + 44) = 0;
  SRWLock[2] = (PSRWLOCK)v5;
  (*(void (__fastcall **)(_QWORD *))(v5[2] + 104LL))(v5 + 2);
  (*(void (__fastcall **)(_QWORD *))(*v5 + 8LL))(v5);
  v15 = v5;
  (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
  if ( *(_QWORD *)(a1 + 464) )
  {
    _InterlockedExchange((volatile __int32 *)v5 + 44, 1);
    v13 = *(void (**)(void))(v5[2] + 128LL);
    goto LABEL_17;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 168) + 520LL) + 112LL))(
         *(_QWORD *)(*(_QWORD *)(a1 + 168) + 520LL),
         *(unsigned int *)(a1 + 148));
  v6 = v9;
  if ( v9 < 0 )
  {
    v7 = (unsigned int)v9;
    v8 = 1540LL;
    goto LABEL_10;
  }
  v11 = v15;
  if ( *(_QWORD **)(a1 + 464) != v15 )
  {
    if ( v15 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v15 + 8LL))(v15);
      v11 = v15;
    }
    v12 = *(_QWORD *)(a1 + 464);
    *(_QWORD *)(a1 + 464) = v15;
    if ( v12 )
    {
      v13 = *(void (**)(void))(*(_QWORD *)v12 + 16LL);
LABEL_17:
      v13();
      v11 = v15;
    }
  }
  v10 = 0LL;
  *a2 = v11;
  v6 = 0;
LABEL_19:
  if ( v10 )
    (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
  if ( SRWLock[0] )
    ReleaseSRWLockExclusive(SRWLock[0]);
  return v6;
}
