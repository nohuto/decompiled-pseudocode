/*
 * XREFs of PspEvaluateAndNotifyEmptyJob @ 0x1405325F8
 * Callers:
 *     PspNotifyEmptyJobsInJobChain @ 0x1405325AC (PspNotifyEmptyJobsInJobChain.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x1405798A0 (PspTerminateAllProcessesInJobHierarchy.c)
 * Callees:
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     PspHardDereferenceSiloWorker @ 0x140283E60 (PspHardDereferenceSiloWorker.c)
 *     PspSendReliableJobNotification @ 0x14052DF4C (PspSendReliableJobNotification.c)
 *     PspUnlockJob @ 0x140536FD0 (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x140537010 (PspLockJobExclusive.c)
 */

__int64 __fastcall PspEvaluateAndNotifyEmptyJob(__int64 Object, char a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  int v7; // eax

  CurrentThread = KeGetCurrentThread();
  PspLockJobExclusive(Object, CurrentThread);
  v7 = *(_DWORD *)(Object + 1208);
  if ( a2 )
    *(_DWORD *)(Object + 1208) = --v7;
  if ( !v7 )
  {
    if ( _interlockedbittestandreset((volatile signed __int32 *)(Object + 1304), 7u) )
      KeSetEvent((PRKEVENT)Object, 0, 0);
    if ( !_interlockedbittestandset((volatile signed __int32 *)(Object + 1304), 0x15u) )
    {
      if ( a3 && *(_QWORD *)(Object + 456) && (*(_DWORD *)(Object + 876) & 0x10) != 0 )
        PspSendReliableJobNotification((PVOID)Object, 4u);
      if ( (*(_DWORD *)(Object + 256) & 0x400000) != 0
        && !_interlockedbittestandset((volatile signed __int32 *)(Object + 1304), 0x1Du)
        && (*(_DWORD *)(Object + 1304) & 0x40000000) != 0 )
      {
        PspHardDereferenceSiloWorker(Object);
      }
    }
  }
  return PspUnlockJob(Object, CurrentThread);
}
