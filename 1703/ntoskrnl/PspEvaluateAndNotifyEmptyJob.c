/*
 * XREFs of PspEvaluateAndNotifyEmptyJob @ 0x1405471A8
 * Callers:
 *     PspNotifyEmptyJobsInJobChain @ 0x14054715C (PspNotifyEmptyJobsInJobChain.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x1405617B4 (PspTerminateAllProcessesInJobHierarchy.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     PspHardDereferenceSiloWorker @ 0x1402389A0 (PspHardDereferenceSiloWorker.c)
 *     PspSendReliableJobNotification @ 0x14044A380 (PspSendReliableJobNotification.c)
 */

void __fastcall PspEvaluateAndNotifyEmptyJob(char *Object, char a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rdi

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread )
    --CurrentThread->SpecialApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)(Object + 56), 1u);
  if ( a2 )
    --*((_DWORD *)Object + 302);
  if ( !*((_DWORD *)Object + 302) )
  {
    if ( _interlockedbittestandreset((volatile signed __int32 *)Object + 326, 7u) )
      KeSetEvent((PRKEVENT)Object, 0, 0);
    if ( !_interlockedbittestandset((volatile signed __int32 *)Object + 326, 0x15u) )
    {
      if ( a3 && *((_QWORD *)Object + 57) && (*((_DWORD *)Object + 219) & 0x10) != 0 )
        PspSendReliableJobNotification(Object, 4u);
      if ( (*((_DWORD *)Object + 64) & 0x400000) != 0
        && !_interlockedbittestandset((volatile signed __int32 *)Object + 326, 0x1Du)
        && (*((_DWORD *)Object + 326) & 0x40000000) != 0 )
      {
        PspHardDereferenceSiloWorker((__int64)Object);
      }
    }
  }
  PspUnlockJob((__int64)Object, (__int64)CurrentThread);
}
