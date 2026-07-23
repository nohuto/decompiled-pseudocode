/*
 * XREFs of VrpUnloadDifferencingHive @ 0x14067E278
 * Callers:
 *     VrpCleanupNamespace @ 0x14067909C (VrpCleanupNamespace.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x14067A1F8 (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x14067A844 (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     ZwUnloadKey @ 0x140181660 (ZwUnloadKey.c)
 *     ZwUnloadKey2 @ 0x140181680 (ZwUnloadKey2.c)
 *     VrpBecomeDiffHiveEntryTransitionOwner @ 0x14067D9D8 (VrpBecomeDiffHiveEntryTransitionOwner.c)
 *     VrpDecrementDiffHiveEntryHardRefCount @ 0x14067DA28 (VrpDecrementDiffHiveEntryHardRefCount.c)
 *     VrpDereferenceDiffHiveEntry @ 0x14067DA6C (VrpDereferenceDiffHiveEntry.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x14067DC08 (VrpFindDiffHiveEntryForMountPointWithLock.c)
 *     VrpRelinquishDiffHiveEntryTransitionOwner @ 0x14067E238 (VrpRelinquishDiffHiveEntryTransitionOwner.c)
 */

__int64 __fastcall VrpUnloadDifferencingHive(UNICODE_STRING *String1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 DiffHiveEntryForMountPointWithLock; // rax
  __int64 v4; // rdi
  NTSTATUS v5; // ebp
  struct _KTHREAD *v6; // rax
  volatile signed __int64 *v7; // rsi
  char v8; // al
  char v9; // r14
  struct _KTHREAD *v10; // rax
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  OBJECT_ATTRIBUTES KeyObjectAttributes; // [rsp+20h] [rbp-48h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&gLoadedDiffHivesLock, 0LL);
  DiffHiveEntryForMountPointWithLock = VrpFindDiffHiveEntryForMountPointWithLock(String1);
  v4 = DiffHiveEntryForMountPointWithLock;
  if ( DiffHiveEntryForMountPointWithLock
    && _InterlockedIncrement64((volatile signed __int64 *)(DiffHiveEntryForMountPointWithLock + 16)) <= 1 )
  {
    __fastfail(0xEu);
  }
  ExReleasePushLockEx((ULONG_PTR)&gLoadedDiffHivesLock, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v4 )
  {
    v6 = KeGetCurrentThread();
    --v6->KernelApcDisable;
    v7 = (volatile signed __int64 *)(v4 + 24);
    ExAcquirePushLockExclusiveEx(v4 + 24, 0LL);
    if ( VrpDecrementDiffHiveEntryHardRefCount(v4) )
    {
      v8 = VrpBecomeDiffHiveEntryTransitionOwner(v4);
      *(_DWORD *)(v4 + 56) &= ~1u;
      v9 = v8;
      if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v4 + 24));
      KeAbPostRelease(v4 + 24);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      KeyObjectAttributes.RootDirectory = 0LL;
      KeyObjectAttributes.Length = 48;
      *(_OWORD *)&KeyObjectAttributes.SecurityDescriptor = 0LL;
      KeyObjectAttributes.Attributes = 576;
      KeyObjectAttributes.ObjectName = String1;
      v5 = ZwUnloadKey(&KeyObjectAttributes);
      if ( v5 < 0 )
        v5 = ZwUnloadKey2(&KeyObjectAttributes, 1u);
      v10 = KeGetCurrentThread();
      --v10->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(v4 + 24, 0LL);
      if ( v5 < 0 )
      {
        *(_DWORD *)(v4 + 56) |= 1u;
        if ( ++*(_QWORD *)(v4 + 32) <= 1uLL )
        {
          _m_prefetchw((const void *)(v4 + 16));
          v11 = *(_QWORD *)(v4 + 16);
          do
          {
            if ( (unsigned __int64)(v11 + 1) <= 1 )
            {
              if ( v11 )
                __fastfail(0xEu);
              __fastfail(0xEu);
            }
            v12 = v11;
            v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 16), v11 + 1, v11);
          }
          while ( v12 != v11 );
        }
      }
      if ( v9 )
        VrpRelinquishDiffHiveEntryTransitionOwner(v4);
    }
    else
    {
      v5 = 0;
    }
    if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v4 + 24));
    KeAbPostRelease(v4 + 24);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    VrpDereferenceDiffHiveEntry((_QWORD *)v4);
  }
  else
  {
    return (unsigned int)-1073741772;
  }
  return (unsigned int)v5;
}
