/*
 * XREFs of MiStoreUpdateMemoryConditions @ 0x14000851C
 * Callers:
 *     MiAdjustModifiedPageLoad @ 0x1400F04F8 (MiAdjustModifiedPageLoad.c)
 *     MiModifiedPageWriter @ 0x14015BF80 (MiModifiedPageWriter.c)
 *     MiFlushAllHintedStorePages @ 0x1402258B8 (MiFlushAllHintedStorePages.c)
 *     MiFlushAllPagesWorker @ 0x140225AB0 (MiFlushAllPagesWorker.c)
 * Callees:
 *     KeQueryEffectiveBasePriorityThread @ 0x14000865C (KeQueryEffectiveBasePriorityThread.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x140008688 (MiUseLowIoPriorityForModifiedPages.c)
 *     ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x140008714 (-SmUpdateMemoryConditions@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeSetActualBasePriorityThread @ 0x1400A7A70 (KeSetActualBasePriorityThread.c)
 *     MiGetAvailablePagesBelowPriority @ 0x1400F5010 (MiGetAvailablePagesBelowPriority.c)
 *     ?SmDrainSList@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z @ 0x1402659AC (-SmDrainSList@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z.c)
 */

__int64 __fastcall MiStoreUpdateMemoryConditions(__int64 a1)
{
  unsigned __int64 v2; // rbx
  int v3; // r15d
  int v4; // ebp
  unsigned int v5; // esi
  unsigned __int64 AvailablePagesBelowPriority; // rax
  unsigned __int64 v7; // rcx
  int v8; // ebx
  __int64 result; // rax
  signed __int32 v10[8]; // [rsp+0h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 4800), &LockHandle);
  v2 = *(_QWORD *)(a1 + 5952);
  v3 = MiUseLowIoPriorityForModifiedPages(a1);
  if ( v2 < 0xA0 )
  {
    v8 = 0;
    v5 = 18;
    v4 = 1;
  }
  else
  {
    v4 = 0;
    if ( v2 < 0x420 )
    {
      v8 = 1;
      v5 = 18;
    }
    else
    {
      v5 = 8;
      AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(a1, 6LL);
      if ( AvailablePagesBelowPriority < 3LL * *(_QWORD *)(*(_QWORD *)(a1 + 5680) + 2400LL) )
      {
        v8 = 2;
      }
      else
      {
        v7 = *(_QWORD *)(a1 + 6448);
        if ( v7 >= AvailablePagesBelowPriority + 0x2000 )
          v8 = (v7 < AvailablePagesBelowPriority + 0x2000 + AvailablePagesBelowPriority) + 2;
        else
          v8 = 4;
      }
    }
  }
  if ( (unsigned int)KeQueryEffectiveBasePriorityThread(*(_QWORD *)(a1 + 1176)) != v5 )
    KeSetActualBasePriorityThread(*(_QWORD *)(a1 + 1176), v5);
  if ( v4 )
    KeSetEvent((PRKEVENT)(a1 + 1184), 0, 0);
  if ( (unsigned __int8)byte_14041B158 != v8 || v8 <= 0 || byte_14041B159 != (v3 == 0) )
  {
    byte_14041B158 = v8;
    byte_14041B159 = v3 == 0;
    _InterlockedOr(v10, 0);
    SMKM_STORE_MGR<SM_TRAITS>::SmUpdateMemoryConditions(&SmGlobals, (unsigned int)v8, v3 == 0);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  if ( !v8 )
    return SMKM_STORE_MGR<SM_TRAITS>::SmDrainSList(&stru_14041AF40, 0LL);
  return result;
}
