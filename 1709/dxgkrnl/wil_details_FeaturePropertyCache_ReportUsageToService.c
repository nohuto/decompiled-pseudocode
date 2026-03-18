/*
 * XREFs of wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C000BFA0
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00B4080 (DxgkDisplayConfigDeviceInfo.c)
 *     MonitorIsMonitorAndDriverWCGCapable @ 0x1C00D22DC (MonitorIsMonitorAndDriverWCGCapable.c)
 *     ?DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1C00E25C8 (-DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D.c)
 *     DpiFdoHandleSystemPower @ 0x1C01011E8 (DpiFdoHandleSystemPower.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C011364C (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     DpiFdoInitializeGpuVirtualization @ 0x1C0114654 (DpiFdoInitializeGpuVirtualization.c)
 *     DxgkIsGpuParavirtualizationSupported @ 0x1C0114750 (DxgkIsGpuParavirtualizationSupported.c)
 *     DpiFdoInitializeFdo @ 0x1C0115904 (DpiFdoInitializeFdo.c)
 *     DpiInitializeEx @ 0x1C011F6D0 (DpiInitializeEx.c)
 *     DriverEntry @ 0x1C0205078 (DriverEntry.c)
 * Callees:
 *     wil_details_FeaturePropertyCache_ReportUsageToServiceDirect @ 0x1C000C000 (wil_details_FeaturePropertyCache_ReportUsageToServiceDirect.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall wil_details_FeaturePropertyCache_ReportUsageToService(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD)
{
  unsigned int v7; // edi
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // rax
  char v9; // [rsp+30h] [rbp-28h]

  a5 = 3;
  v7 = a2;
  result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
                                                                                                     a1,
                                                                                                     a2,
                                                                                                     a4 != 0 ? 2 : 6);
  if ( (_DWORD)result )
  {
    result = g_wil_details_pfnFeatureLoggingHook;
    if ( g_wil_details_pfnFeatureLoggingHook )
    {
      v9 = 0;
      return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))g_wil_details_pfnFeatureLoggingHook(v7, a3, 0LL, a4, &a5, 0LL, v9, 1LL);
    }
  }
  return result;
}
