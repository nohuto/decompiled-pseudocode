/*
 * XREFs of sub_180009BF0 @ 0x180009BF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int *sub_180009BF0()
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
    result = &dword_1800129A0;
    v0 += 2;
  }
  while ( v0 != &dword_1800129A0 );
  return result;
}
