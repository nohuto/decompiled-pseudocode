/*
 * XREFs of GetThreadCurrentContext @ 0x1C001E538
 * Callers:
 *     NestAsyncEvalObject @ 0x1C005F0C0 (NestAsyncEvalObject.c)
 *     SyncLoadDDB @ 0x1C00ABECC (SyncLoadDDB.c)
 * Callees:
 *     <none>
 */

__int64 GetThreadCurrentContext()
{
  struct _KTHREAD *CurrentThread; // r8
  __int64 v1; // rcx
  __int64 i; // rax

  CurrentThread = KeGetCurrentThread();
  v1 = 0LL;
  for ( i = RunningContextListHead - 392; &RunningContextListHead != (__int64 *)(i + 392); i = *(_QWORD *)(i + 392)
                                                                                             - 392LL )
  {
    if ( *(struct _KTHREAD **)(i + 408) == CurrentThread )
      return i;
  }
  return v1;
}
