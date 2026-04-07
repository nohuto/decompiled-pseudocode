/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180085D84
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18002AC30 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 *     ?GetUnmetTabRequirements@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETUNMETTABREQUIREMENTS@@@Z @ 0x180084BF8 (-GetUnmetTabRequirements@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETUNMETTABREQUIREMENTS@@@.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18003525C (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800845A4 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CA-AW4wil_de.c)
 */

void __fastcall wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4)
{
  __int16 v5; // [rsp+54h] [rbp+1Ch]
  int v6; // [rsp+58h] [rbp+20h] BYREF
  __int16 v7; // [rsp+5Ch] [rbp+24h]

  HIBYTE(v5) = BYTE5(a3);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetCachedFeatureEnabledState(a1);
  LOBYTE(v5) = 1;
  v6 = 0;
  v7 = v5;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetFeaturePropertyCache'::`2'::data,
    10727725LL,
    (const struct FEATURE_LOGGED_TRAITS *)&v6,
    a4,
    a2);
}
