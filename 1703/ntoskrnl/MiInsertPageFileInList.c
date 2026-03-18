/*
 * XREFs of MiInsertPageFileInList @ 0x1405B9FB8
 * Callers:
 *     MiCreatePagingFile @ 0x1405B967C (MiCreatePagingFile.c)
 *     MmStoreRegister @ 0x1405D92AC (MmStoreRegister.c)
 * Callees:
 *     MiUpdateReserveClusterInfo @ 0x14003C70C (MiUpdateReserveClusterInfo.c)
 *     MiNumberWsSwapPagefiles @ 0x140083F14 (MiNumberWsSwapPagefiles.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     MiIncreaseCommitLimits @ 0x140159BD4 (MiIncreaseCommitLimits.c)
 *     MiUpdatePageFileList @ 0x140159DA0 (MiUpdatePageFileList.c)
 *     PsCreateSystemThreadEx @ 0x1405679C0 (PsCreateSystemThreadEx.c)
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
  BOOLEAN v13; // r8
  __int64 v15; // [rsp+90h] [rbp+8h] BYREF
  __int64 v16; // [rsp+98h] [rbp+10h]

  v1 = *(_QWORD *)(a1 + 8);
  *(_BYTE *)(a1 + 206) |= 1u;
  v3 = *(_QWORD *)a1;
  v16 = v1;
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
  v9 = (volatile signed __int64 *)(v6 + 1072);
  ExAcquirePushLockExclusiveEx(v6 + 1072, 0LL);
  if ( !*(_QWORD *)(v6 + 184) )
  {
    SystemThread = PsCreateSystemThreadEx(
                     (__int64)&v15,
                     0x1FFFFF,
                     0LL,
                     0LL,
                     0LL,
                     (__int64)MiModifiedPageWriter,
                     v6,
                     0LL,
                     0LL);
    if ( SystemThread < 0 )
    {
      if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 1072));
      KeAbPostRelease(v6 + 1072);
      goto LABEL_31;
    }
    *(_QWORD *)(v6 + 184) = v15;
  }
  v11 = *(unsigned int *)(v6 + 5592);
  if ( (unsigned int)v11 >= v8 )
    goto LABEL_28;
  v12 = *(_WORD *)(a1 + 204) & 0xFFF0 | v11 & 0xF;
  *(_WORD *)(a1 + 204) = v12;
  if ( (v12 & 0x50) == 0 )
  {
    if ( (unsigned int)MiIncreaseCommitLimits(v6, v3, v16, 0, a1) )
    {
      if ( (*(_BYTE *)(a1 + 204) & 0x20) == 0 && !*(_DWORD *)(v6 + 1068) )
        *(_DWORD *)(v6 + 1068) = 1;
      goto LABEL_16;
    }
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 1072));
    KeAbPostRelease(v6 + 1072);
    SystemThread = -1073741583;
LABEL_31:
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    return (unsigned int)SystemThread;
  }
  if ( (v12 & 0x10) != 0 && (unsigned int)MiNumberWsSwapPagefiles(v6) )
  {
LABEL_28:
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 1072));
    KeAbPostRelease(v6 + 1072);
    SystemThread = -1073741673;
    goto LABEL_31;
  }
  MiUpdatePageFileList(a1, 1);
  *(_QWORD *)(v6 + 8 * v11 + 5600) = a1;
  *(_DWORD *)(v6 + 5592) = v11 + 1;
LABEL_16:
  if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 1072));
  KeAbPostRelease(v6 + 1072);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  MiUpdateReserveClusterInfo(v6, 0LL, 0);
  KeSetEvent((PRKEVENT)(v6 + 912), 0, v13);
  return 0LL;
}
