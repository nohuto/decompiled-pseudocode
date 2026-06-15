/*
 * XREFs of atexit @ 0x18002700C
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_processLocalData__ @ 0x180001170 (wil--details--_dynamic_initializer_for__g_processLocalData__.c)
 *     wil::details::_dynamic_initializer_for__g_threadFailureCallbacks__ @ 0x180001180 (wil--details--_dynamic_initializer_for__g_threadFailureCallbacks__.c)
 *     PickerHostContextManager::_dynamic_initializer_for__s_PickerHostContextList__ @ 0x1800011E0 (PickerHostContextManager--_dynamic_initializer_for__s_PickerHostContextList__.c)
 *     PickerHostContextManager::_dynamic_initializer_for__s_csPickerHostContextList__ @ 0x1800011F0 (PickerHostContextManager--_dynamic_initializer_for__s_csPickerHostContextList__.c)
 *     _dynamic_initializer_for__s_HostedAppInteractivityManager__ @ 0x180001210 (_dynamic_initializer_for__s_HostedAppInteractivityManager__.c)
 *     _dynamic_initializer_for__TsSessionList__ @ 0x180001260 (_dynamic_initializer_for__TsSessionList__.c)
 *     ATL::_dynamic_initializer_for__g_strheap__ @ 0x180001270 (ATL--_dynamic_initializer_for__g_strheap__.c)
 *     ATL::_dynamic_initializer_for__g_strmgr__ @ 0x1800012B0 (ATL--_dynamic_initializer_for__g_strmgr__.c)
 *     ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x1800012C0 (ATL--_dynamic_initializer_for___AtlBaseModule__.c)
 *     ATL::_dynamic_initializer_for___AtlWinModule__ @ 0x180001340 (ATL--_dynamic_initializer_for___AtlWinModule__.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x1800044E8 (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 * Callees:
 *     _onexit @ 0x180026FBC (_onexit.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit((_onexit_t)a1) != 0LL) - 1;
}
