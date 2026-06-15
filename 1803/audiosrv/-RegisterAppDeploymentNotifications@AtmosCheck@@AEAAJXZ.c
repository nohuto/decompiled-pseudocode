/*
 * XREFs of ?RegisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ @ 0x18004F3C0
 * Callers:
 *     ?Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z @ 0x18004F5D4 (-Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180005620 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18000B360 (--3@YAXPEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVPackageCatalog@ApplicationModel@Windows@@PEAVPackageUninstallingEventArgs@23@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180016720 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedEventHan.c)
 *     ?Trace@AtmosCheck@@AEAAXPEBDJ@Z @ 0x1800266F8 (-Trace@AtmosCheck@@AEAAXPEBDJ@Z.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageCatalog_____ptr64_Windows::ApplicationModel::IPackageCatalog_____ptr64__Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageUninstallingEventArgs_____ptr64_Windows::ApplicationModel::IPackageUninstallingEventArgs_____ptr64___::_)(Windows::ApplicationModel::IPackageCatalog_____ptr64_Windows::ApplicationModel::IPackageUninstallingEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog_____ptr64_Windows::ApplicationModel::PackageUninstallingEventArgs_____ptr64___lambda_542017e309ca4d856a782ab8a5c25dd9___1_Windows::ApplicationModel::IPackageCatalog_____ptr64_Windows::ApplicationModel::IPackageUninstallingEventArgs_____ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog_____ptr64_Windows::ApplicationModel::PackageUninstallingEventArgs_____ptr64___lambda_542017e309ca4d856a782ab8a5c25dd9___1_Windows::ApplicationModel::IPackageCatalog_____ptr64_Windows::ApplicationModel::IPackageUninstallingEventArgs_____ptr64_ @ 0x18004F1B8 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_18004F1B8.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageCatalog_____ptr64_Windows::ApplicationModel::IPackageCatalog_____ptr64__Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageInstallingEventArgs_____ptr64_Windows::ApplicationModel::IPackageInstallingEventArgs_____ptr64___::_)(Windows::ApplicationModel::IPackageCatalog_____ptr64_Windows::ApplicationModel::IPackageInstallingEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog_____ptr64_Windows::ApplicationModel::PackageInstallingEventArgs_____ptr64___lambda_f6dae7814606855f79762b97c09932ee___1_Windows::ApplicationModel::IPackageCatalog_____ptr64_Windows::ApplicationModel::IPackageInstallingEventArgs_____ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog_____ptr64_Windows::ApplicationModel::PackageInstallingEventArgs_____ptr64___lambda_f6dae7814606855f79762b97c09932ee___1_Windows::ApplicationModel::IPackageCatalog_____ptr64_Windows::ApplicationModel::IPackageInstallingEventArgs_____ptr64_ @ 0x18004F218 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_18004F218.c)
 *     ?InternalRelease@?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ @ 0x18004F278 (-InternalRelease@-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18004F2A8 (-InternalAddRef@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061018 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AtmosCheck::RegisterAppDeploymentNotifications(AtmosCheck *this)
{
  HSTRING v2; // rbx
  AtmosCheck *v3; // rcx
  int ActivationFactory; // esi
  __int64 v5; // rbx
  _QWORD *v6; // r15
  __int64 v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  _QWORD *v10; // rax
  _QWORD *v11; // rdi
  AtmosCheck *v13; // [rsp+20h] [rbp-40h] BYREF
  __int64 v14; // [rsp+28h] [rbp-38h] BYREF
  AtmosCheck *v15; // [rsp+30h] [rbp-30h] BYREF
  HSTRING string; // [rsp+38h] [rbp-28h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-20h] BYREF

  v14 = 0LL;
  v15 = this;
  Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef((__int64 *)&v15);
  if ( WindowsCreateStringReference(L"Windows.ApplicationModel.PackageCatalog", 0x27u, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  v2 = string;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
  ActivationFactory = RoGetActivationFactory(v2, &GUID_5cc754cf_f82f_471b_ba04_1783588b7144, &v14);
  if ( ActivationFactory >= 0 )
  {
    v5 = v14;
    v6 = (_QWORD *)((char *)this + 24);
    v7 = *((_QWORD *)this + 3);
    if ( v7 )
    {
      *v6 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    ActivationFactory = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v5 + 48LL))(v5, (char *)this + 24);
    if ( ActivationFactory >= 0 )
    {
      v13 = this;
      Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef((__int64 *)&v13);
      v8 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
      v9 = 0LL;
      if ( v8 )
        v9 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageCatalog_____ptr64_Windows::ApplicationModel::IPackageCatalog_____ptr64__Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageInstallingEventArgs_____ptr64_Windows::ApplicationModel::IPackageInstallingEventArgs_____ptr64___::___Windows::ApplicationModel::IPackageCatalog_____ptr64_Windows::ApplicationModel::IPackageInstallingEventArgs_____ptr64____ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog_____ptr64_Windows::ApplicationModel::PackageInstallingEventArgs_____ptr64___lambda_f6dae7814606855f79762b97c09932ee___1_Windows::ApplicationModel::IPackageCatalog_____ptr64_Windows::ApplicationModel::IPackageInstallingEventArgs_____ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog_____ptr64_Windows::ApplicationModel::PackageInstallingEventArgs_____ptr64___lambda_f6dae7814606855f79762b97c09932ee___1_Windows::ApplicationModel::IPackageCatalog_____ptr64_Windows::ApplicationModel::IPackageInstallingEventArgs_____ptr64_(
               v8,
               &v13);
      Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease((__int64 *)&v13);
      v13 = this;
      Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef((__int64 *)&v13);
      v10 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
      v11 = 0LL;
      if ( v10 )
        v11 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageCatalog_____ptr64_Windows::ApplicationModel::IPackageCatalog_____ptr64__Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageUninstallingEventArgs_____ptr64_Windows::ApplicationModel::IPackageUninstallingEventArgs_____ptr64___::___Windows::ApplicationModel::IPackageCatalog_____ptr64_Windows::ApplicationModel::IPackageUninstallingEventArgs_____ptr64____ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog_____ptr64_Windows::ApplicationModel::PackageUninstallingEventArgs_____ptr64___lambda_542017e309ca4d856a782ab8a5c25dd9___1_Windows::ApplicationModel::IPackageCatalog_____ptr64_Windows::ApplicationModel::IPackageUninstallingEventArgs_____ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog_____ptr64_Windows::ApplicationModel::PackageUninstallingEventArgs_____ptr64___lambda_542017e309ca4d856a782ab8a5c25dd9___1_Windows::ApplicationModel::IPackageCatalog_____ptr64_Windows::ApplicationModel::IPackageUninstallingEventArgs_____ptr64_(
                v10,
                &v13);
      Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease((__int64 *)&v13);
      ActivationFactory = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, char *))(*(_QWORD *)*v6 + 64LL))(
                            *v6,
                            v9,
                            (char *)this + 112);
      if ( ActivationFactory >= 0 )
        ActivationFactory = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, char *))(*(_QWORD *)*v6 + 96LL))(
                              *v6,
                              v11,
                              (char *)this + 120);
      if ( v11 )
      {
        if ( *(__int64 (__fastcall **)(__int64))(*v11 + 16LL) == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::PackageCatalog *,Windows::ApplicationModel::PackageUninstallingEventArgs *>>::Release )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::PackageCatalog *,Windows::ApplicationModel::PackageUninstallingEventArgs *>>::Release((__int64)v11);
        else
          (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
      }
      if ( v9 )
      {
        if ( *(__int64 (__fastcall **)(__int64))(*v9 + 16LL) == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::PackageCatalog *,Windows::ApplicationModel::PackageUninstallingEventArgs *>>::Release )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::PackageCatalog *,Windows::ApplicationModel::PackageUninstallingEventArgs *>>::Release((__int64)v9);
        else
          (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
      }
    }
  }
  AtmosCheck::Trace(v3, "RegAppDepNotification result", ActivationFactory);
  Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease((__int64 *)&v15);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
  return (unsigned int)ActivationFactory;
}
