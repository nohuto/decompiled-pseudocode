/*
 * XREFs of __tailMerge_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll @ 0x1800E2302
 * Callers:
 *     __imp_load_GetMonitorInfoW @ 0x1800E22F6 (__imp_load_GetMonitorInfoW.c)
 *     __imp_load_EnumDisplayMonitors @ 0x1800E237B (__imp_load_EnumDisplayMonitors.c)
 *     __imp_load_GetSystemMetrics @ 0x1800E26A6 (__imp_load_GetSystemMetrics.c)
 *     __imp_load_SystemParametersInfoW @ 0x1800E26B2 (__imp_load_SystemParametersInfoW.c)
 *     __imp_load_DisplayConfigGetDeviceInfo @ 0x1800E26BE (__imp_load_DisplayConfigGetDeviceInfo.c)
 *     __imp_load_GetDisplayConfigBufferSizes @ 0x1800E26CA (__imp_load_GetDisplayConfigBufferSizes.c)
 *     __imp_load_QueryDisplayConfig @ 0x1800E26D6 (__imp_load_QueryDisplayConfig.c)
 *     __imp_load_MonitorFromPoint @ 0x1800E26E2 (__imp_load_MonitorFromPoint.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x18002D5D0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
