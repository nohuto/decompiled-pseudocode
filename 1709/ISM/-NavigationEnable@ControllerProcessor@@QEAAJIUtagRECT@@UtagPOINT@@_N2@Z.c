/*
 * XREFs of ?NavigationEnable@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@_N2@Z @ 0x18003E8A4
 * Callers:
 *     ?NavigationEnable@ControllerNavigationManager@@UEAAJUtagMsgRoutingInfo@@IUControllerNavigationRect@@UControllerNavigationPoint@@@Z @ 0x18003C8A0 (-NavigationEnable@ControllerNavigationManager@@UEAAJUtagMsgRoutingInfo@@IUControllerNavigationRe.c)
 *     ?UpdateControllerNavigationMode@ControllerProcessor@@AEAAXXZ @ 0x1800418B4 (-UpdateControllerNavigationMode@ControllerProcessor@@AEAAXXZ.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000B894 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18003CC44 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamep.c)
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAJW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x18003EA00 (-UpdateNavigationState@ControllerProcessor@@AEAAJW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 */

__int64 __fastcall ControllerProcessor::NavigationEnable(
        ControllerProcessor *this,
        int a2,
        struct tagRECT *a3,
        struct tagPOINT a4,
        bool a5,
        bool a6)
{
  unsigned int v6; // ebx
  int updated; // eax
  __int64 v8; // rcx
  int v9; // r9d
  __int16 v11; // [rsp+34h] [rbp-Ch]
  struct tagPOINT v12; // [rsp+38h] [rbp-8h] BYREF

  v12 = a4;
  v6 = 0;
  if ( ((1LL << gdwDeviceFamily) & 0x224A) == 0 )
  {
    *((_DWORD *)this + 80) = a2;
    if ( !a5 || a6 )
    {
      updated = ControllerProcessor::UpdateNavigationState(this, 0LL, a3);
      v6 = updated;
      if ( updated >= 0 )
        return v6;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v9 = 840;
        goto LABEL_13;
      }
    }
    else
    {
      updated = ControllerProcessor::UpdateNavigationState(this, 0LL, a3);
      v6 = updated;
      if ( updated >= 0 )
        return v6;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v9 = 846;
LABEL_13:
        McTemplateU0qqq(v8, &MinInput_Warning_CheckResult, 12, v9, updated);
      }
    }
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  if ( (`wil::Feature<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad>::GetCachedFeatureEnabledState();
  LOBYTE(v11) = 0;
  v12.x = 0;
  LOWORD(v12.y) = v11;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad>::GetFeaturePropertyCache'::`2'::data,
    0xADAF72u,
    (const struct FEATURE_LOGGED_TRAITS *)&v12,
    0,
    3);
  return v6;
}
