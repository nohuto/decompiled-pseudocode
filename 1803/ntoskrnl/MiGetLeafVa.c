/*
 * XREFs of MiGetLeafVa @ 0x14003DF80
 * Callers:
 *     MiDecommitPages @ 0x14000C050 (MiDecommitPages.c)
 *     MiStealPage @ 0x14003B400 (MiStealPage.c)
 *     MiInPagePageTable @ 0x14003D3E0 (MiInPagePageTable.c)
 *     MiEvictPageTableLock @ 0x14003D960 (MiEvictPageTableLock.c)
 *     MiGetNextPageTable @ 0x14003DA90 (MiGetNextPageTable.c)
 *     MiIsCfgBitMapPageShared @ 0x14003DC60 (MiIsCfgBitMapPageShared.c)
 *     MiInitializeSystemPageTable @ 0x140071268 (MiInitializeSystemPageTable.c)
 *     MiPrefetchVirtualMemory @ 0x14007F6B0 (MiPrefetchVirtualMemory.c)
 *     MiDeleteSystemPageTable @ 0x1400B9530 (MiDeleteSystemPageTable.c)
 *     MiReplacePageTablePage @ 0x1400B97E0 (MiReplacePageTablePage.c)
 *     MiFlushValidPteFromTb @ 0x1400C02DC (MiFlushValidPteFromTb.c)
 *     MiDeleteNonPagedPoolPte @ 0x140137420 (MiDeleteNonPagedPoolPte.c)
 *     MiZeroAndFlushPtes @ 0x14013CDC4 (MiZeroAndFlushPtes.c)
 *     MiReplicatePteChange @ 0x14016B45C (MiReplicatePteChange.c)
 *     MiMakeLargePageTable @ 0x14025BAE8 (MiMakeLargePageTable.c)
 *     MiDbgCopyMemoryTarget @ 0x140260A00 (MiDbgCopyMemoryTarget.c)
 *     MiDbgReleaseAddress @ 0x140260DAC (MiDbgReleaseAddress.c)
 *     MiDbgWriteCheck @ 0x140261220 (MiDbgWriteCheck.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetLeafVa(unsigned __int64 a1)
{
  for ( ; a1 >= 0xFFFFF68000000000uLL; a1 = (__int64)(a1 << 25) >> 16 )
  {
    if ( a1 > 0xFFFFF6FFFFFFFFFFuLL )
      break;
  }
  return a1;
}
