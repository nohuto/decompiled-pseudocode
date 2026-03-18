/*
 * XREFs of MiStoreUpdateMemoryConditions @ 0x140029F68
 * Callers:
 *     MiFlushAllHintedStorePages @ 0x140004DF0 (MiFlushAllHintedStorePages.c)
 *     MiAdjustModifiedPageLoad @ 0x1400840D0 (MiAdjustModifiedPageLoad.c)
 *     MiFlushAllPagesWorker @ 0x14013E0D8 (MiFlushAllPagesWorker.c)
 *     MiModifiedPageWriter @ 0x140162A30 (MiModifiedPageWriter.c)
 * Callees:
 *     KeQueryEffectiveBasePriorityThread @ 0x14002A0A0 (KeQueryEffectiveBasePriorityThread.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x14002A0CC (MiUseLowIoPriorityForModifiedPages.c)
 *     ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x1400539A0 (-SmUpdateMemoryConditions@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KeSetActualBasePriorityThread @ 0x1400ECEC0 (KeSetActualBasePriorityThread.c)
 *     MiGetAvailablePagesBelowPriority @ 0x140108570 (MiGetAvailablePagesBelowPriority.c)
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

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 4672), &LockHandle);
  v2 = *(_QWORD *)(a1 + 5760);
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
      if ( AvailablePagesBelowPriority < 3LL * *(_QWORD *)(*(_QWORD *)(a1 + 5544) + 2400LL) )
      {
        v8 = 2;
      }
      else
      {
        v7 = *(_QWORD *)(a1 + 6256);
        if ( v7 >= AvailablePagesBelowPriority + 0x2000 )
          v8 = (v7 < AvailablePagesBelowPriority + 0x2000 + AvailablePagesBelowPriority) + 2;
        else
          v8 = 4;
      }
    }
  }
  if ( (unsigned int)KeQueryEffectiveBasePriorityThread(*(_QWORD *)(a1 + 1216)) != v5 )
    KeSetActualBasePriorityThread(*(_QWORD *)(a1 + 1216), v5);
  if ( v4 )
    KeSetEvent((PRKEVENT)(a1 + 1224), 0, 0);
  if ( (unsigned __int8)byte_1403FA188 != v8 || v8 <= 0 || byte_1403FA189 != (v3 == 0) )
  {
    byte_1403FA188 = v8;
    byte_1403FA189 = v3 == 0;
    _InterlockedOr(v10, 0);
    SMKM_STORE_MGR<SM_TRAITS>::SmUpdateMemoryConditions(&SmGlobals, (unsigned int)v8, v3 == 0);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
