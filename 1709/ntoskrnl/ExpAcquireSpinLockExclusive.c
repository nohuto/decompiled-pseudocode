/*
 * XREFs of ExpAcquireSpinLockExclusive @ 0x14009FA50
 * Callers:
 *     MiQueryAddressState @ 0x14003F110 (MiQueryAddressState.c)
 *     MiDecommitPages @ 0x140053C40 (MiDecommitPages.c)
 *     MiDeleteSystemPagableVm @ 0x140056870 (MiDeleteSystemPagableVm.c)
 *     MiDeleteVad @ 0x1400579B0 (MiDeleteVad.c)
 *     MiTrimOrAgeWorkingSet @ 0x14009C460 (MiTrimOrAgeWorkingSet.c)
 *     MiWalkPageTablesRecursively @ 0x14009D030 (MiWalkPageTablesRecursively.c)
 *     MiCheckPurgeAndUpMapCount @ 0x14009F9C0 (MiCheckPurgeAndUpMapCount.c)
 *     MiGetWsAndInsertVad @ 0x14009FAE0 (MiGetWsAndInsertVad.c)
 *     PsImpersonateContainerOfThread @ 0x1400A0720 (PsImpersonateContainerOfThread.c)
 *     PspRevertContainerImpersonation @ 0x1400A0A50 (PspRevertContainerImpersonation.c)
 *     MiComputeContiguousSubsectionPte @ 0x1400A1AE0 (MiComputeContiguousSubsectionPte.c)
 *     MiReleaseSystemCacheView @ 0x1400A4150 (MiReleaseSystemCacheView.c)
 *     MiInsertPrivateVad @ 0x14010C710 (MiInsertPrivateVad.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140285FCC (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14001BE10 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x140153060 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall ExpAcquireSpinLockExclusive(volatile signed __int32 *a1, unsigned __int8 a2)
{
  unsigned int v2; // ebx
  signed __int32 v4; // eax
  signed __int32 v6; // ett

  v2 = 0;
  if ( _interlockedbittestandset(a1, 0x1Fu) )
    v2 = ExpWaitForSpinLockExclusiveAndAcquire(a1, a2);
  v4 = *a1;
  while ( (v4 & 0xBFFFFFFF) != 0x80000000 )
  {
    if ( (v4 & 0x40000000) == 0 )
    {
      v6 = v4;
      v4 = _InterlockedCompareExchange(a1, v4 | 0x40000000, v4);
      if ( v6 != v4 )
        continue;
    }
    if ( (++v2 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
      _mm_pause();
    else
      HvlNotifyLongSpinWait(v2);
    v4 = *a1;
  }
  return v2;
}
