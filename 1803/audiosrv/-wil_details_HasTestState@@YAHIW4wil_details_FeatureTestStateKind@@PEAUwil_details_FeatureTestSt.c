/*
 * XREFs of ?wil_details_HasTestState@@YAHIW4wil_details_FeatureTestStateKind@@PEAUwil_details_FeatureTestState@@@Z @ 0x1800B39FC
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180003320 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_Audio_MultiChannelRenderAtte.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_EnableAtmosSpeakersTechAllowed@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18004FD74 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_EnableAtmosSpeakersTechAllow.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18005F8D0 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllo.c)
 *     ?wil_HasFeatureTestState@@YAHIPEAW4wil_FeatureEnabledState@@@Z @ 0x1800B3984 (-wil_HasFeatureTestState@@YAHIPEAW4wil_FeatureEnabledState@@@Z.c)
 *     ?wil_HasFeatureVariantTestState@@YAHIPEAEPEAI@Z @ 0x1800B39B4 (-wil_HasFeatureVariantTestState@@YAHIPEAEPEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_HasTestState(int a1, int a2, _OWORD *a3)
{
  unsigned int v3; // ebx
  struct wil_details_FeatureTestState *i; // rax
  __int128 v8; // xmm1

  v3 = 0;
  if ( g_wil_details_testStates )
  {
    AcquireSRWLockShared(&g_wil_details_testFeatureStateLock);
    for ( i = g_wil_details_testStates; i; i = (struct wil_details_FeatureTestState *)*((_QWORD *)i + 3) )
    {
      if ( *((_DWORD *)i + 1) == a1 && *(_DWORD *)i == a2 )
      {
        v3 = 1;
        v8 = *((_OWORD *)i + 1);
        *a3 = *(_OWORD *)i;
        a3[1] = v8;
        break;
      }
    }
    ReleaseSRWLockShared(&g_wil_details_testFeatureStateLock);
  }
  return v3;
}
