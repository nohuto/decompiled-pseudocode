/*
 * XREFs of VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x14070D4FC
 * Callers:
 *     VrpLoadDifferencingHive @ 0x14070D6EC (VrpLoadDifferencingHive.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     VrpAllocateDiffHiveEntry @ 0x14070CFF4 (VrpAllocateDiffHiveEntry.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x14070D34C (VrpFindDiffHiveEntryForMountPointWithLock.c)
 */

__int64 __fastcall VrpFindOrCreateDiffHiveEntryForMountPoint(PCUNICODE_STRING String1, const void **a2, __int64 *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v4; // ebx
  _QWORD *DiffHiveEntry; // rdi
  __int64 DiffHiveEntryForMountPointWithLock; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  struct _KTHREAD *v12; // rax
  unsigned int v13; // r8d
  char v14; // cl
  unsigned __int64 v15; // rsi
  __int64 v16; // rdx

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  DiffHiveEntry = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&gLoadedDiffHivesLock, 0LL);
  DiffHiveEntryForMountPointWithLock = VrpFindDiffHiveEntryForMountPointWithLock(String1);
  if ( DiffHiveEntryForMountPointWithLock )
    goto LABEL_2;
  ExReleasePushLockEx((ULONG_PTR)&gLoadedDiffHivesLock, 0LL, v10, v11);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  DiffHiveEntry = VrpAllocateDiffHiveEntry(&String1->Length, a2);
  if ( !DiffHiveEntry )
    return (unsigned int)-1073741670;
  v12 = KeGetCurrentThread();
  --v12->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&gLoadedDiffHivesLock, 0LL);
  DiffHiveEntryForMountPointWithLock = VrpFindDiffHiveEntryForMountPointWithLock(String1);
  if ( DiffHiveEntryForMountPointWithLock )
  {
LABEL_2:
    if ( _InterlockedIncrement64((volatile signed __int64 *)(DiffHiveEntryForMountPointWithLock + 16)) <= 1 )
      __fastfail(0xEu);
    *a3 = DiffHiveEntryForMountPointWithLock;
  }
  else
  {
    v13 = (unsigned int)dword_1403C9FC4 >> 5;
    v14 = dword_1403C9FC4 & 0x1F;
    *a3 = (__int64)DiffHiveEntry;
    v15 = DiffHiveEntry[1] & (-1LL << v14);
    v16 = qword_1403C9FC8;
    v10 = (HIBYTE(v15)
         + 37
         * (BYTE6(v15)
          + 37
          * (BYTE5(v15)
           + 37
           * (BYTE4(v15)
            + 37 * (BYTE3(v15) + 37 * (BYTE2(v15) + 37 * (BYTE1(v15) + 37 * ((unsigned __int8)v15 + 11623883)))))))) & (v13 - 1);
    *DiffHiveEntry = *(_QWORD *)(qword_1403C9FC8 + 8 * v10);
    *(_QWORD *)(v16 + 8 * v10) = DiffHiveEntry;
    DiffHiveEntry = 0LL;
    ++gLoadedDiffHives;
  }
  ExReleasePushLockEx((ULONG_PTR)&gLoadedDiffHivesLock, 0LL, v10, v11);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( DiffHiveEntry )
    ExFreePoolWithTag(DiffHiveEntry, 0x67655256u);
  return v4;
}
