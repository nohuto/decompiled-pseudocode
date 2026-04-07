/*
 * XREFs of ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@@Z @ 0x180042878
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_RgbaSwapChains@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18004246C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_RgbaSwapChains@@@wil@@CA-AW4.c)
 *     ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x180084934 (-GetCurrentFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CA-AW4wil_d.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?wil_HasFeatureTestState@@YAHIPEAW4wil_FeatureEnabledState@@@Z @ 0x18006EE14 (-wil_HasFeatureTestState@@YAHIPEAW4wil_FeatureEnabledState@@@Z.c)
 */

__int64 __fastcall wil::details::WilApi_GetFeatureEnabledState(wil::details *this, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  unsigned int v4; // ebx
  __int64 v6; // r8
  unsigned int v7; // [rsp+40h] [rbp+18h] BYREF

  v3 = a2;
  v4 = (unsigned int)this;
  if ( g_wil_details_internalGetFeatureEnabledState )
    return ((__int64 (__fastcall *)(wil::details *, __int64, __int64))g_wil_details_internalGetFeatureEnabledState)(
             this,
             a2,
             a3);
  if ( !g_wil_details_apiGetFeatureEnabledState )
    return 0LL;
  if ( (unsigned int)wil_HasFeatureTestState((unsigned int)this, (enum wil_FeatureEnabledState *)&v7) )
    return v7;
  return ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))g_wil_details_apiGetFeatureEnabledState)(v4, v3, v6);
}
