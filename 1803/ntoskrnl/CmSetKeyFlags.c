/*
 * XREFs of CmSetKeyFlags @ 0x1406F1FB8
 * Callers:
 *     NtSetInformationKey @ 0x140596B30 (NtSetInformationKey.c)
 * Callees:
 *     CmpTransEnlistUowInCmTrans @ 0x14000709C (CmpTransEnlistUowInCmTrans.c)
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     CmpTransEnlistUowInKcb @ 0x14007C9A4 (CmpTransEnlistUowInKcb.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     CmpLockIXLockExclusive @ 0x1404984A8 (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x140498504 (CmpLockIXLockIntent.c)
 *     CmpRundownUnitOfWork @ 0x14049896C (CmpRundownUnitOfWork.c)
 *     CmpLockKcbExclusive @ 0x14049D0D8 (CmpLockKcbExclusive.c)
 *     CmpGetKeyNodeForKcb @ 0x1404A05A0 (CmpGetKeyNodeForKcb.c)
 *     CmpLockRegistry @ 0x1404A71E0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpUnlockKcb @ 0x1404AA790 (CmpUnlockKcb.c)
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
 *     CmpRetryBackOff @ 0x1406F9BF4 (CmpRetryBackOff.c)
 *     CmpLogUnsupportedOperation @ 0x1406FB130 (CmpLogUnsupportedOperation.c)
 */

__int64 __fastcall CmSetKeyFlags(__int64 a1, int a2, int a3)
{
  _QWORD *v3; // r12
  __int64 v6; // r15
  int v7; // edi
  __int64 v8; // rbx
  ULONG_PTR v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r12
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 KeyNodeForKcb; // rax
  __int64 v21; // rcx
  int v22; // r13d
  int v23; // r13d
  int v24; // r13d
  __int16 v25; // ax
  unsigned int v26; // eax
  unsigned int v27; // r14d
  __int64 v28; // rbx
  _QWORD *UnitOfWork; // rax
  __int64 v31; // [rsp+38h] [rbp-39h] BYREF
  __int64 v32; // [rsp+40h] [rbp-31h] BYREF
  __int64 v33; // [rsp+48h] [rbp-29h] BYREF
  __int64 v34; // [rsp+50h] [rbp-21h]
  int v35; // [rsp+58h] [rbp-19h] BYREF
  _QWORD *v36; // [rsp+60h] [rbp-11h]
  _BYTE v37[48]; // [rsp+68h] [rbp-9h] BYREF

  v36 = (_QWORD *)a1;
  v32 = 0xFFFFFFFFLL;
  v3 = (_QWORD *)a1;
  v31 = 0LL;
  v35 = 0;
  v33 = 0LL;
  v6 = 0LL;
  v34 = 0LL;
  CmpAttachToRegistryProcess((__int64)v37);
  if ( a2 == 1 && (a3 & 0xFFFFFFF0) != 0 )
  {
    v7 = -1073741811;
  }
  else
  {
    while ( (CmpShutdownRundown & 1) == 0 )
    {
      v8 = MEMORY[0xFFFFF78000000014];
      CmpLockRegistry();
      v9 = v3[1];
      CmpLockKcbExclusive(v9);
      if ( *(_WORD *)(v9 + 58) )
      {
        CmpLogUnsupportedOperation(16LL);
        v7 = -1073741822;
        goto LABEL_55;
      }
      if ( *(_BYTE *)(v9 + 57) == 1 )
      {
        v7 = -1073741790;
        goto LABEL_55;
      }
      v7 = CmpPerformKeyBodyDeletionCheck((__int64)v3, 0LL);
      if ( v7 < 0 )
        goto LABEL_55;
      if ( v3[7] || v3[8] )
      {
        v7 = CmpTransSearchAddTransFromKeyBody(v3, &v31);
        if ( v7 < 0 )
          goto LABEL_55;
        if ( (*(_DWORD *)(*(_QWORD *)(v9 + 24) + 160LL) & 2) != 0 )
        {
          v7 = -1072103423;
          goto LABEL_55;
        }
        v13 = v31;
        v7 = CmpPerformKeyBodyDeletionCheck((__int64)v36, v31);
        if ( v7 < 0 )
          goto LABEL_55;
      }
      else
      {
        v13 = v31;
      }
      if ( (unsigned int)(a2 - 2) <= 2 )
        v13 = 0LL;
      v31 = v13;
      if ( v13 )
      {
        UnitOfWork = CmpAllocateUnitOfWork();
        v6 = (__int64)UnitOfWork;
        if ( !UnitOfWork )
        {
          v7 = -1073741670;
          goto LABEL_55;
        }
        CmpTransEnlistUowInKcb(UnitOfWork, v9);
        v7 = CmpTransEnlistUowInCmTrans((_QWORD *)v6, v13);
        if ( v7 >= 0 )
        {
          if ( CmpLockIXLockIntent((unsigned int *)(v9 + 240), v6) && CmpLockIXLockExclusive(v9 + 256, (_QWORD *)v6, 1) )
          {
            *(_DWORD *)(v6 + 68) = 7;
            *(_DWORD *)(v6 + 88) = a3;
            v7 = CmAddLogForAction(v6, v10);
            if ( v7 >= 0 )
            {
              v7 = 0;
              goto LABEL_55;
            }
          }
          else
          {
            v7 = -1072103423;
          }
        }
LABEL_42:
        if ( v6 )
        {
          CmpRundownUnitOfWork((_QWORD *)v6);
          ExFreePoolWithTag((PVOID)v6, 0x77554D43u);
        }
        goto LABEL_55;
      }
      v14 = CmpTryAcquireKcbIXLocks(v9, 0LL, v11, (__int64)&v33);
      v7 = v14;
      if ( v14 != -1073741267 )
      {
        if ( v14 < 0 )
        {
LABEL_55:
          CmpUnlockKcb(v9, v10, v11, v12);
          CmpUnlockRegistry();
          goto LABEL_57;
        }
        ExAcquirePushLockSharedEx(*(_QWORD *)(v9 + 24) + 72LL, 0LL);
        if ( HvpMarkCellDirty(*(_QWORD *)(v9 + 24), *(unsigned int *)(v9 + 32), 0) )
        {
          KeyNodeForKcb = CmpGetKeyNodeForKcb(v9, (__int64)&v32, 1);
          v21 = KeyNodeForKcb;
          v22 = a2 - 1;
          if ( v22 )
          {
            v23 = v22 - 1;
            if ( v23 )
            {
              v24 = v23 - 1;
              if ( v24 )
              {
                if ( v24 == 1 )
                {
                  *(_BYTE *)(KeyNodeForKcb + 55) = a3;
                  *(_BYTE *)(v9 + 177) = a3;
                }
              }
              else
              {
                v25 = *(_WORD *)(KeyNodeForKcb + 2);
                if ( (a3 & 4) != 0 )
                {
                  *(_WORD *)(v21 + 2) = v25 | 0x80;
                  *(_WORD *)(v9 + 178) |= 0x80u;
                }
                else
                {
                  if ( (a3 & 1) != 0 )
                  {
                    *(_WORD *)(v21 + 2) = v25 | 0x300;
                    *(_WORD *)(v9 + 178) |= 0x300u;
                  }
                  else
                  {
                    *(_WORD *)(v21 + 2) = v25 & 0xFEFF;
                    *(_WORD *)(v9 + 178) &= ~0x100u;
                  }
                  if ( (a3 & 2) != 0 )
                  {
                    *(_WORD *)(v21 + 2) |= 0x200u;
                    *(_WORD *)(v9 + 178) |= 0x200u;
                  }
                }
              }
            }
            else
            {
              v26 = *(_DWORD *)(KeyNodeForKcb + 52) ^ (*(_DWORD *)(KeyNodeForKcb + 52) ^ (a3 << 20)) & 0xF00000;
              *(_DWORD *)(v21 + 52) = v26;
              *(_DWORD *)(v9 + 176) ^= (*(_DWORD *)(v9 + 176) ^ HIWORD(v26)) & 0xF0;
              if ( (a3 & 2) != 0 )
              {
                *(_WORD *)(v21 + 2) &= ~0x80u;
                *(_WORD *)(v9 + 178) = *(_WORD *)(v21 + 2);
              }
            }
          }
          else
          {
            v27 = *(_DWORD *)(KeyNodeForKcb + 52) ^ (*(_DWORD *)(KeyNodeForKcb + 52) ^ (a3 << 16)) & 0xF0000;
            *(_DWORD *)(KeyNodeForKcb + 52) = v27;
            *(_DWORD *)(v9 + 176) ^= (*(_DWORD *)(v9 + 176) ^ HIWORD(v27)) & 0xF;
          }
          *(_QWORD *)(v21 + 4) = v8;
          v7 = 0;
          ++*(_QWORD *)(v9 + 296);
          *(_QWORD *)(v9 + 160) = v8;
          (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v9 + 24) + 16LL))(*(_QWORD *)(v9 + 24), &v32);
        }
        else
        {
          v7 = -1073741443;
        }
        v28 = *(_QWORD *)(v9 + 24);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v28 + 72), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v28 + 72));
        KeAbPostRelease(v28 + 72);
        goto LABEL_42;
      }
      CmpLogTransactionAbortedWithChildName(v9, 0LL, 3u, v12, v33);
      CmpUnlockKcb(v9, v15, v16, v17);
      CmpUnlockRegistry();
      v7 = CmpAbortRollbackPacket((__int64)&v33);
      if ( v7 < 0 )
        goto LABEL_57;
      CmpRetryBackOff(&v35, v18, v19);
      CmpCleanupRollbackPacket((__int64)&v33);
      v3 = v36;
      v33 = 0LL;
      v34 = 0LL;
    }
    v7 = -1073741431;
  }
LABEL_57:
  KiUnstackDetachProcess((__int64)v37, 0LL);
  CmpCleanupRollbackPacket((__int64)&v33);
  return (unsigned int)v7;
}
