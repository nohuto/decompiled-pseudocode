/*
 * XREFs of __delayLoadHelper2 @ 0x180006220
 * Callers:
 *     __tailMerge_api_ms_win_service_management_l1_1_0_dll @ 0x18000651C (__tailMerge_api_ms_win_service_management_l1_1_0_dll.c)
 *     __tailMerge_SspiCli_dll @ 0x1800065A1 (__tailMerge_SspiCli_dll.c)
 *     __tailMerge_api_ms_win_service_winsvc_l1_2_0_dll @ 0x180006626 (__tailMerge_api_ms_win_service_winsvc_l1_2_0_dll.c)
 *     __tailMerge_api_ms_win_security_lsalookup_l1_1_1_dll @ 0x1800066AB (__tailMerge_api_ms_win_security_lsalookup_l1_1_1_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_misc_l1_5_1_dll @ 0x1800067AE (__tailMerge_ext_ms_win_ntuser_misc_l1_5_1_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll @ 0x180006882 (__tailMerge_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_private_l1_3_2_dll @ 0x180006956 (__tailMerge_ext_ms_win_ntuser_private_l1_3_2_dll.c)
 *     __tailMerge_ext_ms_win_security_chambers_l1_1_1_dll @ 0x180006A2A (__tailMerge_ext_ms_win_security_chambers_l1_1_1_dll.c)
 *     __tailMerge_ext_ms_onecore_comp_dwmmonitor_l1_1_0_dll @ 0x180006AAF (__tailMerge_ext_ms_onecore_comp_dwmmonitor_l1_1_0_dll.c)
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
