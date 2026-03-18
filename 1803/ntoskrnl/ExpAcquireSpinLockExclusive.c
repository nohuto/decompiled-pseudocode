/*
 * XREFs of ExpAcquireSpinLockExclusive @ 0x1400F3540
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x14000B2A0 (MiTrimOrAgeWorkingSet.c)
 *     MiAgePteWorker @ 0x140013050 (MiAgePteWorker.c)
 *     MiSharePages @ 0x1400326D0 (MiSharePages.c)
 *     MiLockSectionControlArea @ 0x1400E1590 (MiLockSectionControlArea.c)
 *     MiRemoveWsleList @ 0x1400E1950 (MiRemoveWsleList.c)
 *     MiCheckPurgeAndUpMapCount @ 0x1400E5FE0 (MiCheckPurgeAndUpMapCount.c)
 *     MiGetWsAndInsertVad @ 0x1400E6090 (MiGetWsAndInsertVad.c)
 *     MiBeginPageAccessor @ 0x1400E7730 (MiBeginPageAccessor.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     PspRevertContainerImpersonation @ 0x1400F1810 (PspRevertContainerImpersonation.c)
 *     MiDeleteVad @ 0x1400F1A40 (MiDeleteVad.c)
 *     ExInitializeResourceLite @ 0x1400F3430 (ExInitializeResourceLite.c)
 *     PsImpersonateContainerOfThread @ 0x1400F3930 (PsImpersonateContainerOfThread.c)
 *     MiSetVaAge @ 0x140125600 (MiSetVaAge.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x1401258A0 (MmDoesFileHaveUserWritableReferences.c)
 *     MiCopyOnWrite @ 0x140126BA0 (MiCopyOnWrite.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402BA6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140089F80 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     HvlNotifyLongSpinWait @ 0x14015AFE0 (HvlNotifyLongSpinWait.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 */

__int64 __fastcall ExpAcquireSpinLockExclusive(volatile signed __int32 *a1, unsigned __int8 a2)
{
  struct _KPRCB *CurrentPrcb; // r10
  unsigned int v4; // edi
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v7; // edx
  bool v9; // zf
  signed __int32 v10; // eax
  int v11; // eax

  CurrentPrcb = KeGetCurrentPrcb();
  v4 = 0;
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
  if ( _interlockedbittestandset(a1, 0x1Fu) )
  {
    KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
    v4 = ExpWaitForSpinLockExclusiveAndAcquire(a1, a2);
  }
  v7 = *a1;
  while ( (v7 & 0xBFFFFFFF) != 0x80000000 )
  {
    if ( (v7 & 0x40000000) == 0 )
    {
      v10 = _InterlockedCompareExchange(a1, v7 | 0x40000000, v7);
      v9 = v7 == v10;
      v7 = v10;
      if ( !v9 )
        continue;
    }
    if ( (++v4 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
      _mm_pause();
    else
      HvlNotifyLongSpinWait(v4);
    v7 = *a1;
  }
  return v4;
}
