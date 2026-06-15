/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageCatalog_____ptr64_Windows::ApplicationModel::IPackageCatalog_____ptr64__Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageUninstallingEventArgs_____ptr64_Windows::ApplicationModel::IPackageUninstallingEventArgs_____ptr64___::_)(Windows::ApplicationModel::IPackageCatalog_____ptr64_Windows::ApplicationModel::IPackageUninstallingEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog_____ptr64_Windows::ApplicationModel::PackageUninstallingEventArgs_____ptr64___lambda_542017e309ca4d856a782ab8a5c25dd9___1_Windows::ApplicationModel::IPackageCatalog_____ptr64_Windows::ApplicationModel::IPackageUninstallingEventArgs_____ptr64_::Invoke @ 0x180111040
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1800F84A8 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     _lambda_542017e309ca4d856a782ab8a5c25dd9_::operator() @ 0x18010F5A0 (_lambda_542017e309ca4d856a782ab8a5c25dd9_--operator().c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageCatalog_____ptr64_Windows::ApplicationModel::IPackageCatalog_____ptr64__Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageUninstallingEventArgs_____ptr64_Windows::ApplicationModel::IPackageUninstallingEventArgs_____ptr64___::___Windows::ApplicationModel::IPackageCatalog_____ptr64_Windows::ApplicationModel::IPackageUninstallingEventArgs_____ptr64____ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog_____ptr64_Windows::ApplicationModel::PackageUninstallingEventArgs_____ptr64___lambda_542017e309ca4d856a782ab8a5c25dd9___1_Windows::ApplicationModel::IPackageCatalog_____ptr64_Windows::ApplicationModel::IPackageUninstallingEventArgs_____ptr64_::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  signed int v3; // eax
  unsigned int v4; // ebx

  v3 = lambda_542017e309ca4d856a782ab8a5c25dd9_::operator()((AtmosCheck **)(a1 + 16), a2, a3);
  v4 = v3;
  if ( v3 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v3);
  return v4;
}
