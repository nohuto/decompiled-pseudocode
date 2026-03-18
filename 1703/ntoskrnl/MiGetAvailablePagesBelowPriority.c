/*
 * XREFs of MiGetAvailablePagesBelowPriority @ 0x140108570
 * Callers:
 *     MiStoreUpdateMemoryConditions @ 0x140029F68 (MiStoreUpdateMemoryConditions.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x14002A0CC (MiUseLowIoPriorityForModifiedPages.c)
 *     MmGetAvailablePagesBelowPriority @ 0x14003DC6C (MmGetAvailablePagesBelowPriority.c)
 *     MiComputeZeroClusterMaximum @ 0x140073568 (MiComputeZeroClusterMaximum.c)
 *     MiResolvePageFileFault @ 0x140073C40 (MiResolvePageFileFault.c)
 *     MiComputeSystemTrimCriteria @ 0x140083750 (MiComputeSystemTrimCriteria.c)
 *     MiComputeAgingPercent @ 0x140083B20 (MiComputeAgingPercent.c)
 *     MiSystemFault @ 0x1400B04A0 (MiSystemFault.c)
 *     MiResolveMappedFileFault @ 0x1401060D0 (MiResolveMappedFileFault.c)
 *     MiBuildMdlForMappedFileFault @ 0x140107600 (MiBuildMdlForMappedFileFault.c)
 *     MiPrefetchNormally @ 0x140108510 (MiPrefetchNormally.c)
 *     MiForcedTrim @ 0x140214F8C (MiForcedTrim.c)
 *     MiAllocateCrcList @ 0x14056A478 (MiAllocateCrcList.c)
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

  v2 = a1 + 272;
  v3 = a1[248] + a1[256];
  v4 = 0LL;
  v5 = 0LL;
  v6 = (unsigned __int64)&a1[5 * a2 + 272];
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
