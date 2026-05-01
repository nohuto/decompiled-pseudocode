/*
 * XREFs of __delayLoadHelper2 @ 0x18003E020
 * Callers:
 *     __tailMerge_api_ms_win_dx_d3dkmt_l1_1_3_dll @ 0x18003EE8E (__tailMerge_api_ms_win_dx_d3dkmt_l1_1_3_dll.c)
 *     __tailMerge_api_ms_win_dx_d3dkmt_l1_1_2_dll @ 0x18003EF13 (__tailMerge_api_ms_win_dx_d3dkmt_l1_1_2_dll.c)
 *     __tailMerge_ext_ms_win_core_resourcepolicyserver_l1_1_0_dll @ 0x18003EFC8 (__tailMerge_ext_ms_win_core_resourcepolicyserver_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_core_resourcepolicyserver_l1_1_1_dll @ 0x18003F09E (__tailMerge_ext_ms_win_core_resourcepolicyserver_l1_1_1_dll.c)
 *     __tailMerge_ext_ms_win_session_usertoken_l1_1_0_dll @ 0x18003F192 (__tailMerge_ext_ms_win_session_usertoken_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_com_psmregister_l1_1_0_dll @ 0x18003F266 (__tailMerge_ext_ms_win_com_psmregister_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_core_resourcepolicy_l1_1_0_dll @ 0x18003F2EB (__tailMerge_ext_ms_win_core_resourcepolicy_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_core_xbrm_l1_1_0_dll @ 0x18003F370 (__tailMerge_ext_ms_win_core_xbrm_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_edputil_policy_l1_1_0_dll @ 0x18003F476 (__tailMerge_ext_ms_win_edputil_policy_l1_1_0_dll.c)
 *     __tailMerge_feclient_dll @ 0x18003F520 (__tailMerge_feclient_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_gui_l1_3_0_dll @ 0x18003F5FE (__tailMerge_ext_ms_win_ntuser_gui_l1_3_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_message_l1_1_0_dll @ 0x18003F6D2 (__tailMerge_ext_ms_win_ntuser_message_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_windowstation_l1_1_0_dll @ 0x18003F7F6 (__tailMerge_ext_ms_win_ntuser_windowstation_l1_1_0_dll.c)
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
