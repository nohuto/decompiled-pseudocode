/*
 * XREFs of __delayLoadHelper2 @ 0x1800CA530
 * Callers:
 *     __tailMerge_api_ms_win_security_sddl_l1_1_0_dll @ 0x1800D310C (__tailMerge_api_ms_win_security_sddl_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_misc_l1_5_1_dll @ 0x1800D3191 (__tailMerge_ext_ms_win_ntuser_misc_l1_5_1_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll @ 0x1800D3216 (__tailMerge_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_rectangle_ext_l1_1_0_dll @ 0x1800D32B3 (__tailMerge_ext_ms_win_ntuser_rectangle_ext_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_ntuser_dc_access_l1_1_0_dll @ 0x1800D3368 (__tailMerge_ext_ms_win_rtcore_ntuser_dc_access_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_private_l1_3_2_dll @ 0x1800D33F9 (__tailMerge_ext_ms_win_ntuser_private_l1_3_2_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_gdi_object_l1_1_0_dll @ 0x1800D3496 (__tailMerge_ext_ms_win_rtcore_gdi_object_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_gdi_devcaps_l1_1_0_dll @ 0x1800D351B (__tailMerge_ext_ms_win_rtcore_gdi_devcaps_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_gdi_private_l1_1_0_dll @ 0x1800D35A0 (__tailMerge_ext_ms_win_gdi_private_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_gdi_rgn_l1_1_0_dll @ 0x1800D363D (__tailMerge_ext_ms_win_rtcore_gdi_rgn_l1_1_0_dll.c)
 *     __tailMerge_WindowsCodecs_dll @ 0x1800D36E6 (__tailMerge_WindowsCodecs_dll.c)
 *     __tailMerge_DWrite_dll @ 0x1800D376B (__tailMerge_DWrite_dll.c)
 *     __tailMerge_wuceffects_dll @ 0x1800D37F0 (__tailMerge_wuceffects_dll.c)
 *     __tailMerge_NInput_dll @ 0x1800D3881 (__tailMerge_NInput_dll.c)
 *     __tailMerge_api_ms_win_rtcore_ntuser_wmpointer_l1_1_0_dll @ 0x1800D3966 (__tailMerge_api_ms_win_rtcore_ntuser_wmpointer_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_rtcore_ntuser_private_l1_1_5_dll @ 0x1800D39EB (__tailMerge_api_ms_win_rtcore_ntuser_private_l1_1_5_dll.c)
 *     __tailMerge_ext_ms_win_compositor_hosting_l1_1_1_dll @ 0x1800D42ED (__tailMerge_ext_ms_win_compositor_hosting_l1_1_1_dll.c)
 *     __tailMerge_ext_ms_win_mininput_systeminputhost_l1_1_0_dll @ 0x1800D44AE (__tailMerge_ext_ms_win_mininput_systeminputhost_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_mit_l1_1_0_dll @ 0x1800D453F (__tailMerge_ext_ms_win_ntuser_mit_l1_1_0_dll.c)
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
