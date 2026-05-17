/*
 * XREFs of sub_1800DF6E0 @ 0x1800DF6E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180013664 @ 0x180013664 (sub_180013664.c)
 *     RtlAcquireSRWLockShared @ 0x180020280 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockShared @ 0x180028DE0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     ZwGetCompleteWnfStateSubscription @ 0x1800A6FF0 (ZwGetCompleteWnfStateSubscription.c)
 *     sub_1800DF250 @ 0x1800DF250 (sub_1800DF250.c)
 */

void sub_1800DF6E0()
{
  int v0; // ebp
  __int64 v1; // rcx
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 *v6; // rbx
  int v7; // eax

  if ( qword_18015C008 )
  {
    v0 = 0;
    RtlAcquireSRWLockShared((volatile signed __int64 *)(qword_18015C008 + 8));
    v1 = qword_18015C008;
    *(_QWORD *)(qword_18015C008 + 88) = 0LL;
    RtlReleaseSRWLockShared((volatile signed __int64 *)(v1 + 8));
    while ( 1 )
    {
      v2 = 0LL;
      v3 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias + 500000;
      RtlAcquireSRWLockShared((volatile signed __int64 *)(qword_18015C008 + 8));
      v4 = qword_18015C008;
      v5 = qword_18015C008 + 16;
      v6 = *(__int64 **)(qword_18015C008 + 16);
      while ( v6 != (__int64 *)v5 )
      {
        RtlAcquireSRWLockExclusive(v6 + 3);
        if ( *((_DWORD *)v6 + 24) == 2 && v3 >= v6[13] )
        {
          v2 = v6[11];
          v6[11] = 0LL;
          *((_DWORD *)v6 + 24) = 0;
          RtlReleaseSRWLockExclusive(v6 + 3);
          v4 = qword_18015C008;
          break;
        }
        RtlReleaseSRWLockExclusive(v6 + 3);
        v4 = qword_18015C008;
        v6 = (__int64 *)*v6;
        v5 = qword_18015C008 + 16;
      }
      RtlReleaseSRWLockShared((volatile signed __int64 *)(v4 + 8));
      if ( !v2 )
        break;
      sub_1800DF250();
      v0 = 0;
      v7 = sub_180013664(v2, 1);
      if ( v7 == -1073741267 )
      {
        v0 = 1;
      }
      else
      {
        if ( !v7 )
          ZwGetCompleteWnfStateSubscription();
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v2);
      }
    }
    if ( v0 )
      sub_1800DF250();
  }
}
