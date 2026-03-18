/*
 * XREFs of MiShutdownSystem @ 0x14042EC54
 * Callers:
 *     MmShutdownSystem @ 0x14042EF70 (MmShutdownSystem.c)
 * Callees:
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     MmUnlockPagableImageSection @ 0x1400BC610 (MmUnlockPagableImageSection.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     CcNotifyWriteBehind @ 0x1401E051C (CcNotifyWriteBehind.c)
 *     MiFlushAllFilesystemPages @ 0x140218D3C (MiFlushAllFilesystemPages.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     MiZeroAllPageFiles @ 0x14042EDB4 (MiZeroAllPageFiles.c)
 *     MmLockPagableSectionByHandle @ 0x140507380 (MmLockPagableSectionByHandle.c)
 *     MmReleaseLoadLock @ 0x140515720 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x140515A20 (MmAcquireLoadLock.c)
 *     MiDeletePagingFiles @ 0x1406E4640 (MiDeletePagingFiles.c)
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

  if ( !dword_140388B0C )
  {
    CcNotifyWriteBehind();
    MiFlushAllFilesystemPages();
    dword_140388B0C = 1;
    KeSetEvent(&stru_14038A128, 0, 0);
    if ( byte_140388B0A == 1 )
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
