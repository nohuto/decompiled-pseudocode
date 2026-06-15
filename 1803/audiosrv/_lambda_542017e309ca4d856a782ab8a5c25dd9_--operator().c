/*
 * XREFs of _lambda_542017e309ca4d856a782ab8a5c25dd9_::operator() @ 0x18010F5A0
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageCatalog_____ptr64_Windows::ApplicationModel::IPackageCatalog_____ptr64__Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageUninstallingEventArgs_____ptr64_Windows::ApplicationModel::IPackageUninstallingEventArgs_____ptr64___::_)(Windows::ApplicationModel::IPackageCatalog_____ptr64_Windows::ApplicationModel::IPackageUninstallingEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog_____ptr64_Windows::ApplicationModel::PackageUninstallingEventArgs_____ptr64___lambda_542017e309ca4d856a782ab8a5c25dd9___1_Windows::ApplicationModel::IPackageCatalog_____ptr64_Windows::ApplicationModel::IPackageUninstallingEventArgs_____ptr64_::Invoke @ 0x180111040 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_180111040.c)
 * Callees:
 *     ?IsUsefulPackage@AtmosCheck@@AEAA_NPEAUIPackage@ApplicationModel@Windows@@@Z @ 0x180005554 (-IsUsefulPackage@AtmosCheck@@AEAA_NPEAUIPackage@ApplicationModel@Windows@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180005620 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Trace@AtmosCheck@@AEAAXPEBDJ@Z @ 0x1800266F8 (-Trace@AtmosCheck@@AEAAXPEBDJ@Z.c)
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180029798 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_542017e309ca4d856a782ab8a5c25dd9_::operator()(AtmosCheck **a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rax
  AtmosCheck *v6; // rcx
  int v7; // ebx
  AtmosCheck *v8; // rcx
  int v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF
  struct Windows::ApplicationModel::IPackage *v12; // [rsp+50h] [rbp+18h] BYREF

  v11 = a2;
  v3 = *a3;
  v10 = 0;
  LOBYTE(v11) = 0;
  v7 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v3 + 72))(a3, &v11);
  if ( v7 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64 *, int *))(*a3 + 80))(a3, &v10);
    if ( v7 >= 0 && (_BYTE)v11 && !v10 )
    {
      v12 = 0LL;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12);
      if ( (*(int (__fastcall **)(__int64 *, struct Windows::ApplicationModel::IPackage **))(*a3 + 56))(a3, &v12) < 0
        || AtmosCheck::IsUsefulPackage(v8, v12) )
      {
        *((_DWORD *)*a1 + 36) = 3;
        v7 = AtmosCheck::PerformLicenseCheck(*a1, 1);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12);
    }
  }
  AtmosCheck::Trace(v6, "AppUninstall check result", v7);
  return (unsigned int)v7;
}
