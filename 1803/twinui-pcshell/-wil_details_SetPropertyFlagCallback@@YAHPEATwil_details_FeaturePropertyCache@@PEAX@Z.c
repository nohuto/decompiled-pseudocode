/*
 * XREFs of ?wil_details_SetPropertyFlagCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z @ 0x18005FD80
 * Callers:
 *     ?ShouldHandleActivation@HolographicPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180020F50 (-ShouldHandleActivation@HolographicPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?_HostChanged@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z @ 0x180032664 (-_HostChanged@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z.c)
 *     ?ApproveWinRtActivation@ViewWrapperBase@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@5@@Z @ 0x180051D30 (-ApproveWinRtActivation@ViewWrapperBase@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@P.c)
 *     ?SetBoundsForView@ViewManagerBridge@@UEAAXPEAUIUnknown@@AEBUtagRECT@@AEBUAPPLICATION_VIEW_DATA@@@Z @ 0x180054D40 (-SetBoundsForView@ViewManagerBridge@@UEAAXPEAUIUnknown@@AEBUtagRECT@@AEBUAPPLICATION_VIEW_DATA@@.c)
 *     ?GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation@Windows@@0I_NPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@@Z @ 0x18005E590 (-GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation.c)
 *     ?UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ @ 0x18005FEB0 (-UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ.c)
 *     ?OnEditControlPositionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlPositionChangedEventArgs@45678@@Z @ 0x180060230 (-OnEditControlPositionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180060A94 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_SetPropertyFlagCallback(union wil_details_FeaturePropertyCache *a1, _DWORD *a2)
{
  int v3; // eax

  **(_DWORD **)a2 = 0;
  if ( (a2[2] & *(_DWORD *)a1) == a2[2] )
    return 0LL;
  v3 = a2[2] | *(_DWORD *)a1;
  *(_DWORD *)a1 = v3;
  if ( !a2[3] && (v3 & 8) == 0 )
  {
    *(_DWORD *)a1 = v3 | 8;
    **(_DWORD **)a2 = 1;
  }
  return 1LL;
}
