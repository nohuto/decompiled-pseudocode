/*
 * XREFs of ?SetCachePropertyWithRetry@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEAUITileManager@@PEAUIVisualElementEnumerator@@IPEBG@Z @ 0x180024448
 * Callers:
 *     ?GetDisplayName@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJPEAUITileManager@@PEAUIVisualElementEnumerator@@PEAPEAG@Z @ 0x180024B70 (-GetDisplayName@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJPEAUITileManager@@PEAUIVisualE.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002A4C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180011ED4 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@VNil@Details@23@V7823@V7823@V7823@V7823@V7823@V7823@V7823@@WRL@Microsoft@@QEAA@XZ @ 0x180012040 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@VNil@D.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x180020390 (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 *     ?GetMRTStateHash@MRTCacheManagerInternal@TileDataLayerItemWrappers@@SA_KXZ @ 0x180025AA0 (-GetMRTStateHash@MRTCacheManagerInternal@TileDataLayerItemWrappers@@SA_KXZ.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_DisableTDLCachingNonMobile@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180027228 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_DisableTDLCachingNonMobile@@.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180027E4C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800291B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TileDataLayerItemWrappers::TDLTileInfoHelper::SetCachePropertyWithRetry(
        TileDataLayerItemWrappers::TDLTileInfoHelper *this,
        struct ITileManager *a2,
        struct IVisualElementEnumerator *a3,
        int a4,
        LPCWCH lpString1)
{
  const char *v8; // r9
  char v9; // al
  HRESULT v11; // eax
  int v12; // edi
  struct IUnknownVtbl *v13; // rbx
  LPWSTR v14; // r13
  int v15; // r12d
  IUnknown *v16; // rsi
  IUnknown *v17; // rax
  __int64 v18; // r9
  IUnknown *v19; // rdi
  void *v20; // rsi
  int v21; // [rsp+58h] [rbp-41h] BYREF
  int v22; // [rsp+5Ch] [rbp-3Dh] BYREF
  __int16 v23; // [rsp+60h] [rbp-39h]
  LPWSTR ppwsz; // [rsp+68h] [rbp-31h] BYREF
  int v25; // [rsp+70h] [rbp-29h]
  __int16 v26; // [rsp+74h] [rbp-25h]
  unsigned __int64 MRTStateHash; // [rsp+80h] [rbp-19h]
  LPVOID pv; // [rsp+88h] [rbp-11h]
  LPWSTR v29; // [rsp+A8h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+57h]
  int v31; // [rsp+110h] [rbp+77h] BYREF

  v31 = a4;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_DisableTDLCachingNonMobile>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_DisableTDLCachingNonMobile>::GetCachedFeatureEnabledState();
  LOBYTE(v26) = 3;
  v25 = 0;
  v22 = 0;
  v23 = v26;
  v31 = 3;
  if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
                       &`wil::Feature<__WilFeatureTraits_Feature_DisableTDLCachingNonMobile>::GetFeaturePropertyCache'::`2'::data,
                       (__int64)a2,
                       2)
    && g_wil_details_pfnFeatureLoggingHook )
  {
    g_wil_details_pfnFeatureLoggingHook(
      0x9CF67Eu,
      (const struct FEATURE_LOGGED_TRAITS *)&v22,
      0LL,
      1,
      (const enum wil_ReportingKind *)&v31,
      0LL,
      0,
      1uLL);
  }
  if ( `TileDataLayerItemWrappers::IsMobilePlatform'::`2'::hasChecked )
  {
    v9 = `TileDataLayerItemWrappers::IsMobilePlatform'::`2'::isMobilePlatform;
  }
  else
  {
    RtlGetDeviceFamilyInfoEnum(0LL, &v21, 0LL);
    `TileDataLayerItemWrappers::IsMobilePlatform'::`2'::hasChecked = 1;
    v9 = v21 == 4;
    `TileDataLayerItemWrappers::IsMobilePlatform'::`2'::isMobilePlatform = v21 == 4;
  }
  if ( !v9 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1D0,
      (unsigned int)"onecoreuap\\shell\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
      v8);
    JUMPOUT(0x180024809LL);
  }
  if ( CompareStringOrdinal(lpString1, 1, L"@", 1, 0) == 2 )
    return 0LL;
  MRTStateHash = TileDataLayerItemWrappers::MRTCacheManagerInternal::GetMRTStateHash();
  if ( a2 )
    (*(void (__fastcall **)(struct ITileManager *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( a3 )
    (*(void (__fastcall **)(struct IVisualElementEnumerator *))(*(_QWORD *)a3 + 8LL))(a3);
  ppwsz = 0LL;
  v11 = SHStrDupW(lpString1, &ppwsz);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v13 = (struct IUnknownVtbl *)*((_QWORD *)this + 9);
    pv = ppwsz;
    if ( v13 )
      (*((void (__fastcall **)(struct IUnknownVtbl *))v13->QueryInterface + 1))(v13);
    if ( a2 )
      (*(void (__fastcall **)(struct ITileManager *))(*(_QWORD *)a2 + 8LL))(a2);
    if ( a3 )
      (*(void (__fastcall **)(struct IVisualElementEnumerator *))(*(_QWORD *)a3 + 8LL))(a3);
    v14 = ppwsz;
    v29 = ppwsz;
    if ( v13 )
      (*((void (__fastcall **)(struct IUnknownVtbl *))v13->QueryInterface + 1))(v13);
    if ( (dword_18003BD08 & 1) != 0 )
    {
      v15 = dword_18003BD0C;
    }
    else
    {
      dword_18003BD08 |= 1u;
      v14 = v29;
      v15 = _InterlockedIncrement((volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_dwUniqueCallingContext);
      dword_18003BD0C = v15;
    }
    v16 = 0LL;
    v17 = (IUnknown *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
    v19 = v17;
    if ( v17 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>((__int64)v17);
      v19->lpVtbl = (struct IUnknownVtbl *)off_18002F648;
      LODWORD(v19[2].lpVtbl) = 983227;
      v19[3].lpVtbl = (struct IUnknownVtbl *)a2;
      if ( a2 )
        (*(void (__fastcall **)(struct ITileManager *))(*(_QWORD *)a2 + 8LL))(a2);
      v19[4].lpVtbl = (struct IUnknownVtbl *)a3;
      if ( a3 )
        (*(void (__fastcall **)(struct IVisualElementEnumerator *))(*(_QWORD *)a3 + 8LL))(a3);
      v19[5].lpVtbl = (struct IUnknownVtbl *)v14;
      v19[6].lpVtbl = v13;
      if ( v13 )
        (*((void (__fastcall **)(struct IUnknownVtbl *))v13->QueryInterface + 1))(v13);
      v16 = v19;
      v19[7].lpVtbl = (struct IUnknownVtbl *)MRTStateHash;
    }
    v12 = Windows::Internal::ComTaskPool::RunTask(3, 2u, v15, v18, v16);
    if ( v16 )
      ((void (__fastcall *)(IUnknown *))v16->lpVtbl->Release)(v16);
    if ( v12 >= 0 )
    {
      v20 = 0LL;
      v12 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x211,
        (__int64)"onecoreuap\\shell\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
        (const char *)(unsigned int)v12);
      v20 = pv;
    }
    if ( v13 )
      (*((void (__fastcall **)(struct IUnknownVtbl *))v13->QueryInterface + 2))(v13);
    if ( a3 )
      (*(void (__fastcall **)(struct IVisualElementEnumerator *))(*(_QWORD *)a3 + 16LL))(a3);
    if ( a2 )
      (*(void (__fastcall **)(struct ITileManager *))(*(_QWORD *)a2 + 16LL))(a2);
    if ( v13 )
      (*((void (__fastcall **)(struct IUnknownVtbl *))v13->QueryInterface + 2))(v13);
    if ( v20 )
      CoTaskMemFree(v20);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1DC,
      (__int64)"onecoreuap\\shell\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
      (const char *)(unsigned int)v11);
  }
  if ( a3 )
    (*(void (__fastcall **)(struct IVisualElementEnumerator *))(*(_QWORD *)a3 + 16LL))(a3);
  if ( a2 )
    (*(void (__fastcall **)(struct ITileManager *))(*(_QWORD *)a2 + 16LL))(a2);
  return (unsigned int)v12;
}
