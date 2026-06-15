/*
 * XREFs of wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks__ @ 0x180029400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks__()
{
  _QWORD **v0; // rdi
  _QWORD *v1; // rsi
  void *v2; // rbx
  HANDLE ProcessHeap; // rax
  void *result; // rax

  v0 = (_QWORD **)&wil::details::g_threadFailureCallbacks;
  do
  {
    v1 = *v0;
    while ( v1 )
    {
      v2 = v1;
      v1 = (_QWORD *)v1[2];
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v2);
    }
    *v0 = 0LL;
    result = &_dyn_tls_init_callback;
    ++v0;
  }
  while ( v0 != (_QWORD **)&_dyn_tls_init_callback );
  return result;
}
