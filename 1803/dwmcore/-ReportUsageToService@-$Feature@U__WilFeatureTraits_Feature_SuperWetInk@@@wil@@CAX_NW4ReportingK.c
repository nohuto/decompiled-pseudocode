/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_SuperWetInk@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800BAB4C
 * Callers:
 *     ?GetOptionalDisplaySwapChainBufferUsageFlags@CD3DDeviceLevel1@@QEBAIIW4DXGI_FORMAT@@@Z @ 0x180076954 (-GetOptionalDisplaySwapChainBufferUsageFlags@CD3DDeviceLevel1@@QEBAIIW4DXGI_FORMAT@@@Z.c)
 *     ?TryDrawWetAsSuperWet@CWetInkManager@@AEAAJPEAVCDrawingContext@@PEAVCGenericInk@@V?$com_ptr_t@UIDCompositionDirectInkWetStrokePartner@@Uerr_returncode_policy@wil@@@wil@@_NPEA_N@Z @ 0x18017165C (-TryDrawWetAsSuperWet@CWetInkManager@@AEAAJPEAVCDrawingContext@@PEAVCGenericInk@@V-$com_ptr_t@UI.c)
 *     ?TryEnqueueSuperWetScribble@CWetInkManager@@AEAAJPEAVCGenericInk@@PEAUIDCompositionDirectInkWetStrokePartner@@PEAVIRenderTargetDisplay@@AEBUDCompWetInkStrokeRenderState@@PEA_N@Z @ 0x180171848 (-TryEnqueueSuperWetScribble@CWetInkManager@@AEAAJPEAVCGenericInk@@PEAUIDCompositionDirectInkWetS.c)
 *     ?ProcessTipPointBuffer@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GENERICINK_TIPPOINTBUFFER@@@Z @ 0x18018F9E8 (-ProcessTipPointBuffer@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GENERICINK_TIPPOINTBUFFE.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_SuperWetInk@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800BA778 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_SuperWetInk@@@wil@@CA-AW4wil.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800BAD78 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 */

__int64 __fastcall wil::Feature<__WilFeatureTraits_Feature_SuperWetInk>::ReportUsageToService(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int16 v4; // [rsp+54h] [rbp+1Ch]
  int v5; // [rsp+58h] [rbp+20h] BYREF
  __int16 v6; // [rsp+5Ch] [rbp+24h]

  HIBYTE(v4) = BYTE5(a3);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_SuperWetInk>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_SuperWetInk>::GetCachedFeatureEnabledState(a1);
  LOBYTE(v4) = 3;
  v5 = 0;
  v6 = v4;
  return wil_details_FeaturePropertyCache_ReportUsageToService(
           &`wil::Feature<__WilFeatureTraits_Feature_SuperWetInk>::GetFeaturePropertyCache'::`2'::data,
           11148202LL,
           &v5,
           1LL,
           3);
}
