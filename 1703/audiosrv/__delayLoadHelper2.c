/*
 * XREFs of __delayLoadHelper2 @ 0x18002EDC0
 * Callers:
 *     __tailMerge_ksuser_dll @ 0x1800486F9 (__tailMerge_ksuser_dll.c)
 *     __tailMerge_OLEAUT32_dll @ 0x180049D76 (__tailMerge_OLEAUT32_dll.c)
 *     __tailMerge_api_ms_win_service_management_l1_1_0_dll @ 0x180049DFB (__tailMerge_api_ms_win_service_management_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_service_management_l2_1_0_dll @ 0x180049E8C (__tailMerge_api_ms_win_service_management_l2_1_0_dll.c)
 *     __tailMerge_api_ms_win_core_com_l1_1_1_dll @ 0x180049F35 (__tailMerge_api_ms_win_core_com_l1_1_1_dll.c)
 *     __tailMerge_api_ms_win_security_base_l1_2_0_dll @ 0x180049FC6 (__tailMerge_api_ms_win_security_base_l1_2_0_dll.c)
 *     __tailMerge_api_ms_win_security_sddl_l1_1_0_dll @ 0x18004A04B (__tailMerge_api_ms_win_security_sddl_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_power_base_l1_1_0_dll @ 0x18004A0D0 (__tailMerge_api_ms_win_power_base_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_devices_config_l1_1_1_dll @ 0x18004A161 (__tailMerge_api_ms_win_devices_config_l1_1_1_dll.c)
 *     __tailMerge_api_ms_win_power_setting_l1_1_0_dll @ 0x18004A1E6 (__tailMerge_api_ms_win_power_setting_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_devices_query_l1_1_1_dll @ 0x18004A28F (__tailMerge_api_ms_win_devices_query_l1_1_1_dll.c)
 *     __tailMerge_PROPSYS_dll @ 0x18004A398 (__tailMerge_PROPSYS_dll.c)
 *     __tailMerge_api_ms_win_core_winrt_error_l1_1_1_dll @ 0x18004A5FD (__tailMerge_api_ms_win_core_winrt_error_l1_1_1_dll.c)
 *     __tailMerge_api_ms_win_service_core_l1_1_1_dll @ 0x18004A6CA (__tailMerge_api_ms_win_service_core_l1_1_1_dll.c)
 *     __tailMerge_HID_DLL @ 0x18004A7AF (__tailMerge_HID_DLL.c)
 *     __tailMerge_SSDM_dll @ 0x18004A864 (__tailMerge_SSDM_dll.c)
 *     __tailMerge_AVRT_dll @ 0x18004A8F2 (__tailMerge_AVRT_dll.c)
 *     __tailMerge_ext_ms_win_session_winsta_l1_1_0_dll @ 0x18004A9EA (__tailMerge_ext_ms_win_session_winsta_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_session_wtsapi32_l1_1_0_dll @ 0x18004AA7B (__tailMerge_ext_ms_win_session_wtsapi32_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_audiocore_pal_l1_2_0_dll @ 0x18004AB5A (__tailMerge_ext_ms_win_audiocore_pal_l1_2_0_dll.c)
 *     __tailMerge_ext_ms_win_audiocore_coreaudiopolicymanager_l1_1_0_dll @ 0x18004ABDF (__tailMerge_ext_ms_win_audiocore_coreaudiopolicymanager_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_audiocore_spatial_l1_1_0_dll @ 0x18004AEAA (__tailMerge_ext_ms_win_audiocore_spatial_l1_1_0_dll.c)
 *     __tailMerge_bcrypt_dll @ 0x18004B182 (__tailMerge_bcrypt_dll.c)
 *     __tailMerge_api_ms_win_core_winrt_string_l1_1_0_dll @ 0x18004B207 (__tailMerge_api_ms_win_core_winrt_string_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_shcore_thread_l1_1_0_dll @ 0x18004B28C (__tailMerge_api_ms_win_shcore_thread_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_rtcore_ntuser_window_l1_1_0_dll @ 0x18004B305 (__tailMerge_api_ms_win_rtcore_ntuser_window_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_rtcore_ntuser_synch_l1_1_0_dll @ 0x18004B432 (__tailMerge_api_ms_win_rtcore_ntuser_synch_l1_1_0_dll.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _delayLoadHelper2(__int64 a1, __int64 a2)
{
  return ResolveDelayLoadedAPI(
           &_ImageBase,
           a1,
           _pfnDefaultDliFailureHook2,
           DelayLoadFailureHook,
           a2,
           _ResolveDelayLoadedAPIFlags);
}
