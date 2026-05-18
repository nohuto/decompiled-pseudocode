/*
 * XREFs of __delayLoadHelper2 @ 0x180007080
 * Callers:
 *     __tailMerge_api_ms_win_service_management_l1_1_0_dll @ 0x180007ACE (__tailMerge_api_ms_win_service_management_l1_1_0_dll.c)
 *     __tailMerge_sspicli_dll @ 0x180007B53 (__tailMerge_sspicli_dll.c)
 *     __tailMerge_api_ms_win_service_winsvc_l1_1_0_dll @ 0x180007BD8 (__tailMerge_api_ms_win_service_winsvc_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_security_lsalookup_l1_1_0_dll @ 0x180007C5D (__tailMerge_api_ms_win_security_lsalookup_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_misc_l1_1_0_dll @ 0x180007D62 (__tailMerge_ext_ms_win_ntuser_misc_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll @ 0x180007E36 (__tailMerge_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_private_l1_1_1_dll @ 0x180007F0A (__tailMerge_ext_ms_win_ntuser_private_l1_1_1_dll.c)
 *     __tailMerge_ext_ms_win_security_chambers_l1_1_0_dll @ 0x180007F8F (__tailMerge_ext_ms_win_security_chambers_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_onecore_comp_dwmmonitor_l1_1_0_dll @ 0x180008014 (__tailMerge_ext_ms_onecore_comp_dwmmonitor_l1_1_0_dll.c)
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
