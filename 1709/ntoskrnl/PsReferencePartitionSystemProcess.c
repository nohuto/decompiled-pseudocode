/*
 * XREFs of PsReferencePartitionSystemProcess @ 0x14071AF64
 * Callers:
 *     ExSwapinWorkerThreads @ 0x14075E51C (ExSwapinWorkerThreads.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall PsReferencePartitionSystemProcess(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v5; // rbx
  PVOID v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // edi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (signed __int64 *)(a1 + 96);
  ExAcquirePushLockSharedEx(a1 + 96, 0LL);
  v6 = *(PVOID *)(a1 + 104);
  if ( v6 == MmBadPointer )
  {
    v8 = -1073740640;
  }
  else
  {
    ObfReferenceObject(v6);
    v7 = *(_QWORD *)(a1 + 104);
    v8 = 0;
    *a2 = v7;
  }
  if ( _InterlockedCompareExchange64(v5, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v5);
  KeAbPostRelease((ULONG_PTR)v5);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v8;
}
