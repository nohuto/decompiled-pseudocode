/*
 * XREFs of VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x1406A8E10
 * Callers:
 *     VrpLoadDifferencingHive @ 0x1406A8FE8 (VrpLoadDifferencingHive.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     VrpAllocateDiffHiveEntry @ 0x1406A895C (VrpAllocateDiffHiveEntry.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x1406A8C94 (VrpFindDiffHiveEntryForMountPointWithLock.c)
 */

__int64 __fastcall VrpFindOrCreateDiffHiveEntryForMountPoint(PCUNICODE_STRING String1, const void **a2, __int64 *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v4; // ebx
  _QWORD *DiffHiveEntry; // rdi
  __int64 DiffHiveEntryForMountPointWithLock; // rdx
  struct _KTHREAD *v10; // rax
  unsigned int v11; // r9d
  char v12; // cl
  __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v16; // [rsp+58h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  DiffHiveEntry = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&gLoadedDiffHivesLock, 0LL);
  DiffHiveEntryForMountPointWithLock = VrpFindDiffHiveEntryForMountPointWithLock(String1);
  if ( DiffHiveEntryForMountPointWithLock )
    goto LABEL_2;
  ExReleasePushLockEx((ULONG_PTR)&gLoadedDiffHivesLock, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  DiffHiveEntry = VrpAllocateDiffHiveEntry(&String1->Length, a2);
  if ( !DiffHiveEntry )
    return (unsigned int)-1073741670;
  v10 = KeGetCurrentThread();
  --v10->KernelApcDisable;
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
    v11 = (unsigned int)dword_140386AA4 >> 5;
    v12 = dword_140386AA4 & 0x1F;
    *a3 = (__int64)DiffHiveEntry;
    v16 = DiffHiveEntry[1] & (-1LL << v12);
    v13 = qword_140386AA8;
    v14 = (37
         * (BYTE6(v16)
          + 37
          * (BYTE5(v16)
           + 37
           * (BYTE4(v16)
            + 37 * (BYTE3(v16) + 37 * (BYTE2(v16) + 37 * (BYTE1(v16) + 37 * ((unsigned __int8)v16 + 11623883)))))))
         + HIBYTE(v16)) & (v11 - 1);
    *DiffHiveEntry = *(_QWORD *)(qword_140386AA8 + 8 * v14);
    *(_QWORD *)(v13 + 8 * v14) = DiffHiveEntry;
    DiffHiveEntry = 0LL;
    ++gLoadedDiffHives;
  }
  ExReleasePushLockEx((ULONG_PTR)&gLoadedDiffHivesLock, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( DiffHiveEntry )
    ExFreePoolWithTag(DiffHiveEntry, 0x67655256u);
  return v4;
}
