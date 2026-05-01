/*
 * XREFs of ?GetDisplayName@CImmersiveApp@@UEAAJPEAPEAG@Z @ 0x1800539C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18001EB1C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppressi.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001F064 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1800398C4 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::GetDisplayName(CImmersiveApp *this, unsigned __int16 **a2)
{
  int v4; // edi
  unsigned __int16 *v5; // rbx
  _WORD *v6; // rax
  unsigned __int16 *v7; // rax
  _QWORD v9[3]; // [rsp+38h] [rbp-18h] BYREF
  __int16 v10; // [rsp+84h] [rbp+34h]
  int v11; // [rsp+88h] [rbp+38h] BYREF
  __int16 v12; // [rsp+8Ch] [rbp+3Ch]

  *a2 = 0LL;
  v4 = 0;
  v5 = 0LL;
  memset(v9, 0, sizeof(v9));
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v6 = (_WORD *)*((_QWORD *)this + 58);
  if ( v6 && *v6 )
  {
    v4 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
           (__int64)v9,
           *((_QWORD *)this + 58),
           0xFFFFFFFFFFFFFFFFuLL);
    v5 = (unsigned __int16 *)v9[0];
  }
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v4 >= 0 )
  {
    if ( v5 && *v5 )
    {
      v7 = v5;
      v5 = 0LL;
      *a2 = v7;
    }
    else
    {
      if ( (`wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
        wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetCachedFeatureEnabledState();
      LOBYTE(v10) = 3;
      v11 = 0;
      v12 = v10;
      wil_details_FeaturePropertyCache_ReportUsageToService(
        &`wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetFeaturePropertyCache'::`2'::data,
        0xBF61Bu,
        (const struct FEATURE_LOGGED_TRAITS *)&v11,
        1,
        3);
      v4 = -2147024882;
    }
  }
  if ( v5 )
    CoTaskMemFree(v5);
  return (unsigned int)v4;
}
