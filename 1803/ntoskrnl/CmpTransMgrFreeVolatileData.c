/*
 * XREFs of CmpTransMgrFreeVolatileData @ 0x140498730
 * Callers:
 *     CmpCleanupLightWeightTransaction @ 0x14054BEFC (CmpCleanupLightWeightTransaction.c)
 *     CmRmFinalizeRecovery @ 0x1405824E8 (CmRmFinalizeRecovery.c)
 *     CmpCleanupTransactionState @ 0x1405E77C0 (CmpCleanupTransactionState.c)
 *     CmpRmUnDoPhase @ 0x1406FA4C8 (CmpRmUnDoPhase.c)
 * Callees:
 *     CmpRemoveSecurityCellList @ 0x1400CE6D8 (CmpRemoveSecurityCellList.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     CmpRebuildKcbCache @ 0x1404985B8 (CmpRebuildKcbCache.c)
 *     CmpRundownUnitOfWork @ 0x14049896C (CmpRundownUnitOfWork.c)
 *     CmEqualTrans @ 0x140498AE0 (CmEqualTrans.c)
 *     CmpDiscardKcb @ 0x14049AB30 (CmpDiscardKcb.c)
 *     CmpLockRegistryExclusive @ 0x14049BC8C (CmpLockRegistryExclusive.c)
 *     CmpUnlockHashEntry @ 0x14049D070 (CmpUnlockHashEntry.c)
 *     CmpLockKcbExclusive @ 0x14049D0D8 (CmpLockKcbExclusive.c)
 *     CmpLockRegistry @ 0x1404A71E0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x1404A8AD0 (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpUnlockKcb @ 0x1404AA790 (CmpUnlockKcb.c)
 *     HvpMarkCellDirty @ 0x1404E3EC4 (HvpMarkCellDirty.c)
 *     CmpFreeKeyByCell @ 0x1405150FC (CmpFreeKeyByCell.c)
 *     CmpFreeValue @ 0x1405154A4 (CmpFreeValue.c)
 *     HvFreeCell @ 0x14051584C (HvFreeCell.c)
 *     CmpMarkKeyUnbacked @ 0x14054DED8 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14054DF64 (CmpFlushNotifiesOnKeyBodyList.c)
 */

void __fastcall CmpTransMgrFreeVolatileData(__int64 a1, int a2)
{
  _QWORD *v3; // r15
  ULONG_PTR v5; // rsi
  int v6; // eax
  ULONG_PTR v7; // rdi
  void *v8; // rbp
  ULONG_PTR v9; // rdx
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
      goto LABEL_9;
    CmpLockRegistryExclusive();
    v6 = *(_DWORD *)(v5 + 68);
    if ( !v6 )
    {
      v10 = *(unsigned int *)(v5 + 88);
      if ( (unsigned int)(v10 - 1) <= 0xFFFFFFFD )
        CmpFreeKeyByCell(*(_QWORD *)(*(_QWORD *)(v5 + 48) + 24LL), v10);
      goto LABEL_8;
    }
    if ( v6 > 3 )
    {
      if ( v6 > 5 )
      {
        if ( v6 != 9 )
        {
          if ( v6 != 12 )
            goto LABEL_8;
          v15 = *(unsigned int *)(v5 + 96);
          if ( (unsigned int)(v15 - 1) > 0xFFFFFFFD )
            goto LABEL_8;
          v16 = *(_QWORD *)(*(_QWORD *)(v5 + 48) + 24LL);
LABEL_32:
          HvFreeCell(v16, v15);
          goto LABEL_8;
        }
        v17 = -1;
        v11 = *(_DWORD *)(v5 + 96);
        v18 = 0;
        v12 = *(_QWORD *)(*(_QWORD *)(v5 + 48) + 24LL);
        v13 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v12 + 8))(v12, v11, &v17);
        if ( v13 )
        {
          if ( !(unsigned __int8)HvpMarkCellDirty(v12, v11) )
            goto LABEL_36;
          v14 = *(_DWORD *)(v13 + 12);
          if ( v14 != 1 )
          {
            *(_DWORD *)(v13 + 12) = v14 - 1;
LABEL_36:
            (*(void (__fastcall **)(ULONG_PTR, int *))(v12 + 16))(v12, &v17);
            goto LABEL_8;
          }
          (*(void (__fastcall **)(ULONG_PTR, int *))(v12 + 16))(v12, &v17);
          CmpRemoveSecurityCellList(v12, v11);
          v15 = v11;
          v16 = v12;
          goto LABEL_32;
        }
      }
      else
      {
        CmpFreeValue(*(_QWORD *)(*(_QWORD *)(v5 + 48) + 24LL), *(unsigned int *)(v5 + 92));
      }
    }
LABEL_8:
    CmpUnlockRegistry();
LABEL_9:
    CmpLockRegistry();
    v7 = *(_QWORD *)(v5 + 48);
    v8 = *(void **)(v7 + 24);
    CmpLockHashEntryExclusiveByKcb(v7);
    CmpLockKcbExclusive(v7);
    if ( *(_QWORD *)(v7 + 280) == a1 )
    {
      v9 = *(unsigned int *)(v7 + 276);
      if ( (_DWORD)v9 != -1 )
      {
        HvFreeCell(*(_QWORD *)(v7 + 24), v9);
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
    CmpUnlockKcb(v7);
    CmpUnlockHashEntry(v8);
    CmpUnlockRegistry();
  }
}
