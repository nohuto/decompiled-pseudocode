/*
 * XREFs of CmFreezeRegistry @ 0x1406F68BC
 * Callers:
 *     NtFreezeRegistry @ 0x1406EBFB8 (NtFreezeRegistry.c)
 * Callees:
 *     KiSetTimerEx @ 0x14005AB60 (KiSetTimerEx.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     CmpDisableLazyFlush @ 0x1400D2EE8 (CmpDisableLazyFlush.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     HvMarkBaseBlockDirty @ 0x14049360C (HvMarkBaseBlockDirty.c)
 *     CmpGetNextActiveHive @ 0x14049BA70 (CmpGetNextActiveHive.c)
 *     CmpLockRegistryExclusive @ 0x14049BC8C (CmpLockRegistryExclusive.c)
 *     CmpFlushHive @ 0x14049D2A8 (CmpFlushHive.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmThawRegistry @ 0x1406F6B0C (CmThawRegistry.c)
 */

__int64 __fastcall CmFreezeRegistry(int a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v2; // ebx
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *NextActiveHive; // rax
  __int64 v12; // rdi
  int v13; // eax
  struct _KTHREAD *v14; // rax
  struct _EX_RUNDOWN_REF *j; // rcx
  __int64 *v16; // rax
  struct _EX_RUNDOWN_REF *v17; // rdi

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    CmpLockRegistryExclusive();
    if ( CmpFreezeThawState )
    {
      v2 = -1073741431;
      CmpUnlockRegistry();
    }
    else
    {
      for ( i = 0LL; ; i = (struct _EX_RUNDOWN_REF *)v12 )
      {
        NextActiveHive = CmpGetNextActiveHive(i);
        v12 = (__int64)NextActiveHive;
        if ( !NextActiveHive )
          break;
        if ( (NextActiveHive[20] & 3) == 0 )
        {
          *(_OWORD *)(NextActiveHive[8] + 4056) = *(_OWORD *)(NextActiveHive[8] + 112);
          *(_OWORD *)(NextActiveHive[8] + 4040) = *(_OWORD *)(NextActiveHive[8] + 148);
          *(_OWORD *)(NextActiveHive[8] + 4072) = *(_OWORD *)(NextActiveHive[8] + 128);
          v5 = NextActiveHive[8];
          *(_QWORD *)(v5 + 112) = 0LL;
          *(_QWORD *)(v5 + 120) = 0LL;
          v6 = *(_QWORD *)(v12 + 64);
          *(_QWORD *)(v6 + 148) = 0LL;
          *(_QWORD *)(v6 + 156) = 0LL;
          v7 = *(_QWORD *)(v12 + 64);
          *(_QWORD *)(v7 + 128) = 0LL;
          *(_QWORD *)(v7 + 136) = 0LL;
          *(_DWORD *)(*(_QWORD *)(v12 + 64) + 164LL) = 0;
          if ( (*(_DWORD *)(v12 + 4152) & 0x300) != 0x100 && !*(_DWORD *)(v12 + 104) )
          {
            ExAcquirePushLockExclusiveEx(v12 + 80, 0LL);
            HvMarkBaseBlockDirty(v12);
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v12 + 80), v8, v9, v10);
            KeAbPostRelease(v12 + 80);
          }
        }
      }
      v13 = CmFreezeThawTimeoutInSeconds;
      CmpFreezeThawState = 1;
      if ( a1 )
        v13 = a1;
      KiSetTimerEx((__int64)&CmpFreezeThawTimer, -10000000LL * v13, 0, 0, (__int64)&CmpFreezeThawDpc);
      CmpDisableLazyFlush(2u);
      CmpUnlockRegistry();
      v14 = KeGetCurrentThread();
      --v14->KernelApcDisable;
      for ( j = 0LL; ; j = v17 )
      {
        v16 = CmpGetNextActiveHive(j);
        v17 = (struct _EX_RUNDOWN_REF *)v16;
        if ( !v16 )
          break;
        if ( (v16[20] & 3) == 0 )
        {
          v2 = CmpFlushHive((ULONG_PTR)v16, 0xDu);
          if ( v2 < 0 )
          {
            ExReleaseRundownProtection(v17 + 204);
            CmThawRegistry();
            v2 = -1073741491;
            break;
          }
        }
      }
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return (unsigned int)-1073741431;
  }
  return (unsigned int)v2;
}
