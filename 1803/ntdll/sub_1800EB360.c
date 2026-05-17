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
  __int64 v1; // r9
  unsigned int v2; // ebx
  unsigned int i; // esi
  void **ProcessHeaps; // rax
  char *v5; // rdi
  unsigned __int64 v6; // rdx
  unsigned __int64 *v7; // r8
  __int64 v8; // r9
  int v9; // ebp
  unsigned __int64 v10; // rdx
  unsigned __int64 *v11; // r8
  __int64 v12; // r9
  unsigned __int64 v14; // rcx
  char v15[40]; // [rsp+20h] [rbp-28h] BYREF
  char v16; // [rsp+50h] [rbp+8h] BYREF
  __int64 v17; // [rsp+58h] [rbp+10h]

  v0 = NtCurrentPeb();
  RtlEnterCriticalSection((__int64)&unk_18015AAC0);
  sub_18005EF2C((__int64)&unk_18015D838, (char *)1, (__int64)v15, v1);
  v2 = 0;
  for ( i = 0; i < v0->NumberOfHeaps; ++i )
  {
    ProcessHeaps = v0->ProcessHeaps;
    v5 = (char *)ProcessHeaps[i];
    if ( *((_DWORD *)v5 + 4) == -571548178 )
    {
      if ( (v5[20] & 1) == 0 )
      {
        sub_180022E4C((__int64)ProcessHeaps[i], &v16);
        RtlAcquireSRWLockExclusive((unsigned __int64)(v5 + 360), v6, v7, v8);
        sub_180104DE4(v5 + 512, 0LL);
      }
    }
    else if ( (v5[112] & 1) == 0 )
    {
      v9 = 0;
      v17 = -250000LL;
      while ( !(unsigned int)RtlTryEnterCriticalSection(*((_QWORD *)v5 + 44)) )
      {
        ZwDelayExecution();
        if ( (unsigned int)++v9 >= 0x64 )
        {
          v2 = -1073741420;
          sub_1800ED18C(0LL, i);
          return v2;
        }
      }
      if ( v5[386] == 2 )
        v14 = *((_QWORD *)v5 + 47);
      else
        v14 = 0LL;
      if ( v14 )
        RtlAcquireSRWLockExclusive(v14, v10, v11, v12);
    }
  }
  return v2;
}
