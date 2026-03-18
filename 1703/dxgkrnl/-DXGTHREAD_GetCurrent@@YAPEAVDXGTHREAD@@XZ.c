/*
 * XREFs of ?DXGTHREAD_GetCurrent@@YAPEAVDXGTHREAD@@XZ @ 0x1C0034430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct DXGTHREAD *__fastcall DXGTHREAD_GetCurrent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v5; // rbx
  __int64 v6; // rax
  int CurrentProcessSessionId; // esi
  __int64 *ThreadWin32Thread; // rax
  __int64 v9; // rax

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  if ( !CurrentThread )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v6);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  if ( CurrentProcessSessionId )
  {
    if ( (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
      {
        v9 = *ThreadWin32Thread;
        if ( v9 )
          return *(struct DXGTHREAD **)(v9 + 80);
      }
    }
  }
  return (struct DXGTHREAD *)v5;
}
