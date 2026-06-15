/*
 * XREFs of __delayLoadHelper2 @ 0x14001B170
 * Callers:
 *     __tailMerge_oleaut32_dll @ 0x14001CB4E (__tailMerge_oleaut32_dll.c)
 *     __tailMerge_api_ms_win_core_com_l1_1_0_dll @ 0x14001CBD3 (__tailMerge_api_ms_win_core_com_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_security_base_l1_1_0_dll @ 0x14001CC70 (__tailMerge_api_ms_win_security_base_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_service_management_l2_1_0_dll @ 0x14001CCF5 (__tailMerge_api_ms_win_service_management_l2_1_0_dll.c)
 *     __tailMerge_api_ms_win_security_sddl_l1_1_0_dll @ 0x14001CD7A (__tailMerge_api_ms_win_security_sddl_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_service_management_l1_1_0_dll @ 0x14001CDFF (__tailMerge_api_ms_win_service_management_l1_1_0_dll.c)
 *     __tailMerge_rpcrt4_dll @ 0x14001CE90 (__tailMerge_rpcrt4_dll.c)
 *     __tailMerge_api_ms_win_core_com_l1_1_1_dll @ 0x14001D04E (__tailMerge_api_ms_win_core_com_l1_1_1_dll.c)
 *     __tailMerge_avrt_dll @ 0x14001D441 (__tailMerge_avrt_dll.c)
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
