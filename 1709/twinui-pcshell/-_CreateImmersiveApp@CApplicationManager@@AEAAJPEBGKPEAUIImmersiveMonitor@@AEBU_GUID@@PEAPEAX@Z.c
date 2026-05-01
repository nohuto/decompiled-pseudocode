/*
 * XREFs of ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBGKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x18001114C
 * Callers:
 *     ?CreateEnsuredApplication@CApplicationManager@@UEAAJPEBGPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x18000CF90 (-CreateEnsuredApplication@CApplicationManager@@UEAAJPEBGPEAPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?CreateNewGlom@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@PEAPEAU3@@Z @ 0x18000DE00 (-CreateNewGlom@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@PEAPEAU3.c)
 *     ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x180012B3C (-_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 * Callees:
 *     ?s_LoadQuirksForApp@CApplicationManager@@CAXPEBGPEAUPER_APPLICATION_DATA@@@Z @ 0x180016AA8 (-s_LoadQuirksForApp@CApplicationManager@@CAXPEBGPEAUPER_APPLICATION_DATA@@@Z.c)
 *     ?GetItem@?$CStringHashTable@V?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@@@QEBAJAEBQEBGAEAV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@@Z @ 0x18001742C (-GetItem@-$CStringHashTable@V-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microso.c)
 *     ?AddItem@?$CStringHashTable@V?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@@@QEAAJAEBQEBGAEBV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@@Z @ 0x1800174C4 (-AddItem@-$CStringHashTable@V-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microso.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_a730ada88cbae26163c74f230d1e84ab___ @ 0x180019B18 (Windows--Internal--ComTaskPool--QueueTask__lambda_a730ada88cbae26163c74f230d1e84ab___.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18001EB1C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppressi.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001F064 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?CImmersiveApp_CreateInstance@@YAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIAMServiceProvider@@AEBU_GUID@@PEAPEAX@Z @ 0x18005C538 (-CImmersiveApp_CreateInstance@@YAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIA.c)
 *     ?GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z @ 0x1801C1FB0 (-GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationManager::_CreateImmersiveApp(
        CApplicationManager *this,
        CallerIdentity *a2,
        unsigned int a3,
        struct IImmersiveMonitor *a4,
        const struct _GUID *ppwsz,
        void **a6)
{
  struct IImmersiveMonitor *v6; // rsi
  unsigned __int16 *v9; // r14
  unsigned __int16 **v10; // r8
  HRESULT PackageFullNameFromAppId; // esi
  char *v12; // rbx
  char *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  char *v17; // rdi
  char *v18; // rcx
  void **v19; // rax
  __int64 (__fastcall ***v20)(_QWORD, GUID *, void **); // rcx
  const struct _GUID *v22; // [rsp+38h] [rbp-49h]
  int v23; // [rsp+48h] [rbp-39h] BYREF
  __int16 v24; // [rsp+4Ch] [rbp-35h]
  char *v25; // [rsp+50h] [rbp-31h] BYREF
  __int64 (__fastcall ***v26)(_QWORD, GUID *, void **); // [rsp+58h] [rbp-29h] BYREF
  _QWORD v27[2]; // [rsp+60h] [rbp-21h] BYREF
  CallerIdentity *v28; // [rsp+70h] [rbp-11h] BYREF
  char *v29; // [rsp+78h] [rbp-9h]
  LPVOID pv; // [rsp+80h] [rbp-1h] BYREF
  __int64 v31; // [rsp+88h] [rbp+7h]
  __int64 v32; // [rsp+90h] [rbp+Fh]
  CallerIdentity *v33; // [rsp+E0h] [rbp+5Fh] BYREF
  unsigned int v34; // [rsp+E8h] [rbp+67h]
  struct IImmersiveMonitor *v35; // [rsp+F0h] [rbp+6Fh]

  v35 = a4;
  v34 = a3;
  v33 = a2;
  v27[1] = -2LL;
  v6 = a4;
  *a6 = 0LL;
  v9 = 0LL;
  pv = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  if ( CompareStringOrdinal((LPCWCH)a2, -1, L"Microsoft.Windows.Desktop", -1, 1) != 2 )
  {
    v31 = -1LL;
    v32 = -1LL;
    PackageFullNameFromAppId = CallerIdentity::GetPackageFullNameFromAppId(a2, (const unsigned __int16 *)&pv, v10);
    v9 = (unsigned __int16 *)pv;
    if ( PackageFullNameFromAppId < 0 )
      goto LABEL_36;
    v6 = v35;
  }
  v12 = 0LL;
  v27[0] = 0LL;
  v25 = 0LL;
  if ( (int)CStringHashTable<Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CStringHashPolicy,CStringCompare>::GetItem(
              (char *)this + 880,
              &v33,
              &v25) >= 0 )
  {
    v17 = v25;
  }
  else
  {
    v13 = (char *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    v12 = v13;
    if ( v13 )
    {
      memset(v13 + 8, 0, 0x28uLL);
      *((_QWORD *)v12 + 1) = 0LL;
      *((_QWORD *)v12 + 2) = 0LL;
      *((_QWORD *)v12 + 3) = 0LL;
      *((_QWORD *)v12 + 4) = 0LL;
      *((_DWORD *)v12 + 10) = 0;
      *((_WORD *)v12 + 22) = 0;
      *(_QWORD *)v12 = &CRefCountedObject<PER_APPLICATION_DATA>::`vftable';
      *((_DWORD *)v12 + 12) = 0;
    }
    else
    {
      v12 = 0LL;
    }
    if ( v12 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v12 + 8LL))(v12);
    v27[0] = v12;
    if ( v9 )
      CApplicationManager::s_LoadQuirksForApp(
        v9,
        (struct PER_APPLICATION_DATA *)((unsigned __int64)(v12 + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)v12 >> 64)));
    if ( (`wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetCachedFeatureEnabledState();
    LODWORD(ppwsz) = 0;
    BYTE4(ppwsz) = 3;
    v23 = 0;
    v24 = WORD2(ppwsz);
    wil_details_FeaturePropertyCache_ReportUsageToService(
      &`wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetFeaturePropertyCache'::`2'::data,
      783899LL,
      &v23,
      1LL,
      3);
    v28 = a2;
    v29 = v12;
    if ( v12 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v12 + 8LL))(v12);
    Windows::Internal::ComTaskPool::QueueTask__lambda_a730ada88cbae26163c74f230d1e84ab___(v15, v14, v16, &v28);
    if ( v29 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v29 + 16LL))(v29);
    v17 = v25;
    if ( v25 != v12 )
    {
      if ( v12 )
        (*(void (__fastcall **)(char *))(*(_QWORD *)v12 + 8LL))(v12);
      v18 = v17;
      v17 = v12;
      v25 = v12;
      if ( v18 )
        (*(void (__fastcall **)(char *))(*(_QWORD *)v18 + 16LL))(v18);
    }
  }
  v26 = 0LL;
  v19 = (void **)IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v26);
  PackageFullNameFromAppId = CImmersiveApp_CreateInstance(
                               (const unsigned __int16 *)a2,
                               v9,
                               v34,
                               v6,
                               (struct PER_APPLICATION_DATA *)((unsigned __int64)(v17 + 8) & -(__int64)(v17 != 0LL)),
                               (struct IIAMServiceProvider *)(((unsigned __int64)this + 192) & -(__int64)(this != 0LL)),
                               v22,
                               v19);
  if ( PackageFullNameFromAppId >= 0 )
  {
    if ( v17 == v12 )
    {
      ppwsz = 0LL;
      PackageFullNameFromAppId = SHStrDupW((LPCWSTR)a2, (LPWSTR *)&ppwsz);
      if ( PackageFullNameFromAppId >= 0 )
        PackageFullNameFromAppId = CStringHashTable<Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CStringHashPolicy,CStringCompare>::AddItem(
                                     (char *)this + 880,
                                     v27,
                                     &ppwsz);
    }
    if ( PackageFullNameFromAppId >= 0 )
      PackageFullNameFromAppId = (**v26)(v26, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, a6);
  }
  v20 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, void **)))(*v20)[2])(v20);
  }
  if ( v17 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v17 + 16LL))(v17);
  if ( v12 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v12 + 16LL))(v12);
LABEL_36:
  if ( v9 )
    CoTaskMemFree(v9);
  return (unsigned int)PackageFullNameFromAppId;
}
