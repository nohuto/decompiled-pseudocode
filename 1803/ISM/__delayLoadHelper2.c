/*
 * XREFs of __delayLoadHelper2 @ 0x18002D5D0
 * Callers:
 *     __tailMerge_ext_ms_win_ntuser_mit_l1_1_0_dll @ 0x1800E1F66 (__tailMerge_ext_ms_win_ntuser_mit_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll @ 0x1800E2302 (__tailMerge_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_window_l1_1_0_dll @ 0x1800E2393 (__tailMerge_ext_ms_win_ntuser_window_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_gdi_devcaps_l1_1_0_dll @ 0x1800E2418 (__tailMerge_ext_ms_win_rtcore_gdi_devcaps_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_ntuser_dc_access_l1_1_0_dll @ 0x1800E249D (__tailMerge_ext_ms_win_rtcore_ntuser_dc_access_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_gdi_dpiinfo_l1_1_0_dll @ 0x1800E252E (__tailMerge_api_ms_win_gdi_dpiinfo_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_rtcore_session_l1_1_1_dll @ 0x1800E25B3 (__tailMerge_api_ms_win_rtcore_session_l1_1_1_dll.c)
 *     __tailMerge_api_ms_win_ntuser_rectangle_l1_1_0_dll @ 0x1800E26FA (__tailMerge_api_ms_win_ntuser_rectangle_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_window_l1_1_2_dll @ 0x1800E277F (__tailMerge_ext_ms_win_ntuser_window_l1_1_2_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_window_l1_1_1_dll @ 0x1800E2810 (__tailMerge_ext_ms_win_ntuser_window_l1_1_1_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_windowstation_l1_1_0_dll @ 0x1800E28AD (__tailMerge_ext_ms_win_ntuser_windowstation_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_security_accesshlpr_l1_1_0_dll @ 0x1800E293E (__tailMerge_api_ms_win_security_accesshlpr_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_mininput_inputhost_l1_1_0_dll @ 0x1800E29CF (__tailMerge_ext_ms_win_mininput_inputhost_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_rim_l1_1_0_dll @ 0x1800E2AB4 (__tailMerge_ext_ms_win_ntuser_rim_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_ntuser_dpi_l1_1_0_dll @ 0x1800E2EB3 (__tailMerge_ext_ms_win_rtcore_ntuser_dpi_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_rtcore_ntuser_wmpointer_l1_1_0_dll @ 0x1800E2F38 (__tailMerge_api_ms_win_rtcore_ntuser_wmpointer_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_rim_l1_1_1_dll @ 0x1800E2FF9 (__tailMerge_ext_ms_win_ntuser_rim_l1_1_1_dll.c)
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
