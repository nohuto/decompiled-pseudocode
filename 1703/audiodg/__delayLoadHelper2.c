/*
 * XREFs of __delayLoadHelper2 @ 0x14001B850
 * Callers:
 *     __tailMerge_OLEAUT32_dll @ 0x14001DD18 (__tailMerge_OLEAUT32_dll.c)
 *     __tailMerge_api_ms_win_core_com_l1_1_1_dll @ 0x14001DD9D (__tailMerge_api_ms_win_core_com_l1_1_1_dll.c)
 *     __tailMerge_api_ms_win_security_base_l1_2_0_dll @ 0x14001DE3A (__tailMerge_api_ms_win_security_base_l1_2_0_dll.c)
 *     __tailMerge_api_ms_win_service_management_l2_1_0_dll @ 0x14001DEBF (__tailMerge_api_ms_win_service_management_l2_1_0_dll.c)
 *     __tailMerge_api_ms_win_security_sddl_l1_1_0_dll @ 0x14001DF44 (__tailMerge_api_ms_win_security_sddl_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_service_management_l1_1_0_dll @ 0x14001DFC9 (__tailMerge_api_ms_win_service_management_l1_1_0_dll.c)
 *     __tailMerge_RPCRT4_dll @ 0x14001E05A (__tailMerge_RPCRT4_dll.c)
 *     __tailMerge_AVRT_dll @ 0x14001E5A1 (__tailMerge_AVRT_dll.c)
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
