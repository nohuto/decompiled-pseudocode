/*
 * XREFs of ?NavigationEnable@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@_N2@Z @ 0x1800331AC
 * Callers:
 *     ?RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z @ 0x18002EF30 (-RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z.c)
 *     ?EnableNavigation@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientProxy@@@Z @ 0x18002F1D4 (-EnableNavigation@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientProxy@@@Z.c)
 *     ?UpdateControllerNavigationMode@ControllerProcessor@@AEAAXXZ @ 0x180035DF0 (-UpdateControllerNavigationMode@ControllerProcessor@@AEAAXXZ.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000FE74 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18002F810 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamep.c)
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAJW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x1800332A4 (-UpdateNavigationState@ControllerProcessor@@AEAAJW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 */

__int64 __fastcall ControllerProcessor::NavigationEnable(
        ControllerProcessor *this,
        int a2,
        struct tagRECT *a3,
        struct tagPOINT a4,
        bool a5,
        bool a6)
{
  int updated; // ebx
  struct tagPOINT *v7; // r9
  __int16 v9; // [rsp+34h] [rbp-Ch]
  struct tagPOINT v10; // [rsp+38h] [rbp-8h] BYREF

  v10 = a4;
  updated = 0;
  if ( ((1LL << gdwDeviceFamily) & 0x224A) != 0 )
  {
    if ( (`wil::Feature<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad>::GetCachedFeatureEnabledState();
    LOBYTE(v9) = 0;
    v10.x = 0;
    LOWORD(v10.y) = v9;
    wil_details_FeaturePropertyCache_ReportUsageToService(
      &`wil::Feature<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad>::GetFeaturePropertyCache'::`2'::data,
      0xADAF72u,
      (const struct FEATURE_LOGGED_TRAITS *)&v10,
      0,
      3u);
  }
  else
  {
    *((_DWORD *)this + 488) = a2;
    if ( !a5 || a6 )
      v7 = &v10;
    else
      v7 = 0LL;
    updated = ControllerProcessor::UpdateNavigationState(this, 0LL, a3, v7);
    if ( updated < 0 )
    {
      if ( IsDebuggerPresent() )
        __debugbreak();
      RaiseFailFastException(0LL, 0LL, 0);
    }
  }
  return (unsigned int)updated;
}
