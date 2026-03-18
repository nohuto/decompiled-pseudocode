/*
 * XREFs of wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks__ @ 0x1400064D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned __int8 (**__fastcall wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks__())(void)
{
  return wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::~ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>();
}
