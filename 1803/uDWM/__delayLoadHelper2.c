/*
 * XREFs of __delayLoadHelper2 @ 0x1800489D0
 * Callers:
 *     __tailMerge_api_ms_win_core_com_l1_1_0_dll @ 0x18004928C (__tailMerge_api_ms_win_core_com_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_service_management_l1_1_0_dll @ 0x180049311 (__tailMerge_api_ms_win_service_management_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_service_management_l2_1_0_dll @ 0x1800493A2 (__tailMerge_api_ms_win_service_management_l2_1_0_dll.c)
 *     __tailMerge_ext_ms_win_uxtheme_themes_l1_1_0_dll @ 0x180049469 (__tailMerge_ext_ms_win_uxtheme_themes_l1_1_0_dll.c)
 *     __tailMerge_comctl32_dll @ 0x1800495B6 (__tailMerge_comctl32_dll.c)
 *     __tailMerge_uxtheme_dll @ 0x180049647 (__tailMerge_uxtheme_dll.c)
 *     __tailMerge_windowscodecs_dll @ 0x1800496E4 (__tailMerge_windowscodecs_dll.c)
 *     __tailMerge_winsta_dll @ 0x180049769 (__tailMerge_winsta_dll.c)
 *     __tailMerge_d2d1_dll @ 0x1800497EE (__tailMerge_d2d1_dll.c)
 *     __tailMerge_d3d11_dll @ 0x180049873 (__tailMerge_d3d11_dll.c)
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
