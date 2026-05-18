/*
 * XREFs of atexit @ 0x180007518
 * Callers:
 *     _dynamic_initializer_for__gDwmStateLock__ @ 0x180001120 (_dynamic_initializer_for__gDwmStateLock__.c)
 *     _dynamic_initializer_for__g_PortClient__ @ 0x180001150 (_dynamic_initializer_for__g_PortClient__.c)
 *     wil::details::_dynamic_initializer_for__g_processLocalData__ @ 0x1800011A0 (wil--details--_dynamic_initializer_for__g_processLocalData__.c)
 *     wil::details::_dynamic_initializer_for__g_threadFailureCallbacks__ @ 0x1800011B0 (wil--details--_dynamic_initializer_for__g_threadFailureCallbacks__.c)
 * Callees:
 *     _onexit @ 0x1800074C8 (_onexit.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit((_onexit_t)a1) != 0LL) - 1;
}
