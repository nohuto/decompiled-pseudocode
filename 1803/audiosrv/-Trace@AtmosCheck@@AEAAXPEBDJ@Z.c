/*
 * XREFs of ?Trace@AtmosCheck@@AEAAXPEBDJ@Z @ 0x1800266F8
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageCatalog_____ptr64_Windows::ApplicationModel::IPackageCatalog_____ptr64__Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageInstallingEventArgs_____ptr64_Windows::ApplicationModel::IPackageInstallingEventArgs_____ptr64___::_)(Windows::ApplicationModel::IPackageCatalog_____ptr64_Windows::ApplicationModel::IPackageInstallingEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog_____ptr64_Windows::ApplicationModel::PackageInstallingEventArgs_____ptr64___lambda_f6dae7814606855f79762b97c09932ee___1_Windows::ApplicationModel::IPackageCatalog_____ptr64_Windows::ApplicationModel::IPackageInstallingEventArgs_____ptr64_::Invoke @ 0x180005470 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--ITypedEventHandler.c)
 *     ?PerformLicenseCheckInternal@AtmosCheck@@AEAAJPEAUDolbyLicenseResult@@@Z @ 0x180026870 (-PerformLicenseCheckInternal@AtmosCheck@@AEAAJPEAUDolbyLicenseResult@@@Z.c)
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180029798 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     ?RegisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ @ 0x18004F3C0 (-RegisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ.c)
 *     ?Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z @ 0x18004F5D4 (-Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z.c)
 *     ?StaticClientAtmosCheckEventFired@AtmosCheck@@SAXPEAXE@Z @ 0x180065430 (-StaticClientAtmosCheckEventFired@AtmosCheck@@SAXPEAXE@Z.c)
 *     ??1AtmosCheck@@UEAA@XZ @ 0x18010F490 (--1AtmosCheck@@UEAA@XZ.c)
 *     _lambda_542017e309ca4d856a782ab8a5c25dd9_::operator() @ 0x18010F5A0 (_lambda_542017e309ca4d856a782ab8a5c25dd9_--operator().c)
 *     ?IsLicenseValidForPackage@AtmosCheck@@AEAAJPEAUHSTRING__@@@Z @ 0x1801110C8 (-IsLicenseValidForPackage@AtmosCheck@@AEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     _TlgCreateSz @ 0x1800059B0 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 */

void __fastcall AtmosCheck::Trace(AtmosCheck *this, const char *a2, int a3)
{
  LPCGUID v3; // r8
  LPCGUID v4; // r9
  _DWORD v5[2]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v6; // [rsp+38h] [rbp-31h]
  void *v7; // [rsp+40h] [rbp-29h] BYREF
  int v8; // [rsp+48h] [rbp-21h]
  int v9; // [rsp+4Ch] [rbp-1Dh]
  void *v10; // [rsp+50h] [rbp-19h]
  int v11; // [rsp+58h] [rbp-11h]
  int v12; // [rsp+5Ch] [rbp-Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-9h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+90h] [rbp+27h] BYREF
  int *v16; // [rsp+A0h] [rbp+37h]
  int v17; // [rsp+A8h] [rbp+3Fh]
  int v18; // [rsp+ACh] [rbp+43h]
  int v19; // [rsp+E0h] [rbp+77h] BYREF

  v19 = a3;
  if ( a3 )
  {
    if ( (unsigned int)dword_1801883F0 > 2 )
    {
      TlgCreateSz(&v15, a2);
      v18 = 0;
      v16 = &v19;
      v17 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_1801883F0, &unk_180149ACD, v3, v4, 4u, &pData);
    }
  }
  else if ( (unsigned int)dword_1801883F0 > 5 )
  {
    TlgCreateSz(&pDesc, a2);
    v6 = 0LL;
    v5[1] = 5;
    v7 = off_1801883F8;
    v5[0] = ((unsigned int)&unk_180149AFD - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v8 = *(unsigned __int16 *)off_1801883F8;
    v10 = &unk_180149B08;
    v9 = 2;
    v11 = 23;
    v12 = 1;
    ((void (__fastcall *)(__int64, _DWORD *, _QWORD, _QWORD, int, void **))EtwEventWriteTransfer)(
      qword_180188410,
      v5,
      0LL,
      0LL,
      3,
      &v7);
  }
}
