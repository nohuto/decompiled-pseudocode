/*
 * XREFs of MiInsertPageFileInList @ 0x1405D4984
 * Callers:
 *     MiCreatePagingFile @ 0x1405D3FF0 (MiCreatePagingFile.c)
 *     MmStoreRegister @ 0x1406EABBC (MmStoreRegister.c)
 * Callees:
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     MiNumberWsSwapPagefiles @ 0x1400F0408 (MiNumberWsSwapPagefiles.c)
 *     MiUpdateReserveClusterInfo @ 0x14014FBD0 (MiUpdateReserveClusterInfo.c)
 *     MiIncreaseCommitLimits @ 0x14014FD74 (MiIncreaseCommitLimits.c)
 *     MiUpdatePageFileList @ 0x14014FF48 (MiUpdatePageFileList.c)
 *     PsCreateSystemThreadEx @ 0x1405549A0 (PsCreateSystemThreadEx.c)
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
  int SystemThread; // ebp
  __int64 v11; // rbp
  __int16 v12; // cx
  char v13; // bl
  KPRIORITY v14; // edx
  BOOLEAN v15; // r8
  __int64 v17; // [rsp+90h] [rbp+8h] BYREF
  __int64 v18; // [rsp+98h] [rbp+10h]

  v1 = *(_QWORD *)(a1 + 8);
  *(_BYTE *)(a1 + 206) |= 1u;
  v3 = *(_QWORD *)a1;
  v18 = v1;
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
    SystemThread = PsCreateSystemThreadEx(
                     (__int64)&v17,
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
        ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 1024));
      KeAbPostRelease(v6 + 1024);
      goto LABEL_29;
    }
    *(_QWORD *)(v6 + 152) = v17;
  }
  v11 = *(unsigned int *)(v6 + 5784);
  if ( (unsigned int)v11 >= v8 )
    goto LABEL_26;
  v12 = *(_WORD *)(a1 + 204) & 0xFFF0 | v11 & 0xF;
  *(_WORD *)(a1 + 204) = v12;
  if ( (v12 & 0x50) == 0 )
  {
    if ( (unsigned int)MiIncreaseCommitLimits(v6, v3, v18, 0, a1) )
    {
      if ( (*(_BYTE *)(a1 + 204) & 0x20) == 0 && !*(_DWORD *)(v6 + 1020) )
        *(_DWORD *)(v6 + 1020) = 1;
      goto LABEL_16;
    }
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 1024));
    KeAbPostRelease(v6 + 1024);
    SystemThread = -1073741583;
LABEL_29:
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    return (unsigned int)SystemThread;
  }
  if ( (v12 & 0x10) != 0 && (unsigned int)MiNumberWsSwapPagefiles(v6) )
  {
LABEL_26:
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 1024));
    KeAbPostRelease(v6 + 1024);
    SystemThread = -1073741673;
    goto LABEL_29;
  }
  MiUpdatePageFileList(a1, 1);
  *(_QWORD *)(v6 + 8 * v11 + 5792) = a1;
  *(_DWORD *)(v6 + 5784) = v11 + 1;
LABEL_16:
  v13 = _InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v13 & 2) != 0 && (v13 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 1024));
  KeAbPostRelease(v6 + 1024);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  MiUpdateReserveClusterInfo(v6, 0LL, 0);
  KeSetEvent((PRKEVENT)(v6 + 864), v14, v15);
  return 0LL;
}
