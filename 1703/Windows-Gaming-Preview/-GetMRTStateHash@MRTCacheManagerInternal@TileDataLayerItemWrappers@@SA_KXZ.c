/*
 * XREFs of ?GetMRTStateHash@MRTCacheManagerInternal@TileDataLayerItemWrappers@@SA_KXZ @ 0x180025AA0
 * Callers:
 *     ?SetCachePropertyWithRetry@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEAUITileManager@@PEAUIVisualElementEnumerator@@IPEBG@Z @ 0x180024448 (-SetCachePropertyWithRetry@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEAUITileManager@@P.c)
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockExclusive@Details@234@XZ @ 0x18001296C (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockExclusive@Details@234@XZ.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x180020390 (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_DisableTDLCachingNonMobile@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180027228 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_DisableTDLCachingNonMobile@@.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180027E4C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall TileDataLayerItemWrappers::MRTCacheManagerInternal::GetMRTStateHash(__int64 a1, __int64 a2)
{
  const char *v2; // r9
  char v3; // al
  volatile unsigned __int64 v4; // rbx
  __int16 v6; // [rsp+54h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  int v8; // [rsp+80h] [rbp+20h] BYREF
  int v9; // [rsp+88h] [rbp+28h] BYREF
  int v10; // [rsp+90h] [rbp+30h] BYREF
  __int16 v11; // [rsp+94h] [rbp+34h]
  PSRWLOCK SRWLock; // [rsp+98h] [rbp+38h] BYREF

  if ( (`wil::Feature<__WilFeatureTraits_Feature_DisableTDLCachingNonMobile>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_DisableTDLCachingNonMobile>::GetCachedFeatureEnabledState();
  LOBYTE(v6) = 3;
  v10 = 0;
  v11 = v6;
  v8 = 3;
  if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
                       &`wil::Feature<__WilFeatureTraits_Feature_DisableTDLCachingNonMobile>::GetFeaturePropertyCache'::`2'::data,
                       a2,
                       2)
    && g_wil_details_pfnFeatureLoggingHook )
  {
    g_wil_details_pfnFeatureLoggingHook(
      0x9CF67Eu,
      (const struct FEATURE_LOGGED_TRAITS *)&v10,
      0LL,
      1,
      (const enum wil_ReportingKind *)&v8,
      0LL,
      0,
      1uLL);
  }
  if ( `TileDataLayerItemWrappers::IsMobilePlatform'::`2'::hasChecked )
  {
    v3 = `TileDataLayerItemWrappers::IsMobilePlatform'::`2'::isMobilePlatform;
  }
  else
  {
    RtlGetDeviceFamilyInfoEnum(0LL, &v9, 0LL);
    `TileDataLayerItemWrappers::IsMobilePlatform'::`2'::hasChecked = 1;
    v3 = v9 == 4;
    `TileDataLayerItemWrappers::IsMobilePlatform'::`2'::isMobilePlatform = v9 == 4;
  }
  if ( !v3 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x631,
      (unsigned int)"onecoreuap\\shell\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
      v2);
    __debugbreak();
  }
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(
    &TileDataLayerItemWrappers::MRTCacheManagerInternal::s_MRTCacheLock,
    &SRWLock);
  v4 = TileDataLayerItemWrappers::MRTCacheManagerInternal::s_currentMRTStateHash;
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return v4;
}
