/*
 * XREFs of ?wil_HasFeatureTestState@@YAHIPEAW4wil_FeatureEnabledState@@@Z @ 0x180008208
 * Callers:
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z @ 0x18000A940 (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z.c)
 *     ?UninstallApp@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x18000D020 (-UninstallApp@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?StartProductInstallWithOverrides@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@EE0000@Z @ 0x18000D6A0 (-StartProductInstallWithOverrides@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@EE0000@Z.c)
 *     ?StartProductInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0EE00@Z @ 0x18000DBD0 (-StartProductInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0EE00@Z.c)
 *     ?LaunchUriAsync@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z @ 0x18000FBD0 (-LaunchUriAsync@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAPEAU-$IAsyncOperation@_.c)
 *     ?LaunchDefaultEntryPointForPackage@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x180010490 (-LaunchDefaultEntryPointForPackage@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180016000 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TargetedContentUseProductIns.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_AppInstallBatching@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180016148 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_AppInstallBatching@@@wil@@CA.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_GenericActionAndTrigger@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180016294 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_GenericActionAndTrigger@@@wi.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_FrameworkScalability@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180034C08 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_FrameworkScalability@@@wil@@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_MobilityExperience@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180035A80 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_MobilityExperience@@@wil@@CA.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_WindowsSpotlightV3@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180035BC8 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_WindowsSpotlightV3@@@wil@@CA.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_UTMIntegrationWithTargetedContentApi@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180035D10 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_UTMIntegrationWithTargetedCo.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_MinuteZeroExperiences@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180035E58 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_MinuteZeroExperiences@@@wil@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_WindowsTips@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180035FA0 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_WindowsTips@@@wil@@CA-AW4wil.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ActionCenterNotification@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800360EC (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ActionCenterNotification@@@w.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_SilentInstalledApps@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180036234 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_SilentInstalledApps@@@wil@@C.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TargetedContentAPI@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800432F0 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TargetedContentAPI@@@wil@@CA.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_CortanaOnSpotlight@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800718F4 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_CortanaOnSpotlight@@@wil@@CA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_HasFeatureTestState(int a1, enum wil_FeatureEnabledState *a2)
{
  unsigned int v2; // ebx
  struct wil_details_FeatureTestState *i; // rax
  __int128 v7; // [rsp+20h] [rbp-28h]

  v2 = 0;
  if ( g_wil_details_testStates )
  {
    AcquireSRWLockShared(&g_wil_details_testFeatureStateLock);
    for ( i = g_wil_details_testStates; i; i = (struct wil_details_FeatureTestState *)*((_QWORD *)i + 3) )
    {
      if ( *((_DWORD *)i + 1) == a1 && !*(_DWORD *)i )
      {
        v2 = 1;
        v7 = *(_OWORD *)i;
        break;
      }
    }
    ReleaseSRWLockShared(&g_wil_details_testFeatureStateLock);
  }
  if ( a2 )
    *(_DWORD *)a2 = v2 != 0 ? DWORD2(v7) : 0;
  return v2;
}
