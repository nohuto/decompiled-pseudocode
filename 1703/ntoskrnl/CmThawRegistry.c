/*
 * XREFs of CmThawRegistry @ 0x140668BE4
 * Callers:
 *     NtThawRegistry @ 0x140660174 (NtThawRegistry.c)
 *     CmFreezeRegistry @ 0x1406689BC (CmFreezeRegistry.c)
 *     CmpFreezeThawWorker @ 0x140668DB0 (CmpFreezeThawWorker.c)
 * Callees:
 *     CmpEnableLazyFlush @ 0x14003B3E4 (CmpEnableLazyFlush.c)
 *     KeCancelTimer @ 0x14004D010 (KeCancelTimer.c)
 *     ExAcquireFastMutexUnsafe @ 0x140052AB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140052C30 (ExReleaseFastMutexUnsafe.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     CmpGetNextActiveHive @ 0x1404D8480 (CmpGetNextActiveHive.c)
 *     CmpLockRegistryExclusive @ 0x1404D85A8 (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     HvMarkBaseBlockDirty @ 0x1405D0948 (HvMarkBaseBlockDirty.c)
 */

__int64 CmThawRegistry()
{
  unsigned int v0; // edi
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v2; // si
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 v5; // rax
  __int64 *NextActiveHive; // rax
  __int64 v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // rax

  v0 = 0;
  KeCancelTimer(&CmpFreezeThawTimer);
  CmpLockRegistryExclusive();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v2 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v2 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
LABEL_3:
    v0 = -1073741431;
    goto LABEL_4;
  }
  if ( CmpFreezeThawState != 1 )
    goto LABEL_3;
  for ( i = 0LL; ; i = (struct _EX_RUNDOWN_REF *)v7 )
  {
    NextActiveHive = CmpGetNextActiveHive(i);
    v7 = (__int64)NextActiveHive;
    if ( !NextActiveHive )
      break;
    v5 = NextActiveHive[8];
    if ( !*(_DWORD *)(v5 + 164) )
    {
      *(_OWORD *)(v5 + 112) = *(_OWORD *)(v5 + 4056);
      *(_OWORD *)(*(_QWORD *)(v7 + 64) + 148LL) = *(_OWORD *)(*(_QWORD *)(v7 + 64) + 4040LL);
      *(_OWORD *)(*(_QWORD *)(v7 + 64) + 128LL) = *(_OWORD *)(*(_QWORD *)(v7 + 64) + 4072LL);
      *(_DWORD *)(*(_QWORD *)(v7 + 64) + 164LL) = 1836346738;
      if ( (*(_DWORD *)(v7 + 5360) & 0x300) != 0x100 && !*(_DWORD *)(v7 + 88) )
      {
        ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(v7 + 2840));
        HvMarkBaseBlockDirty(v7);
        ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v7 + 2840));
      }
    }
  }
  while ( (__int64 *)CmpFreezeThawWaitListHead != &CmpFreezeThawWaitListHead )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpFreezeListLock, 0LL);
    v8 = CmpFreezeThawWaitListHead;
    v9 = *(_QWORD *)CmpFreezeThawWaitListHead;
    if ( *(__int64 **)(CmpFreezeThawWaitListHead + 8) != &CmpFreezeThawWaitListHead
      || *(_QWORD *)(v9 + 8) != CmpFreezeThawWaitListHead )
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
LABEL_4:
  CmpUnlockRegistry();
  if ( v2 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return v0;
}
