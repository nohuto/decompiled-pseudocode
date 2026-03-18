/*
 * XREFs of ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140079C30
 * Callers:
 *     MiDeleteEmptySubsections @ 0x14004B6D4 (MiDeleteEmptySubsections.c)
 *     MiCopyHeaderIfResident @ 0x14004D648 (MiCopyHeaderIfResident.c)
 *     MiCopyDataPageToImagePage @ 0x14004F194 (MiCopyDataPageToImagePage.c)
 *     MiCanFileBeTruncatedInternal @ 0x140050EFC (MiCanFileBeTruncatedInternal.c)
 *     PopPepWork @ 0x1400789D0 (PopPepWork.c)
 *     MiReferencePfBackedSection @ 0x140083410 (MiReferencePfBackedSection.c)
 *     MmFlushImageSection @ 0x1400BCC80 (MmFlushImageSection.c)
 *     MiForceSectionClosed @ 0x1400BCDCC (MiForceSectionClosed.c)
 *     MmChangeSectionBackingFile @ 0x1400C600C (MmChangeSectionBackingFile.c)
 *     MiLockSectionControlArea @ 0x1400E1590 (MiLockSectionControlArea.c)
 *     MiReferenceControlArea @ 0x1401253B0 (MiReferenceControlArea.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x1401258A0 (MmDoesFileHaveUserWritableReferences.c)
 *     MiProcessDereferenceList @ 0x140153094 (MiProcessDereferenceList.c)
 *     CcBcbProfiler @ 0x140192390 (CcBcbProfiler.c)
 *     MiDeleteCachedSegment @ 0x14024EC98 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x14024EDD4 (MiDeleteCachedSubsection.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x14024F768 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiProcessDeleteOnClose @ 0x14024F838 (MiProcessDeleteOnClose.c)
 *     MmRemoveSystemCacheFromDump @ 0x1402577EC (MmRemoveSystemCacheFromDump.c)
 *     MiDbgMarkPfnModified @ 0x140260BA0 (MiDbgMarkPfnModified.c)
 *     MiDbgTranslatePhysicalAddress @ 0x140260E34 (MiDbgTranslatePhysicalAddress.c)
 *     PspIumReplenishPartitionPages @ 0x14028562C (PspIumReplenishPartitionPages.c)
 *     sub_140489010 @ 0x140489010 (sub_140489010.c)
 *     KiForceSymbolReferences @ 0x1408DFFA0 (KiForceSymbolReferences.c)
 * Callees:
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402BA8A0 (ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall ExTryAcquireSpinLockExclusiveAtDpcLevel(volatile signed __int32 *a1)
{
  struct _KPRCB *CurrentPrcb; // rbx
  volatile signed __int32 *v2; // r10
  _DWORD *SchedulerAssist; // rcx
  __int64 result; // rax
  int v5; // eax

  CurrentPrcb = KeGetCurrentPrcb();
  v2 = a1;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v5 = SchedulerAssist[5];
      SchedulerAssist[5] = v5 + 1;
      if ( v5 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
        KiPerformUnboostKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 )
  {
    if ( !_InterlockedCompareExchange(v2, 0x80000000, 0) )
      return 1LL;
LABEL_6:
    KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
    return 0LL;
  }
  result = ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented(v2);
  if ( !(_DWORD)result )
    goto LABEL_6;
  return result;
}
