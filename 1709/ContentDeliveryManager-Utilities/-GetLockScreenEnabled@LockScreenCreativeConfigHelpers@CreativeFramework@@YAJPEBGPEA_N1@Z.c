/*
 * XREFs of ?GetLockScreenEnabled@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEA_N1@Z @ 0x18002A418
 * Callers:
 *     ?IsLockScreenEnabled@ContentManagementService@ContentManagement@@UEAAJPEAE0@Z @ 0x18002E450 (-IsLockScreenEnabled@ContentManagementService@ContentManagement@@UEAAJPEAE0@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800017F0 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E10 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E8C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800078C4 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetSettingValue@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEAUHKEY__@@PEBG1_NPEAKK@Z @ 0x1800284DC (-GetSettingValue@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEAUHKEY__@@PEBG1_NPEAKK@Z.c)
 *     ?IsAnyMicrosoftDomainAccount@Policy@CreativeFramework@@YA_NXZ @ 0x18002A168 (-IsAnyMicrosoftDomainAccount@Policy@CreativeFramework@@YA_NXZ.c)
 *     ?GetCurrentUserSidString@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEAPEAG@Z @ 0x18002A244 (-GetCurrentUserSidString@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEAPEAG@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_WindowsSpotlightV3@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180035BC8 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_WindowsSpotlightV3@@@wil@@CA.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 */

__int64 __fastcall CreativeFramework::LockScreenCreativeConfigHelpers::GetLockScreenEnabled(
        CreativeFramework::LockScreenCreativeConfigHelpers *this,
        unsigned __int16 *a2,
        bool *a3,
        bool *a4)
{
  int SettingValue; // eax
  unsigned __int16 **v7; // rdx
  CreativeFramework::Policy *v8; // rcx
  int CurrentUserSidString; // eax
  void *v10; // rbx
  signed int v11; // edi
  __int64 v12; // rdx
  bool v13; // al
  DWORD v14; // r14d
  LSTATUS v15; // eax
  signed int v16; // ecx
  int v17; // eax
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  HKEY v20; // r12
  DWORD LastError; // edi
  LSTATUS v22; // eax
  LSTATUS ValueW; // eax
  LSTATUS v24; // eax
  unsigned int *pvData; // [rsp+28h] [rbp-D8h]
  DWORD pdwValue; // [rsp+40h] [rbp-C0h] BYREF
  bool v28[4]; // [rsp+44h] [rbp-BCh] BYREF
  DWORD v29; // [rsp+48h] [rbp-B8h] BYREF
  __int16 v30; // [rsp+4Ch] [rbp-B4h]
  HKEY hKey; // [rsp+50h] [rbp-B0h] BYREF
  DWORD pcbData; // [rsp+58h] [rbp-A8h] BYREF
  __int16 v33; // [rsp+5Ch] [rbp-A4h]
  LPVOID pv[2]; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR SubKey[264]; // [rsp+70h] [rbp-90h] BYREF
  WCHAR Buffer[264]; // [rsp+280h] [rbp+180h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+4D8h] [rbp+3D8h]

  if ( a2 )
    *(_BYTE *)a2 = 0;
  if ( a3 )
    *a3 = 0;
  SettingValue = CreativeFramework::ContentDeliveryManagerSettings::GetSettingValue(
                   (CreativeFramework::ContentDeliveryManagerSettings *)0xFFFFFFFF80000002LL,
                   (const WCHAR *)&CreativeFramework::ContentDeliveryManagerDebugSettings::c_regKeyDebugSettings,
                   L"ContentDeliveryAllowedOverride",
                   (const unsigned __int16 *)a4,
                   v28,
                   pvData);
  if ( SettingValue >= 0 )
  {
    if ( *(_DWORD *)v28 )
    {
      v13 = *(_DWORD *)v28 == 1;
      if ( a2 )
        *(_BYTE *)a2 = v13;
      if ( a3 )
        *a3 = v13;
      return 0LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1AA,
      (__int64)"internal\\onecoreuapshell\\inc\\contentdeliverymanagersettings.h",
      (const char *)(unsigned int)SettingValue);
  }
  if ( (`wil::Feature<__WilFeatureTraits_Feature_WindowsSpotlightV3>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_WindowsSpotlightV3>::GetCachedFeatureEnabledState();
  v29 = 4;
  pcbData = 4;
  LOBYTE(v30) = 3;
  v33 = v30;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_WindowsSpotlightV3>::GetFeaturePropertyCache'::`2'::data,
    0xA836A7u,
    (const struct FEATURE_LOGGED_TRAITS *)&pcbData,
    3);
  pdwValue = 0;
  SLGetWindowsInformationDWORD(L"ContentDeliveryManager-License-ContentDeliveryAllowed", &pdwValue);
  if ( !pdwValue && !CreativeFramework::Policy::IsAnyMicrosoftDomainAccount(v8) )
    return 0LL;
  pv[0] = 0LL;
  CurrentUserSidString = CreativeFramework::LockScreenCreativeConfigHelpers::GetCurrentUserSidString(
                           (CreativeFramework::LockScreenCreativeConfigHelpers *)pv,
                           v7);
  v10 = pv[0];
  v11 = CurrentUserSidString;
  if ( CurrentUserSidString >= 0 )
  {
    CurrentUserSidString = StringCchPrintfW(
                             SubKey,
                             260LL,
                             L"%s\\%s",
                             pv[0],
                             L"Software\\Microsoft\\Windows\\CurrentVersion\\ContentDeliveryManager");
    v11 = CurrentUserSidString;
    if ( CurrentUserSidString < 0 )
    {
      v12 = 301LL;
      goto LABEL_20;
    }
    hKey = 0LL;
    v14 = 1;
    v15 = RegOpenKeyExW(HKEY_USERS, SubKey, 0, 9u, &hKey);
    v16 = (unsigned __int16)v15 | 0x80070000;
    if ( v15 <= 0 )
      v16 = v15;
    if ( v16 < 0 )
    {
      v14 = 0;
      v17 = StringCchPrintfW(
              Buffer,
              260LL,
              L"%s\\%s",
              L"Software\\Microsoft\\Windows\\CurrentVersion\\Authentication\\LogonUI\\Creative",
              v10);
      v11 = v17;
      if ( v17 < 0 )
      {
        v18 = (unsigned int)v17;
        v19 = 315LL;
        goto LABEL_45;
      }
      v20 = hKey;
      if ( hKey )
      {
        LastError = GetLastError();
        RegCloseKey(v20);
        SetLastError(LastError);
      }
      hKey = 0LL;
      v22 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, Buffer, 0, 9u, &hKey);
      v11 = (unsigned __int16)v22 | 0x80070000;
      if ( v22 <= 0 )
        v11 = v22;
      if ( v11 < 0 )
      {
        v19 = 318LL;
LABEL_44:
        v18 = (unsigned int)v11;
LABEL_45:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v19,
          (__int64)"internal\\onecoreuapshell\\inc\\lockscreencreativeconfighelpers.h",
          (const char *)v18);
        if ( hKey )
          RegCloseKey(hKey);
        goto LABEL_47;
      }
    }
    pcbData = 4;
    ValueW = RegGetValueW(hKey, 0LL, L"RotatingLockScreenEnabled", 0x10u, 0LL, v28, &pcbData);
    v11 = (unsigned __int16)ValueW | 0x80070000;
    if ( ValueW <= 0 )
      v11 = ValueW;
    if ( v11 == -2147024894 )
    {
      *(_DWORD *)v28 = v14;
    }
    else if ( v11 < 0 )
    {
      v19 = 330LL;
      goto LABEL_44;
    }
    v29 = 4;
    v24 = RegGetValueW(hKey, 0LL, L"RotatingLockScreenOverlayEnabled", 0x10u, 0LL, &pdwValue, &v29);
    v11 = (unsigned __int16)v24 | 0x80070000;
    if ( v24 <= 0 )
      v11 = v24;
    if ( v11 == -2147024894 )
    {
      pdwValue = v14;
    }
    else
    {
      if ( v11 < 0 )
      {
        v19 = 343LL;
        goto LABEL_44;
      }
      v14 = pdwValue;
    }
    if ( a2 )
      *(_BYTE *)a2 = *(_DWORD *)v28 != 0;
    if ( a3 )
      *a3 = v14 != 0;
    if ( hKey )
      RegCloseKey(hKey);
    if ( v10 )
      CoTaskMemFree(v10);
    return 0LL;
  }
  v12 = 297LL;
LABEL_20:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v12,
    (__int64)"internal\\onecoreuapshell\\inc\\lockscreencreativeconfighelpers.h",
    (const char *)(unsigned int)CurrentUserSidString);
LABEL_47:
  if ( v10 )
    CoTaskMemFree(v10);
  return (unsigned int)v11;
}
