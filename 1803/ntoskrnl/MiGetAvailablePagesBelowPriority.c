/*
 * XREFs of MiGetAvailablePagesBelowPriority @ 0x14012B490
 * Callers:
 *     MmGetAvailablePagesBelowPriority @ 0x140005EAC (MmGetAvailablePagesBelowPriority.c)
 *     MiBuildMdlForMappedFileFault @ 0x140056680 (MiBuildMdlForMappedFileFault.c)
 *     MiResolveMappedFileFault @ 0x140056F30 (MiResolveMappedFileFault.c)
 *     MiStoreUpdateMemoryConditions @ 0x140081410 (MiStoreUpdateMemoryConditions.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x14008158C (MiUseLowIoPriorityForModifiedPages.c)
 *     MiComputeSystemTrimCriteria @ 0x140081620 (MiComputeSystemTrimCriteria.c)
 *     MiForcedTrim @ 0x140084224 (MiForcedTrim.c)
 *     MiComputeAgingPercent @ 0x1400BB4D4 (MiComputeAgingPercent.c)
 *     MiPrefetchNormally @ 0x14012B448 (MiPrefetchNormally.c)
 *     MiComputeZeroClusterMaximum @ 0x14013C6C8 (MiComputeZeroClusterMaximum.c)
 *     MiResolvePageFileFault @ 0x140151874 (MiResolvePageFileFault.c)
 *     MiAllocateCrcList @ 0x1405BF15C (MiAllocateCrcList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetAvailablePagesBelowPriority(_QWORD *a1, unsigned int a2)
{
  _QWORD *v2; // r8
  __int64 v3; // r9
  __int64 v4; // r10
  __int64 v5; // r11
  unsigned __int64 v6; // rcx

  v2 = a1 + 296;
  v3 = a1[272] + a1[280];
  v4 = 0LL;
  v5 = 0LL;
  v6 = (unsigned __int64)&a1[5 * a2 + 296];
  if ( (unsigned __int64)v2 >= v6 )
    return v3;
  if ( v6 - (unsigned __int64)v2 + 39 >= 0x50 )
  {
    do
    {
      v4 += *v2;
      v5 += v2[5];
      v2 += 10;
    }
    while ( (unsigned __int64)v2 < v6 - 40 );
  }
  if ( (unsigned __int64)v2 < v6 )
    v3 += *v2;
  return v3 + v4 + v5;
}
