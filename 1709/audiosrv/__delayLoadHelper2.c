/*
 * XREFs of __delayLoadHelper2 @ 0x1800DDF20
 * Callers:
 *     __tailMerge_ksuser_dll @ 0x180032556 (__tailMerge_ksuser_dll.c)
 *     __tailMerge_HrtfApo_dll @ 0x1800325DB (__tailMerge_HrtfApo_dll.c)
 *     __tailMerge_OLEAUT32_dll @ 0x180033C46 (__tailMerge_OLEAUT32_dll.c)
 *     __tailMerge_api_ms_win_core_com_l1_1_0_dll @ 0x180033CCB (__tailMerge_api_ms_win_core_com_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_security_base_l1_1_0_dll @ 0x180033D5C (__tailMerge_api_ms_win_security_base_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_security_sddl_l1_1_0_dll @ 0x180033DE1 (__tailMerge_api_ms_win_security_sddl_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_power_base_l1_1_0_dll @ 0x180033E66 (__tailMerge_api_ms_win_power_base_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_devices_config_l1_1_1_dll @ 0x180033EF7 (__tailMerge_api_ms_win_devices_config_l1_1_1_dll.c)
 *     __tailMerge_api_ms_win_power_setting_l1_1_0_dll @ 0x180033F7C (__tailMerge_api_ms_win_power_setting_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_devices_query_l1_1_0_dll @ 0x180034025 (__tailMerge_api_ms_win_devices_query_l1_1_0_dll.c)
 *     __tailMerge_HID_DLL @ 0x1800340B6 (__tailMerge_HID_DLL.c)
 *     __tailMerge_PROPSYS_dll @ 0x1800341E3 (__tailMerge_PROPSYS_dll.c)
 *     __tailMerge_api_ms_win_core_winrt_error_l1_1_0_dll @ 0x180034448 (__tailMerge_api_ms_win_core_winrt_error_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_service_core_l1_1_0_dll @ 0x180034515 (__tailMerge_api_ms_win_service_core_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_core_winrt_string_l1_1_0_dll @ 0x1800345EE (__tailMerge_api_ms_win_core_winrt_string_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_core_winrt_error_l1_1_1_dll @ 0x18003468B (__tailMerge_api_ms_win_core_winrt_error_l1_1_1_dll.c)
 *     __tailMerge_SSDM_dll @ 0x180034716 (__tailMerge_SSDM_dll.c)
 *     __tailMerge_AVRT_dll @ 0x18003479B (__tailMerge_AVRT_dll.c)
 *     __tailMerge_ext_ms_win_session_winsta_l1_1_0_dll @ 0x180034892 (__tailMerge_ext_ms_win_session_winsta_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_session_wtsapi32_l1_1_0_dll @ 0x180034923 (__tailMerge_ext_ms_win_session_wtsapi32_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_audiocore_pal_l1_2_0_dll @ 0x180034A02 (__tailMerge_ext_ms_win_audiocore_pal_l1_2_0_dll.c)
 *     __tailMerge_ext_ms_win_audiocore_coreaudiopolicymanager_l1_1_0_dll @ 0x180034A87 (__tailMerge_ext_ms_win_audiocore_coreaudiopolicymanager_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_audiocore_spatial_l1_1_0_dll @ 0x180034D52 (__tailMerge_ext_ms_win_audiocore_spatial_l1_1_0_dll.c)
 *     __tailMerge_bcrypt_dll @ 0x180035052 (__tailMerge_bcrypt_dll.c)
 *     __tailMerge_api_ms_win_shcore_thread_l1_1_0_dll @ 0x1800350E3 (__tailMerge_api_ms_win_shcore_thread_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_rtcore_ntuser_window_l1_1_0_dll @ 0x18003515C (__tailMerge_api_ms_win_rtcore_ntuser_window_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_rtcore_ntuser_synch_l1_1_0_dll @ 0x180035259 (__tailMerge_api_ms_win_rtcore_ntuser_synch_l1_1_0_dll.c)
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
