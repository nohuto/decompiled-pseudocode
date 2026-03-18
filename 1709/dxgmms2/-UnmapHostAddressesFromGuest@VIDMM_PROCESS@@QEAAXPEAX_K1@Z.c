/*
 * XREFs of ?UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1@Z @ 0x1C00A2208
 * Callers:
 *     ?FreeStorage@VIDMM_FENCE_STORAGE_PAGE@@AEAAXXZ @ 0x1C006FDCC (-FreeStorage@VIDMM_FENCE_STORAGE_PAGE@@AEAAXXZ.c)
 *     ?UnlockParavirtualizedAllocationOnHost@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C009DA50 (-UnlockParavirtualizedAllocationOnHost@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     UnmapChildMmioSpace @ 0x1C0020B1C (UnmapChildMmioSpace.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C007CD24 (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 *     ?GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ @ 0x1C00A1D1C (-GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ.c)
 */

void __fastcall VIDMM_PROCESS::UnmapHostAddressesFromGuest(VIDMM_PROCESS *this, void *a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rax
  VIDMM_PROCESS *v6; // rcx
  struct _KTHREAD **CpuVisibleBufferAllocator; // rdi

  v3 = *((_QWORD *)this + 4);
  if ( (*(_BYTE *)(v3 + 307) & 8) != 0 )
    v3 = *(_QWORD *)(v3 + 440);
  if ( v3 )
  {
    v5 = *(_QWORD *)(v3 + 64);
    if ( v5 )
      v6 = *(VIDMM_PROCESS **)(v5 + 8);
    else
      v6 = 0LL;
    CpuVisibleBufferAllocator = (struct _KTHREAD **)VIDMM_PROCESS::GetCpuVisibleBufferAllocator(v6);
    if ( CpuVisibleBufferAllocator )
    {
      UnmapChildMmioSpace();
      CVirtualAddressAllocator::FreeVirtualAddressRange(
        CpuVisibleBufferAllocator,
        (struct _RTL_BALANCED_NODE *)(a3 - *(_QWORD *)(v3 + 496)));
    }
  }
}
