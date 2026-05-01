/*
 * XREFs of ??$CreateGitHelper@U?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@VGitPtr@Internal@3@@Details@Internal@Windows@@YAJPEAU?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@2@PEAPEAU342@@Z @ 0x180072F98
 * Callers:
 *     ?add_Dismissed@CSplashScreen@@UEAAJPEAU?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180072760 (-add_Dismissed@CSplashScreen@@UEAAJPEAU-$ITypedEventHandler@PEAVSplashScreen@Activation@Applicat.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Acquire@Git@Details@Internal@Windows@@QEAAJXZ @ 0x180073BD0 (-Acquire@Git@Details@Internal@Windows@@QEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Details::CreateGitHelper<Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Activation::SplashScreen *,IInspectable *>,Windows::Internal::GitPtr>(
        __int64 a1,
        _QWORD *a2)
{
  _DWORD *v4; // rbx
  _DWORD *v5; // rax
  _DWORD *v6; // rdi
  Windows::Internal::Details::Git *v7; // rcx
  signed int v8; // edi

  *a2 = 0LL;
  v4 = 0LL;
  v5 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( v5 )
  {
    memset(v5, 0, 0x48uLL);
    *(_QWORD *)v6 = &IAppViewDataSourceAdapter::`vftable';
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v6 + 2));
    v6[13] = 1;
    *(_QWORD *)v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Activation::SplashScreen *,IInspectable *>,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Activation::SplashScreen *,IInspectable *>'};
    *((_QWORD *)v6 + 1) = &Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Activation::SplashScreen *,IInspectable *>,Windows::Internal::GitPtr,2>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
    v7 = Microsoft::WRL::Details::ModuleBase::module_;
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v6 = &Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Activation::SplashScreen *,IInspectable *>,Windows::Internal::GitPtr,2>::`vftable'{for `Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Activation::SplashScreen *,IInspectable *>'};
    *((_QWORD *)v6 + 1) = &Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Activation::SplashScreen *,IInspectable *>,Windows::Internal::GitPtr,2>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
    *((_QWORD *)v6 + 7) = &Windows::Internal::GitPtrImpl<Windows::Internal::GitPtr>::`vftable';
    v6[16] = 0;
    v6[17] = Windows::Internal::Details::Git::Acquire(v7);
    *((_QWORD *)v6 + 7) = &Windows::Internal::GitPtrImpl<Windows::Internal::GitPtr>::`vftable';
    v4 = v6;
  }
  v8 = v4 == 0LL ? 0x8007000E : 0;
  if ( v4 )
  {
    v8 = 0;
    if ( v4[16] )
    {
      v8 = v4[17];
      if ( v8 >= 0 )
        v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_1802BAD70 + 32LL))(qword_1802BAD70);
    }
    v4[16] = 0;
    if ( v8 >= 0 )
    {
      if ( a1 )
      {
        v8 = v4[17];
        if ( v8 < 0 )
          goto LABEL_15;
        v8 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, _DWORD *))(*(_QWORD *)qword_1802BAD70 + 24LL))(
               qword_1802BAD70,
               a1,
               &GUID_7725b2a5_287d_5ed2_a789_2a6a2673c7fe,
               v4 + 16);
      }
      if ( v8 >= 0 )
        v8 = (**(__int64 (__fastcall ***)(_DWORD *, GUID *, _QWORD *))v4)(
               v4,
               &GUID_7725b2a5_287d_5ed2_a789_2a6a2673c7fe,
               a2);
    }
  }
LABEL_15:
  if ( v4 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 16LL))(v4);
  return (unsigned int)v8;
}
