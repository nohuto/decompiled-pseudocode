/*
 * XREFs of RtlLockHeapManagerForCloning @ 0x1800EF138
 * Callers:
 *     RtlCloneUserProcess @ 0x1800D75D0 (RtlCloneUserProcess.c)
 *     RtlPrepareForProcessCloning @ 0x1800D7B40 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlTryEnterCriticalSection @ 0x1800142C0 (RtlTryEnterCriticalSection.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlEnterCriticalSection @ 0x180047C50 (RtlEnterCriticalSection.c)
 *     RtlpHpHeapLock @ 0x180048BF8 (RtlpHpHeapLock.c)
 *     ZwDelayExecution @ 0x1800A0740 (ZwDelayExecution.c)
 *     RtlpUnlockHeapManagerForCloning @ 0x1800F0D9C (RtlpUnlockHeapManagerForCloning.c)
 *     RtlpHpLfhContextLockUnlock @ 0x180106F14 (RtlpHpLfhContextLockUnlock.c)
 */

__int64 RtlLockHeapManagerForCloning()
{
  struct _PEB *v0; // rbp
  unsigned __int64 v1; // rdx
  unsigned __int64 *v2; // r8
  __int64 v3; // r9
  unsigned __int64 v4; // rdx
  unsigned __int64 *v5; // r8
  __int64 v6; // r9
  unsigned int v7; // ebx
  unsigned int i; // esi
  void **ProcessHeaps; // rax
  char *v10; // rdi
  unsigned __int64 v11; // rdx
  unsigned __int64 *v12; // r8
  __int64 v13; // r9
  int v14; // r14d
  unsigned __int64 v16; // rcx

  v0 = NtCurrentPeb();
  RtlEnterCriticalSection((__int64)&RtlpProcessHeapsListLock);
  RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D6B8, v1, v2, v3);
  v7 = 0;
  for ( i = 0; i < v0->NumberOfHeaps; ++i )
  {
    ProcessHeaps = v0->ProcessHeaps;
    v10 = (char *)ProcessHeaps[i];
    if ( *((_DWORD *)v10 + 4) == -571548178 )
    {
      if ( (v10[20] & 1) == 0 )
      {
        RtlpHpHeapLock((__int64)ProcessHeaps[i], v4, v5, v6);
        RtlAcquireSRWLockExclusive((unsigned __int64)(v10 + 328), v11, v12, v13);
        RtlpHpLfhContextLockUnlock(v10 + 480, 0LL);
      }
    }
    else if ( (v10[112] & 1) == 0 )
    {
      v14 = 0;
      while ( !(unsigned int)RtlTryEnterCriticalSection(*((_QWORD *)v10 + 44)) )
      {
        ZwDelayExecution();
        if ( (unsigned int)++v14 >= 0x64 )
        {
          v7 = -1073741420;
          RtlpUnlockHeapManagerForCloning(0LL, i);
          return v7;
        }
      }
      if ( v10[386] == 2 )
        v16 = *((_QWORD *)v10 + 47);
      else
        v16 = 0LL;
      if ( v16 )
        RtlAcquireSRWLockExclusive(v16, v4, v5, v6);
    }
  }
  return v7;
}
