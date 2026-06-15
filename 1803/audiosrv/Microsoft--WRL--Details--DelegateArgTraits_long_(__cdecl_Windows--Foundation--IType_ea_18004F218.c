/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageCatalog_____ptr64_Windows::ApplicationModel::IPackageCatalog_____ptr64__Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageInstallingEventArgs_____ptr64_Windows::ApplicationModel::IPackageInstallingEventArgs_____ptr64___::_)(Windows::ApplicationModel::IPackageCatalog_____ptr64_Windows::ApplicationModel::IPackageInstallingEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog_____ptr64_Windows::ApplicationModel::PackageInstallingEventArgs_____ptr64___lambda_f6dae7814606855f79762b97c09932ee___1_Windows::ApplicationModel::IPackageCatalog_____ptr64_Windows::ApplicationModel::IPackageInstallingEventArgs_____ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog_____ptr64_Windows::ApplicationModel::PackageInstallingEventArgs_____ptr64___lambda_f6dae7814606855f79762b97c09932ee___1_Windows::ApplicationModel::IPackageCatalog_____ptr64_Windows::ApplicationModel::IPackageInstallingEventArgs_____ptr64_ @ 0x18004F218
 * Callers:
 *     ?RegisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ @ 0x18004F3C0 (-RegisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ.c)
 * Callees:
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVPackageCatalog@ApplicationModel@Windows@@PEAVPackageInstallingEventArgs@23@@Foundation@Windows@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x180015494 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedEventHandler@P.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageCatalog_____ptr64_Windows::ApplicationModel::IPackageCatalog_____ptr64__Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageInstallingEventArgs_____ptr64_Windows::ApplicationModel::IPackageInstallingEventArgs_____ptr64___::___Windows::ApplicationModel::IPackageCatalog_____ptr64_Windows::ApplicationModel::IPackageInstallingEventArgs_____ptr64____ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog_____ptr64_Windows::ApplicationModel::PackageInstallingEventArgs_____ptr64___lambda_f6dae7814606855f79762b97c09932ee___1_Windows::ApplicationModel::IPackageCatalog_____ptr64_Windows::ApplicationModel::IPackageInstallingEventArgs_____ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog_____ptr64_Windows::ApplicationModel::PackageInstallingEventArgs_____ptr64___lambda_f6dae7814606855f79762b97c09932ee___1_Windows::ApplicationModel::IPackageCatalog_____ptr64_Windows::ApplicationModel::IPackageInstallingEventArgs_____ptr64_(
        _QWORD *a1,
        _QWORD *a2)
{
  struct Microsoft::WRL::Details::ModuleBase *v4; // rcx

  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::PackageCatalog *,Windows::ApplicationModel::PackageInstallingEventArgs *>>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::PackageCatalog *,Windows::ApplicationModel::PackageInstallingEventArgs *>>((__int64)a1);
  v4 = Microsoft::WRL::Details::ModuleBase::module_;
  *a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::PackageCatalog *,Windows::ApplicationModel::PackageInstallingEventArgs *>>::`vftable';
  if ( v4 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v4 + 8LL))(v4);
  a1[2] = 0LL;
  if ( a1 + 2 != a2 )
  {
    a1[2] = *a2;
    *a2 = 0LL;
  }
  *a1 = off_180120C38;
  return a1;
}
