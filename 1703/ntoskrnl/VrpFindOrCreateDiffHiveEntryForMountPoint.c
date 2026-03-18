/*
 * XREFs of VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x14067DD84
 * Callers:
 *     VrpLoadDifferencingHive @ 0x14067DF68 (VrpLoadDifferencingHive.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     VrpAllocateDiffHiveEntry @ 0x14067D8C8 (VrpAllocateDiffHiveEntry.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x14067DC08 (VrpFindDiffHiveEntryForMountPointWithLock.c)
 */

__int64 __fastcall VrpFindOrCreateDiffHiveEntryForMountPoint(PCUNICODE_STRING String1, const void **a2, __int64 *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *DiffHiveEntry; // rbx
  __int64 DiffHiveEntryForMountPointWithLock; // rax
  unsigned int v9; // edi
  struct _KTHREAD *v10; // rax
  __int64 v11; // rax
  unsigned int v12; // r8d
  char v13; // cl
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v17; // [rsp+58h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  DiffHiveEntry = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&gLoadedDiffHivesLock, 0LL);
  DiffHiveEntryForMountPointWithLock = VrpFindDiffHiveEntryForMountPointWithLock(String1);
  if ( DiffHiveEntryForMountPointWithLock )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(DiffHiveEntryForMountPointWithLock + 16)) <= 1 )
      __fastfail(0xEu);
    *a3 = DiffHiveEntryForMountPointWithLock;
  }
  else
  {
    ExReleasePushLockEx((ULONG_PTR)&gLoadedDiffHivesLock, 0LL);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    DiffHiveEntry = VrpAllocateDiffHiveEntry(&String1->Length, a2);
    if ( !DiffHiveEntry )
      return (unsigned int)-1073741670;
    v10 = KeGetCurrentThread();
    --v10->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&gLoadedDiffHivesLock, 0LL);
    v11 = VrpFindDiffHiveEntryForMountPointWithLock(String1);
    if ( v11 )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v11 + 16)) <= 1 )
        __fastfail(0xEu);
      *a3 = v11;
    }
    else
    {
      v12 = (unsigned int)dword_14036AB04 >> 5;
      v13 = dword_14036AB04 & 0x1F;
      *a3 = (__int64)DiffHiveEntry;
      v17 = DiffHiveEntry[1] & (-1LL << v13);
      v14 = qword_14036AB08;
      v15 = (37
           * (BYTE6(v17)
            + 37
            * (BYTE5(v17)
             + 37
             * (BYTE4(v17)
              + 37 * (BYTE3(v17) + 37 * (BYTE2(v17) + 37 * (BYTE1(v17) + 37 * ((unsigned __int8)v17 + 11623883)))))))
           + HIBYTE(v17)) & (v12 - 1);
      *DiffHiveEntry = *(_QWORD *)(qword_14036AB08 + 8 * v15);
      *(_QWORD *)(v14 + 8 * v15) = DiffHiveEntry;
      ++gLoadedDiffHives;
      DiffHiveEntry = 0LL;
    }
  }
  v9 = 0;
  ExReleasePushLockEx((ULONG_PTR)&gLoadedDiffHivesLock, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( DiffHiveEntry )
    ExFreePoolWithTag(DiffHiveEntry, 0x67655256u);
  return v9;
}
