/*
 * XREFs of DestroyThreadsTimers @ 0x1C00D78F0
 * Callers:
 *     <none>
 * Callees:
 *     FreeTimer @ 0x1C00D7A70 (FreeTimer.c)
 *     ThreadLockExchange @ 0x1C01242F4 (ThreadLockExchange.c)
 */

__int64 __fastcall DestroyThreadsTimers(__int64 a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rdx
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = (_QWORD *)gtmrListHead[0];
  v3 = gptiCurrent;
  v5[0] = *(_QWORD *)(gptiCurrent + 392LL);
  *(_QWORD *)(gptiCurrent + 392LL) = v5;
  v5[1] = 0LL;
  while ( v2 != (_QWORD *)gtmrListHead[0] )
  {
    ThreadLockExchange(v2 - 9, v5);
    if ( *(v2 - 6) == a1 || v2[4] == a1 )
      FreeTimer((struct tagTIMER *)(v2 - 9));
    v2 = (_QWORD *)*v2;
  }
  return ThreadUnlock1(a1, v3);
}
