/*
 * XREFs of __delayLoadHelper2 @ 0x140002C60
 * Callers:
 *     __tailMerge_ext_ms_win_ntuser_gui_l1_3_0_dll @ 0x14000440A (__tailMerge_ext_ms_win_ntuser_gui_l1_3_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_gdi_devcaps_l1_1_0_dll @ 0x14000448F (__tailMerge_ext_ms_win_rtcore_gdi_devcaps_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_ntuser_dc_access_l1_1_0_dll @ 0x140004514 (__tailMerge_ext_ms_win_rtcore_ntuser_dc_access_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll @ 0x1400045A5 (__tailMerge_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_session_winsta_l1_1_0_dll @ 0x14000467A (__tailMerge_ext_ms_win_session_winsta_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_composition_ghost_l1_1_0_dll @ 0x140004766 (__tailMerge_ext_ms_win_composition_ghost_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_imm_l1_1_0_dll @ 0x14000485E (__tailMerge_ext_ms_win_imm_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_misc_l1_1_0_dll @ 0x140004942 (__tailMerge_ext_ms_win_ntuser_misc_l1_1_0_dll.c)
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
