/*
 * XREFs of __delayLoadHelper2 @ 0x18004A680
 * Callers:
 *     __tailMerge_api_ms_win_core_com_l1_1_1_dll @ 0x18004D07C (__tailMerge_api_ms_win_core_com_l1_1_1_dll.c)
 *     __tailMerge_api_ms_win_service_management_l1_1_0_dll @ 0x18004D126 (__tailMerge_api_ms_win_service_management_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_service_management_l2_1_0_dll @ 0x18004D1B7 (__tailMerge_api_ms_win_service_management_l2_1_0_dll.c)
 *     __tailMerge_ext_ms_win_uxtheme_themes_l1_1_0_dll @ 0x18004D2C2 (__tailMerge_ext_ms_win_uxtheme_themes_l1_1_0_dll.c)
 *     __tailMerge_COMCTL32_dll @ 0x18004D3B3 (__tailMerge_COMCTL32_dll.c)
 *     __tailMerge_UxTheme_dll @ 0x18004D444 (__tailMerge_UxTheme_dll.c)
 *     __tailMerge_WindowsCodecs_dll @ 0x18004D4E1 (__tailMerge_WindowsCodecs_dll.c)
 *     __tailMerge_WINSTA_dll @ 0x18004D566 (__tailMerge_WINSTA_dll.c)
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
