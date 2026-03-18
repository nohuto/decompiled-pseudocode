/*
 * XREFs of PdcTaskClientRequest @ 0x14078B714
 * Callers:
 *     PopDirectedDripsTriggerTransition @ 0x140761EEC (PopDirectedDripsTriggerTransition.c)
 *     PopDiagStopCsSleepStudySession @ 0x140765B10 (PopDiagStopCsSleepStudySession.c)
 *     PopSleepStudyTaskClientTimerWorker @ 0x140769F90 (PopSleepStudyTaskClientTimerWorker.c)
 * Callees:
 *     ExfReleasePushLock @ 0x1400639B0 (ExfReleasePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     PdcPortSendMessageSynchronously @ 0x14029F254 (PdcPortSendMessageSynchronously.c)
 *     PdcAcquireRwLockExclusive @ 0x14078BEFC (PdcAcquireRwLockExclusive.c)
 */

__int64 __fastcall PdcTaskClientRequest(__int64 a1, char a2)
{
  int v4; // edi
  signed __int64 *v5; // rsi
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  signed __int64 v12; // rax
  __int64 v13; // rdx
  signed __int64 v14; // rtt
  _BYTE v16[40]; // [rsp+20h] [rbp-328h] BYREF
  int v17; // [rsp+48h] [rbp-300h]
  bool v18; // [rsp+50h] [rbp-2F8h]

  if ( !a1 || *(_DWORD *)a1 != 1667458128 )
    return (unsigned int)-1073741585;
  v5 = (signed __int64 *)(a1 + 8);
  PdcAcquireRwLockExclusive(a1 + 8);
  if ( a2 || *(_DWORD *)(a1 + 48) )
  {
    v8 = *(_DWORD *)(a1 + 48);
    v4 = 0;
    if ( a2 )
    {
      if ( v8 )
        goto LABEL_12;
    }
    else if ( v8 != 1 )
    {
      goto LABEL_12;
    }
    v9 = *(_QWORD *)(a1 + 40);
    v17 = 7;
    v18 = a2 != 0;
    PdcPortSendMessageSynchronously(v9, (__int64)v16);
    v4 = *(_DWORD *)(a1 + 52);
    if ( v4 < 0 )
      goto LABEL_16;
LABEL_12:
    v10 = *(_DWORD *)(a1 + 48);
    if ( a2 )
      v11 = v10 + 1;
    else
      v11 = v10 - 1;
    *(_DWORD *)(a1 + 48) = v11;
    goto LABEL_16;
  }
  v4 = -1073741823;
LABEL_16:
  v5[1] = 0LL;
  _m_prefetchw(v5);
  v12 = *v5;
  v13 = *v5 - 16;
  if ( (*v5 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v13 = 0LL;
  if ( (v12 & 2) != 0 || (v14 = *v5, v14 != _InterlockedCompareExchange64(v5, v13, v12)) )
    ExfReleasePushLock(v5, v13, v6, v7);
  KeAbPostRelease((ULONG_PTR)v5);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v4;
}
