/*
 * XREFs of ?_EnsureCount@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18001D094
 * Callers:
 *     Windows::Internal::NativeString_Windows::Internal::CoTaskMemPolicy_unsigned_short___::_InitializeHelper__lambda_ba3db7aa6f4c4ff7c0aefa43081dccfe___ @ 0x18001CE10 (Windows--Internal--NativeString_Windows--Internal--CoTaskMemPolicy_unsigned_short___--_Initializ.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18001CF60 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?ConcatFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18001D1B4 (-ConcatFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG.c)
 *     ?_Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1800F7C9C (-_Concat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z.c)
 *     ?CensorWebAppId@AppIdCensorUtility@LoggingUtil@@CAXPEBG0PEAPEAG@Z @ 0x18011E464 (-CensorWebAppId@AppIdCensorUtility@LoggingUtil@@CAXPEBG0PEAPEAG@Z.c)
 *     ?GetAppUserModelID@TaskbarLayoutItem@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18014BEC0 (-GetAppUserModelID@TaskbarLayoutItem@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetFilePath@TaskbarLayoutItem@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18014BF40 (-GetFilePath@TaskbarLayoutItem@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?Show@CPeopleBarJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x18016F700 (-Show@CPeopleBarJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?GetAppUserModelID@PWSLayoutItem@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18019CAC0 (-GetAppUserModelID@PWSLayoutItem@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetFilePath@PWSLayoutItem@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18019CB40 (-GetFilePath@PWSLayoutItem@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetTabletModeContextMenuItemString@XamlAllUpViewController@@AE$AAAXPEAUIApplicationView@@IPEAPE$AAVString@Platform@@@Z @ 0x18021DBDC (-GetTabletModeContextMenuItemString@XamlAllUpViewController@@AE$AAAXPEAUIApplicationView@@IPEAPE.c)
 *     ?UpdateAppId@AppViewDataSourceAdapterBase@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180237CF0 (-UpdateAppId@AppViewDataSourceAdapterBase@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multit.c)
 *     ?UpdateDisplayName@AppViewDataSourceAdapterBase@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180237E30 (-UpdateDisplayName@AppViewDataSourceAdapterBase@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@.c)
 *     ?get_Name@VirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180262AA0 (-get_Name@VirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?RuntimeClassInitialize@AppResizeAcc@@QEAAJXZ @ 0x1802E6094 (-RuntimeClassInitialize@AppResizeAcc@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@JointResizeAcc@@QEAAJXZ @ 0x1802EB154 (-RuntimeClassInitialize@JointResizeAcc@@QEAAJXZ.c)
 *     ?GetIconData@ImmersiveIcons@@YAJPEBGUIconLoadingInputs2@1@PEAUIconData2@1@@Z @ 0x180303104 (-GetIconData@ImmersiveIcons@@YAJPEBGUIconLoadingInputs2@1@PEAUIconData2@1@@Z.c)
 *     s_DrawThemeTextPPIAware @ 0x18030CF98 (s_DrawThemeTextPPIAware.c)
 *     s_OnMeasureItem @ 0x18030DF18 (s_OnMeasureItem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(
        _QWORD *a1)
{
  __int64 result; // rax

  result = -1LL;
  if ( a1[1] == -1LL )
  {
    if ( *a1 )
    {
      do
        ++result;
      while ( *(_WORD *)(*a1 + 2 * result) );
    }
    else
    {
      result = 0LL;
    }
    a1[1] = result;
  }
  return result;
}
