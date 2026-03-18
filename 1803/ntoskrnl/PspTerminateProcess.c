/*
 * XREFs of PspTerminateProcess @ 0x1404E9088
 * Callers:
 *     NtTerminateProcess @ 0x14056E088 (NtTerminateProcess.c)
 *     PsTerminateProcess @ 0x14057FB00 (PsTerminateProcess.c)
 *     PspTerminatePicoProcess @ 0x14077E0B0 (PspTerminatePicoProcess.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeForceResumeProcess @ 0x1400BCFB4 (KeForceResumeProcess.c)
 *     EtwTraceProcessTerminate @ 0x1400C1BCC (EtwTraceProcessTerminate.c)
 *     KeSetProcessSchedulingGroup @ 0x1400C23A4 (KeSetProcessSchedulingGroup.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     PspTerminateAllThreads @ 0x1404E89FC (PspTerminateAllThreads.c)
 *     PspRundownSingleProcess @ 0x1405322EC (PspRundownSingleProcess.c)
 */

__int64 __fastcall PspTerminateProcess(ULONG_PTR BugCheckParameter1, __int64 a2, unsigned int a3, int a4)
{
  signed __int32 v8; // esi
  int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // eax
  unsigned int v15; // edi

  _m_prefetchw((const void *)(BugCheckParameter1 + 772));
  v8 = _InterlockedOr((volatile signed __int32 *)(BugCheckParameter1 + 772), 8u);
  if ( (v8 & 8) != 0 )
  {
    v10 = a4 | 2;
  }
  else
  {
    if ( (PerfGlobalGroupMask & 1) != 0 )
      EtwTraceProcessTerminate(BugCheckParameter1);
    KeSetProcessSchedulingGroup(BugCheckParameter1, 0LL);
    v9 = a4 | 4;
    if ( (v8 & 0x40000000) == 0 )
      v9 = a4;
    v10 = v9;
    ExAcquirePushLockExclusiveEx(BugCheckParameter1 + 728, 0LL);
    if ( *(_DWORD *)(BugCheckParameter1 + 1176) && (a3 != -1073741749 || *(_DWORD *)(BugCheckParameter1 + 1572) == 259) )
      *(_DWORD *)(BugCheckParameter1 + 1572) = a3;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter1 + 728), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter1 + 728), v11, v12, v13);
    KeAbPostRelease(BugCheckParameter1 + 728);
  }
  if ( (*(_DWORD *)(BugCheckParameter1 + 768) & 0x400) == 0 )
  {
    v14 = PspTerminateAllThreads(BugCheckParameter1, a2, a3, v10);
LABEL_14:
    v15 = v14;
    goto LABEL_15;
  }
  if ( *((_QWORD *)&xmmword_1403A6100 + 1) && (v10 & 8) == 0 )
  {
    v14 = (*((__int64 (__fastcall **)(ULONG_PTR, _QWORD))&xmmword_1403A6100 + 1))(BugCheckParameter1, a3);
    goto LABEL_14;
  }
  v15 = 290;
  PspRundownSingleProcess(BugCheckParameter1);
LABEL_15:
  if ( (v8 & 8) == 0 )
    KeForceResumeProcess(BugCheckParameter1);
  return v15;
}
