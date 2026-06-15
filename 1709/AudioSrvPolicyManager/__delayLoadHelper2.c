/*
 * XREFs of __delayLoadHelper2 @ 0x180026580
 * Callers:
 *     __tailMerge_OnDemandBrokerClient_dll @ 0x1800276F0 (__tailMerge_OnDemandBrokerClient_dll.c)
 *     __tailMerge_ext_ms_win_session_winsta_l1_1_0_dll @ 0x180027775 (__tailMerge_ext_ms_win_session_winsta_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_session_wtsapi32_l1_1_0_dll @ 0x180027862 (__tailMerge_ext_ms_win_session_wtsapi32_l1_1_0_dll.c)
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
