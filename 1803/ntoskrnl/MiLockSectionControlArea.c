/*
 * XREFs of MiLockSectionControlArea @ 0x1400E1590
 * Callers:
 *     MiFlushDataSection @ 0x14004D85C (MiFlushDataSection.c)
 *     MiReferenceControlAreaForCacheManager @ 0x14005A3D8 (MiReferenceControlAreaForCacheManager.c)
 *     MmOnlySystemCacheViewsPresent @ 0x1400820DC (MmOnlySystemCacheViewsPresent.c)
 *     MmDisableModifiedWriteOfSection @ 0x1400BA510 (MmDisableModifiedWriteOfSection.c)
 *     MmUpdateSectionIoAttribution @ 0x1400C0444 (MmUpdateSectionIoAttribution.c)
 *     MiComputeFlushRange @ 0x1400E1500 (MiComputeFlushRange.c)
 *     MmEnoughMemoryForWrite @ 0x140133C18 (MmEnoughMemoryForWrite.c)
 * Callees:
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140079C30 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExpAcquireSpinLockExclusive @ 0x1400F3540 (ExpAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402BA6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402BA844 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiLockSectionControlArea(__int64 *a1, int a2, unsigned __int8 *a3)
{
  unsigned __int8 CurrentIrql; // di
  __int64 v7; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  unsigned __int64 v11; // rbx
  int v12; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]

  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_1403CB280, CurrentIrql);
    else
      ExpAcquireSpinLockExclusive(&dword_1403CB280, CurrentIrql);
    *a3 = CurrentIrql;
    if ( a2 == 1 )
      v7 = *a1;
    else
      v7 = a1[2];
    if ( !v7 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1403CB280);
      __writecr8(CurrentIrql);
      return 0LL;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v7 + 72)) )
      break;
    v11 = *a3;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1403CB280);
    __writecr8(v11);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_1403CB280, retaddr);
  else
    dword_1403CB280 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v12 = SchedulerAssist[5] - 1;
      SchedulerAssist[5] = v12;
      if ( !v12 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
        KiPerformUnboostKick(CurrentPrcb);
    }
  }
  return v7;
}
