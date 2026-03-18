/*
 * XREFs of VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x14070DC20
 * Callers:
 *     VrpLoadDifferencingHive @ 0x14070D6EC (VrpLoadDifferencingHive.c)
 * Callees:
 *     KeAbPreWait @ 0x140008A90 (KeAbPreWait.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostReleaseEx @ 0x14007C82C (KeAbPostReleaseEx.c)
 *     RtlInsertHeadCircularList @ 0x1400CCA08 (RtlInsertHeadCircularList.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

void __fastcall VrpWaitForDiffHiveEntryTransitionOwnerToLeave(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  ULONG_PTR v5; // rdi
  ULONG_PTR v6; // rsi
  __int64 v7; // rax
  _KLOCK_ENTRY *v8; // rbx
  struct _KTHREAD *CurrentThread; // rax
  _OWORD v10[3]; // [rsp+30h] [rbp-38h] BYREF

  memset(v10, 0, 0x28uLL);
  KeInitializeEvent((PRKEVENT)&v10[1], SynchronizationEvent, 0);
  RtlInsertHeadCircularList((__int64 *)(a1 + 48), v10);
  v5 = a1 + 24;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 24), v2, v3, v4);
  KeAbPostRelease(a1 + 24);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v6 = a1 + 40;
  v7 = KeAbPreAcquire(v6, 0LL, 0);
  v8 = (_KLOCK_ENTRY *)v7;
  if ( v7 )
    KeAbPreWait(v7);
  KeWaitForSingleObject(&v10[1], Executive, 0, 0, 0LL);
  if ( v8 )
  {
    KeAbPreAcquire(v6, (__int64)v8, 0);
    KeAbPostReleaseEx(v6, v8);
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v5, 0LL);
}
