/*
 * XREFs of CmpTransMgrFreeVolatileData @ 0x1405691F0
 * Callers:
 *     CmpCleanupLightWeightTransaction @ 0x1405689D4 (CmpCleanupLightWeightTransaction.c)
 *     CmRmFinalizeRecovery @ 0x14059BF00 (CmRmFinalizeRecovery.c)
 *     CmpCleanupTransactionState @ 0x1405E31E8 (CmpCleanupTransactionState.c)
 *     CmpRmUnDoPhase @ 0x140696A54 (CmpRmUnDoPhase.c)
 * Callees:
 *     CmpRemoveSecurityCellList @ 0x14010A40C (CmpRemoveSecurityCellList.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     CmpDiscardKcb @ 0x140472C60 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x140472E5C (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140472EE4 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpFreeKeyByCell @ 0x140475940 (CmpFreeKeyByCell.c)
 *     CmpFreeValue @ 0x140476A50 (CmpFreeValue.c)
 *     HvFreeCell @ 0x1404778AC (HvFreeCell.c)
 *     CmpUnlockHashEntry @ 0x140478118 (CmpUnlockHashEntry.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x140478770 (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpLockKcbExclusive @ 0x140478D48 (CmpLockKcbExclusive.c)
 *     HvpMarkCellDirty @ 0x14047D0F4 (HvpMarkCellDirty.c)
 *     CmpLockRegistry @ 0x14047E6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpUnlockKcb @ 0x14047F670 (CmpUnlockKcb.c)
 *     CmpLockRegistryExclusive @ 0x1404E3BCC (CmpLockRegistryExclusive.c)
 *     CmpRundownUnitOfWork @ 0x140569428 (CmpRundownUnitOfWork.c)
 *     CmEqualTrans @ 0x14056959C (CmEqualTrans.c)
 *     CmpRebuildKcbCache @ 0x1405695C4 (CmpRebuildKcbCache.c)
 */

void __fastcall CmpTransMgrFreeVolatileData(__int64 a1, int a2)
{
  _QWORD *v3; // r15
  ULONG_PTR v5; // rsi
  int v6; // eax
  ULONG_PTR v7; // rdi
  unsigned int v8; // ebx
  void *v9; // rbp
  ULONG_PTR v10; // rdx
  unsigned int v11; // edx
  unsigned int v12; // ebp
  ULONG_PTR v13; // rbx
  __int64 v14; // rdi
  int v15; // eax
  ULONG_PTR v16; // rdx
  ULONG_PTR v17; // rcx
  int v18; // [rsp+50h] [rbp+8h] BYREF
  int v19; // [rsp+54h] [rbp+Ch]

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
      v11 = *(_DWORD *)(v5 + 88);
      if ( v11 - 1 <= 0xFFFFFFFD )
        CmpFreeKeyByCell(*(_QWORD *)(*(_QWORD *)(v5 + 48) + 24LL), v11, 0);
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
          v16 = *(unsigned int *)(v5 + 96);
          if ( (unsigned int)(v16 - 1) > 0xFFFFFFFD )
            goto LABEL_8;
          v17 = *(_QWORD *)(*(_QWORD *)(v5 + 48) + 24LL);
LABEL_32:
          HvFreeCell(v17, v16);
          goto LABEL_8;
        }
        v18 = -1;
        v12 = *(_DWORD *)(v5 + 96);
        v19 = 0;
        v13 = *(_QWORD *)(*(_QWORD *)(v5 + 48) + 24LL);
        v14 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v13 + 8))(v13, v12, &v18);
        if ( v14 )
        {
          if ( !HvpMarkCellDirty(v13, v12, 1) )
            goto LABEL_36;
          v15 = *(_DWORD *)(v14 + 12);
          if ( v15 != 1 )
          {
            *(_DWORD *)(v14 + 12) = v15 - 1;
LABEL_36:
            (*(void (__fastcall **)(ULONG_PTR, int *))(v13 + 16))(v13, &v18);
            goto LABEL_8;
          }
          (*(void (__fastcall **)(ULONG_PTR, int *))(v13 + 16))(v13, &v18);
          CmpRemoveSecurityCellList(v13, v12);
          v16 = v12;
          v17 = v13;
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
    v8 = *(_DWORD *)(v7 + 8);
    v9 = *(void **)(v7 + 24);
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
    if ( (unsigned __int8)CmEqualTrans(*(_QWORD *)(v7 + 232)) )
    {
      if ( a2 == 8 )
      {
        CmpFlushNotifiesOnKeyBodyList(v7, 8, 0);
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
    CmpUnlockHashEntry(v9, v8);
    CmpUnlockRegistry();
  }
}
