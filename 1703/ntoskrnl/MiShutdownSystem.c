/*
 * XREFs of MiShutdownSystem @ 0x1404193D0
 * Callers:
 *     MmShutdownSystem @ 0x140419790 (MmShutdownSystem.c)
 * Callees:
 *     MmUnlockPagableImageSection @ 0x14006CCE0 (MmUnlockPagableImageSection.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KeDelayExecutionThread @ 0x1400EE150 (KeDelayExecutionThread.c)
 *     CcNotifyWriteBehind @ 0x14013E078 (CcNotifyWriteBehind.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     MiFlushAllFilesystemPages @ 0x1402114A0 (MiFlushAllFilesystemPages.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MiZeroAllPageFiles @ 0x1404195D8 (MiZeroAllPageFiles.c)
 *     MmReleaseLoadLock @ 0x1404B2930 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1404B2970 (MmAcquireLoadLock.c)
 *     MmLockPagableSectionByHandle @ 0x1404B2EC0 (MmLockPagableSectionByHandle.c)
 *     ObCloseHandle @ 0x1404F9C90 (ObCloseHandle.c)
 */

char MiShutdownSystem()
{
  unsigned int i; // ebx
  __int64 Lock; // rax
  PVOID *v2; // rbx
  __int64 v3; // rbp
  _QWORD *v4; // rdi
  SIZE_T v5; // r14
  PVOID PoolWithTag; // rax
  PVOID v7; // rsi
  PVOID v8; // rcx
  char *v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // rdi
  void *v12; // rcx

  if ( !dword_14036C914 )
  {
    CcNotifyWriteBehind(2);
    MiFlushAllFilesystemPages(0);
    dword_14036C914 = 1;
    KeSetEvent(&stru_140380288, 0, 0);
    if ( byte_14036C912 == 1 )
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
    dword_14036BE20 = -1;
    KeSetEvent(&stru_140380770, 0, 0);
    for ( i = 0; i < 0x1F4; ++i )
    {
      if ( (__int64 *)qword_140380818 == &qword_140380818 )
        break;
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
      if ( !dword_14036BE20 )
      {
        dword_14036BE20 = -1;
        KeSetEvent(&stru_140380770, 0, 0);
      }
    }
    Lock = MmAcquireLoadLock();
    v2 = (PVOID *)PsLoadedModuleList;
    v3 = Lock;
    while ( v2 != &PsLoadedModuleList )
    {
      v4 = v2[17];
      if ( v4 != (_QWORD *)1 && v4 != (_QWORD *)-2LL && ((unsigned __int8)v4 & 1) == 0 )
      {
        v5 = 8LL * *v4 + 8;
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x54446D4Du);
        v7 = PoolWithTag;
        if ( !PoolWithTag )
        {
          PopShutdownCleanly = 0;
          break;
        }
        memmove(PoolWithTag, v4, v5);
        ExFreePoolWithTag(v4, 0);
        v2[17] = v7;
      }
      v8 = v2[10];
      if ( v8 )
      {
        ExFreePoolWithTag(v8, 0);
        v2[10] = 0LL;
      }
      v2 = (PVOID *)*v2;
    }
    MmReleaseLoadLock(v3);
    if ( Count )
    {
      v9 = (char *)&unk_1403817E0;
      v10 = Count;
      do
      {
        v11 = *(_QWORD *)v9;
        if ( (*(_BYTE *)(*(_QWORD *)v9 + 204LL) & 0x40) == 0 )
        {
          ExFreePoolWithTag(*(PVOID *)(v11 + 104), 0);
          v12 = *(void **)(v11 + 224);
          *(_QWORD *)(v11 + 104) = 0LL;
          ObCloseHandle(v12, 0);
        }
        v9 += 8;
        --v10;
      }
      while ( v10 );
    }
  }
  return 1;
}
