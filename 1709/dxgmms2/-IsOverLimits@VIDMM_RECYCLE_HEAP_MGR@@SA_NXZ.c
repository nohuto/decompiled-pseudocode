/*
 * XREFs of ?IsOverLimits@VIDMM_RECYCLE_HEAP_MGR@@SA_NXZ @ 0x1C001284C
 * Callers:
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C0068030 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 *     ?UnlockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX_K1E@Z @ 0x1C00688F0 (-UnlockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX_K1E@Z.c)
 *     ?Free@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0068A40 (-Free@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 * Callees:
 *     <none>
 */

bool VIDMM_RECYCLE_HEAP_MGR::IsOverLimits(void)
{
  return VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedDecommit >= (__int64)((unsigned __int64)(unsigned int)dword_1C0040380 << 20)
      || VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedUnlock >= (__int64)((unsigned __int64)(unsigned int)dword_1C0040384 << 20);
}
