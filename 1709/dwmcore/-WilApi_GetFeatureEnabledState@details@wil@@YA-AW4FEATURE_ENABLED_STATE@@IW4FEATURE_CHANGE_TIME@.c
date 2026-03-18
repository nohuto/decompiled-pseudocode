/*
 * XREFs of ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@@Z @ 0x18007B03C
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ForceNRE@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18007AF90 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ForceNRE@@@wil@@CA-AW4wil_de.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_SuperWetInk@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18013AB30 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_SuperWetInk@@@wil@@CA-AW4wil.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_RgbaSwapChains@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1801913FC (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_RgbaSwapChains@@@wil@@CA-AW4.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?wil_HasFeatureTestState@@YAHIPEAW4wil_FeatureEnabledState@@@Z @ 0x180134E2C (-wil_HasFeatureTestState@@YAHIPEAW4wil_FeatureEnabledState@@@Z.c)
 */

__int64 __fastcall wil::details::WilApi_GetFeatureEnabledState(wil::details *this, unsigned int a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v5; // r8
  unsigned int v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v3 = (unsigned int)this;
  if ( g_wil_details_internalGetFeatureEnabledState )
    return ((__int64 (__fastcall *)(wil::details *, _QWORD, __int64))g_wil_details_internalGetFeatureEnabledState)(
             this,
             0LL,
             a3);
  if ( !g_wil_details_apiGetFeatureEnabledState )
    return 0LL;
  if ( (unsigned int)wil_HasFeatureTestState((unsigned int)this, (enum wil_FeatureEnabledState *)&v6) )
    return v6;
  return ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))g_wil_details_apiGetFeatureEnabledState)(v3, 0LL, v5);
}
