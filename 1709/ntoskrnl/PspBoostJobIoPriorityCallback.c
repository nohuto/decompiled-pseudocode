/*
 * XREFs of PspBoostJobIoPriorityCallback @ 0x1404D99C0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetIoPriorityThread @ 0x140061EF0 (PsGetIoPriorityThread.c)
 *     IoBoostThreadIoPriority @ 0x1400AC938 (IoBoostThreadIoPriority.c)
 *     PsGetNextProcessThread @ 0x1404D9170 (PsGetNextProcessThread.c)
 *     PspGetNextJobProcess @ 0x14050CEAC (PspGetNextJobProcess.c)
 */

__int64 __fastcall PspBoostJobIoPriorityCallback(__int64 a1)
{
  __int64 v1; // rdi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v3; // r9
  __int64 NextJobProcess; // rbx
  KSPIN_LOCK *i; // rdx
  KSPIN_LOCK *NextProcessThread; // rax
  KSPIN_LOCK *v8; // rsi
  int IoPriorityThread; // eax
  _BYTE v10[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1;
  if ( !*(_DWORD *)(a1 + 860) )
  {
    CurrentThread = KeGetCurrentThread();
    v3 = 0LL;
    while ( 1 )
    {
      NextJobProcess = PspGetNextJobProcess(a1, CurrentThread, v10, v3);
      if ( !NextJobProcess )
        break;
      for ( i = 0LL; ; i = v8 )
      {
        NextProcessThread = PsGetNextProcessThread(NextJobProcess, i);
        v8 = NextProcessThread;
        if ( !NextProcessThread )
          break;
        IoPriorityThread = PsGetIoPriorityThread((__int64)NextProcessThread);
        IoBoostThreadIoPriority(v8, IoPriorityThread, 0);
      }
      v3 = NextJobProcess;
      a1 = v1;
    }
  }
  return 0LL;
}
