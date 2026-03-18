/*
 * XREFs of MiSufficientAvailablePages @ 0x1400FF320
 * Callers:
 *     MmAccessFault @ 0x14001B320 (MmAccessFault.c)
 *     MiDispatchFault @ 0x14001D2A0 (MiDispatchFault.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002BD00 (MiInsertPageInFreeOrZeroedList.c)
 *     MiPickClusterForMappedFileFault @ 0x140056310 (MiPickClusterForMappedFileFault.c)
 *     MiGetPageTablePages @ 0x1400716C0 (MiGetPageTablePages.c)
 *     MiScanPagefiles @ 0x140080B38 (MiScanPagefiles.c)
 *     CcCanIWrite @ 0x140089AA0 (CcCanIWrite.c)
 *     MiFillNoReservationCluster @ 0x1400BC0FC (MiFillNoReservationCluster.c)
 *     MiStoreSetEvictPageFile @ 0x1400C519C (MiStoreSetEvictPageFile.c)
 *     MiStoreWriteModifiedPages @ 0x1400D6708 (MiStoreWriteModifiedPages.c)
 *     MiGetPoolPages @ 0x1400F0860 (MiGetPoolPages.c)
 *     MiRetryNonPagedAllocation @ 0x1400F0A50 (MiRetryNonPagedAllocation.c)
 *     MiWaitForFreePagesToZero @ 0x1400FEE90 (MiWaitForFreePagesToZero.c)
 *     MiFindContiguousPages @ 0x140123CF0 (MiFindContiguousPages.c)
 *     MmEnoughMemoryForWrite @ 0x140133C18 (MmEnoughMemoryForWrite.c)
 *     MiComputeZeroClusterMaximum @ 0x14013C6C8 (MiComputeZeroClusterMaximum.c)
 *     MiResolvePageFileFault @ 0x140151874 (MiResolvePageFileFault.c)
 *     MiNoPagesLastChance @ 0x140265B58 (MiNoPagesLastChance.c)
 *     MiWaitForFreePage @ 0x14026B8B0 (MiWaitForFreePage.c)
 *     MiFindLargePageMemory @ 0x140755784 (MiFindLargePageMemory.c)
 *     MiMapUserLargePages @ 0x140755B60 (MiMapUserLargePages.c)
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

  v2 = *(_QWORD *)(a1 + 7040);
  if ( v2 >= a2 )
    return 1LL;
  v4 = 0LL;
  for ( i = (unsigned __int16 **)(a1 + 4136); ; ++i )
  {
    v6 = *i;
    v7 = 0;
    if ( dword_1403CB6DC )
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
    if ( v7 >= dword_1403CB6DC )
      goto LABEL_7;
  }
}
