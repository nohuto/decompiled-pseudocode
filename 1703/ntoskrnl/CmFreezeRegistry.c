/*
 * XREFs of CmFreezeRegistry @ 0x1406689BC
 * Callers:
 *     NtFreezeRegistry @ 0x14065EC18 (NtFreezeRegistry.c)
 * Callees:
 *     CmpDisableLazyFlush @ 0x14003CCEC (CmpDisableLazyFlush.c)
 *     KiSetTimerEx @ 0x14004D040 (KiSetTimerEx.c)
 *     ExAcquireFastMutexUnsafe @ 0x140052AB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140052C30 (ExReleaseFastMutexUnsafe.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     CmpFlushHive @ 0x1404D6DE0 (CmpFlushHive.c)
 *     CmpGetNextActiveHive @ 0x1404D8480 (CmpGetNextActiveHive.c)
 *     CmpLockRegistryExclusive @ 0x1404D85A8 (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     HvMarkBaseBlockDirty @ 0x1405D0948 (HvMarkBaseBlockDirty.c)
 *     CmThawRegistry @ 0x140668BE4 (CmThawRegistry.c)
 */

__int64 __fastcall CmFreezeRegistry(int a1)
{
  int v2; // edi
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v4; // si
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 *NextActiveHive; // rax
  __int64 v11; // rbx
  int v12; // eax
  struct _KTHREAD *v13; // rax
  struct _EX_RUNDOWN_REF *j; // rcx
  __int64 *v15; // rax
  struct _EX_RUNDOWN_REF *v16; // rbx

  v2 = 0;
  CmpLockRegistryExclusive();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v4 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
LABEL_3:
    CmpUnlockRegistry();
    v2 = -1073741431;
    goto LABEL_4;
  }
  if ( CmpFreezeThawState )
    goto LABEL_3;
  for ( i = 0LL; ; i = (struct _EX_RUNDOWN_REF *)v11 )
  {
    NextActiveHive = CmpGetNextActiveHive(i);
    v11 = (__int64)NextActiveHive;
    if ( !NextActiveHive )
      break;
    if ( (NextActiveHive[18] & 3) == 0 )
    {
      *(_OWORD *)(NextActiveHive[8] + 4056) = *(_OWORD *)(NextActiveHive[8] + 112);
      *(_OWORD *)(NextActiveHive[8] + 4040) = *(_OWORD *)(NextActiveHive[8] + 148);
      *(_OWORD *)(NextActiveHive[8] + 4072) = *(_OWORD *)(NextActiveHive[8] + 128);
      v7 = NextActiveHive[8];
      *(_QWORD *)(v7 + 112) = 0LL;
      *(_QWORD *)(v7 + 120) = 0LL;
      v8 = *(_QWORD *)(v11 + 64);
      *(_QWORD *)(v8 + 148) = 0LL;
      *(_QWORD *)(v8 + 156) = 0LL;
      v9 = *(_QWORD *)(v11 + 64);
      *(_QWORD *)(v9 + 128) = 0LL;
      *(_QWORD *)(v9 + 136) = 0LL;
      *(_DWORD *)(*(_QWORD *)(v11 + 64) + 164LL) = 0;
      if ( (*(_DWORD *)(v11 + 5360) & 0x300) != 0x100 && !*(_DWORD *)(v11 + 88) )
      {
        ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(v11 + 2840));
        HvMarkBaseBlockDirty(v11);
        ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v11 + 2840));
      }
    }
  }
  v12 = CmFreezeThawTimeoutInSeconds;
  CmpFreezeThawState = 1;
  if ( a1 )
    v12 = a1;
  KiSetTimerEx((__int64)&CmpFreezeThawTimer, -10000000LL * v12, 0, 0, (__int64)&CmpFreezeThawDpc);
  CmpDisableLazyFlush(2u);
  CmpUnlockRegistry();
  v13 = KeGetCurrentThread();
  --v13->KernelApcDisable;
  for ( j = 0LL; ; j = v16 )
  {
    v15 = CmpGetNextActiveHive(j);
    v16 = (struct _EX_RUNDOWN_REF *)v15;
    if ( !v15 )
      break;
    if ( (v15[18] & 3) == 0 )
    {
      v2 = CmpFlushHive((ULONG_PTR)v15, 0xDu);
      if ( v2 < 0 )
      {
        ExReleaseRundownProtection(v16 + 347);
        CmThawRegistry();
        v2 = -1073741491;
        break;
      }
    }
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
LABEL_4:
  if ( v4 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return (unsigned int)v2;
}
