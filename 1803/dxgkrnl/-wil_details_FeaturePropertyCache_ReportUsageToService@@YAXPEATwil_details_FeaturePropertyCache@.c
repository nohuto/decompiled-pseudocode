/*
 * XREFs of ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000276C
 * Callers:
 *     ?DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1C00A9F40 (-DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D.c)
 *     DxgkGetMonitorInternalInfo @ 0x1C00ABB70 (DxgkGetMonitorInternalInfo.c)
 *     ?BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDMMVIDPN@@@Z @ 0x1C00AE0C8 (-BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDM.c)
 *     MonitorIsMonitorAndDriverWCGCapable @ 0x1C00AE384 (MonitorIsMonitorAndDriverWCGCapable.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C0149978 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     DxgkIsGpuParavirtualizationSupported @ 0x1C015C5E4 (DxgkIsGpuParavirtualizationSupported.c)
 *     ?CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C0172F98 (-CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@E@.c)
 *     ?AccessCheckTargetPolicy@DXGDISPLAYMANAGEROBJECT@@SAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C01E383C (-AccessCheckTargetPolicy@DXGDISPLAYMANAGEROBJECT@@SAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z.c)
 *     ?IsFeatureEnabled@DXGVAILOBJECT@@SAEXZ @ 0x1C01E6BC0 (-IsFeatureEnabled@DXGVAILOBJECT@@SAEXZ.c)
 *     DpiFdoHandleSystemPower @ 0x1C01F0CCC (DpiFdoHandleSystemPower.c)
 *     DpiFdoCreateRelatedObjects @ 0x1C01F24BC (DpiFdoCreateRelatedObjects.c)
 *     DpiFdoInitializeFdo @ 0x1C01F6A34 (DpiFdoInitializeFdo.c)
 *     DpiFdoInitializeGpuVirtualization @ 0x1C01F7750 (DpiFdoInitializeGpuVirtualization.c)
 *     ?DpiBrightnessNotifyMonitorDimming@@YAJPEAU_DEVICE_OBJECT@@KE@Z @ 0x1C020169C (-DpiBrightnessNotifyMonitorDimming@@YAJPEAU_DEVICE_OBJECT@@KE@Z.c)
 *     ?DpiBrightnessSetupInterfaceV2@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0201A60 (-DpiBrightnessSetupInterfaceV2@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0201C30 (-DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0201C7C (-DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiInitializeEx @ 0x1C0205138 (DpiInitializeEx.c)
 *     DpiPdoAddPdo @ 0x1C020B454 (DpiPdoAddPdo.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0236F48 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 *     DriverEntry @ 0x1C023F078 (DriverEntry.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1C00027C8 (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil_details_FeaturePropertyCache_ReportUsageToService(
        __int64 a1,
        __int64 a2,
        const struct FEATURE_LOGGED_TRAITS *a3,
        int a4,
        int a5)
{
  unsigned int v7; // edi

  a5 = 3;
  v7 = a2;
  if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(a1, a2, a4 != 0 ? 2 : 6) )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(v7, a3, 0LL, a4, (const enum wil_ReportingKind *)&a5, 0LL, 0, 1uLL);
  }
}
