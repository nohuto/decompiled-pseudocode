/*
 * XREFs of sub_1800EB360 @ 0x1800EB360
 * Callers:
 *     RtlCloneUserProcess @ 0x1800D1660 (RtlCloneUserProcess.c)
 *     RtlPrepareForProcessCloning @ 0x1800D1BD0 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_180022E4C @ 0x180022E4C (sub_180022E4C.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_18005EF2C @ 0x18005EF2C (sub_18005EF2C.c)
 *     RtlTryEnterCriticalSection @ 0x180060E90 (RtlTryEnterCriticalSection.c)
 *     ZwDelayExecution @ 0x18009B140 (ZwDelayExecution.c)
 *     sub_1800ED18C @ 0x1800ED18C (sub_1800ED18C.c)
 *     sub_180104DE4 @ 0x180104DE4 (sub_180104DE4.c)
 */

__int64 sub_1800EB360()
{
  struct _PEB *v0; // r14
  unsigned int v1; // ebx
  ULONG i; // esi
  PVOID *ProcessHeaps; // rax
  char *v4; // rdi
  int v5; // ebp
  _RTL_SRWLOCK *v7; // rcx
  char v8[40]; // [rsp+20h] [rbp-28h] BYREF
  char v9; // [rsp+50h] [rbp+8h] BYREF
  LARGE_INTEGER DelayInterval; // [rsp+58h] [rbp+10h] BYREF

  v0 = NtCurrentPeb();
  RtlEnterCriticalSection(&stru_18015AAC0);
  sub_18005EF2C((_RTL_SRWLOCK *)&unk_18015D838, 1, (__int64)v8);
  v1 = 0;
  for ( i = 0; i < v0->NumberOfHeaps; ++i )
  {
    ProcessHeaps = v0->ProcessHeaps;
    v4 = (char *)ProcessHeaps[i];
    if ( *((_DWORD *)v4 + 4) == -571548178 )
    {
      if ( (v4[20] & 1) == 0 )
      {
        sub_180022E4C((__int64)ProcessHeaps[i], &v9);
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)v4 + 45);
        sub_180104DE4(v4 + 512, 0LL);
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
          sub_1800ED18C(0LL, i);
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
