/*
 * XREFs of __delayLoadHelper2 @ 0x1800C0DF0
 * Callers:
 *     __tailMerge_api_ms_win_security_sddl_l1_1_0_dll @ 0x1800C324A (__tailMerge_api_ms_win_security_sddl_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_misc_l1_1_0_dll @ 0x1800C32CF (__tailMerge_ext_ms_win_ntuser_misc_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll @ 0x1800C3354 (__tailMerge_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_rectangle_ext_l1_1_0_dll @ 0x1800C33F1 (__tailMerge_ext_ms_win_ntuser_rectangle_ext_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_ntuser_dc_access_l1_1_0_dll @ 0x1800C34A6 (__tailMerge_ext_ms_win_rtcore_ntuser_dc_access_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_private_l1_1_1_dll @ 0x1800C3537 (__tailMerge_ext_ms_win_ntuser_private_l1_1_1_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_gdi_object_l1_1_0_dll @ 0x1800C35D4 (__tailMerge_ext_ms_win_rtcore_gdi_object_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_gdi_devcaps_l1_1_0_dll @ 0x1800C3659 (__tailMerge_ext_ms_win_rtcore_gdi_devcaps_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_gdi_private_l1_1_0_dll @ 0x1800C36DE (__tailMerge_ext_ms_win_gdi_private_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_gdi_rgn_l1_1_0_dll @ 0x1800C377B (__tailMerge_ext_ms_win_rtcore_gdi_rgn_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_mit_l1_1_0_dll @ 0x1800C3824 (__tailMerge_ext_ms_win_ntuser_mit_l1_1_0_dll.c)
 *     __tailMerge_WindowsCodecs_dll @ 0x1800C38CD (__tailMerge_WindowsCodecs_dll.c)
 *     __tailMerge_DWrite_dll @ 0x1800C3952 (__tailMerge_DWrite_dll.c)
 *     __tailMerge_wuceffects_dll @ 0x1800C39D7 (__tailMerge_wuceffects_dll.c)
 *     __tailMerge_NInput_dll @ 0x1800C3A68 (__tailMerge_NInput_dll.c)
 *     __tailMerge_api_ms_win_rtcore_ntuser_wmpointer_l1_1_0_dll @ 0x1800C3B4D (__tailMerge_api_ms_win_rtcore_ntuser_wmpointer_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_rtcore_ntuser_private_l1_1_4_dll @ 0x1800C3BD2 (__tailMerge_api_ms_win_rtcore_ntuser_private_l1_1_4_dll.c)
 *     __tailMerge_ext_ms_win_compositor_hosting_l1_1_0_dll @ 0x1800C450F (__tailMerge_ext_ms_win_compositor_hosting_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_compositor_hosting_l1_2_0_dll @ 0x1800C45E2 (__tailMerge_ext_ms_win_compositor_hosting_l1_2_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_private_l1_1_0_dll @ 0x1800C468B (__tailMerge_ext_ms_win_ntuser_private_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_composition_holographic_l1_1_0_dll @ 0x1800C481A (__tailMerge_ext_ms_win_composition_holographic_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_mininput_systeminputhost_l1_1_0_dll @ 0x1800C48EE (__tailMerge_ext_ms_win_mininput_systeminputhost_l1_1_0_dll.c)
 *     __tailMerge_d3d12_dll @ 0x1800C49A3 (__tailMerge_d3d12_dll.c)
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
