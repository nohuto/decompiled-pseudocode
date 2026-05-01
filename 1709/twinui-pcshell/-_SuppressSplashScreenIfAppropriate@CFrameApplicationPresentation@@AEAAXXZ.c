/*
 * XREFs of ?_SuppressSplashScreenIfAppropriate@CFrameApplicationPresentation@@AEAAXXZ @ 0x18006B324
 * Callers:
 *     ?Show@CFrameApplicationPresentation@@UEAAJXZ @ 0x1800695F0 (-Show@CFrameApplicationPresentation@@UEAAJXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18001EB1C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppressi.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001F064 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SuppressSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXPEBGPEAUHWND__@@W4SplashScreenSuppressionReason@2@K@Z @ 0x1800678B8 (-SuppressSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXPEBGPEAUHWND__@@W4Sp.c)
 *     ?ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppressionReason@2@@Z @ 0x180067A08 (-ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppress.c)
 *     ?_QueueUnsuppressSplashScreenAfterTimeout@CFrameApplicationPresentation@@AEAAJXZ @ 0x18006B50C (-_QueueUnsuppressSplashScreenAfterTimeout@CFrameApplicationPresentation@@AEAAJXZ.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_WhenWindowExists@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18006BBAC (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_DesktopSplashSc_ea_18006BBAC.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_AllApps@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18006BD14 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_DesktopSplashSc_ea_18006BD14.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CFrameApplicationPresentation::_SuppressSplashScreenIfAppropriate(CFrameApplicationPresentation *this)
{
  unsigned int v2; // edi
  int v3; // eax
  __int64 v4; // r8
  __int64 v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int16 v7; // [rsp+5Ch] [rbp+2Ch]
  int v8; // [rsp+60h] [rbp+30h] BYREF
  __int16 v9; // [rsp+64h] [rbp+34h]

  if ( (`wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetCachedFeatureEnabledState();
  v8 = 0;
  v2 = 3;
  LOBYTE(v7) = 3;
  v9 = v7;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetFeaturePropertyCache'::`2'::data,
    0xBF61Bu,
    (const struct FEATURE_LOGGED_TRAITS *)&v8,
    1,
    3);
  if ( *((_DWORD *)this + 54) == 1 && *((_BYTE *)this + 548) && !*((_DWORD *)this + 55) )
  {
    if ( *((_BYTE *)this + 549) )
    {
      v5 = **((_QWORD **)this + 14);
      if ( v5 && (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5) )
      {
        v2 = 2;
        goto LABEL_13;
      }
    }
    else
    {
      if ( (`wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_WhenWindowExists>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
        wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_WhenWindowExists>::GetCachedFeatureEnabledState();
      LOBYTE(v7) = 1;
      v8 = 0;
      v9 = v7;
      wil_details_FeaturePropertyCache_ReportUsageToService(
        &`wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_WhenWindowExists>::GetFeaturePropertyCache'::`2'::data,
        0xB66D45u,
        (const struct FEATURE_LOGGED_TRAITS *)&v8,
        0,
        3);
      if ( (`wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_AllApps>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
        wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_AllApps>::GetCachedFeatureEnabledState();
      LOBYTE(v7) = 1;
      v8 = 0;
      v9 = v7;
      wil_details_FeaturePropertyCache_ReportUsageToService(
        &`wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_AllApps>::GetFeaturePropertyCache'::`2'::data,
        0xB66D21u,
        (const struct FEATURE_LOGGED_TRAITS *)&v8,
        0,
        3);
    }
    if ( !*((_BYTE *)this + 549) )
    {
      if ( (`wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_AllApps>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
        wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_AllApps>::GetCachedFeatureEnabledState();
      LOBYTE(v7) = 1;
      v8 = 0;
      v9 = v7;
      wil_details_FeaturePropertyCache_ReportUsageToService(
        &`wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_AllApps>::GetFeaturePropertyCache'::`2'::data,
        0xB66D21u,
        (const struct FEATURE_LOGGED_TRAITS *)&v8,
        0,
        3);
LABEL_22:
      CFrameApplicationPresentation::FrameSystemVisual::ShowSplashScreen((__int64)this + 216, 0, v4);
      return;
    }
LABEL_13:
    v3 = CFrameApplicationPresentation::_QueueUnsuppressSplashScreenAfterTimeout(this);
    if ( v3 >= 0 )
    {
      CFrameApplicationPresentation::FrameSystemVisual::SuppressSplashScreen(
        (__int64)this + 216,
        *((const unsigned __int16 **)this + 69),
        *((HWND *)this + 17),
        v2);
      return;
    }
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x648,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_22;
  }
}
