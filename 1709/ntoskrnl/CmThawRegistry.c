/*
 * XREFs of CmThawRegistry @ 0x14044F478
 * Callers:
 *     CmFreezeRegistry @ 0x14044E168 (CmFreezeRegistry.c)
 *     NtThawRegistry @ 0x14044F43C (NtThawRegistry.c)
 *     CmpFreezeThawWorker @ 0x140693A00 (CmpFreezeThawWorker.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140016B40 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140016CF0 (ExReleaseFastMutexUnsafe.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     KeCancelTimer @ 0x1400E2110 (KeCancelTimer.c)
 *     CmpEnableLazyFlush @ 0x14012E024 (CmpEnableLazyFlush.c)
 *     HvMarkBaseBlockDirty @ 0x14046F414 (HvMarkBaseBlockDirty.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpGetNextActiveHive @ 0x1404E3AA0 (CmpGetNextActiveHive.c)
 *     CmpLockRegistryExclusive @ 0x1404E3BCC (CmpLockRegistryExclusive.c)
 */

__int64 CmThawRegistry()
{
  unsigned int v0; // edi
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v2; // si
  __int64 i; // rcx
  __int64 NextActiveHive; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v8; // rbx
  __int64 v9; // rax

  v0 = 0;
  KeCancelTimer(&CmpFreezeThawTimer);
  CmpLockRegistryExclusive();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v2 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v2 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    goto LABEL_17;
  }
  if ( CmpFreezeThawState != 1 )
  {
LABEL_17:
    v0 = -1073741431;
    goto LABEL_13;
  }
  for ( i = 0LL; ; i = v5 )
  {
    NextActiveHive = CmpGetNextActiveHive(i);
    v5 = NextActiveHive;
    if ( !NextActiveHive )
      break;
    v6 = *(_QWORD *)(NextActiveHive + 64);
    if ( !*(_DWORD *)(v6 + 164) )
    {
      *(_OWORD *)(v6 + 112) = *(_OWORD *)(v6 + 4056);
      *(_OWORD *)(*(_QWORD *)(v5 + 64) + 148LL) = *(_OWORD *)(*(_QWORD *)(v5 + 64) + 4040LL);
      *(_OWORD *)(*(_QWORD *)(v5 + 64) + 128LL) = *(_OWORD *)(*(_QWORD *)(v5 + 64) + 4072LL);
      *(_DWORD *)(*(_QWORD *)(v5 + 64) + 164LL) = 1836346738;
      if ( (*(_DWORD *)(v5 + 5360) & 0x300) != 0x100 && !*(_DWORD *)(v5 + 88) )
      {
        ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(v5 + 2840));
        HvMarkBaseBlockDirty(v5);
        ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v5 + 2840));
      }
    }
  }
  while ( (__int64 *)CmpFreezeThawWaitListHead != &CmpFreezeThawWaitListHead )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpFreezeListLock, 0LL);
    v8 = CmpFreezeThawWaitListHead;
    if ( *(__int64 **)(CmpFreezeThawWaitListHead + 8) != &CmpFreezeThawWaitListHead
      || (v9 = *(_QWORD *)CmpFreezeThawWaitListHead,
          *(_QWORD *)(*(_QWORD *)CmpFreezeThawWaitListHead + 8LL) != CmpFreezeThawWaitListHead) )
    {
      __fastfail(3u);
    }
    CmpFreezeThawWaitListHead = *(_QWORD *)CmpFreezeThawWaitListHead;
    *(_QWORD *)(v9 + 8) = &CmpFreezeThawWaitListHead;
    ExReleasePushLockEx((ULONG_PTR)&CmpFreezeListLock, 0LL);
    KeSetEvent((PRKEVENT)(v8 + 16), 0, 0);
  }
  CmpFreezeThawState = 0;
  CmpEnableLazyFlush(2);
LABEL_13:
  CmpUnlockRegistry();
  if ( v2 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return v0;
}
