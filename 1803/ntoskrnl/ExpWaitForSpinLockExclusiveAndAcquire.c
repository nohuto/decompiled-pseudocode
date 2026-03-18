/*
 * XREFs of ExpWaitForSpinLockExclusiveAndAcquire @ 0x140089F80
 * Callers:
 *     MiAgeWorkingSet @ 0x14000BA50 (MiAgeWorkingSet.c)
 *     MiMakeHyperRangeAccessible @ 0x14000D2C0 (MiMakeHyperRangeAccessible.c)
 *     MiRemoveWsle @ 0x14000F040 (MiRemoveWsle.c)
 *     MiAgePte @ 0x140012B60 (MiAgePte.c)
 *     MiAgePteWorker @ 0x140013050 (MiAgePteWorker.c)
 *     MiAllocateWsle @ 0x1400161C0 (MiAllocateWsle.c)
 *     MiZeroPage @ 0x1400299B0 (MiZeroPage.c)
 *     MiPfPutPagesInTransition @ 0x140047200 (MiPfPutPagesInTransition.c)
 *     MiDereferenceControlAreaPfnList @ 0x1400847B0 (MiDereferenceControlAreaPfnList.c)
 *     CcCanIWrite @ 0x140089AA0 (CcCanIWrite.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     CcGetPartition @ 0x1400E0200 (CcGetPartition.c)
 *     CcUnpinFileDataEx @ 0x1400E23F0 (CcUnpinFileDataEx.c)
 *     ExDeleteResourceLite @ 0x1400E29B0 (ExDeleteResourceLite.c)
 *     CcSetDirtyPinnedData @ 0x1400E2C90 (CcSetDirtyPinnedData.c)
 *     CcSetDirtyInMask @ 0x1400E3310 (CcSetDirtyInMask.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400E4380 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiAddViewsForSection @ 0x1400E5550 (MiAddViewsForSection.c)
 *     MiFinishVadDeletion @ 0x1400F0F10 (MiFinishVadDeletion.c)
 *     MiDeleteVad @ 0x1400F1A40 (MiDeleteVad.c)
 *     ExpAcquireSpinLockExclusive @ 0x1400F3540 (ExpAcquireSpinLockExclusive.c)
 *     MiGetVadWakeList @ 0x1400FD750 (MiGetVadWakeList.c)
 *     MiWaitForFreePagesToZero @ 0x1400FEE90 (MiWaitForFreePagesToZero.c)
 *     MiIdentifyPfn @ 0x1401056D0 (MiIdentifyPfn.c)
 *     MiMakePageAvoidRead @ 0x140110E10 (MiMakePageAvoidRead.c)
 *     CcMapAndCopyInToCache @ 0x140112290 (CcMapAndCopyInToCache.c)
 *     CcGetVirtualAddress @ 0x14011DD70 (CcGetVirtualAddress.c)
 *     MiClearPteAccessed @ 0x140128A30 (MiClearPteAccessed.c)
 *     MiLogPageAccess @ 0x140129AB0 (MiLogPageAccess.c)
 *     MiZeroPageThread @ 0x140173040 (MiZeroPageThread.c)
 * Callees:
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     HvlNotifyLongSpinWait @ 0x14015AFE0 (HvlNotifyLongSpinWait.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 */

__int64 __fastcall ExpWaitForSpinLockExclusiveAndAcquire(volatile signed __int32 *a1, unsigned __int8 CurrentIrql)
{
  unsigned int v2; // ebx
  signed __int32 v5; // eax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v9; // ett
  int v10; // eax

  v2 = 0;
  while ( 1 )
  {
    v5 = *a1;
    while ( v5 < 0 )
    {
      if ( (v5 & 0x40000000) == 0 )
      {
        v9 = v5;
        v5 = _InterlockedCompareExchange(a1, v5 | 0x40000000, v5);
        if ( v9 != v5 )
          continue;
      }
      if ( CurrentIrql != 0xFF )
        __writecr8(CurrentIrql);
      if ( (++v2 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v2);
      if ( CurrentIrql != 0xFF )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
      }
      v5 = *a1;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v10 = SchedulerAssist[5];
        SchedulerAssist[5] = v10 + 1;
        if ( v10 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
          KiPerformUnboostKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset(a1, 0x1Fu) )
      break;
    KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
  }
  return v2;
}
