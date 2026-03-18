/*
 * XREFs of ?SupportsD3D12PostPresentProcessing@CD3DDeviceLevel1@@QEBA_NXZ @ 0x1801A8468
 * Callers:
 *     ?CalcSwapChainParameters@CDisplay@@QEBAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCD3DDeviceLevel1@@PEAUDXGI_SWAP_CHAIN_DESC@@PEAW4DXGI_COLOR_SPACE_TYPE@@PEAIPEA_N@Z @ 0x180191118 (-CalcSwapChainParameters@CDisplay@@QEBAJU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBV.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800781D0 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_SuperWetInk@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18013AB30 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_SuperWetInk@@@wil@@CA-AW4wil.c)
 */

bool __fastcall CD3DDeviceLevel1::SupportsD3D12PostPresentProcessing(
        CD3DDeviceLevel1 *this,
        unsigned int a2,
        __int64 a3)
{
  __int16 v4; // [rsp+44h] [rbp+Ch]
  int v5; // [rsp+48h] [rbp+10h] BYREF
  __int16 v6; // [rsp+4Ch] [rbp+14h]

  if ( *((int *)this + 189) >= 49152 )
  {
    if ( (`wil::Feature<__WilFeatureTraits_Feature_SuperWetInk>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_SuperWetInk>::GetCachedFeatureEnabledState((__int64)this, a2, a3);
    LOBYTE(v4) = 0;
    v5 = 0;
    v6 = v4;
    wil_details_FeaturePropertyCache_ReportUsageToService(
      (__int64)&`wil::Feature<__WilFeatureTraits_Feature_SuperWetInk>::GetFeaturePropertyCache'::`2'::data,
      11148202LL,
      (const struct FEATURE_LOGGED_TRAITS *)&v5);
  }
  return 0;
}
