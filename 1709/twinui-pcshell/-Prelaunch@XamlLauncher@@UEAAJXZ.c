/*
 * XREFs of ?Prelaunch@XamlLauncher@@UEAAJXZ @ 0x18017FAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001F064 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_RegSetKeyValue@@YAKPEAUHKEY__@@PEBG1KPEBXK@Z @ 0x18008CBB0 (-_RegSetKeyValue@@YAKPEAUHKEY__@@PEBG1KPEBXK@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_AlwaysFailFastOnXamlFailure@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180183FD4 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_AlwaysFailFastOnXamlFailure@.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
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
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  int v14; // [rsp+50h] [rbp+20h] BYREF
  __int16 v15; // [rsp+54h] [rbp+24h]
  int v16; // [rsp+58h] [rbp+28h] BYREF
  __int16 v17; // [rsp+5Ch] [rbp+2Ch]

  if ( (`wil::Feature<__WilFeatureTraits_Feature_AlwaysFailFastOnXamlFailure>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_AlwaysFailFastOnXamlFailure>::GetCachedFeatureEnabledState();
  LOBYTE(v15) = 1;
  v14 = 0;
  v16 = 0;
  v17 = v15;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_AlwaysFailFastOnXamlFailure>::GetFeaturePropertyCache'::`2'::data,
    0x62FED0u,
    (const struct FEATURE_LOGGED_TRAITS *)&v16,
    0,
    3);
  v14 = 0;
  v2 = _RegSetKeyValue(
         HKEY_CURRENT_USER,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced\\Xaml",
         L"AllowFailFastOnAnyFailure",
         4u,
         (BYTE *)&v14,
         4u);
  v4 = (unsigned __int16)v2 | 0x80070000;
  if ( v2 <= 0 )
    v4 = (unsigned int)v2;
  if ( (v4 & 0x80000000) != 0LL )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xEA,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)v4);
  LOBYTE(v3) = 1;
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 10) + 48LL))(*((_QWORD *)this + 10), v3);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xED,
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
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 11) + 48LL))(*((_QWORD *)this + 11), v6);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xF3,
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
