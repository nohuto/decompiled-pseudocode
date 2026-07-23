/*
 * XREFs of sub_1800EF328 @ 0x1800EF328
 * Callers:
 *     RtlCloneUserProcess @ 0x1800D86D0 (RtlCloneUserProcess.c)
 *     RtlPrepareForProcessCloning @ 0x1800D8C40 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlTryEnterCriticalSection @ 0x18001EEC0 (RtlTryEnterCriticalSection.c)
 *     sub_18001F91C @ 0x18001F91C (sub_18001F91C.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     sub_180058AF0 @ 0x180058AF0 (sub_180058AF0.c)
 *     ZwDelayExecution @ 0x1800A5980 (ZwDelayExecution.c)
 *     sub_1800F0D88 @ 0x1800F0D88 (sub_1800F0D88.c)
 *     sub_180103988 @ 0x180103988 (sub_180103988.c)
 */

__int64 sub_1800EF328()
{
  struct _PEB *v0; // r14
  unsigned int v1; // ebx
  ULONG i; // esi
  PVOID *ProcessHeaps; // rax
  char *v4; // rdi
  int v5; // ebp
  _RTL_SRWLOCK *v7; // rcx
  LARGE_INTEGER DelayInterval; // [rsp+40h] [rbp+8h] BYREF

  v0 = NtCurrentPeb();
  RtlEnterCriticalSection(&stru_180159A80);
  sub_180058AF0((__int64)&stru_180159600, &stru_180159600);
  v1 = 0;
  for ( i = 0; i < v0->NumberOfHeaps; ++i )
  {
    ProcessHeaps = v0->ProcessHeaps;
    v4 = (char *)ProcessHeaps[i];
    if ( *((_DWORD *)v4 + 4) == -571548178 )
    {
      if ( (v4[20] & 1) == 0 )
      {
        sub_18001F91C((__int64)ProcessHeaps[i]);
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)v4 + 18);
        sub_180103988(v4 + 288, 0LL);
      }
    }
    else if ( (v4[112] & 1) == 0 )
    {
      v5 = 0;
      DelayInterval.QuadPart = -250000LL;
      while ( !RtlTryEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)v4 + 44)) )
      {
        ZwDelayExecution(0, &DelayInterval);
        if ( (unsigned int)++v5 >= 0x64 )
        {
          v1 = -1073741420;
          sub_1800F0D88(0LL, i);
          return v1;
        }
      }
      if ( v4[386] == 2 )
        v7 = (_RTL_SRWLOCK *)*((_QWORD *)v4 + 47);
      else
        v7 = 0LL;
      if ( v7 )
        RtlAcquireSRWLockExclusive(v7);
    }
  }
  return v1;
}
