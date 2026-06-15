/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageCatalog_____ptr64_Windows::ApplicationModel::IPackageCatalog_____ptr64__Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageUninstallingEventArgs_____ptr64_Windows::ApplicationModel::IPackageUninstallingEventArgs_____ptr64___::_)(Windows::ApplicationModel::IPackageCatalog_____ptr64_Windows::ApplicationModel::IPackageUninstallingEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog_____ptr64_Windows::ApplicationModel::PackageUninstallingEventArgs_____ptr64___lambda_bcae059e430ab0425bfd15752f8ec40b___1_Windows::ApplicationModel::IPackageCatalog_____ptr64_Windows::ApplicationModel::IPackageUninstallingEventArgs_____ptr64_::Invoke @ 0x180001480
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180004CD0 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1800C5FE0 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageCatalog_____ptr64_Windows::ApplicationModel::IPackageCatalog_____ptr64__Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageUninstallingEventArgs_____ptr64_Windows::ApplicationModel::IPackageUninstallingEventArgs_____ptr64___::___Windows::ApplicationModel::IPackageCatalog_____ptr64_Windows::ApplicationModel::IPackageUninstallingEventArgs_____ptr64____ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog_____ptr64_Windows::ApplicationModel::PackageUninstallingEventArgs_____ptr64___lambda_bcae059e430ab0425bfd15752f8ec40b___1_Windows::ApplicationModel::IPackageCatalog_____ptr64_Windows::ApplicationModel::IPackageUninstallingEventArgs_____ptr64_::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v3; // rax
  int v6; // ebx
  LPCGUID v7; // r8
  LPCGUID v8; // r9
  LPCGUID v10; // r8
  LPCGUID v11; // r9
  char v12[4]; // [rsp+30h] [rbp-49h] BYREF
  int v13; // [rsp+34h] [rbp-45h] BYREF
  int v14; // [rsp+38h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR v15; // [rsp+40h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+60h] [rbp-19h] BYREF
  int *v17; // [rsp+70h] [rbp-9h]
  int v18; // [rsp+78h] [rbp-1h]
  int v19; // [rsp+7Ch] [rbp+3h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp+7h] BYREF
  _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A0h] [rbp+27h] BYREF

  v3 = *a3;
  v13 = 0;
  v12[0] = 0;
  v6 = (*(__int64 (__fastcall **)(__int64 *, char *))(v3 + 72))(a3, v12);
  if ( v6 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64 *, int *))(*a3 + 80))(a3, &v13);
    if ( v6 >= 0 && v12[0] && !v13 )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 16) + 120LL) = 3;
      v6 = AtmosCheck::PerformLicenseCheck(*(AtmosCheck **)(a1 + 16), 1);
    }
  }
  v14 = v6;
  if ( v6 )
  {
    if ( (unsigned int)dword_18014A470 > 2 )
    {
      TlgCreateSz(&v16, "AppUninstall check result");
      v19 = 0;
      v17 = &v14;
      v18 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_18014A470, &unk_180112861, v10, v11, 4u, &v15);
    }
    if ( v6 < 0 )
      Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)v6);
  }
  else if ( (unsigned int)dword_18014A470 > 5 )
  {
    TlgCreateSz(&pDesc, "AppUninstall check result");
    TlgWrite((TraceLoggingHProvider)&dword_18014A470, &unk_180112891, v7, v8, 3u, &pData);
  }
  return (unsigned int)v6;
}
