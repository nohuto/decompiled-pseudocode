/*
 * XREFs of MiSufficientAvailablePages @ 0x1400649E0
 * Callers:
 *     MiGetPageTablePages @ 0x140027ECC (MiGetPageTablePages.c)
 *     MiPickClusterForMappedFileFault @ 0x1400281E0 (MiPickClusterForMappedFileFault.c)
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 *     MiDispatchFault @ 0x1400429F0 (MiDispatchFault.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14004F970 (MiInsertPageInFreeOrZeroedList.c)
 *     MmEnoughMemoryForWrite @ 0x140064904 (MmEnoughMemoryForWrite.c)
 *     MiFindContiguousPages @ 0x140078120 (MiFindContiguousPages.c)
 *     MiFindNonPagedPoolPages @ 0x140089100 (MiFindNonPagedPoolPages.c)
 *     MiRetryNonPagedAllocation @ 0x140089300 (MiRetryNonPagedAllocation.c)
 *     MiScanPagefiles @ 0x1400F0444 (MiScanPagefiles.c)
 *     CcCanIWrite @ 0x1400F4620 (CcCanIWrite.c)
 *     MiComputeZeroClusterMaximum @ 0x14011BCB0 (MiComputeZeroClusterMaximum.c)
 *     MiZeroPageThread @ 0x140135630 (MiZeroPageThread.c)
 *     MiFillNoReservationCluster @ 0x140225384 (MiFillNoReservationCluster.c)
 *     MiNoPagesLastChance @ 0x14022B0B8 (MiNoPagesLastChance.c)
 *     MiStoreSetEvictPageFile @ 0x14022CBA8 (MiStoreSetEvictPageFile.c)
 *     MiStoreWriteModifiedPages @ 0x14022CE80 (MiStoreWriteModifiedPages.c)
 *     MiWaitForFreePage @ 0x14023059C (MiWaitForFreePage.c)
 *     MiResolvePageFileFault @ 0x140234CE8 (MiResolvePageFileFault.c)
 *     MiFindLargePageMemory @ 0x1406EBD0C (MiFindLargePageMemory.c)
 *     MiMapUserLargePages @ 0x1406EC0E4 (MiMapUserLargePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSufficientAvailablePages(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  __int64 v4; // r11
  unsigned __int16 **i; // rbx
  unsigned __int16 *v6; // rcx
  unsigned int v7; // r9d

  v2 = *(_QWORD *)(a1 + 5952);
  if ( v2 >= a2 )
    return 1LL;
  v4 = 0LL;
  for ( i = (unsigned __int16 **)(a1 + 4072); ; ++i )
  {
    v6 = *i;
    v7 = 0;
    if ( dword_140388544 )
      break;
LABEL_7:
    if ( ++v4 > 1 )
      return 0LL;
  }
  while ( 1 )
  {
    v2 += *v6;
    if ( v2 >= a2 )
      return 1LL;
    ++v7;
    v6 += 8;
    if ( v7 >= dword_140388544 )
      goto LABEL_7;
  }
}
