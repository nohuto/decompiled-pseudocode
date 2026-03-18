/*
 * XREFs of __delayLoadHelper2 @ 0x140002CB0
 * Callers:
 *     __tailMerge_ext_ms_win_ntuser_gui_l1_3_0_dll @ 0x140003EC6 (__tailMerge_ext_ms_win_ntuser_gui_l1_3_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_gdi_devcaps_l1_1_0_dll @ 0x140003F4B (__tailMerge_ext_ms_win_rtcore_gdi_devcaps_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_ntuser_dc_access_l1_1_0_dll @ 0x140003FD0 (__tailMerge_ext_ms_win_rtcore_ntuser_dc_access_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll @ 0x140004061 (__tailMerge_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_session_winsta_l1_1_0_dll @ 0x140004136 (__tailMerge_ext_ms_win_session_winsta_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_composition_ghost_l1_1_0_dll @ 0x140004222 (__tailMerge_ext_ms_win_composition_ghost_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_imm_l1_1_0_dll @ 0x14000431A (__tailMerge_ext_ms_win_imm_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_misc_l1_1_0_dll @ 0x140004402 (__tailMerge_ext_ms_win_ntuser_misc_l1_1_0_dll.c)
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
