/*
 * XREFs of CmFreezeRegistry @ 0x14044E168
 * Callers:
 *     NtFreezeRegistry @ 0x14044E118 (NtFreezeRegistry.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140016B40 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140016CF0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     KiSetTimerEx @ 0x1400E1F70 (KiSetTimerEx.c)
 *     CmpDisableLazyFlush @ 0x14013267C (CmpDisableLazyFlush.c)
 *     CmThawRegistry @ 0x14044F478 (CmThawRegistry.c)
 *     HvMarkBaseBlockDirty @ 0x14046F414 (HvMarkBaseBlockDirty.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpFlushHive @ 0x1404DD950 (CmpFlushHive.c)
 *     CmpGetNextActiveHive @ 0x1404E3AA0 (CmpGetNextActiveHive.c)
 *     CmpLockRegistryExclusive @ 0x1404E3BCC (CmpLockRegistryExclusive.c)
 */

__int64 __fastcall CmFreezeRegistry(int a1)
{
  int v2; // edi
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v4; // si
  __int64 i; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 NextActiveHive; // rax
  __int64 v10; // rbx
  int v11; // eax
  struct _KTHREAD *v12; // rax
  struct _EX_RUNDOWN_REF *j; // rcx
  ULONG_PTR v14; // rax
  struct _EX_RUNDOWN_REF *v15; // rbx

  v2 = 0;
  CmpLockRegistryExclusive();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v4 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    goto LABEL_23;
  }
  if ( CmpFreezeThawState )
  {
LABEL_23:
    CmpUnlockRegistry();
    v2 = -1073741431;
    goto LABEL_19;
  }
  for ( i = 0LL; ; i = v10 )
  {
    NextActiveHive = CmpGetNextActiveHive(i);
    v10 = NextActiveHive;
    if ( !NextActiveHive )
      break;
    if ( (*(_DWORD *)(NextActiveHive + 144) & 3) == 0 )
    {
      *(_OWORD *)(*(_QWORD *)(NextActiveHive + 64) + 4056LL) = *(_OWORD *)(*(_QWORD *)(NextActiveHive + 64) + 112LL);
      *(_OWORD *)(*(_QWORD *)(NextActiveHive + 64) + 4040LL) = *(_OWORD *)(*(_QWORD *)(NextActiveHive + 64) + 148LL);
      *(_OWORD *)(*(_QWORD *)(NextActiveHive + 64) + 4072LL) = *(_OWORD *)(*(_QWORD *)(NextActiveHive + 64) + 128LL);
      v6 = *(_QWORD *)(NextActiveHive + 64);
      *(_QWORD *)(v6 + 112) = 0LL;
      *(_QWORD *)(v6 + 120) = 0LL;
      v7 = *(_QWORD *)(v10 + 64);
      *(_QWORD *)(v7 + 148) = 0LL;
      *(_QWORD *)(v7 + 156) = 0LL;
      v8 = *(_QWORD *)(v10 + 64);
      *(_QWORD *)(v8 + 128) = 0LL;
      *(_QWORD *)(v8 + 136) = 0LL;
      *(_DWORD *)(*(_QWORD *)(v10 + 64) + 164LL) = 0;
      if ( (*(_DWORD *)(v10 + 5360) & 0x300) != 0x100 && !*(_DWORD *)(v10 + 88) )
      {
        ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(v10 + 2840));
        HvMarkBaseBlockDirty(v10);
        ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v10 + 2840));
      }
    }
  }
  v11 = CmFreezeThawTimeoutInSeconds;
  CmpFreezeThawState = 1;
  if ( a1 )
    v11 = a1;
  KiSetTimerEx((__int64)&CmpFreezeThawTimer, -10000000LL * v11, 0, 0, (__int64)&CmpFreezeThawDpc);
  CmpDisableLazyFlush(2u);
  CmpUnlockRegistry();
  v12 = KeGetCurrentThread();
  --v12->KernelApcDisable;
  for ( j = 0LL; ; j = v15 )
  {
    v14 = CmpGetNextActiveHive(j);
    v15 = (struct _EX_RUNDOWN_REF *)v14;
    if ( !v14 )
      break;
    if ( (*(_DWORD *)(v14 + 144) & 3) == 0 )
    {
      v2 = CmpFlushHive(v14);
      if ( v2 < 0 )
      {
        ExReleaseRundownProtection_0(v15 + 347);
        CmThawRegistry();
        v2 = -1073741491;
        break;
      }
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
LABEL_19:
  if ( v4 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return (unsigned int)v2;
}
