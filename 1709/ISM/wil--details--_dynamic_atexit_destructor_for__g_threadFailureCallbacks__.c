/*
 * XREFs of wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks__ @ 0x1800D2640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

union _RTL_RUN_ONCE *wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks__()
{
  union _RTL_RUN_ONCE *v0; // rdi
  union _RTL_RUN_ONCE v1; // rsi
  void *Ptr; // rbx
  HANDLE ProcessHeap; // rax
  union _RTL_RUN_ONCE *result; // rax

  v0 = (union _RTL_RUN_ONCE *)&wil::details::g_threadFailureCallbacks;
  do
  {
    v1.Ptr = v0->Ptr;
    while ( v1.Ptr )
    {
      Ptr = v1.Ptr;
      v1.Ptr = *(PVOID *)((char *)v1.Ptr + 16);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, Ptr);
    }
    v0->Ptr = 0LL;
    result = &`ControllerProcessorTelemetry::Instance'::`2'::wrapper;
    ++v0;
  }
  while ( v0 != &`ControllerProcessorTelemetry::Instance'::`2'::wrapper );
  return result;
}
