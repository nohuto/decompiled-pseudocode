/*
 * XREFs of ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x180041C70
 * Callers:
 *     ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x18003FB80 (-_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?CreateEnsuredApplication@CApplicationManager@@UEAAJPEBG_KPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x180105E60 (-CreateEnsuredApplication@CApplicationManager@@UEAAJPEBG_KPEAPEAUIImmersiveApplicationInternal@@.c)
 *     ?CreateNewGlom@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAPEAU3@@Z @ 0x180106260 (-CreateNewGlom@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@PEAUIPro.c)
 * Callees:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@VCWRLObjectWithGITSite@@UIImmersiveApplication@@UIImmersiveApplication2@@UIImmersiveApplicationHolographic@@UIImmersiveApplicationInternal@@UIObjectWithWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@VObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@V?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@UIServiceProvider@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002B860 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_18002B860.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@VCWRLObjectWithGITSite@@UIImmersiveApplication@@UIImmersiveApplication2@@UIImmersiveApplicationHolographic@@UIImmersiveApplicationInternal@@UIObjectWithWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@VObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@V?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@UIServiceProvider@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002B9E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@VCWRLO.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003BB30 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?_AddApplicationData@CApplicationManager@@AEAAJPEBGAEB_KAEAV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@@Z @ 0x18003C210 (-_AddApplicationData@CApplicationManager@@AEAAJPEBGAEB_KAEAV-$ComPtr@V-$CRefCountedObject@UPER_A.c)
 *     ?s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@@Z @ 0x1800462B0 (-s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComP.c)
 *     ??0CImmersiveApp@@QEAA@XZ @ 0x18004D784 (--0CImmersiveApp@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIAMServiceProvider@@_K@Z @ 0x18004DCF0 (-RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DAT.c)
 *     ?IncrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x18004E690 (-IncrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x18005FC70 (-wil_details_RecordUsageInPropertyCache@@YA-AUwil_details_RecordUsageResult@@PEATwil_details_Fea.c)
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x18005FDD0 (-RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_detai.c)
 *     ??4?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180088720 (--4-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Release@?$CRefCountedObject@UPER_APPLICATION_DATA@@@@UEAAKXZ @ 0x180088810 (-Release@-$CRefCountedObject@UPER_APPLICATION_DATA@@@@UEAAKXZ.c)
 *     ?s_LoadQuirksForApp@CApplicationManager@@CAXPEBGPEAUPER_APPLICATION_DATA@@@Z @ 0x180088EE0 (-s_LoadQuirksForApp@CApplicationManager@@CAXPEBGPEAUPER_APPLICATION_DATA@@@Z.c)
 *     ?s_LookupEntry@?$CSimpleHashTable@_KV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@V?$CDefaultHashPolicy@_K@@V?$CDefaultKeyCompare@_K@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEB_K@Z @ 0x18008A7E8 (-s_LookupEntry@-$CSimpleHashTable@_KV-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL.c)
 *     ??1?$MakeAllocator@VTaskFlowImmersiveShellBroker@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180097C44 (--1-$MakeAllocator@VTaskFlowImmersiveShellBroker@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VCImmersiveApp@@@WRL@Microsoft@@QEAA@XZ @ 0x1800EFB98 (--1-$ComPtr@VCImmersiveApp@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18010730C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppressi.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall CApplicationManager::_CreateImmersiveApp(
        CApplicationManager *this,
        unsigned __int16 *a2,
        unsigned __int64 a3,
        unsigned int a4,
        struct IImmersiveMonitor *a5,
        const struct _GUID *a6,
        void **a7)
{
  unsigned __int16 *v7; // rdi
  CApplicationManager *v8; // r12
  struct IIAMServiceProvider *v9; // r15
  WCHAR *v10; // r13
  unsigned __int64 v11; // rbx
  __int64 v12; // rdx
  wchar_t *v13; // rcx
  int v14; // r9d
  wchar_t v15; // ax
  wchar_t *v16; // rax
  __int64 v17; // rdx
  WCHAR *v18; // rcx
  int v19; // edi
  WCHAR v20; // ax
  LONG PackagesByPackageFamily; // eax
  unsigned __int64 v22; // rsi
  WCHAR *v23; // rax
  unsigned __int64 v24; // rax
  WCHAR *v25; // rdx
  int v26; // r10d
  __int64 v27; // r8
  WCHAR v28; // cx
  unsigned __int64 v29; // rsi
  char *v30; // rsi
  char *v31; // r14
  __int64 v32; // rcx
  _DWORD *v33; // rax
  char *v34; // rax
  struct PER_APPLICATION_DATA *v35; // rdx
  __int64 v36; // rax
  struct wil_details_RecordUsageResult *v37; // r9
  char *v38; // r15
  _QWORD *v39; // rdi
  volatile int *v40; // rdx
  _DWORD *v41; // rbx
  _DWORD *v42; // rcx
  _DWORD *v43; // r12
  _DWORD *v44; // rax
  void (__fastcall *v45)(struct Microsoft::WRL::Details::ModuleBase *); // rax
  void (__fastcall *v46)(_QWORD *); // rax
  struct PER_APPLICATION_DATA *v47; // rdi
  CImmersiveApp *v48; // rax
  CImmersiveApp *v49; // rbx
  unsigned __int16 *v50; // r15
  __int64 (__fastcall *v51)(__int64, GUID *, _QWORD *); // rax
  int v52; // eax
  __int64 (__fastcall *v53)(CImmersiveApp *); // rax
  __int64 (__fastcall ***v54)(_QWORD, GUID *, _QWORD); // rcx
  __int64 (__fastcall ***v55)(_QWORD, GUID *, void **); // rcx
  __int64 (__fastcall *v56)(void *); // rax
  __int64 (__fastcall *v57)(void *); // rax
  BOOL bIgnoreCase[2]; // [rsp+20h] [rbp-E0h]
  struct IIAMServiceProvider *packageProperties; // [rsp+30h] [rbp-D0h]
  __int64 (__fastcall ***v61)(_QWORD, GUID *, _QWORD); // [rsp+50h] [rbp-B0h] BYREF
  __int64 (__fastcall ***v62)(_QWORD, GUID *, void **); // [rsp+58h] [rbp-A8h] BYREF
  int v63; // [rsp+60h] [rbp-A0h]
  __int16 v64; // [rsp+64h] [rbp-9Ch]
  UINT32 count; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int16 *v66; // [rsp+70h] [rbp-90h]
  CImmersiveApp *v67; // [rsp+78h] [rbp-88h] BYREF
  char *v68; // [rsp+80h] [rbp-80h] BYREF
  WCHAR *v69; // [rsp+88h] [rbp-78h]
  __int64 v70; // [rsp+90h] [rbp-70h]
  __int64 v71; // [rsp+98h] [rbp-68h]
  UINT32 bufferLength; // [rsp+A0h] [rbp-60h] BYREF
  int v73; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v74; // [rsp+B0h] [rbp-50h]
  int v75; // [rsp+B4h] [rbp-4Ch] BYREF
  __int16 v76; // [rsp+B8h] [rbp-48h]
  CImmersiveApp *v77; // [rsp+C0h] [rbp-40h] BYREF
  char *v78; // [rsp+C8h] [rbp-38h] BYREF
  CApplicationManager *v79; // [rsp+D0h] [rbp-30h]
  _QWORD v80[2]; // [rsp+D8h] [rbp-28h] BYREF
  char *v81; // [rsp+E8h] [rbp-18h] BYREF
  _QWORD *v82; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v83; // [rsp+F8h] [rbp-8h]
  struct IImmersiveMonitor *v84; // [rsp+100h] [rbp+0h]
  void **v85; // [rsp+108h] [rbp+8h]
  CImmersiveApp *v86; // [rsp+110h] [rbp+10h]
  CImmersiveApp *v87; // [rsp+118h] [rbp+18h]
  PWSTR packageFullNames; // [rsp+120h] [rbp+20h] BYREF
  char *v89; // [rsp+128h] [rbp+28h]
  __int64 v90; // [rsp+130h] [rbp+30h]
  __int64 v91; // [rsp+138h] [rbp+38h]
  __int64 v92; // [rsp+140h] [rbp+40h]
  unsigned __int64 v93; // [rsp+148h] [rbp+48h]
  __int64 v94; // [rsp+150h] [rbp+50h]
  char v95[24]; // [rsp+158h] [rbp+58h] BYREF
  _QWORD v96[2]; // [rsp+170h] [rbp+70h] BYREF
  int v97; // [rsp+180h] [rbp+80h]
  int v98; // [rsp+184h] [rbp+84h]
  __int128 v99; // [rsp+188h] [rbp+88h] BYREF
  __int64 v100; // [rsp+198h] [rbp+98h]
  WCHAR packageFamilyName[72]; // [rsp+1A0h] [rbp+A0h] BYREF
  wchar_t Str[136]; // [rsp+230h] [rbp+130h] BYREF
  WCHAR buffer[128]; // [rsp+340h] [rbp+240h] BYREF

  v91 = -2LL;
  v74 = a4;
  v83 = a3;
  v7 = a2;
  v66 = a2;
  v8 = this;
  v79 = this;
  v80[0] = a3;
  v84 = a5;
  v85 = a7;
  v9 = 0LL;
  *a7 = 0LL;
  v10 = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  v11 = -1LL;
  if ( CompareStringOrdinal(a2, -1, L"Microsoft.Windows.Desktop", -1, 1) == 2 )
    goto LABEL_38;
  v70 = -1LL;
  v71 = -1LL;
  v69 = 0LL;
  packageFullNames = 0LL;
  bufferLength = 128;
  count = 1;
  packageFamilyName[0] = 0;
  v12 = 130LL;
  v13 = Str;
  v14 = 0;
  while ( v12 != -2147483516 )
  {
    v15 = *(wchar_t *)((char *)v13 + (char *)v7 - (char *)Str);
    if ( !v15 )
      break;
    *v13++ = v15;
    if ( !--v12 )
    {
      --v13;
      v14 = -2147024774;
      break;
    }
  }
  *v13 = 0;
  if ( v14 < 0 )
  {
    v19 = -2147024809;
  }
  else
  {
    v16 = wcsrchr(Str, 0x21u);
    if ( Str[0] != 33 && v16 && v16[1] )
    {
      *v16 = 0;
      v17 = 65LL;
      v18 = packageFamilyName;
      v19 = 0;
      while ( v17 != -2147483581 )
      {
        v20 = v18[72];
        if ( !v20 )
          break;
        *v18++ = v20;
        if ( !--v17 )
        {
          --v18;
          v19 = -2147024774;
          break;
        }
      }
      *v18 = 0;
    }
    else
    {
      v19 = -2147024809;
    }
  }
  if ( v19 >= 0 )
  {
    PackagesByPackageFamily = FindPackagesByPackageFamily(
                                packageFamilyName,
                                0x10u,
                                &count,
                                &packageFullNames,
                                &bufferLength,
                                buffer,
                                0LL);
    v19 = PackagesByPackageFamily;
    if ( PackagesByPackageFamily > 0 )
      v19 = (unsigned __int16)PackagesByPackageFamily | 0x80070000;
    if ( v19 >= 0 )
    {
      if ( count == 1 )
      {
        do
          ++v11;
        while ( buffer[v11] );
        v10 = 0LL;
        v69 = 0LL;
        v22 = v11 + 1;
        if ( v11 + 1 >= v11 && (v69 = 0LL, v92 = (v22 * (unsigned __int128)2uLL) >> 64, is_mul_ok(v22, 2uLL)) )
        {
          v23 = (WCHAR *)CoTaskMemAlloc(2 * v22);
          v10 = v23;
          v69 = v23;
          if ( v23 )
          {
            v19 = 0;
            v93 = v11;
            if ( v22 > 0x7FFFFFFF || v11 >= 0x7FFFFFFF )
            {
              if ( v11 != -1LL )
                *v23 = 0;
            }
            else
            {
              v24 = v11 + 1;
              v25 = v10;
              v26 = 0;
              v27 = 0LL;
              while ( v24 != 1 )
              {
                v28 = *(WCHAR *)((char *)v25 + (char *)buffer - (char *)v10);
                if ( !v28 )
                  break;
                *v25++ = v28;
                ++v27;
                if ( !--v24 )
                  goto LABEL_110;
              }
              if ( v24 )
                goto LABEL_34;
LABEL_110:
              --v25;
              --v27;
              v26 = -2147024774;
LABEL_34:
              *v25 = 0;
              v94 = v27;
              v29 = v22 - v27;
              if ( v26 >= 0 && v29 > 1 && 2 * v29 > 2 )
                memset_0(&v10[v27 + 1], 0, 2 * v29 - 2);
            }
          }
          else
          {
            v19 = -2147024882;
          }
        }
        else
        {
          v19 = -2147024362;
        }
      }
      else
      {
        v19 = -2147221165;
      }
      if ( v19 >= 0 )
      {
        v7 = v66;
LABEL_38:
        v30 = 0LL;
        v78 = 0LL;
        v31 = 0LL;
        v68 = 0LL;
        v32 = *((_QWORD *)v8 + 110);
        if ( v32
          && (v33 = (_DWORD *)CSimpleHashTable<unsigned __int64,Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CDefaultHashPolicy<unsigned __int64>,CDefaultKeyCompare<unsigned __int64>,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
                                v32,
                                *((unsigned int *)v8 + 217),
                                v80),
              *v33 == 1) )
        {
          Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>::operator=(&v68, v33 + 4);
          v31 = v68;
        }
        else
        {
          v34 = (char *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
          v30 = v34;
          if ( v34 )
          {
            memset_0(v34 + 8, 0, 0x28uLL);
            *((_QWORD *)v30 + 1) = 0LL;
            *((_QWORD *)v30 + 2) = 0LL;
            *((_QWORD *)v30 + 3) = 0LL;
            *((_QWORD *)v30 + 4) = 0LL;
            *((_DWORD *)v30 + 10) = 0;
            *((_WORD *)v30 + 22) = 0;
            *(_QWORD *)v30 = &CRefCountedObject<PER_APPLICATION_DATA>::`vftable';
            *((_DWORD *)v30 + 12) = 0;
          }
          else
          {
            v30 = 0LL;
          }
          v89 = v30;
          if ( v30 )
            (*(void (__fastcall **)(char *))(*(_QWORD *)v30 + 8LL))(v30);
          v89 = 0LL;
          v90 = 0LL;
          v78 = v30;
          if ( v10 )
          {
            if ( v30 )
              v35 = (struct PER_APPLICATION_DATA *)(v30 + 8);
            else
              v35 = 0LL;
            CApplicationManager::s_LoadQuirksForApp(v10, v35);
          }
          if ( (`wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
            wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetCachedFeatureEnabledState();
          v63 = 0;
          LOBYTE(v64) = 3;
          v75 = 0;
          v76 = v64;
          v73 = 3;
          bIgnoreCase[0] = 1;
          v36 = wil_details_RecordUsageInPropertyCache(
                  v95,
                  &`wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetFeaturePropertyCache'::`2'::data,
                  2LL);
          v99 = *(_OWORD *)v36;
          v100 = *(_QWORD *)(v36 + 16);
          if ( g_wil_details_recordFeatureUsage )
          {
            if ( (char *)g_wil_details_recordFeatureUsage == (char *)wil::details::RecordFeatureUsageCallback )
              wil::details::RecordFeatureUsageCallback(
                (wil::details *)0xBF61B,
                (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetFeaturePropertyCache'::`2'::data,
                (union wil_details_FeaturePropertyCache *)&v99,
                v37);
            else
              g_wil_details_recordFeatureUsage(
                0xBF61Bu,
                (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetFeaturePropertyCache'::`2'::data,
                (struct wil_details_RecordUsageResult *)&v99);
            if ( (`wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0x20 )
            {
              v96[0] = 0LL;
              v97 = 0;
              v96[1] = 2LL;
              v98 = (`wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
              ((void (__fastcall *)(__int64, _QWORD, _QWORD *))g_wil_details_recordFeatureUsage)(783899LL, 0LL, v96);
            }
          }
          if ( !(_DWORD)v100 && g_wil_details_pfnFeatureLoggingHook )
            g_wil_details_pfnFeatureLoggingHook(
              0xBF61Bu,
              (const struct FEATURE_LOGGED_TRAITS *)&v75,
              0LL,
              1,
              (const enum wil_ReportingKind *)&v73,
              0LL,
              0,
              1uLL);
          v80[1] = v7;
          v38 = v30;
          v81 = v30;
          if ( v30 )
            (*(void (__fastcall **)(char *))(*(_QWORD *)v30 + 8LL))(v30);
          v39 = 0LL;
          v86 = 0LL;
          v41 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
          v42 = 0LL;
          v43 = 0LL;
          v44 = 0LL;
          if ( v41 )
          {
            *(_QWORD *)v41 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
            v41[3] = 1;
            *(_QWORD *)v41 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
            if ( Microsoft::WRL::Details::ModuleBase::module_ )
            {
              v45 = *(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                        + 8LL);
              if ( (char *)v45 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
                Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount(Microsoft::WRL::Details::ModuleBase::module_);
              else
                v45(Microsoft::WRL::Details::ModuleBase::module_);
            }
            *(_QWORD *)v41 = off_18031D500;
            *((_QWORD *)v41 + 2) = v66;
            *((_QWORD *)v41 + 3) = 0LL;
            if ( v41 + 6 != (_DWORD *)&v81 )
            {
              *((_QWORD *)v41 + 3) = v30;
              v38 = 0LL;
              v81 = 0LL;
            }
            v39 = v41;
            v42 = v41;
            v43 = v41;
            v44 = v41;
          }
          v82 = v39;
          if ( v42 )
          {
            v87 = 0LL;
            Windows::Internal::ComTaskPool::s_QueuePoolTask(0LL, 32LL, 0LL, v39, *(_QWORD *)bIgnoreCase);
            v44 = v43;
          }
          if ( v44 )
          {
            v82 = 0LL;
            v46 = *(void (__fastcall **)(_QWORD *))(*v39 + 16LL);
            if ( (char *)v46 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release )
              Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
                v39,
                v40);
            else
              v46(v39);
          }
          if ( v38 )
          {
            v81 = 0LL;
            (*(void (__fastcall **)(char *))(*(_QWORD *)v38 + 16LL))(v38);
          }
          if ( v30 )
          {
            (*(void (__fastcall **)(char *))(*(_QWORD *)v30 + 8LL))(v30);
            v31 = v30;
            v68 = v30;
          }
          v9 = 0LL;
          v8 = v79;
        }
        v62 = 0LL;
        if ( v8 )
          v9 = (CApplicationManager *)((char *)v8 + 192);
        if ( v31 )
          v47 = (struct PER_APPLICATION_DATA *)(v31 + 8);
        else
          v47 = 0LL;
        v62 = 0LL;
        v61 = 0LL;
        v67 = 0LL;
        v48 = (CImmersiveApp *)operator new(0x360uLL, (const struct std::nothrow_t *)&std::nothrow);
        v67 = v48;
        v87 = v48;
        if ( v48 )
        {
          v86 = v48;
          v49 = CImmersiveApp::CImmersiveApp(v48);
          v77 = v49;
          v67 = 0LL;
          packageProperties = v9;
          v50 = v66;
          v19 = CImmersiveApp::RuntimeClassInitialize(v49, v66, v10, v74, v84, v47, packageProperties, v83);
          if ( v19 < 0 )
          {
            Microsoft::WRL::ComPtr<CImmersiveApp>::~ComPtr<CImmersiveApp>(&v77);
            Microsoft::WRL::Details::MakeAllocator<TaskFlowImmersiveShellBroker>::~MakeAllocator<TaskFlowImmersiveShellBroker>(&v67);
          }
          else
          {
            v51 = **(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v49;
            if ( (char *)v51 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IImmersiveApplication,IImmersiveApplication2,IImmersiveApplicationHolographic,IImmersiveApplicationInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>::QueryInterface )
              v52 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IImmersiveApplication,IImmersiveApplication2,IImmersiveApplicationHolographic,IImmersiveApplicationInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>::QueryInterface(
                      (__int64)v49,
                      &GUID_8b14e88b_5663_4caf_b196_c31479262831,
                      &v61);
            else
              v52 = v51((__int64)v49, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v61);
            v19 = v52;
            v77 = 0LL;
            v53 = *(__int64 (__fastcall **)(CImmersiveApp *))(*(_QWORD *)v49 + 16LL);
            if ( v53 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IImmersiveApplication,IImmersiveApplication2,IImmersiveApplicationHolographic,IImmersiveApplicationInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>::Release )
              Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IImmersiveApplication,IImmersiveApplication2,IImmersiveApplicationHolographic,IImmersiveApplicationInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>::Release(v49);
            else
              v53(v49);
          }
          if ( v19 >= 0 )
            v19 = (**v61)(v61, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v62);
        }
        else
        {
          Microsoft::WRL::Details::MakeAllocator<TaskFlowImmersiveShellBroker>::~MakeAllocator<TaskFlowImmersiveShellBroker>(&v67);
          v19 = -2147024882;
          v50 = v66;
        }
        v54 = v61;
        if ( v61 )
        {
          v61 = 0LL;
          ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD)))(*v54)[2])(v54);
        }
        if ( v19 >= 0 )
        {
          if ( v31 == v30 )
            v19 = CApplicationManager::_AddApplicationData((__int64)v8, v50, v80, (__int64 *)&v78);
          if ( v19 >= 0 )
            v19 = (**v62)(v62, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, v85);
        }
        v55 = v62;
        if ( v62 )
        {
          v62 = 0LL;
          ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, void **)))(*v55)[2])(v55);
        }
        if ( v31 )
        {
          v68 = 0LL;
          v56 = *(__int64 (__fastcall **)(void *))(*(_QWORD *)v31 + 16LL);
          if ( v56 == CRefCountedObject<PER_APPLICATION_DATA>::Release )
            CRefCountedObject<PER_APPLICATION_DATA>::Release(v31);
          else
            v56(v31);
        }
        if ( v30 )
        {
          v78 = 0LL;
          v57 = *(__int64 (__fastcall **)(void *))(*(_QWORD *)v30 + 16LL);
          if ( v57 == CRefCountedObject<PER_APPLICATION_DATA>::Release )
            CRefCountedObject<PER_APPLICATION_DATA>::Release(v30);
          else
            v57(v30);
        }
      }
    }
  }
  if ( v10 )
  {
    CoTaskMemFree(v10);
    v69 = 0LL;
  }
  v70 = 0LL;
  v71 = 0LL;
  return (unsigned int)v19;
}
