/*
 * XREFs of __delayLoadHelper2 @ 0x180044E70
 * Callers:
 *     __tailMerge_api_ms_win_core_com_l1_1_0_dll @ 0x18004594A (__tailMerge_api_ms_win_core_com_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_service_management_l1_1_0_dll @ 0x1800459CF (__tailMerge_api_ms_win_service_management_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_service_management_l2_1_0_dll @ 0x180045A60 (__tailMerge_api_ms_win_service_management_l2_1_0_dll.c)
 *     __tailMerge_ext_ms_win_uxtheme_themes_l1_1_0_dll @ 0x180045B27 (__tailMerge_ext_ms_win_uxtheme_themes_l1_1_0_dll.c)
 *     __tailMerge_COMCTL32_dll @ 0x180045C66 (__tailMerge_COMCTL32_dll.c)
 *     __tailMerge_UxTheme_dll @ 0x180045CF7 (__tailMerge_UxTheme_dll.c)
 *     __tailMerge_WindowsCodecs_dll @ 0x180045D94 (__tailMerge_WindowsCodecs_dll.c)
 *     __tailMerge_WINSTA_dll @ 0x180045E19 (__tailMerge_WINSTA_dll.c)
 *     __tailMerge_d2d1_dll @ 0x180045E9E (__tailMerge_d2d1_dll.c)
 *     __tailMerge_d3d11_dll @ 0x180045F23 (__tailMerge_d3d11_dll.c)
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
