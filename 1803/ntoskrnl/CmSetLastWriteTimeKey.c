/*
 * XREFs of CmSetLastWriteTimeKey @ 0x1406F2444
 * Callers:
 *     NtSetInformationKey @ 0x140596B30 (NtSetInformationKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140002440 (CmSiFreeMemory.c)
 *     CmpTransEnlistUowInCmTrans @ 0x14000709C (CmpTransEnlistUowInCmTrans.c)
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     CmpTransEnlistUowInKcb @ 0x14007C9A4 (CmpTransEnlistUowInKcb.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     CmpLockIXLockExclusive @ 0x1404984A8 (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x140498504 (CmpLockIXLockIntent.c)
 *     CmpRundownUnitOfWork @ 0x14049896C (CmpRundownUnitOfWork.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14049C254 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpGetKeyNodeForKcb @ 0x1404A05A0 (CmpGetKeyNodeForKcb.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1404A5BC8 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpLockRegistry @ 0x1404A71E0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpUnlockKcbStack @ 0x1404A8B74 (CmpUnlockKcbStack.c)
 *     CmpAttachToRegistryProcess @ 0x1404AC4D0 (CmpAttachToRegistryProcess.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1404AD468 (CmpPerformKeyBodyDeletionCheck.c)
 *     HvpMarkCellDirty @ 0x1404E3EC4 (HvpMarkCellDirty.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x14054BFC8 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpCleanupRollbackPacket @ 0x14054E0A8 (CmpCleanupRollbackPacket.c)
 *     CmAddLogForAction @ 0x140576A18 (CmAddLogForAction.c)
 *     CmpAllocateUnitOfWork @ 0x14057D8F0 (CmpAllocateUnitOfWork.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x140583DF4 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpAbortRollbackPacket @ 0x1405E9E8C (CmpAbortRollbackPacket.c)
 *     CmpTryAcquireKcbIXLocks @ 0x1406117BC (CmpTryAcquireKcbIXLocks.c)
 *     CmpPromoteKey @ 0x1406EF198 (CmpPromoteKey.c)
 *     CmpRetryBackOff @ 0x1406F9BF4 (CmpRetryBackOff.c)
 */

__int64 __fastcall CmSetLastWriteTimeKey(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // r15
  __int64 v5; // rsi
  ULONG_PTR v6; // rdi
  char v7; // r12
  int started; // ebx
  __int64 v9; // r8
  int v10; // eax
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdi
  _QWORD *UnitOfWork; // rax
  ULONG v18; // edx
  __int64 v20; // [rsp+38h] [rbp-49h] BYREF
  __int64 v21; // [rsp+40h] [rbp-41h] BYREF
  __int64 v22; // [rsp+48h] [rbp-39h]
  int v23; // [rsp+50h] [rbp-31h] BYREF
  __int64 v24; // [rsp+58h] [rbp-29h] BYREF
  PPRIVILEGE_SET v25[4]; // [rsp+60h] [rbp-21h] BYREF
  _BYTE v26[48]; // [rsp+80h] [rbp-1h] BYREF

  v2 = 0LL;
  v20 = 0xFFFFFFFFLL;
  v24 = 0LL;
  v23 = 0;
  v5 = 0LL;
  memset(v25, 0, sizeof(v25));
  WORD1(v25[0]) = -1;
  v21 = 0LL;
  v22 = 0LL;
  CmpAttachToRegistryProcess((__int64)v26);
  while ( (CmpShutdownRundown & 1) == 0 )
  {
    CmpLockRegistry();
    v6 = a1[1];
    v7 = 1;
    if ( (*(_DWORD *)(*(_QWORD *)(v6 + 24) + 160LL) & 0x100000) != 0 )
    {
      started = -1073741790;
      goto LABEL_45;
    }
    started = CmpStartKcbStackForTopLayerKcb((__int64)v25, a1[1]);
    if ( started < 0 )
      goto LABEL_45;
    CmpLockKcbStackTopExclusiveRestShared((__int64)v25);
    started = CmpPerformKeyBodyDeletionCheck((__int64)a1, 0LL);
    if ( started < 0 )
      goto LABEL_42;
    if ( *(_BYTE *)(v6 + 57) == 1 )
    {
      started = -1073741790;
      goto LABEL_42;
    }
    if ( a1[7] != v2 || a1[8] != v2 )
    {
      started = CmpTransSearchAddTransFromKeyBody(a1, &v24);
      if ( started < 0 )
        goto LABEL_42;
      v2 = v24;
      started = CmpPerformKeyBodyDeletionCheck((__int64)a1, v24);
      if ( started < 0 )
        goto LABEL_42;
      if ( (*(_DWORD *)(*(_QWORD *)(v6 + 24) + 160LL) & 2) != 0 )
      {
        started = -1072103423;
        goto LABEL_42;
      }
      if ( v2 )
      {
        UnitOfWork = CmpAllocateUnitOfWork();
        v5 = (__int64)UnitOfWork;
        if ( !UnitOfWork )
        {
          started = -1073741670;
LABEL_42:
          CmpUnlockKcbStack((__int64)v25);
          goto LABEL_45;
        }
        CmpTransEnlistUowInKcb(UnitOfWork, v6);
        started = CmpTransEnlistUowInCmTrans((_QWORD *)v5, v2);
        if ( started >= 0 )
        {
          if ( CmpLockIXLockIntent((unsigned int *)(v6 + 240), v5) && CmpLockIXLockExclusive(v6 + 256, (_QWORD *)v5, 1) )
          {
            *(_DWORD *)(v5 + 68) = 8;
            *(_QWORD *)(v5 + 88) = *a2;
            started = CmAddLogForAction(v5, v18);
            if ( started >= 0 )
            {
              started = 0;
              goto LABEL_42;
            }
          }
          else
          {
            started = -1072103423;
          }
        }
LABEL_38:
        if ( v5 )
        {
          CmpRundownUnitOfWork((_QWORD *)v5);
          ExFreePoolWithTag((PVOID)v5, 0x77554D43u);
        }
        goto LABEL_42;
      }
    }
    v10 = CmpTryAcquireKcbIXLocks(v6, 0LL, v9, (__int64)&v21);
    started = v10;
    if ( v10 == -1073741267 )
    {
      CmpLogTransactionAbortedWithChildName(v6, 0LL, 2u, v11, v21);
      CmpUnlockKcbStack((__int64)v25);
      if ( v25[3] )
        CmSiFreeMemory(v25[3]);
      memset(v25, 0, sizeof(v25));
      WORD1(v25[0]) = -1;
      CmpUnlockRegistry();
      v7 = v2;
      started = CmpAbortRollbackPacket((__int64)&v21);
      if ( started < 0 )
        goto LABEL_45;
      CmpRetryBackOff(&v23, v12, v13);
      CmpCleanupRollbackPacket((__int64)&v21);
      v21 = 0LL;
      v22 = 0LL;
    }
    else
    {
      if ( v10 < 0 )
        goto LABEL_42;
      if ( *(_DWORD *)(v6 + 32) != -1 )
      {
        ExAcquirePushLockSharedEx(*(_QWORD *)(v6 + 24) + 72LL, 0LL);
        if ( HvpMarkCellDirty(*(_QWORD *)(v6 + 24), *(unsigned int *)(v6 + 32), 0) )
        {
          *(_QWORD *)(CmpGetKeyNodeForKcb(v6, (__int64)&v20, 1) + 4) = *a2;
          v14 = *a2;
          v15 = *(_QWORD *)(v6 + 24);
          ++*(_QWORD *)(v6 + 296);
          *(_QWORD *)(v6 + 160) = v14;
          (*(void (__fastcall **)(__int64, __int64 *))(v15 + 16))(v15, &v20);
          started = v2;
        }
        else
        {
          started = -1073741443;
        }
        v16 = *(_QWORD *)(v6 + 24);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + 72), v2, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v16 + 72));
        KeAbPostRelease(v16 + 72);
        goto LABEL_38;
      }
      CmpUnlockKcbStack((__int64)v25);
      started = CmpPromoteKey((__int64)v25, 0, 0);
      if ( started < 0 )
        goto LABEL_45;
      CmpUnlockRegistry();
      if ( v25[3] )
        CmSiFreeMemory(v25[3]);
      memset(v25, 0, sizeof(v25));
      WORD1(v25[0]) = -1;
    }
  }
  started = -1073741431;
  v7 = v2;
LABEL_45:
  if ( v25[3] )
    CmSiFreeMemory(v25[3]);
  CmpCleanupRollbackPacket((__int64)&v21);
  if ( v7 )
    CmpUnlockRegistry();
  KiUnstackDetachProcess((__int64)v26, 0LL);
  return (unsigned int)started;
}
