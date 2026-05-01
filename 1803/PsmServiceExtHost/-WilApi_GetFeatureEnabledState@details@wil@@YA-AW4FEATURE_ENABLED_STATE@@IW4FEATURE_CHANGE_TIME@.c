/*
 * XREFs of ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@@Z @ 0x18003C6C4
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_HamOptIn@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x18003C668 (-GetCurrentFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_HamOptIn@@@wil@@CA-AW4wil_d.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_SuspendPerAppBroker@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18005FC4C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_SuspendPerAppBroker@@@wil@@C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 *     ?wil_HasFeatureTestState@@YAHIPEAW4wil_FeatureEnabledState@@@Z @ 0x1800622F4 (-wil_HasFeatureTestState@@YAHIPEAW4wil_FeatureEnabledState@@@Z.c)
 */

__int64 __fastcall wil::details::WilApi_GetFeatureEnabledState(wil::details *this, unsigned int a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v5; // r8
  unsigned int v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v3 = (unsigned int)this;
  if ( g_wil_details_internalGetFeatureEnabledState )
    return ((__int64 (__fastcall *)(wil::details *, __int64, __int64))g_wil_details_internalGetFeatureEnabledState)(
             this,
             3LL,
             a3);
  if ( !g_wil_details_apiGetFeatureEnabledState )
    return 0LL;
  if ( (unsigned int)wil_HasFeatureTestState((unsigned int)this, (enum wil_FeatureEnabledState *)&v6) )
    return v6;
  return ((__int64 (__fastcall *)(_QWORD, __int64, __int64))g_wil_details_apiGetFeatureEnabledState)(v3, 3LL, v5);
}
