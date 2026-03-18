/*
 * XREFs of MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401A6474
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x140018AE0 (MmUnmapViewInSystemCache.c)
 *     MiDeletePteRun @ 0x14002A950 (MiDeletePteRun.c)
 *     MiInitializeSystemPageTable @ 0x140071268 (MiInitializeSystemPageTable.c)
 *     MiCopyOnWrite @ 0x140126BA0 (MiCopyOnWrite.c)
 *     MiTrimSystemImagePages @ 0x14013FAEC (MiTrimSystemImagePages.c)
 *     MiSwitchToTransition @ 0x140258498 (MiSwitchToTransition.c)
 *     MiDeleteClusterPage @ 0x1402694A8 (MiDeleteClusterPage.c)
 *     MxZeroPageTablePfns @ 0x14089BDC8 (MxZeroPageTablePfns.c)
 *     MiCheckLargePageOk @ 0x1408C8658 (MiCheckLargePageOk.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MI_GET_PAGE_FRAME_FROM_PTE(unsigned __int64 a1)
{
  return ((unsigned __int64)MI_READ_PTE_LOCK_FREE(a1) >> 12) & 0xFFFFFFFFFLL;
}
