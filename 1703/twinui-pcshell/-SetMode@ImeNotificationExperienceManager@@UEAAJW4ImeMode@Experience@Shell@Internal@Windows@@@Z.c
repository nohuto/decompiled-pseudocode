/*
 * XREFs of ?SetMode@ImeNotificationExperienceManager@@UEAAJW4ImeMode@Experience@Shell@Internal@Windows@@@Z @ 0x18009FB50
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180004774 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001E2E8 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x180097BC0 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     _lambda_0cfb79e9f82d4b070b46ace9fa651aa3_::operator() @ 0x18009FC58 (_lambda_0cfb79e9f82d4b070b46ace9fa651aa3_--operator().c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_JapaneseImeStatusNotification@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800A0574 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_JapaneseImeStatusNotificatio.c)
 */

__int64 __fastcall ImeNotificationExperienceManager::SetMode(__int64 a1, int a2)
{
  wil::details_abi *v2; // rcx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details_abi::ThreadLocalData *v4; // rbx
  int v5; // eax
  unsigned int v6; // edi
  __int16 v8; // [rsp+44h] [rbp-Dh]
  int v9[2]; // [rsp+50h] [rbp-1h] BYREF
  int v10; // [rsp+58h] [rbp+7h]
  int v11; // [rsp+5Ch] [rbp+Bh]
  _QWORD v12[2]; // [rsp+60h] [rbp+Fh] BYREF
  unsigned int v13[2]; // [rsp+70h] [rbp+1Fh] BYREF
  const char *v14; // [rsp+78h] [rbp+27h]
  __int64 v15; // [rsp+80h] [rbp+2Fh]
  __int16 v16; // [rsp+88h] [rbp+37h]
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+5Fh]
  int v18; // [rsp+B8h] [rbp+67h] BYREF
  __int16 v19; // [rsp+BCh] [rbp+6Bh]
  int v20; // [rsp+C0h] [rbp+6Fh] BYREF

  v20 = a2;
  v12[0] = a1;
  v12[1] = &v20;
  *(_QWORD *)v13 = retaddr;
  v14 = "pcshell\\twinui\\experiencemanagers\\lib\\imestatusnotificationexperiencemanager.cpp";
  v15 = 0LL;
  v16 = 187;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_JapaneseImeStatusNotification>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_JapaneseImeStatusNotification>::GetCachedFeatureEnabledState();
  LOBYTE(v8) = 3;
  v18 = 0;
  v19 = v8;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_JapaneseImeStatusNotification>::GetFeaturePropertyCache'::`2'::data,
    0x84ADFDu,
    (const struct FEATURE_LOGGED_TRAITS *)&v18,
    1,
    3);
  LOBYTE(v2) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v2);
  v4 = ThreadLocalDataCache;
  *(_QWORD *)v9 = ThreadLocalDataCache;
  if ( ThreadLocalDataCache )
  {
    v11 = *((_DWORD *)ThreadLocalDataCache + 4);
    v10 = **((_DWORD **)ThreadLocalDataCache + 1);
    *((_DWORD *)ThreadLocalDataCache + 4) = v10;
    v4 = *(struct wil::details_abi::ThreadLocalData **)v9;
  }
  v5 = lambda_0cfb79e9f82d4b070b46ace9fa651aa3_::operator()(v12);
  v6 = v5;
  if ( v5 < 0 )
    wil::details::ReportFeatureError(
      (wil::details *)(unsigned int)v5,
      (__int64)v9,
      (struct wil::ThreadErrorContext *)0x84ADFD,
      (__int64)v13);
  if ( v4 )
    *((_DWORD *)v4 + 4) = v11;
  return v6;
}
