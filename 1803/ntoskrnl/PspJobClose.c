/*
 * XREFs of PspJobClose @ 0x1405797B0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     PspHardDereferenceSiloWorker @ 0x140283E60 (PspHardDereferenceSiloWorker.c)
 *     PspUnlockJobMemoryLimitsExclusive @ 0x140532E98 (PspUnlockJobMemoryLimitsExclusive.c)
 *     PspUnlockJob @ 0x140536FD0 (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x140537010 (PspLockJobExclusive.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x1405798A0 (PspTerminateAllProcessesInJobHierarchy.c)
 */

void __fastcall PspJobClose(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  char v4; // di
  struct _KTHREAD *CurrentThread; // rsi
  void *v7; // rdi
  __int64 v8; // r9

  v4 = 1;
  if ( a4 <= 1 )
  {
    CurrentThread = KeGetCurrentThread();
    _InterlockedOr((volatile signed __int32 *)(a2 + 1304), 1u);
    PspLockJobExclusive(a2, (__int64)CurrentThread);
    if ( (*(_DWORD *)(a2 + 256) & 0x2000) != 0 )
    {
      if ( _interlockedbittestandset((volatile signed __int32 *)(a2 + 1304), 0x1Du)
        || (*(_DWORD *)(a2 + 1304) & 0x40000000) == 0 )
      {
        v4 = 0;
      }
      PspUnlockJob(a2, (__int64)CurrentThread);
      PspTerminateAllProcessesInJobHierarchy((PVOID)a2);
      PspLockJobExclusive(a2, (__int64)CurrentThread);
      if ( v4 )
        PspHardDereferenceSiloWorker(a2);
    }
    ExAcquirePushLockExclusiveEx(a2 + 1032, 0LL);
    v7 = *(void **)(a2 + 456);
    *(_QWORD *)(a2 + 456) = 0LL;
    PspUnlockJobMemoryLimitsExclusive(a2, 0LL, 0LL, v8);
    PspUnlockJob(a2, (__int64)CurrentThread);
    if ( v7 )
      ObfDereferenceObjectWithTag(v7, 0x624A7350u);
  }
}
