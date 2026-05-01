/*
 * XREFs of ?GetDisplayName@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJPEAUITileManager@@PEAUIVisualElementEnumerator@@PEAPEAG@Z @ 0x180024B70
 * Callers:
 *     ?get_DisplayName@DesktopAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180004050 (-get_DisplayName@DesktopAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPE.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002A4C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000A63C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x180020390 (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 *     ?SetCachePropertyWithRetry@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEAUITileManager@@PEAUIVisualElementEnumerator@@IPEBG@Z @ 0x180024448 (-SetCachePropertyWithRetry@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEAUITileManager@@P.c)
 *     ?GetRawDisplayName@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJPEAPEAG@Z @ 0x180024A44 (-GetRawDisplayName@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJPEAPEAG@Z.c)
 *     ?MRTResolveText@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBGW4VISUAL_ELEMENT_THEME@@PEAPEAG@Z @ 0x180024F10 (-MRTResolveText@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBGW4VISUAL_ELEMENT_THEME@@PE.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_DisableTDLCachingNonMobile@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180027228 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_DisableTDLCachingNonMobile@@.c)
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TileDataLayerItemWrappers::TDLTileInfoHelper::GetDisplayName(
        TileDataLayerItemWrappers::TDLTileInfoHelper *this,
        struct ITileManager *a2,
        struct IVisualElementEnumerator *a3,
        unsigned __int16 **a4)
{
  int (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v9; // rdx
  unsigned int RawDisplayName; // ebx
  char v11; // al
  __int64 v12; // rbx
  int v13; // eax
  unsigned __int16 *v14; // rcx
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // r8
  unsigned __int16 *v18; // rdi
  __int64 v19; // rdx
  LPVOID v20; // rcx
  __int64 v21; // rdx
  void *v22; // rax
  int v23; // r9d
  char v24; // al
  int v25; // eax
  __int64 v26; // rcx
  __int64 v28; // [rsp+50h] [rbp-29h] BYREF
  int v29; // [rsp+58h] [rbp-21h]
  __int16 v30; // [rsp+5Ch] [rbp-1Dh]
  LPVOID pv; // [rsp+68h] [rbp-11h] BYREF
  __int64 v32; // [rsp+70h] [rbp-9h]
  __int64 v33; // [rsp+78h] [rbp-1h]
  unsigned __int16 *v34; // [rsp+80h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  int v36; // [rsp+E0h] [rbp+67h] BYREF
  int v37; // [rsp+F8h] [rbp+7Fh] BYREF
  __int16 v38; // [rsp+FCh] [rbp+83h]

  *a4 = 0LL;
  v6 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 9);
  v28 = 0LL;
  if ( (**v6)(v6, &GUID_e0cae81b_625e_400d_9ded_4e4956f6fb9d, &v28) < 0 )
  {
    RawDisplayName = TileDataLayerItemWrappers::TDLTileInfoHelper::GetRawDisplayName(this, a4);
    goto LABEL_47;
  }
  pv = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_DisableTDLCachingNonMobile>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_DisableTDLCachingNonMobile>::GetCachedFeatureEnabledState();
  LOBYTE(v30) = 3;
  v37 = 0;
  v38 = v30;
  v29 = 0;
  v36 = 3;
  if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
                       &`wil::Feature<__WilFeatureTraits_Feature_DisableTDLCachingNonMobile>::GetFeaturePropertyCache'::`2'::data,
                       v9,
                       2)
    && g_wil_details_pfnFeatureLoggingHook )
  {
    g_wil_details_pfnFeatureLoggingHook(
      0x9CF67Eu,
      (const struct FEATURE_LOGGED_TRAITS *)&v37,
      0LL,
      1,
      (const enum wil_ReportingKind *)&v36,
      0LL,
      0,
      1uLL);
  }
  if ( `TileDataLayerItemWrappers::IsMobilePlatform'::`2'::hasChecked )
  {
    v11 = `TileDataLayerItemWrappers::IsMobilePlatform'::`2'::isMobilePlatform;
  }
  else
  {
    RtlGetDeviceFamilyInfoEnum(0LL, &v36, 0LL);
    `TileDataLayerItemWrappers::IsMobilePlatform'::`2'::hasChecked = 1;
    v11 = v36 == 4;
    `TileDataLayerItemWrappers::IsMobilePlatform'::`2'::isMobilePlatform = v36 == 4;
  }
  if ( v11 )
  {
    v12 = v28;
    if ( pv )
    {
      CoTaskMemFree(pv);
      pv = 0LL;
    }
    v32 = -1LL;
    v33 = -1LL;
    v13 = (*(__int64 (__fastcall **)(__int64, __int64, LPVOID *))(*(_QWORD *)v12 + 40LL))(v12, 983227LL, &pv);
    v14 = (unsigned __int16 *)pv;
    if ( v13 >= 0 && pv )
      goto LABEL_43;
    v15 = v28;
    if ( pv )
    {
      CoTaskMemFree(pv);
      pv = 0LL;
    }
    v32 = -1LL;
    v33 = -1LL;
    (*(void (__fastcall **)(__int64, __int64, LPVOID *))(*(_QWORD *)v15 + 40LL))(v15, 6553604LL, &pv);
  }
  v14 = (unsigned __int16 *)pv;
  if ( !pv )
  {
    v34 = 0LL;
    v16 = TileDataLayerItemWrappers::TDLTileInfoHelper::GetRawDisplayName(this, &v34);
    v18 = v34;
    RawDisplayName = v16;
    if ( v16 < 0 )
    {
      v19 = 583LL;
LABEL_26:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v19,
        (__int64)"onecoreuap\\shell\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
        (const char *)(unsigned int)v16);
      if ( v18 )
        CoTaskMemFree(v18);
      v22 = pv;
      goto LABEL_44;
    }
    v20 = pv;
    if ( pv )
    {
      CoTaskMemFree(pv);
      pv = 0LL;
    }
    v32 = -1LL;
    v33 = -1LL;
    v16 = TileDataLayerItemWrappers::TDLTileInfoHelper::MRTResolveText(v20, v18, v17, &pv);
    RawDisplayName = v16;
    if ( v16 < 0 )
    {
      v19 = 587LL;
      goto LABEL_26;
    }
    if ( (`wil::Feature<__WilFeatureTraits_Feature_DisableTDLCachingNonMobile>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_DisableTDLCachingNonMobile>::GetCachedFeatureEnabledState();
    LOBYTE(v30) = 3;
    v37 = 0;
    v38 = v30;
    v29 = 0;
    v36 = 3;
    if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
                         &`wil::Feature<__WilFeatureTraits_Feature_DisableTDLCachingNonMobile>::GetFeaturePropertyCache'::`2'::data,
                         v21,
                         2)
      && g_wil_details_pfnFeatureLoggingHook )
    {
      g_wil_details_pfnFeatureLoggingHook(
        0x9CF67Eu,
        (const struct FEATURE_LOGGED_TRAITS *)&v37,
        0LL,
        1,
        (const enum wil_ReportingKind *)&v36,
        0LL,
        0,
        1uLL);
    }
    if ( `TileDataLayerItemWrappers::IsMobilePlatform'::`2'::hasChecked )
    {
      v24 = `TileDataLayerItemWrappers::IsMobilePlatform'::`2'::isMobilePlatform;
    }
    else
    {
      RtlGetDeviceFamilyInfoEnum(0LL, &v36, 0LL);
      `TileDataLayerItemWrappers::IsMobilePlatform'::`2'::hasChecked = 1;
      v24 = v36 == 4;
      `TileDataLayerItemWrappers::IsMobilePlatform'::`2'::isMobilePlatform = v36 == 4;
    }
    if ( v24 )
    {
      v25 = TileDataLayerItemWrappers::TDLTileInfoHelper::SetCachePropertyWithRetry(this, a2, a3, v23, (LPCWCH)pv);
      if ( v25 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x250,
          (__int64)"onecoreuap\\shell\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
          (const char *)(unsigned int)v25);
    }
    if ( v18 )
      CoTaskMemFree(v18);
    v14 = (unsigned __int16 *)pv;
  }
LABEL_43:
  v22 = 0LL;
  v33 = 0LL;
  pv = 0LL;
  RawDisplayName = 0;
  v32 = 0LL;
  *a4 = v14;
LABEL_44:
  if ( v22 )
  {
    CoTaskMemFree(v22);
    pv = 0LL;
  }
  v32 = 0LL;
  v33 = 0LL;
LABEL_47:
  v26 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  }
  return RawDisplayName;
}
