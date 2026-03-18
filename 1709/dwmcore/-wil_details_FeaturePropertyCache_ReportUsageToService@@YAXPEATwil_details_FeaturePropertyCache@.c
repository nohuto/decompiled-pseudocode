/*
 * XREFs of ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800781D0
 * Callers:
 *     ?GetDefaultSRGBFormat@CDisplay@@SA?AW4DXGI_FORMAT@@XZ @ 0x180078184 (-GetDefaultSRGBFormat@CDisplay@@SA-AW4DXGI_FORMAT@@XZ.c)
 *     ?TryMakeSuperWet@CWetInkManager@@AEAAJPEAUIDCompositionDirectInkWetStrokePartner@@_KPEAVCDrawingContext@@PEA_N@Z @ 0x18013ABFC (-TryMakeSuperWet@CWetInkManager@@AEAAJPEAUIDCompositionDirectInkWetStrokePartner@@_KPEAVCDrawing.c)
 *     ?ProcessTipPointBuffer@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GENERICINK_TIPPOINTBUFFER@@@Z @ 0x1801672AC (-ProcessTipPointBuffer@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GENERICINK_TIPPOINTBUFFE.c)
 *     ?SupportsD3D12PostPresentProcessing@CD3DDeviceLevel1@@QEBA_NXZ @ 0x1801A8468 (-SupportsD3D12PostPresentProcessing@CD3DDeviceLevel1@@QEBA_NXZ.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x18007820C (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil_details_FeaturePropertyCache_ReportUsageToService(
        __int64 a1,
        __int64 a2,
        const struct FEATURE_LOGGED_TRAITS *a3)
{
  unsigned int v4; // ebx
  int v5; // [rsp+78h] [rbp+20h] BYREF

  v5 = 3;
  v4 = a2;
  if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(a1, a2, 6LL) )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(v4, a3, 0LL, 0, (const enum wil_ReportingKind *)&v5, 0LL, 0, 1uLL);
  }
}
