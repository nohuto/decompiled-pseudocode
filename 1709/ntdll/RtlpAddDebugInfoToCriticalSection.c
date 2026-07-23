/*
 * XREFs of RtlpAddDebugInfoToCriticalSection @ 0x180009BDC
 * Callers:
 *     RtlInitializeResource @ 0x180009AF0 (RtlInitializeResource.c)
 *     RtlInitializeCriticalSectionEx @ 0x180009D10 (RtlInitializeCriticalSectionEx.c)
 *     RtlpWaitOnCriticalSection @ 0x18004A67C (RtlpWaitOnCriticalSection.c)
 *     RtlInitializeCriticalSectionAndSpinCount @ 0x18006B8B0 (RtlInitializeCriticalSectionAndSpinCount.c)
 *     RtlInitializeCriticalSection @ 0x18006C990 (RtlInitializeCriticalSection.c)
 * Callees:
 *     RtlLogStackBackTraceEx @ 0x180009C98 (RtlLogStackBackTraceEx.c)
 *     RtlpAllocateDebugInfo @ 0x180009CCC (RtlpAllocateDebugInfo.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlpFreeDebugInfo @ 0x180061594 (RtlpFreeDebugInfo.c)
 */

void __fastcall RtlpAddDebugInfoToCriticalSection(__int64 a1)
{
  __int64 DebugInfo; // rax
  __int64 v3; // rdx
  signed __int64 v4; // rbx
  int v5; // eax
  volatile signed __int64 v6; // rbx
  signed __int64 *v7; // rax
  signed __int64 v8; // rbx

  DebugInfo = RtlpAllocateDebugInfo();
  v4 = DebugInfo;
  if ( DebugInfo )
  {
    *(_WORD *)DebugInfo = 0;
    if ( (*(_DWORD *)(a1 + 32) & 0x8000000) != 0 )
      *(_WORD *)DebugInfo = 1;
    *(_QWORD *)(DebugInfo + 32) = 0LL;
    *(_DWORD *)(DebugInfo + 40) = 0;
    *(_QWORD *)(DebugInfo + 8) = a1;
    v5 = RtlLogStackBackTraceEx(2LL, v3);
    *(_WORD *)(v4 + 2) = v5;
    *(_WORD *)(v4 + 44) = HIWORD(v5);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)a1, v4, -1LL) == -1 )
    {
      v6 = *(_QWORD *)a1;
      RtlAcquireSRWLockExclusive(&RtlCriticalSectionLock);
      v7 = (signed __int64 *)off_180159668[0];
      v8 = v6 + 16;
      if ( *(_UNKNOWN ***)off_180159668[0] != &RtlCriticalSectionList )
        __fastfail(3u);
      *(_QWORD *)v8 = &RtlCriticalSectionList;
      *(_QWORD *)(v8 + 8) = v7;
      *v7 = v8;
      off_180159668[0] = (_UNKNOWN **)v8;
      RtlReleaseSRWLockExclusive(&RtlCriticalSectionLock);
    }
    else
    {
      RtlpFreeDebugInfo(v4);
    }
  }
  else
  {
    _InterlockedAdd(&RtlFailedCriticalDebugAllocations, 1u);
  }
}
