/*
 * XREFs of ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@@Z @ 0x180015690
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x1800033D8 (-GetCurrentFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_Audio_MultiChannelRenderAtt.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_EnableAtmosSpeakersTechAllowed@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18004FD74 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_EnableAtmosSpeakersTechAllow.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18005F8D0 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllo.c)
 * Callees:
 *     ?WilApiImpl_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@@Z @ 0x1800156D0 (-WilApiImpl_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_T.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?wil_HasFeatureTestState@@YAHIPEAW4wil_FeatureEnabledState@@@Z @ 0x1800B3984 (-wil_HasFeatureTestState@@YAHIPEAW4wil_FeatureEnabledState@@@Z.c)
 */

enum FEATURE_ENABLED_STATE __fastcall wil::details::WilApi_GetFeatureEnabledState(
        unsigned __int64 this,
        int a2,
        __int64 a3)
{
  enum FEATURE_ENABLED_STATE (*v3)(unsigned int, enum FEATURE_CHANGE_TIME); // rax
  unsigned int v4; // ebx
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v3 = g_wil_details_internalGetFeatureEnabledState;
  v4 = this;
  if ( g_wil_details_internalGetFeatureEnabledState )
  {
    this = (unsigned int)this;
    if ( (char *)g_wil_details_internalGetFeatureEnabledState == (char *)wil::details::WilApiImpl_GetFeatureEnabledState )
      return wil::details::WilApiImpl_GetFeatureEnabledState(
               (wil::details *)(unsigned int)this,
               0,
               (enum FEATURE_CHANGE_TIME)a3);
    return ((unsigned int (__fastcall *)(unsigned __int64, _QWORD, __int64))v3)(this, 0LL, a3);
  }
  if ( !g_wil_details_apiGetFeatureEnabledState )
    return 0;
  if ( !(unsigned int)wil_HasFeatureTestState(this, (enum wil_FeatureEnabledState *)&v6) )
  {
    v3 = g_wil_details_apiGetFeatureEnabledState;
    this = v4;
    return ((unsigned int (__fastcall *)(unsigned __int64, _QWORD, __int64))v3)(this, 0LL, a3);
  }
  return v6;
}
