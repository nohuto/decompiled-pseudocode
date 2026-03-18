/*
 * XREFs of sub_1400010C0 @ 0x1400010C0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1400043A8 (memset_0.c)
 */

int sub_1400010C0()
{
  memset_0(&wil::details::g_threadFailureCallbacks, 0, 0x50uLL);
  return atexit((void (__cdecl *)())wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::~ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>);
}
