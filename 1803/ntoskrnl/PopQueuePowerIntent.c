/*
 * XREFs of PopQueuePowerIntent @ 0x14076ADA4
 * Callers:
 *     PopTriggerMonitorPowerEvent @ 0x14076AEC4 (PopTriggerMonitorPowerEvent.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140074E68 (PopAcquireRwLockExclusive.c)
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 *     PopDiagTracePowerAggregatorQueueOverflow @ 0x14076875C (PopDiagTracePowerAggregatorQueueOverflow.c)
 */

__int64 __fastcall PopQueuePowerIntent(int a1, int a2, int a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  v6 = ((_BYTE)dword_1403A862C + (_BYTE)dword_1403A8630) & 0xF;
  if ( (unsigned int)dword_1403A8630 >= 0x10 )
  {
    PopDiagTracePowerAggregatorQueueOverflow((ULONGLONG)&PopPowerAggregatorWork[2 * dword_1403A862C
                                                                              + 5
                                                                              + dword_1403A862C]);
    dword_1403A862C = ((_BYTE)dword_1403A862C + 1) & 0xF;
  }
  else
  {
    ++dword_1403A8630;
  }
  v7 = 3 * v6;
  PopPowerAggregatorWork[v7 + 5] = a1;
  PopPowerAggregatorWork[3 * v6 + 6] = a2;
  PopPowerAggregatorWork[v7 + 7] = a3;
  if ( !byte_1403A8628 )
  {
    ExQueueWorkItem(&PopPowerAggregatorWorkItem, DelayedWorkQueue);
    byte_1403A8628 = 1;
  }
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
  return 0LL;
}
