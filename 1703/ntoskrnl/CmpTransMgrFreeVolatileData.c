/*
 * XREFs of CmpTransMgrFreeVolatileData @ 0x1404CE2D0
 * Callers:
 *     CmpCleanupTransactionState @ 0x14042D17C (CmpCleanupTransactionState.c)
 *     CmpCleanupLightWeightTransaction @ 0x14042D494 (CmpCleanupLightWeightTransaction.c)
 *     CmRmFinalizeRecovery @ 0x1404CBACC (CmRmFinalizeRecovery.c)
 *     CmpRmUnDoPhase @ 0x14066C3E0 (CmpRmUnDoPhase.c)
 * Callees:
 *     CmpRemoveSecurityCellList @ 0x14003388C (CmpRemoveSecurityCellList.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     HvFreeCell @ 0x14048C8DC (HvFreeCell.c)
 *     CmpUnlockHashEntry @ 0x140490B2C (CmpUnlockHashEntry.c)
 *     CmpLockKcbExclusive @ 0x1404916C8 (CmpLockKcbExclusive.c)
 *     CmpRebuildKcbCache @ 0x1404CE250 (CmpRebuildKcbCache.c)
 *     CmpRundownUnitOfWork @ 0x1404CE510 (CmpRundownUnitOfWork.c)
 *     CmEqualTrans @ 0x1404CE678 (CmEqualTrans.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x1404D001C (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpDiscardKcb @ 0x1404D00DC (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x1404D0304 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1404D1090 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpFreeKeyByCell @ 0x1404D1394 (CmpFreeKeyByCell.c)
 *     CmpFreeValue @ 0x1404D154C (CmpFreeValue.c)
 *     CmpLockRegistryExclusive @ 0x1404D85A8 (CmpLockRegistryExclusive.c)
 *     CmpLockRegistry @ 0x1404FF6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     CmpUnlockKcb @ 0x140500590 (CmpUnlockKcb.c)
 *     HvpMarkCellDirty @ 0x14051559C (HvpMarkCellDirty.c)
 */

void __fastcall CmpTransMgrFreeVolatileData(__int64 a1, int a2)
{
  _QWORD *v3; // r15
  ULONG_PTR v5; // rsi
  int v6; // eax
  ULONG_PTR v7; // rdi
  unsigned int v8; // ebx
  __int64 v9; // rbp
  ULONG_PTR v10; // rdx
  unsigned int v11; // ebp
  ULONG_PTR v12; // rbx
  __int64 v13; // rdi
  int v14; // eax
  ULONG_PTR v15; // rdx
  ULONG_PTR v16; // rcx
  int v17; // [rsp+50h] [rbp+8h] BYREF
  int v18; // [rsp+54h] [rbp+Ch]

  v3 = (_QWORD *)(a1 + 16);
  while ( (_QWORD *)*v3 != v3 )
  {
    v5 = *(_QWORD *)(a1 + 24);
    if ( !*(_QWORD *)(*(_QWORD *)(v5 + 48) + 24LL) )
      goto LABEL_10;
    CmpLockRegistryExclusive();
    v6 = *(_DWORD *)(v5 + 68);
    if ( !v6 )
    {
      if ( (unsigned int)(*(_DWORD *)(v5 + 88) - 1) <= 0xFFFFFFFD )
        CmpFreeKeyByCell(*(_QWORD *)(*(_QWORD *)(v5 + 48) + 24LL));
      goto LABEL_9;
    }
    if ( v6 > 3 )
    {
      if ( v6 <= 5 )
      {
        CmpFreeValue(*(_QWORD *)(*(_QWORD *)(v5 + 48) + 24LL), *(unsigned int *)(v5 + 92));
      }
      else
      {
        if ( v6 != 9 )
        {
          if ( v6 != 12 )
            goto LABEL_9;
          v15 = *(unsigned int *)(v5 + 96);
          if ( (unsigned int)(v15 - 1) > 0xFFFFFFFD )
            goto LABEL_9;
          v16 = *(_QWORD *)(*(_QWORD *)(v5 + 48) + 24LL);
LABEL_31:
          HvFreeCell(v16, v15);
          goto LABEL_9;
        }
        v17 = -1;
        v11 = *(_DWORD *)(v5 + 96);
        v18 = 0;
        v12 = *(_QWORD *)(*(_QWORD *)(v5 + 48) + 24LL);
        v13 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v12 + 8))(v12, v11, &v17);
        if ( v13 )
        {
          if ( !(unsigned __int8)HvpMarkCellDirty(v12, v11) )
            goto LABEL_35;
          v14 = *(_DWORD *)(v13 + 12);
          if ( v14 != 1 )
          {
            *(_DWORD *)(v13 + 12) = v14 - 1;
LABEL_35:
            (*(void (__fastcall **)(ULONG_PTR, int *))(v12 + 16))(v12, &v17);
            goto LABEL_9;
          }
          (*(void (__fastcall **)(ULONG_PTR, int *))(v12 + 16))(v12, &v17);
          CmpRemoveSecurityCellList(v12, v11);
          v15 = v11;
          v16 = v12;
          goto LABEL_31;
        }
      }
    }
LABEL_9:
    CmpUnlockRegistry();
LABEL_10:
    CmpLockRegistry(a1);
    v7 = *(_QWORD *)(v5 + 48);
    v8 = *(_DWORD *)(v7 + 8);
    v9 = *(_QWORD *)(v7 + 24);
    CmpLockHashEntryExclusiveByKcb(v7);
    CmpLockKcbExclusive(v7);
    if ( *(_QWORD *)(v7 + 280) == a1 )
    {
      v10 = *(unsigned int *)(v7 + 276);
      if ( (_DWORD)v10 != -1 )
      {
        HvFreeCell(*(_QWORD *)(v7 + 24), v10);
        *(_DWORD *)(v7 + 272) = 0;
        *(_DWORD *)(v7 + 276) = -1;
      }
      *(_QWORD *)(v7 + 280) = 0LL;
    }
    if ( (unsigned __int8)CmEqualTrans(*(_QWORD *)(v7 + 232), a1) )
    {
      if ( a2 == 8 )
      {
        CmpFlushNotifiesOnKeyBodyList(v7, 8LL);
        *(_WORD *)(v7 + 4) |= 0x20u;
        CmpMarkKeyUnbacked(v7);
        if ( (*(_DWORD *)(v7 + 4) & 0x20000) == 0 )
          CmpDiscardKcb(v7);
      }
      *(_QWORD *)(v7 + 232) = 0LL;
    }
    if ( *(_DWORD *)(v7 + 32) != -1 )
    {
      if ( *(_QWORD *)(v7 + 24) )
        CmpRebuildKcbCache(v7);
    }
    CmpRundownUnitOfWork(v5);
    ExFreePoolWithTag((PVOID)v5, 0x77554D43u);
    CmpUnlockKcb((PVOID)v7);
    CmpUnlockHashEntry(v9, v8);
    CmpUnlockRegistry();
  }
}
