/*
 * XREFs of ?ShouldAttachDevice@HeatProcessor@@UEAA_NPEAUDeviceInfo@@@Z @ 0x180047FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000B894 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?OnDeviceArrival@HeatProcessor@@QEAAJPEAUDeviceInfo@@@Z @ 0x18004805C (-OnDeviceArrival@HeatProcessor@@QEAAJPEAUDeviceInfo@@@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_Input_HeatMultiDevice@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800482D0 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_Input_HeatMultiDevice@@@wil@.c)
 */

bool __fastcall HeatProcessor::ShouldAttachDevice(HeatProcessor *this, struct DeviceInfo *a2)
{
  char v2; // bl
  __int16 v6; // [rsp+5Ch] [rbp+14h]
  int v7; // [rsp+60h] [rbp+18h] BYREF
  __int16 v8; // [rsp+64h] [rbp+1Ch]

  v2 = 0;
  if ( *((_DWORD *)a2 + 1) == 2048 )
  {
    if ( (`wil::Feature<__WilFeatureTraits_Feature_Input_HeatMultiDevice>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_Input_HeatMultiDevice>::GetCachedFeatureEnabledState();
    LOBYTE(v6) = 3;
    v8 = v6;
    v7 = 0;
    wil_details_FeaturePropertyCache_ReportUsageToService(
      &`wil::Feature<__WilFeatureTraits_Feature_Input_HeatMultiDevice>::GetFeaturePropertyCache'::`2'::data,
      0xAD7BBAu,
      (const struct FEATURE_LOGGED_TRAITS *)&v7,
      1,
      3);
    return (int)HeatProcessor::OnDeviceArrival(this, a2) >= 0;
  }
  return v2;
}
