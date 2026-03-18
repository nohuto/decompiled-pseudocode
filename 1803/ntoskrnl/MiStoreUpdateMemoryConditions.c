/*
 * XREFs of MiStoreUpdateMemoryConditions @ 0x140081410
 * Callers:
 *     MiFlushAllHintedStorePages @ 0x14007FCDC (MiFlushAllHintedStorePages.c)
 *     MiAdjustModifiedPageLoad @ 0x140080BEC (MiAdjustModifiedPageLoad.c)
 *     MiFlushAllPagesWorker @ 0x14014D944 (MiFlushAllPagesWorker.c)
 *     MiModifiedPageWriter @ 0x14017CFC0 (MiModifiedPageWriter.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x1400402B0 (KeSetActualBasePriorityThread.c)
 *     KeQueryEffectiveBasePriorityThread @ 0x140081560 (KeQueryEffectiveBasePriorityThread.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x14008158C (MiUseLowIoPriorityForModifiedPages.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x140090210 (-SmUpdateMemoryConditions@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z.c)
 *     ?SmDrainSList@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z @ 0x1400CDC88 (-SmDrainSList@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     MiGetAvailablePagesBelowPriority @ 0x14012B490 (MiGetAvailablePagesBelowPriority.c)
 */

__int64 __fastcall MiStoreUpdateMemoryConditions(__int64 a1)
{
  unsigned __int64 v2; // rbx
  int v3; // r12d
  int v4; // r14d
  unsigned int v5; // ebp
  unsigned __int64 AvailablePagesBelowPriority; // rax
  unsigned __int64 v7; // rcx
  unsigned int v8; // edi
  int v9; // ebx
  __int64 result; // rax
  signed __int32 v11[8]; // [rsp+0h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 4864), &LockHandle);
  v2 = *(_QWORD *)(a1 + 7040);
  v3 = MiUseLowIoPriorityForModifiedPages(a1);
  if ( v2 < 0xA0 )
  {
    v8 = 0;
    v9 = 0;
    v5 = 18;
    v4 = 1;
  }
  else
  {
    v4 = 0;
    if ( v2 < 0x420 )
    {
      v9 = 1;
      v8 = 1;
      v5 = 18;
    }
    else
    {
      v5 = 8;
      AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(a1, 6LL);
      if ( AvailablePagesBelowPriority < 3LL * *(_QWORD *)(*(_QWORD *)(a1 + 6768) + 2400LL) )
      {
        v9 = 2;
        v8 = 2;
      }
      else
      {
        v7 = *(_QWORD *)(a1 + 7536);
        if ( v7 >= AvailablePagesBelowPriority + 0x2000 )
        {
          v8 = (v7 < AvailablePagesBelowPriority + 0x2000 + AvailablePagesBelowPriority) + 2;
          v9 = v8;
        }
        else
        {
          v8 = 4;
          v9 = 4;
        }
      }
    }
  }
  if ( (unsigned int)KeQueryEffectiveBasePriorityThread(*(_QWORD *)(a1 + 1176)) != v5 )
    KeSetActualBasePriorityThread(*(_QWORD *)(a1 + 1176), v5);
  if ( v4 )
    KeSetEvent((PRKEVENT)(a1 + 1184), 0, 0);
  if ( (unsigned __int8)byte_140466168 != v9 || !v9 || byte_140466169 != (v3 == 0) )
  {
    byte_140466168 = v8;
    byte_140466169 = v3 == 0;
    _InterlockedOr(v11, 0);
    SMKM_STORE_MGR<SM_TRAITS>::SmUpdateMemoryConditions(&SmGlobals, v8, v3 == 0);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  if ( !v9 )
    return SMKM_STORE_MGR<SM_TRAITS>::SmDrainSList(&stru_140465F40, 0LL);
  return result;
}
