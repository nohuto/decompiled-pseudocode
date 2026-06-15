/*
 * XREFs of Microsoft::WRL::Details::InvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog_____ptr64_Windows::ApplicationModel::PackageInstallingEventArgs_____ptr64___lambda_3e6e6990ae6602ba2aad8f5a9254f972__2__1_::Invoke @ 0x180001BA0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgCreateSz @ 0x180016D60 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180057B78 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1800D5948 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::InvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog_____ptr64_Windows::ApplicationModel::PackageInstallingEventArgs_____ptr64___lambda_3e6e6990ae6602ba2aad8f5a9254f972__2__1_::Invoke(
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
  char v12[4]; // [rsp+30h] [rbp-A8h] BYREF
  int v13; // [rsp+34h] [rbp-A4h] BYREF
  int v14; // [rsp+38h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR v15; // [rsp+40h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+60h] [rbp-78h] BYREF
  int *v17; // [rsp+70h] [rbp-68h]
  __int64 v18; // [rsp+78h] [rbp-60h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-48h] BYREF
  _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B0h] [rbp-28h] BYREF

  v3 = *a3;
  v13 = 0;
  v12[0] = 0;
  v6 = (*(__int64 (__fastcall **)(__int64 *, char *))(v3 + 72))(a3, v12);
  if ( v6 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64 *, int *))(*a3 + 80))(a3, &v13);
    if ( v6 >= 0 && v12[0] && !v13 )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 16) + 112LL) = 2;
      v6 = AtmosCheck::PerformLicenseCheck(*(AtmosCheck **)(a1 + 16), 1);
    }
  }
  v14 = v6;
  if ( v6 )
  {
    if ( (unsigned int)dword_18012A2E0 > 2 )
    {
      TlgCreateSz(&v16, "AppInstall check result");
      v18 = 4LL;
      v17 = &v14;
      TlgWrite((TraceLoggingHProvider)&dword_18012A2E0, &unk_1800FBFAD, v10, v11, 4u, &v15);
    }
    if ( v6 < 0 )
      Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)v6);
  }
  else if ( (unsigned int)dword_18012A2E0 > 4 )
  {
    TlgCreateSz(&pDesc, "AppInstall check result");
    TlgWrite((TraceLoggingHProvider)&dword_18012A2E0, &unk_1800FBFDD, v7, v8, 3u, &pData);
  }
  return (unsigned int)v6;
}
