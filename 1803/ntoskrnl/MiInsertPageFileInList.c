/*
 * XREFs of MiInsertPageFileInList @ 0x14063C7A8
 * Callers:
 *     MmStoreRegister @ 0x14063BBC8 (MmStoreRegister.c)
 *     MiCreatePagingFile @ 0x14063BE50 (MiCreatePagingFile.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     MiPartitionActive @ 0x140071968 (MiPartitionActive.c)
 *     MiNumberWsSwapPagefiles @ 0x140080AFC (MiNumberWsSwapPagefiles.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     MiIncreaseCommitLimits @ 0x14017DC60 (MiIncreaseCommitLimits.c)
 *     MiUpdateReserveClusterInfo @ 0x14017DEF0 (MiUpdateReserveClusterInfo.c)
 *     MiUpdatePageFileList @ 0x14017DF20 (MiUpdatePageFileList.c)
 *     PsCreateSystemThreadEx @ 0x14052AC40 (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall MiInsertPageFileInList(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v3; // r13
  _QWORD **v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rsi
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v8; // r12d
  volatile signed __int64 *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbp
  __int16 v14; // cx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  char v18; // bl
  KPRIORITY v19; // edx
  BOOLEAN v20; // r8
  int SystemThread; // ebp
  __int64 v23; // [rsp+90h] [rbp+8h] BYREF
  __int64 v24; // [rsp+98h] [rbp+10h]

  v1 = *(_QWORD *)(a1 + 8);
  *(_BYTE *)(a1 + 206) |= 1u;
  v3 = *(_QWORD *)a1;
  v24 = v1;
  v4 = (_QWORD **)(a1 + 64);
  v5 = 2LL;
  do
  {
    if ( *v4 )
      **v4 = 2575857425LL;
    ++v4;
    --v5;
  }
  while ( v5 );
  v6 = *(_QWORD *)(a1 + 256);
  CurrentThread = KeGetCurrentThread();
  v8 = 16;
  if ( (ULONG_PTR *)v6 != &MiSystemPartition )
    v8 = 1;
  --CurrentThread->SpecialApcDisable;
  v9 = (volatile signed __int64 *)(v6 + 1024);
  ExAcquirePushLockExclusiveEx(v6 + 1024, 0LL);
  if ( !*(_QWORD *)(v6 + 152) )
  {
    MiPartitionActive(v6);
    SystemThread = PsCreateSystemThreadEx(
                     (__int64)&v23,
                     0x1FFFFF,
                     0LL,
                     *(_QWORD *)(*(_QWORD *)(v6 + 168) + 112LL),
                     0LL,
                     (__int64)MiModifiedPageWriter,
                     v6,
                     0LL,
                     0LL);
    if ( SystemThread < 0 )
    {
      if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 1024), v10, v11, v12);
      KeAbPostRelease(v6 + 1024);
      goto LABEL_31;
    }
    *(_QWORD *)(v6 + 152) = v23;
  }
  v13 = *(unsigned int *)(v6 + 6872);
  if ( (unsigned int)v13 >= v8 )
    goto LABEL_28;
  v14 = *(_WORD *)(a1 + 204) & 0xFFF0 | v13 & 0xF;
  *(_WORD *)(a1 + 204) = v14;
  if ( (v14 & 0x50) == 0 )
  {
    if ( (unsigned int)MiIncreaseCommitLimits(v6, v3, v24, 0, a1) )
    {
      if ( (*(_BYTE *)(a1 + 204) & 0x20) == 0 && !*(_DWORD *)(v6 + 1020) )
        *(_DWORD *)(v6 + 1020) = 1;
      goto LABEL_16;
    }
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 1024), v15, v16, v17);
    KeAbPostRelease(v6 + 1024);
    SystemThread = -1073741583;
LABEL_31:
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    return (unsigned int)SystemThread;
  }
  if ( (v14 & 0x10) != 0 && (unsigned int)MiNumberWsSwapPagefiles(v6) )
  {
LABEL_28:
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 1024), v10, v11, v12);
    KeAbPostRelease(v6 + 1024);
    SystemThread = -1073741673;
    goto LABEL_31;
  }
  MiUpdatePageFileList(a1, 1);
  *(_QWORD *)(v6 + 8 * v13 + 6880) = a1;
  *(_DWORD *)(v6 + 6872) = v13 + 1;
LABEL_16:
  v18 = _InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v18 & 2) != 0 && (v18 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 1024), v15, v16, v17);
  KeAbPostRelease(v6 + 1024);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  MiUpdateReserveClusterInfo(v6, 0LL, 0);
  KeSetEvent((PRKEVENT)(v6 + 864), v19, v20);
  return 0LL;
}
