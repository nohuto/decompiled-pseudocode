/*
 * XREFs of ?DidHolographicHandleHotKey@XamlLauncher@@AEAA_NXZ @ 0x18014D750
 * Callers:
 *     ?ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x18014A8B0 (-ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001E2E8 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetUserDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserDisplayContext@1234@@Z @ 0x1800C068C (-GetUserDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserDisplayContext@1234@@Z.c)
 *     ?QueryService@XamlLauncher@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x18014B190 (-QueryService@XamlLauncher@@UEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_HolographicHShellTaskmanOverride@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18014EFC8 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_HolographicHShellTaskmanOver.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall XamlLauncher::DidHolographicHandleHotKey(XamlLauncher *this)
{
  enum Windows::Internal::Shell::Holographic::UserDisplayContext *v2; // rdx
  int UserDisplayContext; // eax
  int v4; // eax
  void *v5; // rcx
  __int16 v7; // [rsp+3Ch] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  char v9; // [rsp+78h] [rbp+28h] BYREF
  int v10; // [rsp+80h] [rbp+30h] BYREF
  void *v11; // [rsp+88h] [rbp+38h] BYREF

  if ( (`wil::Feature<__WilFeatureTraits_Feature_HolographicHShellTaskmanOverride>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_HolographicHShellTaskmanOverride>::GetCachedFeatureEnabledState();
  LOBYTE(v7) = 3;
  LODWORD(v11) = 0;
  WORD2(v11) = v7;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_HolographicHShellTaskmanOverride>::GetFeaturePropertyCache'::`2'::data,
    0x8E30F6u,
    (const struct FEATURE_LOGGED_TRAITS *)&v11,
    1,
    3);
  v9 = 0;
  v10 = 0;
  UserDisplayContext = Windows::Internal::Shell::Holographic::GetUserDisplayContext(
                         (Windows::Internal::Shell::Holographic *)&v10,
                         v2);
  if ( UserDisplayContext < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x46E,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)UserDisplayContext);
  if ( v10 == 1 )
  {
    v11 = 0LL;
    if ( XamlLauncher::QueryService(
           (XamlLauncher *)((char *)this + 48),
           &GUID_40e2a5e3_4191_4768_937b_90416fbe69bd,
           &GUID_40e2a5e3_4191_4768_937b_90416fbe69bd,
           &v11) >= 0 )
    {
      v4 = (*(__int64 (__fastcall **)(void *, __int64, char *))(*(_QWORD *)v11 + 48LL))(v11, 1LL, &v9);
      if ( v4 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x47B,
          (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
          (const char *)(unsigned int)v4);
    }
    v5 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  return v9 != 0;
}
