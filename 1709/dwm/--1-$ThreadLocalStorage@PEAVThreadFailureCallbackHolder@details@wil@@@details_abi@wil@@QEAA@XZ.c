/*
 * XREFs of ??1?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAA@XZ @ 0x140002CA0
 * Callers:
 *     j_??1?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAA@XZ @ 0x140006AD0 (j_--1-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAA@XZ.c)
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
