/*
 * XREFs of PspTerminateProcess @ 0x14054EBC8
 * Callers:
 *     PsTerminateProcess @ 0x14054E978 (PsTerminateProcess.c)
 *     NtTerminateProcess @ 0x14054E9C0 (NtTerminateProcess.c)
 *     PspTerminatePicoProcess @ 0x1406E3D40 (PspTerminatePicoProcess.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KeForceResumeProcess @ 0x1401202A4 (KeForceResumeProcess.c)
 *     KeSetProcessSchedulingGroup @ 0x14012037C (KeSetProcessSchedulingGroup.c)
 *     EtwTraceProcessTerminate @ 0x140120B78 (EtwTraceProcessTerminate.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     PspRundownSingleProcess @ 0x140546EDC (PspRundownSingleProcess.c)
 *     PspTerminateAllThreads @ 0x14054EDAC (PspTerminateAllThreads.c)
 */

__int64 __fastcall PspTerminateProcess(ULONG_PTR BugCheckParameter1, __int64 a2, unsigned int a3, char a4)
{
  signed __int32 v7; // esi
  char v8; // al
  char v9; // di
  unsigned int v10; // eax
  unsigned int v11; // edi

  _m_prefetchw((const void *)(BugCheckParameter1 + 772));
  v7 = _InterlockedOr((volatile signed __int32 *)(BugCheckParameter1 + 772), 8u);
  if ( (v7 & 8) != 0 )
  {
    v9 = a4 | 2;
  }
  else
  {
    if ( (PerfGlobalGroupMask & 1) != 0 )
      EtwTraceProcessTerminate(BugCheckParameter1);
    KeSetProcessSchedulingGroup(BugCheckParameter1, 0LL);
    v8 = a4 | 4;
    if ( (v7 & 0x40000000) == 0 )
      v8 = a4;
    v9 = v8;
    ExAcquirePushLockExclusiveEx(BugCheckParameter1 + 728, 0LL);
    if ( *(_DWORD *)(BugCheckParameter1 + 1176) && (a3 != -1073741749 || *(_DWORD *)(BugCheckParameter1 + 1572) == 259) )
      *(_DWORD *)(BugCheckParameter1 + 1572) = a3;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter1 + 728), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter1 + 728));
    KeAbPostRelease(BugCheckParameter1 + 728);
  }
  if ( (*(_DWORD *)(BugCheckParameter1 + 2064) & 1) == 0 )
  {
    v10 = PspTerminateAllThreads(BugCheckParameter1);
LABEL_14:
    v11 = v10;
    goto LABEL_15;
  }
  if ( *((_QWORD *)&xmmword_140348E40 + 1) && (v9 & 8) == 0 )
  {
    v10 = (*((__int64 (__fastcall **)(ULONG_PTR, _QWORD))&xmmword_140348E40 + 1))(BugCheckParameter1, a3);
    goto LABEL_14;
  }
  v11 = 290;
  PspRundownSingleProcess(BugCheckParameter1, 0);
LABEL_15:
  if ( (v7 & 8) == 0 )
    KeForceResumeProcess(BugCheckParameter1);
  return v11;
}
