/*
 * XREFs of __delayLoadHelper2 @ 0x180049AA0
 * Callers:
 *     __tailMerge_ksuser_dll @ 0x180060374 (__tailMerge_ksuser_dll.c)
 *     __tailMerge_hrtfapo_dll @ 0x1800603F9 (__tailMerge_hrtfapo_dll.c)
 *     __tailMerge_oleaut32_dll @ 0x180061AD7 (__tailMerge_oleaut32_dll.c)
 *     __tailMerge_api_ms_win_security_base_l1_1_0_dll @ 0x180061B5C (__tailMerge_api_ms_win_security_base_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_security_sddl_l1_1_0_dll @ 0x180061BE1 (__tailMerge_api_ms_win_security_sddl_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_power_base_l1_1_0_dll @ 0x180061C66 (__tailMerge_api_ms_win_power_base_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_devices_config_l1_1_1_dll @ 0x180061CF7 (__tailMerge_api_ms_win_devices_config_l1_1_1_dll.c)
 *     __tailMerge_api_ms_win_power_setting_l1_1_0_dll @ 0x180061D7C (__tailMerge_api_ms_win_power_setting_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_core_com_l1_1_0_dll @ 0x180061E01 (__tailMerge_api_ms_win_core_com_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_devices_query_l1_1_0_dll @ 0x180061EB6 (__tailMerge_api_ms_win_devices_query_l1_1_0_dll.c)
 *     __tailMerge_hid_dll @ 0x180061F47 (__tailMerge_hid_dll.c)
 *     __tailMerge_propsys_dll @ 0x180062068 (__tailMerge_propsys_dll.c)
 *     __tailMerge_api_ms_win_core_winrt_string_l1_1_0_dll @ 0x18006214D (__tailMerge_api_ms_win_core_winrt_string_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_core_winrt_error_l1_1_0_dll @ 0x18006235E (__tailMerge_api_ms_win_core_winrt_error_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_service_core_l1_1_0_dll @ 0x180062437 (__tailMerge_api_ms_win_service_core_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_core_winrt_error_l1_1_1_dll @ 0x180062528 (__tailMerge_api_ms_win_core_winrt_error_l1_1_1_dll.c)
 *     __tailMerge_ssdm_dll @ 0x1800625B6 (__tailMerge_ssdm_dll.c)
 *     __tailMerge_avrt_dll @ 0x18006263B (__tailMerge_avrt_dll.c)
 *     __tailMerge_ext_ms_win_session_winsta_l1_1_0_dll @ 0x180062732 (__tailMerge_ext_ms_win_session_winsta_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_session_wtsapi32_l1_1_0_dll @ 0x1800627C3 (__tailMerge_ext_ms_win_session_wtsapi32_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_audiocore_pal_l1_2_0_dll @ 0x1800628A2 (__tailMerge_ext_ms_win_audiocore_pal_l1_2_0_dll.c)
 *     __tailMerge_ext_ms_win_audiocore_coreaudiopolicymanager_l1_1_0_dll @ 0x180062927 (__tailMerge_ext_ms_win_audiocore_coreaudiopolicymanager_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_audiocore_spatial_l1_1_0_dll @ 0x180062BF2 (__tailMerge_ext_ms_win_audiocore_spatial_l1_1_0_dll.c)
 *     __tailMerge_bcrypt_dll @ 0x180062EF2 (__tailMerge_bcrypt_dll.c)
 *     __tailMerge_api_ms_win_shcore_thread_l1_1_0_dll @ 0x180062F83 (__tailMerge_api_ms_win_shcore_thread_l1_1_0_dll.c)
 *     __tailMerge_rmclient_dll @ 0x1800630D4 (__tailMerge_rmclient_dll.c)
 *     __tailMerge_api_ms_win_rtcore_ntuser_window_l1_1_0_dll @ 0x180063171 (__tailMerge_api_ms_win_rtcore_ntuser_window_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_rtcore_ntuser_synch_l1_1_0_dll @ 0x18006320E (__tailMerge_api_ms_win_rtcore_ntuser_synch_l1_1_0_dll.c)
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
