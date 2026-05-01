/*
 * XREFs of ?RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIAMServiceProvider@@@Z @ 0x180052794
 * Callers:
 *     ?CImmersiveApp_CreateInstance@@YAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIAMServiceProvider@@AEBU_GUID@@PEAPEAX@Z @ 0x18005C538 (-CImmersiveApp_CreateInstance@@YAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIA.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18001EB1C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppressi.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001F064 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180026020 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800268D0 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800271B8 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1800398C4 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?_UpdateWindowTitleAndButtons@CImmersiveApp@@AEAAXXZ @ 0x1800593AC (-_UpdateWindowTitleAndButtons@CImmersiveApp@@AEAAXXZ.c)
 *     ?Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z @ 0x180059F38 (-Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18005D360 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?StartActivity@Initialization@CFramePresentationTelemetry@@QEAAXPEBG@Z @ 0x18005FE54 (-StartActivity@Initialization@CFramePresentationTelemetry@@QEAAXPEBG@Z.c)
 *     ?GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z @ 0x1801C2290 (-GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CImmersiveApp::RuntimeClassInitialize(
        LPWSTR *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        int a4,
        struct IImmersiveMonitor *a5,
        struct PER_APPLICATION_DATA *a6,
        struct IIAMServiceProvider *a7)
{
  struct IIAMServiceProvider *v10; // r14
  LPCWSTR *v11; // r13
  int v12; // r12d
  LPWSTR v13; // rcx
  PCWSTR StringRawBuffer; // rax
  enum ORIENTATION_PREFERENCE *v15; // r8
  int v16; // edi
  int v17; // ebx
  int v18; // eax
  WCHAR *v19; // r14
  LSTATUS ValueW; // eax
  signed int v21; // edx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r14
  char *v25; // rbx
  char *v26; // rax
  char *v27; // rdi
  _QWORD *v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v32; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v33; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v34; // [rsp+58h] [rbp-B0h] BYREF
  struct IIAMServiceProvider *v35; // [rsp+60h] [rbp-A8h] BYREF
  int v36; // [rsp+68h] [rbp-A0h]
  int v37; // [rsp+6Ch] [rbp-9Ch]
  DWORD pcbData; // [rsp+70h] [rbp-98h] BYREF
  int pvData; // [rsp+74h] [rbp-94h] BYREF
  int v40; // [rsp+78h] [rbp-90h] BYREF
  __int16 v41; // [rsp+7Ch] [rbp-8Ch]
  WCHAR *v42; // [rsp+80h] [rbp-88h] BYREF
  __int64 v43; // [rsp+88h] [rbp-80h]
  __int64 v44; // [rsp+90h] [rbp-78h]
  __int64 v45; // [rsp+98h] [rbp-70h]
  char *v46; // [rsp+A0h] [rbp-68h]
  const unsigned __int16 *v47; // [rsp+A8h] [rbp-60h]
  __int64 v48; // [rsp+B0h] [rbp-58h]
  __int64 v49; // [rsp+B8h] [rbp-50h]
  _QWORD v50[4]; // [rsp+C8h] [rbp-40h] BYREF
  int v51; // [rsp+E8h] [rbp-20h]
  int *v52; // [rsp+F0h] [rbp-18h]
  int *v53; // [rsp+F8h] [rbp-10h]
  int v54; // [rsp+100h] [rbp-8h] BYREF
  char v55; // [rsp+104h] [rbp-4h]
  int v56; // [rsp+128h] [rbp+20h] BYREF
  const char *v57; // [rsp+130h] [rbp+28h]
  __int64 v58; // [rsp+138h] [rbp+30h]
  char v59; // [rsp+140h] [rbp+38h]
  __int64 v60; // [rsp+148h] [rbp+40h]
  _BYTE v61[144]; // [rsp+150h] [rbp+48h] BYREF
  __int64 v62; // [rsp+1E0h] [rbp+D8h]
  __int64 v63; // [rsp+1E8h] [rbp+E0h]
  __int64 v64; // [rsp+1F0h] [rbp+E8h]
  __int64 v65; // [rsp+1F8h] [rbp+F0h]

  v48 = -2LL;
  v47 = a3;
  v10 = a7;
  v35 = a7;
  v50[1] = 0LL;
  v50[2] = v50;
  v50[3] = 0LL;
  v51 = 0;
  v52 = &v56;
  v53 = &v54;
  v54 = 0;
  v55 = 0;
  v59 = 0;
  v56 = 0;
  v57 = "Initialization";
  v58 = 0LL;
  v60 = 1LL;
  v62 = 0LL;
  v63 = 0LL;
  memset(v61, 0, sizeof(v61));
  v64 = 0LL;
  v65 = 0LL;
  v50[0] = &CImmersiveAppTelemetry::Initialization::`vftable';
  CFramePresentationTelemetry::Initialization::StartActivity((CFramePresentationTelemetry::Initialization *)v50, a2);
  v11 = (LPCWSTR *)(this + 68);
  v12 = SHStrDupW(a2, this + 68);
  if ( v12 >= 0 )
  {
    *((_DWORD *)this + 138) = a4;
    if ( this[91] != (LPWSTR)a5 )
    {
      if ( a5 )
        (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)a5 + 8LL))(a5);
      v13 = this[91];
      this[91] = (LPWSTR)a5;
      if ( v13 )
        (*(void (__fastcall **)(LPWSTR))(*(_QWORD *)v13 + 16LL))(v13);
    }
    *((_BYTE *)this + 708) = *((_BYTE *)a6 + 28);
    *((_BYTE *)this + 709) = *((_BYTE *)a6 + 29);
    *((_BYTE *)this + 710) = *((_BYTE *)a6 + 30);
    *((_BYTE *)this + 711) = *((_BYTE *)a6 + 31);
    *((_BYTE *)this + 712) = *((_BYTE *)a6 + 32);
    *((_BYTE *)this + 713) = *((_BYTE *)a6 + 33);
    *((_BYTE *)this + 714) = *((_BYTE *)a6 + 34);
    *((_BYTE *)this + 715) = *((_BYTE *)a6 + 35);
    *((_BYTE *)this + 716) = *((_BYTE *)a6 + 36);
    *((_BYTE *)this + 717) = *((_BYTE *)a6 + 37);
    if ( (`wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetCachedFeatureEnabledState();
    v36 = 0;
    LOBYTE(v37) = 3;
    v40 = 0;
    v41 = v37;
    wil_details_FeaturePropertyCache_ReportUsageToService(
      &`wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetFeaturePropertyCache'::`2'::data,
      0xBF61Bu,
      (const struct FEATURE_LOGGED_TRAITS *)&v40,
      1,
      3);
    StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)a6, 0LL);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
      (__int64)(this + 70),
      (__int64)StringRawBuffer,
      0xFFFFFFFFFFFFFFFFuLL);
    v12 = CImmersiveApp::CImmersiveWindowCollection::Initialize(
            (CImmersiveApp::CImmersiveWindowCollection *)(this + 33),
            a7);
    if ( v12 >= 0 )
    {
      v16 = 500;
      v32 = 0x300000001F4LL;
      if ( (int)CallerIdentity::GetManifestedOrientationPreference(*v11, (const unsigned __int16 *)this + 360, v15) < 0 )
        *((_DWORD *)this + 180) = 0;
      if ( *((_BYTE *)this + 708) )
      {
        v17 = 320;
        LODWORD(v32) = 320;
      }
      else if ( *((_BYTE *)this + 714) )
      {
        v42 = 0LL;
        v43 = 0LL;
        v44 = 0LL;
        v18 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
                &v42,
                L"%s\\%s",
                L"Software\\Microsoft\\Windows\\CurrentVersion\\ApplicationView",
                *v11);
        v17 = 320;
        v19 = v42;
        if ( v18 >= 0 )
        {
          pcbData = 4;
          ValueW = RegGetValueW(HKEY_CURRENT_USER, v42, L"MinWidth", 0x10u, 0LL, &pvData, &pcbData);
          v21 = (unsigned __int16)ValueW | 0x80070000;
          if ( ValueW <= 0 )
            v21 = ValueW;
          if ( v21 >= 0 )
          {
            v22 = v32;
            if ( pvData == 1 )
              v22 = 320;
            LODWORD(v32) = v22;
          }
        }
        if ( v19 )
        {
          CoTaskMemFree(v19);
          v42 = 0LL;
        }
        v43 = 0LL;
        v44 = 0LL;
        v10 = v35;
      }
      else
      {
        v32 = 0x140000001F4LL;
        v17 = 320;
      }
      if ( *((_BYTE *)this + 710) )
        v32 = 0x30000000C0LL;
      (*(void (__fastcall **)(LPWSTR, __int64 *))(*(_QWORD *)this[50] + 176LL))(this[50], &v32);
      v34 = 0LL;
      if ( (*(int (__fastcall **)(struct IIAMServiceProvider *, GUID *, GUID *, __int64 *))(*(_QWORD *)v10 + 24LL))(
             v10,
             &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
             &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
             &v34) >= 0
        && (*(int (__fastcall **)(__int64, LPCWSTR, struct IIAMServiceProvider **))(*(_QWORD *)v34 + 56LL))(
             v34,
             *v11,
             &v35) >= 0 )
      {
        if ( (int)v35 < 500 )
          v16 = (int)v35;
        LODWORD(v32) = v16;
        if ( SHIDWORD(v35) < 320 )
          v17 = HIDWORD(v35);
        HIDWORD(v32) = v17;
      }
      (*(void (__fastcall **)(LPWSTR, __int64 *))(*(_QWORD *)this[50] + 168LL))(this[50], &v32);
      CImmersiveApp::_UpdateWindowTitleAndButtons((CImmersiveApp *)this);
      v33 = 0LL;
      if ( (*(int (__fastcall **)(LPWSTR, __int64 *))(*(_QWORD *)this[50] + 128LL))(this[50], &v33) >= 0
        && *((_BYTE *)this + 711) )
      {
        v24 = v33;
        v45 = v33;
        if ( v33 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 8LL))(v33);
        v25 = 0LL;
        v49 = 0LL;
        v26 = (char *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
        v27 = v26;
        if ( v26 )
        {
          v28 = v26 + 8;
          Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v26 + 8));
          *((_DWORD *)v27 + 13) = 1;
          *(_QWORD *)v27 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::`vftable'{for `IAsyncCallback'};
          *v28 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                 + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
          *(_QWORD *)v27 = off_1801FDD68;
          *v28 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
          *((_QWORD *)v27 + 7) = v24;
          if ( v24 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
          v25 = v27;
        }
        v46 = v25;
        if ( v24 )
        {
          v45 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
        }
        if ( v25 )
        {
          (*(void (__fastcall **)(LPWSTR, char *))(*(_QWORD *)this[50] + 200LL))(this[50], v25);
          v46 = 0LL;
          (*(void (__fastcall **)(char *))(*(_QWORD *)v25 + 16LL))(v25);
        }
      }
      LOBYTE(v23) = *((_BYTE *)a6 + 26);
      (*(void (__fastcall **)(LPWSTR, __int64))(*(_QWORD *)this[50] + 296LL))(this[50], v23);
      v29 = v33;
      if ( v33 )
      {
        v33 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
      }
      v30 = v34;
      if ( v34 )
      {
        v34 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
      }
      if ( v47 )
        v12 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
                (__int64)(this + 75),
                (__int64)v47,
                0xFFFFFFFFFFFFFFFFuLL);
    }
  }
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v50, v12);
  v50[0] = &CImmersiveAppTelemetry::Initialization::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v50);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v50);
  return (unsigned int)v12;
}
