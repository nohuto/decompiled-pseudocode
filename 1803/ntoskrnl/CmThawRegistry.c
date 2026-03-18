/*
 * XREFs of CmThawRegistry @ 0x1406F6B0C
 * Callers:
 *     NtThawRegistry @ 0x1406ED440 (NtThawRegistry.c)
 *     CmFreezeRegistry @ 0x1406F68BC (CmFreezeRegistry.c)
 *     CmpFreezeThawWorker @ 0x1406F6CF0 (CmpFreezeThawWorker.c)
 * Callees:
 *     KeCancelTimer @ 0x14005A760 (KeCancelTimer.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     CmpEnableLazyFlush @ 0x1400D1D1C (CmpEnableLazyFlush.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     HvMarkBaseBlockDirty @ 0x14049360C (HvMarkBaseBlockDirty.c)
 *     CmpGetNextActiveHive @ 0x14049BA70 (CmpGetNextActiveHive.c)
 *     CmpLockRegistryExclusive @ 0x14049BC8C (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 */

__int64 CmThawRegistry()
{
  unsigned int v0; // ebx
  struct _KTHREAD *CurrentThread; // rax
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 *NextActiveHive; // rax
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdi
  __int64 v12; // rax

  v0 = 0;
  KeCancelTimer(&CmpFreezeThawTimer);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    CmpLockRegistryExclusive();
    if ( CmpFreezeThawState == 1 )
    {
      for ( i = 0LL; ; i = (struct _EX_RUNDOWN_REF *)v8 )
      {
        NextActiveHive = CmpGetNextActiveHive(i);
        v8 = (__int64)NextActiveHive;
        if ( !NextActiveHive )
          break;
        v3 = NextActiveHive[8];
        if ( !*(_DWORD *)(v3 + 164) )
        {
          *(_OWORD *)(v3 + 112) = *(_OWORD *)(v3 + 4056);
          *(_OWORD *)(*(_QWORD *)(v8 + 64) + 148LL) = *(_OWORD *)(*(_QWORD *)(v8 + 64) + 4040LL);
          *(_OWORD *)(*(_QWORD *)(v8 + 64) + 128LL) = *(_OWORD *)(*(_QWORD *)(v8 + 64) + 4072LL);
          *(_DWORD *)(*(_QWORD *)(v8 + 64) + 164LL) = 1836346738;
          if ( (*(_DWORD *)(v8 + 4152) & 0x300) != 0x100 && !*(_DWORD *)(v8 + 104) )
          {
            ExAcquirePushLockExclusiveEx(v8 + 80, 0LL);
            HvMarkBaseBlockDirty(v8);
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v8 + 80), v4, v5, v6);
            KeAbPostRelease(v8 + 80);
          }
        }
      }
      while ( (__int64 *)CmpFreezeThawWaitListHead != &CmpFreezeThawWaitListHead )
      {
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpFreezeListLock, 0LL);
        v11 = CmpFreezeThawWaitListHead;
        if ( *(__int64 **)(CmpFreezeThawWaitListHead + 8) != &CmpFreezeThawWaitListHead
          || (v12 = *(_QWORD *)CmpFreezeThawWaitListHead,
              *(_QWORD *)(*(_QWORD *)CmpFreezeThawWaitListHead + 8LL) != CmpFreezeThawWaitListHead) )
        {
          __fastfail(3u);
        }
        CmpFreezeThawWaitListHead = *(_QWORD *)CmpFreezeThawWaitListHead;
        *(_QWORD *)(v12 + 8) = &CmpFreezeThawWaitListHead;
        ExReleasePushLockEx((ULONG_PTR)&CmpFreezeListLock, 0LL, v9, v10);
        KeSetEvent((PRKEVENT)(v11 + 16), 0, 0);
      }
      CmpFreezeThawState = 0;
      CmpEnableLazyFlush(2);
    }
    else
    {
      v0 = -1073741431;
    }
    CmpUnlockRegistry();
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return (unsigned int)-1073741431;
  }
  return v0;
}
