/*
 * XREFs of PsReferenceImpersonationToken @ 0x140430AA0
 * Callers:
 *     CmpOpenHiveFile @ 0x1404D7AAC (CmpOpenHiveFile.c)
 * Callees:
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 */

PACCESS_TOKEN __stdcall PsReferenceImpersonationToken(
        PETHREAD Thread,
        PBOOLEAN CopyOnOpen,
        PBOOLEAN EffectiveOnly,
        PSECURITY_IMPERSONATION_LEVEL ImpersonationLevel)
{
  struct _KTHREAD *CurrentThread; // r13
  void *v10; // rbp

  if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) == 0 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&Thread[1].WaitBlockList, 0LL);
  if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) != 0 )
  {
    v10 = Thread[1].WaitBlock[1].Thread;
    if ( v10 )
    {
      *CopyOnOpen = 0;
    }
    else
    {
      v10 = (void *)(*(_QWORD *)&Thread[1].SystemCallNumber & 0xFFFFFFFFFFFFFFF8uLL);
      *CopyOnOpen = (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 0x100) != 0;
    }
    ObfReferenceObject(v10);
    *ImpersonationLevel = Thread[1].SystemCallNumber & 3;
    *EffectiveOnly = (Thread[1].SystemCallNumber & 4) != 0;
  }
  else
  {
    v10 = 0LL;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Thread[1].WaitBlockList, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&Thread[1].WaitBlockList);
  KeAbPostRelease((ULONG_PTR)&Thread[1].WaitBlockList);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v10;
}
