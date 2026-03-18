/*
 * XREFs of MiShutdownSystem @ 0x1404850A8
 * Callers:
 *     MmShutdownSystem @ 0x1404853A0 (MmShutdownSystem.c)
 * Callees:
 *     MmUnlockPagableImageSection @ 0x1400C1700 (MmUnlockPagableImageSection.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     CcNotifyWriteBehind @ 0x140157744 (CcNotifyWriteBehind.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     MiFlushAllFilesystemPages @ 0x140255BA8 (MiFlushAllFilesystemPages.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     MiZeroAllPageFiles @ 0x140485208 (MiZeroAllPageFiles.c)
 *     MmLockPagableSectionByHandle @ 0x14053EAD0 (MmLockPagableSectionByHandle.c)
 *     MmReleaseLoadLock @ 0x1405BC7A0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1405BC900 (MmAcquireLoadLock.c)
 *     MiDeletePagingFiles @ 0x14074EA48 (MiDeletePagingFiles.c)
 */

char MiShutdownSystem()
{
  __int64 Lock; // rax
  PVOID *v1; // rbx
  __int64 v2; // rbp
  _QWORD *v3; // rdi
  SIZE_T v4; // r14
  PVOID PoolWithTag; // rax
  PVOID v6; // rsi
  PVOID v7; // rcx

  if ( !dword_1403CBDA4 )
  {
    CcNotifyWriteBehind();
    MiFlushAllFilesystemPages();
    dword_1403CBDA4 = 1;
    KeSetEvent(&stru_1403CDFA8, 0, 0);
    if ( byte_1403CBDA2 == 1 )
    {
      if ( (MiFlags & 4) == 0 )
        MmLockPagableSectionByHandle(ExPageLockHandle);
      MiZeroAllPageFiles();
      if ( (MiFlags & 4) == 0 )
        MmUnlockPagableImageSection(ExPageLockHandle);
    }
  }
  if ( PopShutdownCleanly )
  {
    Lock = MmAcquireLoadLock();
    v1 = (PVOID *)PsLoadedModuleList;
    v2 = Lock;
    while ( v1 != &PsLoadedModuleList )
    {
      v3 = v1[17];
      if ( v3 != (_QWORD *)1 && v3 != (_QWORD *)-2LL && ((unsigned __int8)v3 & 1) == 0 )
      {
        v4 = 8LL * *v3 + 8;
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x54446D4Du);
        v6 = PoolWithTag;
        if ( !PoolWithTag )
        {
          PopShutdownCleanly = 0;
          break;
        }
        memmove(PoolWithTag, v3, v4);
        ExFreePoolWithTag(v3, 0);
        v1[17] = v6;
      }
      v7 = v1[10];
      if ( v7 )
      {
        ExFreePoolWithTag(v7, 0);
        v1[10] = 0LL;
      }
      v1 = (PVOID *)*v1;
    }
    MmReleaseLoadLock(v2);
    MiDeletePagingFiles(&MiSystemPartition);
  }
  return 1;
}
