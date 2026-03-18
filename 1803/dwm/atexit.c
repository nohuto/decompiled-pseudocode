/*
 * XREFs of atexit @ 0x140003308
 * Callers:
 *     _dynamic_initializer_for__g_dwmAppHost__ @ 0x140001000 (_dynamic_initializer_for__g_dwmAppHost__.c)
 *     wil::details::_dynamic_initializer_for__g_processLocalData__ @ 0x140001080 (wil--details--_dynamic_initializer_for__g_processLocalData__.c)
 *     wil::details::_dynamic_initializer_for__g_threadFailureCallbacks__ @ 0x140001090 (wil--details--_dynamic_initializer_for__g_threadFailureCallbacks__.c)
 *     pre_c_initialization @ 0x140002DC0 (pre_c_initialization.c)
 *     __scrt_initialize_thread_safe_statics @ 0x140003320 (__scrt_initialize_thread_safe_statics.c)
 * Callees:
 *     _onexit @ 0x1400032B8 (_onexit.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit((_onexit_t)a1) != 0LL) - 1;
}
