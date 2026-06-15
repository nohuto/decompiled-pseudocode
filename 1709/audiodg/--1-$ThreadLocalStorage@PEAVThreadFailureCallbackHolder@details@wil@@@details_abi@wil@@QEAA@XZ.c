/*
 * XREFs of ??1?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAA@XZ @ 0x14001C814
 * Callers:
 *     wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks__ @ 0x140021EB0 (wil--details--_dynamic_atexit_destructor_for__g_threadFailureCallbacks__.c)
 * Callees:
 *     <none>
 */

int *wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::~ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>()
{
  int *v0; // rdi
  _QWORD *v1; // rsi
  void *v2; // rbx
  HANDLE ProcessHeap; // rax
  int *result; // rax

  v0 = (int *)&wil::details::g_threadFailureCallbacks;
  do
  {
    v1 = *(_QWORD **)v0;
    while ( v1 )
    {
      v2 = v1;
      v1 = (_QWORD *)v1[2];
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v2);
    }
    *(_QWORD *)v0 = 0LL;
    result = &g_DeviceGraphWnfStateNameCreated;
    v0 += 2;
  }
  while ( v0 != &g_DeviceGraphWnfStateNameCreated );
  return result;
}
