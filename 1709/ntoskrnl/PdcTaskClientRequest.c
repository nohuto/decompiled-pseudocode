/*
 * XREFs of PdcTaskClientRequest @ 0x140727AC0
 * Callers:
 *     PopDiagStopCsSleepStudySession @ 0x1407016F4 (PopDiagStopCsSleepStudySession.c)
 *     PopSleepStudyTaskClientTimerWorker @ 0x140706190 (PopSleepStudyTaskClientTimerWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1400A7DD0 (ExfReleasePushLock.c)
 *     PdcPortSendMessageSynchronously @ 0x14025D740 (PdcPortSendMessageSynchronously.c)
 *     PdcAcquireRwLockExclusive @ 0x140727BD4 (PdcAcquireRwLockExclusive.c)
 */

__int64 __fastcall PdcTaskClientRequest(__int64 a1, char a2)
{
  __int64 v2; // rbx
  int v4; // edi
  signed __int64 *v5; // rsi
  signed __int64 v6; // rax
  signed __int64 v7; // rdx
  signed __int64 v8; // rtt
  _BYTE v10[40]; // [rsp+20h] [rbp-308h] BYREF
  int v11; // [rsp+48h] [rbp-2E0h]
  bool v12; // [rsp+50h] [rbp-2D8h]

  v2 = PopSleepStudyTaskClientActivator;
  if ( !PopSleepStudyTaskClientActivator || *(_DWORD *)PopSleepStudyTaskClientActivator != 1667458128 )
    return (unsigned int)-1073741585;
  v5 = (signed __int64 *)(PopSleepStudyTaskClientActivator + 8);
  PdcAcquireRwLockExclusive(PopSleepStudyTaskClientActivator + 8);
  if ( a2 || *(_DWORD *)(v2 + 48) )
  {
    v4 = 0;
    if ( a2 )
    {
      if ( *(_DWORD *)(v2 + 48) )
      {
LABEL_12:
        if ( a2 )
        {
          ++*(_DWORD *)(v2 + 48);
          goto LABEL_15;
        }
        goto LABEL_13;
      }
    }
    else if ( *(_DWORD *)(v2 + 48) != 1 )
    {
LABEL_13:
      --*(_DWORD *)(v2 + 48);
      goto LABEL_15;
    }
    v11 = 7;
    v12 = a2 != 0;
    PdcPortSendMessageSynchronously(*(_QWORD *)(v2 + 40), (__int64)v10);
    v4 = *(_DWORD *)(v2 + 52);
    if ( v4 < 0 )
      goto LABEL_15;
    goto LABEL_12;
  }
  v4 = -1073741823;
LABEL_15:
  *(_QWORD *)(v2 + 16) = 0LL;
  _m_prefetchw(v5);
  v6 = *v5;
  v7 = *v5 - 16;
  if ( (*v5 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v7 = 0LL;
  if ( (v6 & 2) != 0 || (v8 = *v5, v8 != _InterlockedCompareExchange64(v5, v7, v6)) )
    ExfReleasePushLock((_QWORD *)(v2 + 8));
  KeAbPostRelease(v2 + 8);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v4;
}
