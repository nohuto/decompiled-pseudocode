/*
 * XREFs of VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x14067E474
 * Callers:
 *     VrpLoadDifferencingHive @ 0x14067DF68 (VrpLoadDifferencingHive.c)
 * Callees:
 *     RtlInsertHeadCircularList @ 0x14003B55C (RtlInsertHeadCircularList.c)
 *     KeAbPostReleaseEx @ 0x14003FBE8 (KeAbPostReleaseEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     KeAbPreWait @ 0x1400FE240 (KeAbPreWait.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     memset @ 0x140192D80 (memset.c)
 */

void __fastcall VrpWaitForDiffHiveEntryTransitionOwnerToLeave(__int64 a1)
{
  ULONG_PTR v2; // rdi
  ULONG_PTR v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  _KLOCK_ENTRY *v7; // rbx
  struct _KTHREAD *CurrentThread; // rax
  _OWORD v9[3]; // [rsp+30h] [rbp-38h] BYREF

  memset(v9, 0, 0x28uLL);
  KeInitializeEvent((PRKEVENT)&v9[1], SynchronizationEvent, 0);
  RtlInsertHeadCircularList((__int64 *)(a1 + 48), v9);
  v2 = a1 + 24;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 24));
  KeAbPostRelease(a1 + 24);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  v3 = a1 + 40;
  v4 = KeAbPreAcquire(v3, 0LL, 0LL);
  v7 = (_KLOCK_ENTRY *)v4;
  if ( v4 )
    KeAbPreWait(v4, v5, v6);
  KeWaitForSingleObject(&v9[1], Executive, 0, 0, 0LL);
  if ( v7 )
  {
    KeAbPreAcquire(v3, (__int64)v7, 0LL);
    KeAbPostReleaseEx(v3, v7);
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v2, 0LL);
}
