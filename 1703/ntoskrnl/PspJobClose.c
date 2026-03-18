/*
 * XREFs of PspJobClose @ 0x140560980
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     PspHardDereferenceSiloWorker @ 0x1402389A0 (PspHardDereferenceSiloWorker.c)
 *     PspUnlockJob @ 0x140479650 (PspUnlockJob.c)
 *     PspUnlockJobMemoryLimitsExclusive @ 0x14055F938 (PspUnlockJobMemoryLimitsExclusive.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x1405617B4 (PspTerminateAllProcessesInJobHierarchy.c)
 */

void __fastcall PspJobClose(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  void *v6; // rsi
  bool v7; // si

  if ( a4 <= 1 )
  {
    CurrentThread = KeGetCurrentThread();
    _InterlockedOr((volatile signed __int32 *)(a2 + 1304), 1u);
    if ( CurrentThread )
      --CurrentThread->SpecialApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)(a2 + 56), 1u);
    if ( (*(_DWORD *)(a2 + 256) & 0x2000) != 0 )
    {
      v7 = !_interlockedbittestandset((volatile signed __int32 *)(a2 + 1304), 0x1Du)
        && (*(_DWORD *)(a2 + 1304) & 0x40000000) != 0;
      PspUnlockJob(a2, (__int64)CurrentThread);
      PspTerminateAllProcessesInJobHierarchy((PVOID)a2);
      if ( CurrentThread )
        --CurrentThread->SpecialApcDisable;
      ExAcquireResourceExclusiveLite((PERESOURCE)(a2 + 56), 1u);
      if ( v7 )
        PspHardDereferenceSiloWorker(a2);
    }
    ExAcquirePushLockExclusiveEx(a2 + 1032, 0LL);
    v6 = *(void **)(a2 + 456);
    *(_QWORD *)(a2 + 456) = 0LL;
    PspUnlockJobMemoryLimitsExclusive(a2, 0LL, 0LL);
    PspUnlockJob(a2, (__int64)CurrentThread);
    if ( v6 )
      ObfDereferenceObject(v6);
  }
}
