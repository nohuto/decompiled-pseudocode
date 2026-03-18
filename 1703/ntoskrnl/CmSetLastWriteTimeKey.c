/*
 * XREFs of CmSetLastWriteTimeKey @ 0x140664A64
 * Callers:
 *     NtSetInformationKey @ 0x140521290 (NtSetInformationKey.c)
 * Callees:
 *     CmpTransEnlistUowInCmTrans @ 0x14007FCDC (CmpTransEnlistUowInCmTrans.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     CmpTransEnlistUowInKcb @ 0x14011E248 (CmpTransEnlistUowInKcb.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmAddLogForAction @ 0x14042C988 (CmAddLogForAction.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x14042DC14 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpAllocateUnitOfWork @ 0x1404589B0 (CmpAllocateUnitOfWork.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x14045E258 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpLockKcbExclusive @ 0x1404916C8 (CmpLockKcbExclusive.c)
 *     CmpLockIXLockExclusive @ 0x1404CE168 (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x1404CE1C4 (CmpLockIXLockIntent.c)
 *     CmpRundownUnitOfWork @ 0x1404CE510 (CmpRundownUnitOfWork.c)
 *     CmpLockRegistry @ 0x1404FF6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     CmpUnlockKcb @ 0x140500590 (CmpUnlockKcb.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140500654 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140501430 (CmpIsKeyDeletedForKeyBody.c)
 *     HvpMarkCellDirty @ 0x14051559C (HvpMarkCellDirty.c)
 *     CmpRollbackTransactionArray @ 0x14066BB50 (CmpRollbackTransactionArray.c)
 *     CmpLogUnsupportedOperation @ 0x14066DAD0 (CmpLogUnsupportedOperation.c)
 *     CmpSnapshotTxOwnerArray @ 0x14067355C (CmpSnapshotTxOwnerArray.c)
 */

__int64 __fastcall CmSetLastWriteTimeKey(__int64 a1, _QWORD *a2)
{
  int v2; // ebx
  __int64 v3; // rsi
  char v4; // r12
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v8; // rdi
  __int64 v9; // r15
  ULONG_PTR v10; // rcx
  __int64 v11; // r9
  unsigned int v12; // ebx
  __int64 v13; // r8
  ULONG_PTR v14; // r14
  unsigned int v15; // r15d
  __int64 v16; // rax
  __int64 v17; // r13
  _QWORD *UnitOfWork; // rax
  ULONG v19; // edx
  __int64 v21; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v22[2]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v23; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v25; // [rsp+A0h] [rbp+50h] BYREF
  int v26; // [rsp+A8h] [rbp+58h] BYREF

  v22[0] = -1;
  v22[1] = 0;
  v2 = 0;
  v23 = 0LL;
  v3 = 0LL;
  v26 = 0;
  v4 = 0;
  while ( 1 )
  {
    if ( v4 )
    {
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
      break;
    v4 = 1;
    CmpLockRegistry();
    v8 = *(_QWORD *)(a1 + 8);
    CmpLockKcbExclusive(v8);
    if ( *(_WORD *)(v8 + 58) )
    {
      CmpLogUnsupportedOperation(15LL);
      v2 = -1073741822;
      goto LABEL_39;
    }
    if ( *(_BYTE *)(v8 + 57) == 1 )
    {
      v2 = -1073741790;
      goto LABEL_39;
    }
    if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
    {
      if ( CmpIsKeyDeletedForKeyBody(a1, 0LL) )
        goto LABEL_33;
      v2 = CmpTransSearchAddTransFromKeyBody(a1, &v23);
      if ( v2 < 0 )
        goto LABEL_39;
      if ( (*(_DWORD *)(*(_QWORD *)(v8 + 24) + 144LL) & 2) != 0 )
      {
        v2 = -1072103423;
        goto LABEL_39;
      }
    }
    v9 = v23;
    if ( CmpIsKeyDeletedForKeyBody(a1, v23) )
    {
LABEL_33:
      v2 = (*(_BYTE *)(a1 + 48) & 1) != 0 ? -1073740763 : -1073741444;
      goto LABEL_34;
    }
    if ( v9 )
    {
      UnitOfWork = CmpAllocateUnitOfWork();
      v3 = (__int64)UnitOfWork;
      if ( !UnitOfWork )
      {
        v2 = -1073741670;
        goto LABEL_39;
      }
      CmpTransEnlistUowInKcb(UnitOfWork, v8);
      v2 = CmpTransEnlistUowInCmTrans((_QWORD *)v3, v9);
      if ( v2 >= 0 )
      {
        if ( CmpLockIXLockIntent((unsigned int *)(v8 + 240), v3) && CmpLockIXLockExclusive(v8 + 256, (_QWORD *)v3, 1) )
        {
          *(_DWORD *)(v3 + 68) = 8;
          *(_QWORD *)(v3 + 88) = *a2;
          v2 = CmAddLogForAction(v3, v19);
LABEL_34:
          if ( v2 >= 0 )
            goto LABEL_39;
        }
        else
        {
          v2 = -1072103423;
        }
      }
      if ( v3 )
      {
        CmpRundownUnitOfWork((_QWORD *)v3);
        ExFreePoolWithTag((PVOID)v3, 0x77554D43u);
      }
      goto LABEL_39;
    }
    v10 = v8 + 240;
    if ( *(int *)(v8 + 240) >= 0 )
    {
      v10 = v8 + 256;
      if ( !*(_DWORD *)(v8 + 256) )
      {
        v14 = *(_QWORD *)(v8 + 24);
        v15 = *(_DWORD *)(v8 + 32);
        ExAcquireResourceSharedLite(*(PERESOURCE *)(v14 + 2848), 1u);
        if ( HvpMarkCellDirty(v14, v15, 0) )
        {
          v16 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v14 + 8))(v14, v15, v22);
          v17 = v16;
          if ( v16 )
          {
            CmpUpdateKeyNodeAccessBits(v14, v16, v15);
            *(_QWORD *)(v17 + 4) = *a2;
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v14 + 16))(v14, v22);
            *(_QWORD *)(v8 + 160) = *a2;
          }
          else
          {
            v2 = -1073741670;
          }
        }
        else
        {
          v2 = -1073741443;
        }
        ExReleaseResourceLite(*(PERESOURCE *)(v14 + 2848));
        goto LABEL_34;
      }
    }
    v2 = CmpSnapshotTxOwnerArray(v10, &v25, &v21);
    if ( v2 < 0 )
      goto LABEL_39;
    v12 = v25;
    CmpLogTransactionAbortedWithChildName(v8, 0LL, 2u, v11, v25);
    CmpUnlockKcb(v8);
    CmpUnlockRegistry();
    v2 = CmpRollbackTransactionArray(v12, v21, v13, &v26);
    if ( v2 < 0 )
    {
      CmpLockRegistry();
      CmpLockKcbExclusive(v8);
LABEL_39:
      CmpUnlockKcb(v8);
      CmpUnlockRegistry();
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      return (unsigned int)v2;
    }
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return 3221225865LL;
}
