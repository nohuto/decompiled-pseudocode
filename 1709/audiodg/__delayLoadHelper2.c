/*
 * XREFs of __delayLoadHelper2 @ 0x14001C0B0
 * Callers:
 *     __tailMerge_OLEAUT32_dll @ 0x14001DA98 (__tailMerge_OLEAUT32_dll.c)
 *     __tailMerge_api_ms_win_core_com_l1_1_0_dll @ 0x14001DB1D (__tailMerge_api_ms_win_core_com_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_security_base_l1_1_0_dll @ 0x14001DBBA (__tailMerge_api_ms_win_security_base_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_service_management_l2_1_0_dll @ 0x14001DC3F (__tailMerge_api_ms_win_service_management_l2_1_0_dll.c)
 *     __tailMerge_api_ms_win_security_sddl_l1_1_0_dll @ 0x14001DCC4 (__tailMerge_api_ms_win_security_sddl_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_service_management_l1_1_0_dll @ 0x14001DD49 (__tailMerge_api_ms_win_service_management_l1_1_0_dll.c)
 *     __tailMerge_RPCRT4_dll @ 0x14001DDDA (__tailMerge_RPCRT4_dll.c)
 *     __tailMerge_api_ms_win_core_com_l1_1_1_dll @ 0x14001DF8E (__tailMerge_api_ms_win_core_com_l1_1_1_dll.c)
 *     __tailMerge_AVRT_dll @ 0x14001E389 (__tailMerge_AVRT_dll.c)
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
