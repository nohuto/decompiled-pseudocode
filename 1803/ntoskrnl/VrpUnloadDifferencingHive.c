/*
 * XREFs of VrpUnloadDifferencingHive @ 0x14070DA14
 * Callers:
 *     VrpCleanupNamespace @ 0x140707750 (VrpCleanupNamespace.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x140708F80 (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x1407095E8 (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     ZwUnloadKey @ 0x1401AACA0 (ZwUnloadKey.c)
 *     ZwUnloadKey2 @ 0x1401AACC0 (ZwUnloadKey2.c)
 *     VrpBecomeDiffHiveEntryTransitionOwner @ 0x14070D100 (VrpBecomeDiffHiveEntryTransitionOwner.c)
 *     VrpDecrementDiffHiveEntryHardRefCount @ 0x14070D150 (VrpDecrementDiffHiveEntryHardRefCount.c)
 *     VrpDereferenceDiffHiveEntry @ 0x14070D198 (VrpDereferenceDiffHiveEntry.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x14070D34C (VrpFindDiffHiveEntryForMountPointWithLock.c)
 *     VrpRelinquishDiffHiveEntryTransitionOwner @ 0x14070D9D4 (VrpRelinquishDiffHiveEntryTransitionOwner.c)
 */

__int64 __fastcall VrpUnloadDifferencingHive(UNICODE_STRING *String1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 DiffHiveEntryForMountPointWithLock; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdi
  NTSTATUS v7; // ebp
  struct _KTHREAD *v8; // rax
  volatile signed __int64 *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  char v13; // al
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  char v17; // r14
  struct _KTHREAD *v18; // rax
  signed __int64 v19; // rax
  unsigned __int64 i; // rdx
  signed __int64 v21; // rtt
  OBJECT_ATTRIBUTES KeyObjectAttributes; // [rsp+20h] [rbp-48h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&gLoadedDiffHivesLock, 0LL);
  DiffHiveEntryForMountPointWithLock = VrpFindDiffHiveEntryForMountPointWithLock(String1);
  v6 = DiffHiveEntryForMountPointWithLock;
  if ( DiffHiveEntryForMountPointWithLock
    && _InterlockedIncrement64((volatile signed __int64 *)(DiffHiveEntryForMountPointWithLock + 16)) <= 1 )
  {
    __fastfail(0xEu);
  }
  ExReleasePushLockEx((ULONG_PTR)&gLoadedDiffHivesLock, 0LL, v4, v5);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v6 )
  {
    v8 = KeGetCurrentThread();
    --v8->KernelApcDisable;
    v9 = (volatile signed __int64 *)(v6 + 24);
    ExAcquirePushLockExclusiveEx(v6 + 24, 0LL);
    if ( VrpDecrementDiffHiveEntryHardRefCount(v6) )
    {
      v13 = VrpBecomeDiffHiveEntryTransitionOwner(v6);
      *(_DWORD *)(v6 + 56) &= ~1u;
      v17 = v13;
      if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 24), v14, v15, v16);
      KeAbPostRelease(v6 + 24);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      KeyObjectAttributes.RootDirectory = 0LL;
      KeyObjectAttributes.Length = 48;
      *(_OWORD *)&KeyObjectAttributes.SecurityDescriptor = 0LL;
      KeyObjectAttributes.Attributes = 576;
      KeyObjectAttributes.ObjectName = String1;
      v7 = ZwUnloadKey(&KeyObjectAttributes);
      if ( v7 < 0 )
        v7 = ZwUnloadKey2(&KeyObjectAttributes, 1u);
      v18 = KeGetCurrentThread();
      --v18->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(v6 + 24, 0LL);
      if ( v7 < 0 )
      {
        *(_DWORD *)(v6 + 56) |= 1u;
        if ( ++*(_QWORD *)(v6 + 32) <= 1uLL )
        {
          _m_prefetchw((const void *)(v6 + 16));
          v19 = *(_QWORD *)(v6 + 16);
          for ( i = v19 + 1; ; i = v19 + 1 )
          {
            if ( i <= 1 )
            {
              if ( i != 1 )
                __fastfail(0xEu);
              __fastfail(0xEu);
            }
            v21 = v19;
            v19 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 16), i, v19);
            v10 = v19;
            if ( v21 == v19 )
              break;
          }
        }
      }
      if ( v17 )
        VrpRelinquishDiffHiveEntryTransitionOwner(v6);
    }
    else
    {
      v7 = 0;
    }
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 24), v10, v11, v12);
    KeAbPostRelease(v6 + 24);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    VrpDereferenceDiffHiveEntry((_QWORD *)v6);
  }
  else
  {
    return (unsigned int)-1073741772;
  }
  return (unsigned int)v7;
}
