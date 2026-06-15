/*
 * XREFs of ?RegisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ @ 0x18003CDE0
 * Callers:
 *     ?Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z @ 0x18003CFAC (-Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z.c)
 * Callees:
 *     ?Trace@AtmosCheck@@AEAAXPEBDJ@Z @ 0x180026130 (-Trace@AtmosCheck@@AEAAXPEBDJ@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@U?$ITypedEventHandler@PEAVPackageCatalog@ApplicationModel@Windows@@PEAVPackageUninstallingEventArgs@23@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002AAD0 (-Release@-$RuntimeClass@U-$InterfaceList@U-$ITypedEventHandler@PEAVPackageCatalog@ApplicationMod.c)
 *     ?InternalAddRef@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180032B08 (-InternalAddRef@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog_____ptr64_Windows::ApplicationModel::PackageInstallingEventArgs_____ptr64___lambda_3e6e6990ae6602ba2aad8f5a9254f972___ @ 0x180045E84 (Microsoft--WRL--Callback_Windows--Foundation--ITypedEventHandler_Windows--ApplicationModel--Pack.c)
 *     Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog_____ptr64_Windows::ApplicationModel::PackageUninstallingEventArgs_____ptr64___lambda_bcae059e430ab0425bfd15752f8ec40b___ @ 0x180045ED4 (Microsoft--WRL--Callback_Windows--Foundation--ITypedEventHandler_Windows--Applicati_ea_180045ED4.c)
 *     ?InternalRelease@?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ @ 0x18004604C (-InternalRelease@-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800466D0 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AtmosCheck::RegisterAppDeploymentNotifications(AtmosCheck *this)
{
  HSTRING v2; // rbx
  volatile signed __int32 *v3; // rcx
  int ActivationFactory; // esi
  __int64 v5; // rbx
  _QWORD *v6; // rdi
  __int64 v7; // rcx
  volatile signed __int32 *v8; // rbx
  __int64 v9; // rcx
  volatile signed __int32 *v10; // rdi
  __int64 v11; // rax
  __int64 (__fastcall *v12)(volatile signed __int32 *); // rdx
  AtmosCheck *v14; // [rsp+20h] [rbp-50h] BYREF
  __int64 v15; // [rsp+28h] [rbp-48h] BYREF
  volatile signed __int32 *v16; // [rsp+30h] [rbp-40h] BYREF
  AtmosCheck *v17; // [rsp+38h] [rbp-38h] BYREF
  volatile signed __int32 *v18; // [rsp+40h] [rbp-30h] BYREF
  HSTRING string; // [rsp+48h] [rbp-28h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-20h] BYREF

  v15 = 0LL;
  v17 = this;
  Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef((__int64 *)&v17);
  if ( WindowsCreateStringReference(L"Windows.ApplicationModel.PackageCatalog", 0x27u, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  v2 = string;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v15);
  ActivationFactory = RoGetActivationFactory(v2, &GUID_5cc754cf_f82f_471b_ba04_1783588b7144, &v15);
  if ( ActivationFactory >= 0 )
  {
    v5 = v15;
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
      v14 = this;
      Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef((__int64 *)&v14);
      Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog_____ptr64_Windows::ApplicationModel::PackageInstallingEventArgs_____ptr64___lambda_3e6e6990ae6602ba2aad8f5a9254f972___(
        &v18,
        &v14);
      Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(&v14);
      v14 = this;
      Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef((__int64 *)&v14);
      Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog_____ptr64_Windows::ApplicationModel::PackageUninstallingEventArgs_____ptr64___lambda_bcae059e430ab0425bfd15752f8ec40b___(
        &v16,
        &v14);
      Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(&v14);
      v8 = v18;
      ActivationFactory = (*(__int64 (__fastcall **)(_QWORD, volatile signed __int32 *, char *))(*(_QWORD *)*v6 + 64LL))(
                            *v6,
                            v18,
                            (char *)this + 80);
      if ( ActivationFactory < 0 )
      {
        v3 = v16;
        if ( !v16 )
          goto LABEL_12;
        v11 = *(_QWORD *)v16;
      }
      else
      {
        v9 = *v6;
        v10 = v16;
        ActivationFactory = (*(__int64 (__fastcall **)(__int64, volatile signed __int32 *, char *))(*(_QWORD *)v9 + 96LL))(
                              v9,
                              v16,
                              (char *)this + 88);
        if ( !v10 )
          goto LABEL_12;
        v11 = *(_QWORD *)v10;
        v3 = v10;
      }
      v12 = *(__int64 (__fastcall **)(volatile signed __int32 *))(v11 + 16);
      if ( v12 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::PackageCatalog *,Windows::ApplicationModel::PackageUninstallingEventArgs *>,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::PackageCatalog *,Windows::ApplicationModel::PackageUninstallingEventArgs *>,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v3);
      else
        v12(v3);
LABEL_12:
      if ( v8 )
      {
        if ( *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 16LL) == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::PackageCatalog *,Windows::ApplicationModel::PackageUninstallingEventArgs *>,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
          Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::PackageCatalog *,Windows::ApplicationModel::PackageUninstallingEventArgs *>,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v8);
        else
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 16LL))(v8);
      }
    }
  }
  AtmosCheck::Trace((AtmosCheck *)v3, "RegAppDepNotification result", ActivationFactory);
  Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(&v17);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v15);
  return (unsigned int)ActivationFactory;
}
