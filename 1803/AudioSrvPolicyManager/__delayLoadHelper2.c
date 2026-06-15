/*
 * XREFs of __delayLoadHelper2 @ 0x180034A60
 * Callers:
 *     __tailMerge_ondemandbrokerclient_dll @ 0x180035BCE (__tailMerge_ondemandbrokerclient_dll.c)
 *     __tailMerge_ext_ms_win_session_winsta_l1_1_0_dll @ 0x180035C53 (__tailMerge_ext_ms_win_session_winsta_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_session_wtsapi32_l1_1_0_dll @ 0x180035D3E (__tailMerge_ext_ms_win_session_wtsapi32_l1_1_0_dll.c)
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
