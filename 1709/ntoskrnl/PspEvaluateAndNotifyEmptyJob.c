/*
 * XREFs of PspEvaluateAndNotifyEmptyJob @ 0x14050DA38
 * Callers:
 *     PspNotifyEmptyJobsInJobChain @ 0x14050CFA4 (PspNotifyEmptyJobsInJobChain.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x140591C84 (PspTerminateAllProcessesInJobHierarchy.c)
 * Callees:
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     PspHardDereferenceSiloWorker @ 0x14024DA80 (PspHardDereferenceSiloWorker.c)
 *     PspUnlockJob @ 0x1405102A0 (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x1405102E0 (PspLockJobExclusive.c)
 *     PspSendReliableJobNotification @ 0x140512674 (PspSendReliableJobNotification.c)
 */

__int64 __fastcall PspEvaluateAndNotifyEmptyJob(PRKEVENT Event, char a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rsi

  CurrentThread = KeGetCurrentThread();
  PspLockJobExclusive(Event, CurrentThread);
  if ( a2 )
    --LODWORD(Event[50].Header.WaitListHead.Flink);
  if ( !LODWORD(Event[50].Header.WaitListHead.Flink) )
  {
    if ( _interlockedbittestandreset((volatile signed __int32 *)&Event[54].Header.WaitListHead, 7u) )
      KeSetEvent(Event, 0, 0);
    if ( !_interlockedbittestandset((volatile signed __int32 *)&Event[54].Header.WaitListHead, 0x15u) )
    {
      if ( a3 && *(_QWORD *)&Event[19].Header.Lock && (HIDWORD(Event[36].Header.WaitListHead.Flink) & 0x10) != 0 )
        PspSendReliableJobNotification(Event);
      if ( ((__int64)Event[10].Header.WaitListHead.Blink & 0x400000) != 0
        && !_interlockedbittestandset((volatile signed __int32 *)&Event[54].Header.WaitListHead, 0x1Du)
        && ((__int64)Event[54].Header.WaitListHead.Flink & 0x40000000) != 0 )
      {
        PspHardDereferenceSiloWorker((__int64)Event);
      }
    }
  }
  return PspUnlockJob(Event, CurrentThread);
}
