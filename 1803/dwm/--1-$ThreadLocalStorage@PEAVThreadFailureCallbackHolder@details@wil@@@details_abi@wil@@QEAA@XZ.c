/*
 * XREFs of ??1?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAA@XZ @ 0x140002CF0
 * Callers:
 *     wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks__ @ 0x1400064D0 (wil--details--_dynamic_atexit_destructor_for__g_threadFailureCallbacks__.c)
 * Callees:
 *     <none>
 */

unsigned __int8 (**wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::~ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>())(void)
{
  unsigned __int8 (**v0)(void); // rdi
  unsigned __int8 (*v1)(void); // rsi
  unsigned __int8 (*v2)(void); // rbx
  HANDLE ProcessHeap; // rax
  unsigned __int8 (**result)(void); // rax

  v0 = (unsigned __int8 (**)(void))&wil::details::g_threadFailureCallbacks;
  do
  {
    v1 = *v0;
    while ( v1 )
    {
      v2 = v1;
      v1 = (unsigned __int8 (*)(void))*((_QWORD *)v1 + 2);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v2);
    }
    *v0 = 0LL;
    result = &wil::details::g_pfnRtlDllShutdownInProgress;
    ++v0;
  }
  while ( v0 != &wil::details::g_pfnRtlDllShutdownInProgress );
  return result;
}
