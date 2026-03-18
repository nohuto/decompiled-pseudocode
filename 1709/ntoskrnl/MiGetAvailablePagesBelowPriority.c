/*
 * XREFs of MiGetAvailablePagesBelowPriority @ 0x1400F5010
 * Callers:
 *     MmGetAvailablePagesBelowPriority @ 0x1400020F8 (MmGetAvailablePagesBelowPriority.c)
 *     MiStoreUpdateMemoryConditions @ 0x14000851C (MiStoreUpdateMemoryConditions.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x140008688 (MiUseLowIoPriorityForModifiedPages.c)
 *     MiBuildMdlForMappedFileFault @ 0x140028510 (MiBuildMdlForMappedFileFault.c)
 *     MiResolveMappedFileFault @ 0x14002A0B0 (MiResolveMappedFileFault.c)
 *     MiSystemFault @ 0x140032BA0 (MiSystemFault.c)
 *     MiProtectPool @ 0x140065070 (MiProtectPool.c)
 *     MiComputeSystemTrimCriteria @ 0x1400F4B60 (MiComputeSystemTrimCriteria.c)
 *     MiComputeAgingPercent @ 0x1400F4F08 (MiComputeAgingPercent.c)
 *     MiPrefetchNormally @ 0x1400F4FCC (MiPrefetchNormally.c)
 *     MiComputeZeroClusterMaximum @ 0x14011BCB0 (MiComputeZeroClusterMaximum.c)
 *     MiForcedTrim @ 0x14021D544 (MiForcedTrim.c)
 *     MiResolvePageFileFault @ 0x140234CE8 (MiResolvePageFileFault.c)
 *     MiAllocateCrcList @ 0x1406ECC24 (MiAllocateCrcList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetAvailablePagesBelowPriority(_QWORD *a1, unsigned int a2)
{
  _QWORD *v2; // r9
  __int64 result; // rax
  unsigned __int64 v4; // rdx

  v2 = a1 + 288;
  result = a1[264] + a1[272];
  v4 = (unsigned __int64)&a1[5 * a2 + 288];
  while ( (unsigned __int64)v2 < v4 )
  {
    result += *v2;
    v2 += 5;
  }
  return result;
}
