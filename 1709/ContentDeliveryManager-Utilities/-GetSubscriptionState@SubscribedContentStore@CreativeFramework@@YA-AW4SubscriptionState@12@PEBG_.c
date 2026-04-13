/*
 * XREFs of ?GetSubscriptionState@SubscribedContentStore@CreativeFramework@@YA?AW4SubscriptionState@12@PEBG_N@Z @ 0x18003EC3C
 * Callers:
 *     ?ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@PEAW4SubscriptionActivationFlags@12@@Z @ 0x18003F64C (-ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV-$map@V-$ba.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800078C4 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetFileTimeSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEAU_FILETIME@@@Z @ 0x1800285A4 (-GetFileTimeSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEAU_FILETIME@@@.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x180030790 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TargetedContentAPI@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800432F0 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TargetedContentAPI@@@wil@@CA.c)
 */

// Hidden C++ exception states: #wind=5
_BOOL8 __fastcall CreativeFramework::SubscribedContentStore::GetSubscriptionState(__int64 a1)
{
  int v1; // eax
  WCHAR *v2; // rdi
  const unsigned __int16 *v3; // r8
  int FileTimeSetting; // eax
  unsigned __int64 v5; // rbx
  BOOL v6; // ebx
  struct _FILETIME SystemTimeAsFileTime; // [rsp+20h] [rbp-50h] BYREF
  int v9; // [rsp+28h] [rbp-48h] BYREF
  __int16 dwHighDateTime; // [rsp+2Ch] [rbp-44h]
  LPVOID v11; // [rsp+30h] [rbp-40h]
  int v12; // [rsp+38h] [rbp-38h]
  LPVOID pv[6]; // [rsp+40h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  pv[3] = (LPVOID)-2LL;
  v12 = 0;
  v11 = 0LL;
  memset(pv, 0, 24);
  v1 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
         (__int64)pv,
         L"%s\\%s",
         L"Software\\Microsoft\\Windows\\CurrentVersion\\ContentDeliveryManager\\Subscriptions",
         a1);
  if ( v1 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x90,
      (__int64)"internal\\onecoreuapshell\\inc\\subscribedcontentstore.h",
      (const char *)(unsigned int)v1);
    __debugbreak();
  }
  v2 = (WCHAR *)pv[0];
  v11 = pv[0];
  pv[4] = 0LL;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_TargetedContentAPI>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_TargetedContentAPI>::GetCachedFeatureEnabledState(retaddr);
  SystemTimeAsFileTime.dwLowDateTime = 0;
  LOBYTE(SystemTimeAsFileTime.dwHighDateTime) = 3;
  v9 = 0;
  dwHighDateTime = SystemTimeAsFileTime.dwHighDateTime;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_TargetedContentAPI>::GetFeaturePropertyCache'::`2'::data,
    0x7EA375u,
    (const struct FEATURE_LOGGED_TRAITS *)&v9,
    3);
  LOBYTE(v3) = 1;
  FileTimeSetting = CreativeFramework::ContentDeliveryManagerSettings::GetFileTimeSetting(
                      v2,
                      L"LastAccessed",
                      v3,
                      &SystemTimeAsFileTime);
  if ( FileTimeSetting < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xB8,
      (__int64)"internal\\onecoreuapshell\\inc\\subscribedcontentstore.h",
      (const char *)(unsigned int)FileTimeSetting);
    __debugbreak();
  }
  v5 = SystemTimeAsFileTime.dwLowDateTime
     + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32)
     + 2592000000000LL;
  v11 = (LPVOID)v5;
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  v6 = (unsigned int)v5 + ((unsigned __int64)HIDWORD(v11) << 32) > SystemTimeAsFileTime.dwLowDateTime
                                                                 + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
  if ( v2 )
    CoTaskMemFree(v2);
  return v6;
}
