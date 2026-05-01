/*
 * XREFs of ?Prelaunch@XamlLauncher@@UEAAJXZ @ 0x18014AD20
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001E2E8 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_RegSetKeyValue@@YAKPEAUHKEY__@@PEBG1KPEBXK@Z @ 0x18008A788 (-_RegSetKeyValue@@YAKPEAUHKEY__@@PEBG1KPEBXK@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_AlwaysFailFastOnXamlFailure@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18014F278 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_AlwaysFailFastOnXamlFailure@.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlLauncher::Prelaunch(XamlLauncher *this)
{
  int v2; // eax
  __int64 v3; // rdx
  unsigned __int64 v4; // r9
  int v5; // eax
  __int64 v6; // rdx
  HANDLE v7; // rax
  void *v8; // rbx
  int v9; // eax
  HANDLE v10; // rax
  void *v11; // rbx
  __int16 v13; // [rsp+34h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  int v15; // [rsp+50h] [rbp+10h] BYREF
  __int16 v16; // [rsp+54h] [rbp+14h]

  if ( (`wil::Feature<__WilFeatureTraits_Feature_AlwaysFailFastOnXamlFailure>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_AlwaysFailFastOnXamlFailure>::GetCachedFeatureEnabledState();
  LOBYTE(v13) = 1;
  v15 = 0;
  v16 = v13;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_AlwaysFailFastOnXamlFailure>::GetFeaturePropertyCache'::`2'::data,
    0x62FED0u,
    (const struct FEATURE_LOGGED_TRAITS *)&v15,
    0,
    3);
  v15 = 0;
  v2 = _RegSetKeyValue(
         HKEY_CURRENT_USER,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced\\Xaml",
         L"AllowFailFastOnAnyFailure",
         4u,
         (BYTE *)&v15,
         4u);
  v4 = (unsigned __int16)v2 | 0x80070000;
  if ( v2 <= 0 )
    v4 = (unsigned int)v2;
  if ( (v4 & 0x80000000) != 0LL )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xED,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)v4);
  LOBYTE(v3) = 1;
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 9) + 48LL))(*((_QWORD *)this + 9), v3);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xF0,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v5);
    v7 = OpenEventW(2u, 0, L"ShellStartReadyEvent");
    v8 = v7;
    if ( v7 )
    {
      SetEvent(v7);
      CloseHandle(v8);
    }
  }
  LOBYTE(v6) = 1;
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 10) + 48LL))(*((_QWORD *)this + 10), v6);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xF6,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v9);
    v10 = OpenEventW(2u, 0, L"ShellSearchReadyEvent");
    v11 = v10;
    if ( v10 )
    {
      SetEvent(v10);
      CloseHandle(v11);
    }
  }
  return 0LL;
}
