/*
 * XREFs of MI_INTERLOCKED_EXCHANGE_PTE @ 0x140214414
 * Callers:
 *     MiInsertNonPagedPoolOnSlist @ 0x14002EE40 (MiInsertNonPagedPoolOnSlist.c)
 *     MiWsleFlush @ 0x140052AC0 (MiWsleFlush.c)
 *     MmUnmapViewInSystemCache @ 0x140053130 (MmUnmapViewInSystemCache.c)
 *     MiDecommitPages @ 0x140053C40 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x140054A70 (MiDeleteVirtualAddresses.c)
 *     MiTerminateWsle @ 0x140058F20 (MiTerminateWsle.c)
 *     MiCopyOnWriteEx @ 0x140059760 (MiCopyOnWriteEx.c)
 *     MiInitializeSystemPageTable @ 0x1400C42AC (MiInitializeSystemPageTable.c)
 *     MiMakeLargePageTable @ 0x1400C46E8 (MiMakeLargePageTable.c)
 *     MmStealTopLevelPage @ 0x1400D08FC (MmStealTopLevelPage.c)
 *     MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x1400EDF24 (MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED.c)
 *     MiPfnRangeIsZero @ 0x140144C40 (MiPfnRangeIsZero.c)
 *     MiDemoteLargePageOneLevel @ 0x140145244 (MiDemoteLargePageOneLevel.c)
 *     MiInitializeDynamicBitmap @ 0x1405B70F8 (MiInitializeDynamicBitmap.c)
 *     NtMapUserPhysicalPages @ 0x1406E69F4 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1406E6E70 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 */

__int64 __fastcall MI_INTERLOCKED_EXCHANGE_PTE(volatile __int64 *a1, __int64 a2)
{
  __int64 v2; // r10

  v2 = _InterlockedExchange64(a1, a2);
  if ( (unsigned __int64)a1 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a1 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow();
  return v2;
}
