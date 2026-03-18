/*
 * XREFs of CmSetLastWriteTimeKey @ 0x14068E12C
 * Callers:
 *     NtSetInformationKey @ 0x14056AC30 (NtSetInformationKey.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14000DDD0 (MiDeleteSubsection.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     HvpGetCellContextReinitialize @ 0x1400812C8 (HvpGetCellContextReinitialize.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     CmpTransEnlistUowInKcb @ 0x140100358 (CmpTransEnlistUowInKcb.c)
 *     CmpTransEnlistUowInCmTrans @ 0x14010A3B0 (CmpTransEnlistUowInCmTrans.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     CmpGetKeyNodeForKcb @ 0x140472A4C (CmpGetKeyNodeForKcb.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x140477E80 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     HvpMarkCellDirty @ 0x14047D0F4 (HvpMarkCellDirty.c)
 *     CmpLockRegistry @ 0x14047E6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14047E9F0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpUnlockKcbStack @ 0x14047EA68 (CmpUnlockKcbStack.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140482C20 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpCleanupRollbackPacket @ 0x1404E691C (CmpCleanupRollbackPacket.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x140568D78 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpLockIXLockExclusive @ 0x140569108 (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x140569164 (CmpLockIXLockIntent.c)
 *     CmpRundownUnitOfWork @ 0x140569428 (CmpRundownUnitOfWork.c)
 *     CmAddLogForAction @ 0x140593D1C (CmAddLogForAction.c)
 *     CmpAllocateUnitOfWork @ 0x14059ABD8 (CmpAllocateUnitOfWork.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x14059E850 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpTryAcquireKcbIXLocks @ 0x1405A6F34 (CmpTryAcquireKcbIXLocks.c)
 *     CmpAbortRollbackPacket @ 0x1405F2D18 (CmpAbortRollbackPacket.c)
 *     CmpPromoteKey @ 0x14068AD7C (CmpPromoteKey.c)
 *     CmpRetryBackOff @ 0x140696184 (CmpRetryBackOff.c)
 */

__int64 __fastcall CmSetLastWriteTimeKey(_QWORD *a1, _QWORD *a2)
{
  char v3; // r14
  __int64 v4; // rsi
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v6; // r12
  int started; // ebx
  ULONG_PTR v8; // rdi
  __int64 v9; // r8
  __int64 v10; // r15
  int v11; // eax
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  struct _KTHREAD *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  _QWORD *UnitOfWork; // rax
  _BYTE v20[8]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v21; // [rsp+38h] [rbp-38h] BYREF
  __int64 v22; // [rsp+40h] [rbp-30h]
  PPRIVILEGE_SET v23[5]; // [rsp+48h] [rbp-28h] BYREF
  int v25; // [rsp+C0h] [rbp+50h] BYREF
  __int64 v26; // [rsp+C8h] [rbp+58h] BYREF

  v26 = 0LL;
  v25 = 0;
  v3 = 0;
  v4 = 0LL;
  HvpGetCellContextReinitialize((__int64)v20);
  memset(v23, 0, 0x20uLL);
  v21 = 0LL;
  v22 = 0LL;
  CurrentThread = KeGetCurrentThread();
  WORD1(v23[0]) = -1;
  --CurrentThread->KernelApcDisable;
  v6 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( v6 )
  {
    CmpLockRegistry();
    v3 = 0;
    while ( 1 )
    {
      v8 = a1[1];
      if ( (*(_DWORD *)(*(_QWORD *)(v8 + 24) + 144LL) & 0x100000) != 0 )
        break;
      started = CmpStartKcbStackForTopLayerKcb((__int64)v23, a1[1]);
      if ( started < 0 )
        goto LABEL_44;
      CmpLockKcbStackTopExclusiveRestShared((__int64)v23);
      started = CmpPerformKeyBodyDeletionCheck((__int64)a1, 0LL);
      if ( started < 0 )
        goto LABEL_42;
      if ( *(_BYTE *)(v8 + 57) == 1 )
      {
        started = -1073741790;
        goto LABEL_42;
      }
      if ( a1[7] || a1[8] )
      {
        started = CmpTransSearchAddTransFromKeyBody(a1, &v26);
        if ( started < 0 )
          goto LABEL_42;
        v10 = v26;
        started = CmpPerformKeyBodyDeletionCheck((__int64)a1, v26);
        if ( started < 0 )
          goto LABEL_42;
        if ( (*(_DWORD *)(*(_QWORD *)(v8 + 24) + 144LL) & 2) != 0 )
        {
          started = -1072103423;
          goto LABEL_42;
        }
        if ( v10 )
        {
          UnitOfWork = CmpAllocateUnitOfWork();
          v4 = (__int64)UnitOfWork;
          if ( !UnitOfWork )
          {
            started = -1073741670;
LABEL_42:
            CmpUnlockKcbStack((__int64)v23);
            goto LABEL_44;
          }
          CmpTransEnlistUowInKcb(UnitOfWork, v8);
          started = CmpTransEnlistUowInCmTrans((_QWORD *)v4, v10);
          if ( started >= 0 )
          {
            if ( CmpLockIXLockIntent((unsigned int *)(v8 + 240), v4) && CmpLockIXLockExclusive(v8 + 256, v4, 1) )
            {
              *(_DWORD *)(v4 + 68) = 8;
              *(_QWORD *)(v4 + 88) = *a2;
              started = CmAddLogForAction(v4, (ULONG)a2);
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
          if ( v4 )
          {
            CmpRundownUnitOfWork((_QWORD *)v4);
            ExFreePoolWithTag((PVOID)v4, 0x77554D43u);
          }
          goto LABEL_42;
        }
      }
      v11 = CmpTryAcquireKcbIXLocks(v8, 0LL, v9, (__int64)&v21);
      started = v11;
      if ( v11 == -1073741267 )
      {
        CmpLogTransactionAbortedWithChildName(v8, 0LL, 2u, v12, v21);
        CmpUnlockKcbStack((__int64)v23);
        if ( v23[3] )
          MiDeleteSubsection(v23[3]);
        memset(v23, 0, 0x20uLL);
        WORD1(v23[0]) = -1;
        CmpUnlockRegistry();
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v6 = 0;
        started = CmpAbortRollbackPacket((__int64)&v21);
        if ( started < 0 )
          goto LABEL_45;
        CmpRetryBackOff(&v25, v13, v14);
        CmpCleanupRollbackPacket((__int64)&v21);
        v21 = 0LL;
        v22 = 0LL;
        v15 = KeGetCurrentThread();
        --v15->KernelApcDisable;
        v6 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
        if ( !v6 )
          goto LABEL_2;
        CmpLockRegistry();
      }
      else
      {
        if ( v11 < 0 )
          goto LABEL_42;
        if ( *(_DWORD *)(v8 + 32) != -1 )
        {
          ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(v8 + 24) + 2848LL), 1u);
          if ( HvpMarkCellDirty(*(_QWORD *)(v8 + 24), *(unsigned int *)(v8 + 32), 0) )
          {
            *(_QWORD *)(CmpGetKeyNodeForKcb(v8, (__int64)v20, 1) + 4) = *a2;
            v16 = *a2;
            v17 = *(_QWORD *)(v8 + 24);
            ++*(_QWORD *)(v8 + 296);
            *(_QWORD *)(v8 + 160) = v16;
            (*(void (__fastcall **)(__int64, _BYTE *))(v17 + 16))(v17, v20);
            started = 0;
          }
          else
          {
            started = -1073741443;
          }
          ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v8 + 24) + 2848LL));
          goto LABEL_38;
        }
        CmpUnlockKcbStack((__int64)v23);
        started = CmpPromoteKey((__int64)v23, 0, 0);
        if ( started < 0 )
          goto LABEL_44;
        if ( v23[3] )
          MiDeleteSubsection(v23[3]);
        memset(v23, 0, 0x20uLL);
        WORD1(v23[0]) = -1;
      }
    }
    started = -1073741790;
LABEL_44:
    v3 = 1;
  }
  else
  {
LABEL_2:
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    started = -1073741431;
  }
LABEL_45:
  if ( v23[3] )
    MiDeleteSubsection(v23[3]);
  CmpCleanupRollbackPacket((__int64)&v21);
  if ( v3 )
    CmpUnlockRegistry();
  if ( v6 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return (unsigned int)started;
}
