/*
 * XREFs of ExpWaitForSpinLockSharedAndAcquire @ 0x1400A22F0
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x14000B2A0 (MiTrimOrAgeWorkingSet.c)
 *     MiDecommitPages @ 0x14000C050 (MiDecommitPages.c)
 *     MiWalkPageTablesRecursively @ 0x14000F720 (MiWalkPageTablesRecursively.c)
 *     MiUserFault @ 0x14001B870 (MiUserFault.c)
 *     MiProbeAndLockPrepare @ 0x140022150 (MiProbeAndLockPrepare.c)
 *     MiSystemFault @ 0x140022C40 (MiSystemFault.c)
 *     MiMoveDirtyBitsToPfns @ 0x140023A70 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x140024440 (NtGetWriteWatch.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     ExAcquireSpinLockShared @ 0x14008E460 (ExAcquireSpinLockShared.c)
 *     ExpAddTagForBigPages @ 0x1400D9480 (ExpAddTagForBigPages.c)
 *     ExFreeLargePool @ 0x1400DB3B0 (ExFreeLargePool.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1400E7EF0 (KiAbEntryGetLockedHeadEntry.c)
 *     MiDeleteVad @ 0x1400F1A40 (MiDeleteVad.c)
 *     MiSetProtectionOnSection @ 0x1401147F0 (MiSetProtectionOnSection.c)
 *     MiCommitExistingVad @ 0x140117630 (MiCommitExistingVad.c)
 *     MiUnlinkPageFromList @ 0x14011AAD0 (MiUnlinkPageFromList.c)
 *     MiOffsetToProtos @ 0x14011D9C0 (MiOffsetToProtos.c)
 *     MiMakeSystemCacheRangeValid @ 0x140120370 (MiMakeSystemCacheRangeValid.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140122DC0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiQueueLargeFreeZeroRebuild @ 0x140123010 (MiQueueLargeFreeZeroRebuild.c)
 *     MiEndingOffsetWithLock @ 0x140128880 (MiEndingOffsetWithLock.c)
 *     MmLockLoadedModuleListShared @ 0x14012B7B0 (MmLockLoadedModuleListShared.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402BA760 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 * Callees:
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     HvlNotifyLongSpinWait @ 0x14015AFE0 (HvlNotifyLongSpinWait.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 */

__int64 __fastcall ExpWaitForSpinLockSharedAndAcquire(volatile signed __int32 *a1, unsigned __int8 CurrentIrql)
{
  unsigned int v2; // edi
  signed __int32 v5; // r10d
  struct _KPRCB *CurrentPrcb; // r11
  _DWORD *SchedulerAssist; // rcx
  bool v9; // zf
  signed __int32 v10; // eax
  int v11; // eax

  v2 = 0;
  while ( 1 )
  {
    v5 = *a1;
    while ( v5 < 0 )
    {
      if ( (v5 & 0x40000000) == 0 )
      {
        v10 = _InterlockedCompareExchange(a1, v5 | 0x40000000, v5);
        v9 = v5 == v10;
        v5 = v10;
        if ( !v9 )
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
        v11 = SchedulerAssist[5];
        SchedulerAssist[5] = v11 + 1;
        if ( v11 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
          KiPerformUnboostKick(CurrentPrcb);
      }
    }
    if ( v5 == _InterlockedCompareExchange(a1, (v5 + 1) & 0xBFFFFFFF, v5) )
      break;
    KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
  }
  return v2;
}
