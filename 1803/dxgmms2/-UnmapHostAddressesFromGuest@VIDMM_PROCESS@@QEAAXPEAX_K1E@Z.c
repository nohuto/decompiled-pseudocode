/*
 * XREFs of ?UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z @ 0x1C00A909C
 * Callers:
 *     ??1VIDMM_RECYCLE_BLOCK@@QEAA@XZ @ 0x1C0055D28 (--1VIDMM_RECYCLE_BLOCK@@QEAA@XZ.c)
 *     ?FreeVmMapping@VIDMM_FENCE_STORAGE_PAGE@@QEAAXXZ @ 0x1C0077C30 (-FreeVmMapping@VIDMM_FENCE_STORAGE_PAGE@@QEAAXXZ.c)
 *     ?UnlockParavirtualizedAllocationOnHost@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A3FE4 (-UnlockParavirtualizedAllocationOnHost@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     UnmapChildMmioSpace @ 0x1C00231D4 (UnmapChildMmioSpace.c)
 *     ?GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ @ 0x1C00A887C (-GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C00AB19C (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 */

void __fastcall VIDMM_PROCESS::UnmapHostAddressesFromGuest(VIDMM_PROCESS *this, void *a2, __int64 a3)
{
  __int64 v3; // r10
  char v5; // al
  __int64 v6; // rbx
  __int64 v7; // rax
  VIDMM_PROCESS *v8; // rcx
  CVirtualAddressAllocator *CpuVisibleBufferAllocator; // rsi
  char v10; // cl
  __int64 v11; // rax

  v3 = *((_QWORD *)this + 4);
  v5 = *(_BYTE *)(v3 + 323);
  if ( (v5 & 8) != 0 )
    v6 = *(_QWORD *)(v3 + 456);
  else
    v6 = v3 & -(__int64)((v5 & 4) != 0);
  if ( v6 )
  {
    v7 = *(_QWORD *)(v6 + 72);
    v8 = v7 ? *(VIDMM_PROCESS **)(v7 + 8) : 0LL;
    CpuVisibleBufferAllocator = VIDMM_PROCESS::GetCpuVisibleBufferAllocator(v8);
    if ( CpuVisibleBufferAllocator )
    {
      UnmapChildMmioSpace();
      v10 = *(_BYTE *)(v6 + 323);
      if ( (v10 & 8) != 0 )
        v11 = *(_QWORD *)(v6 + 456);
      else
        v11 = v6 & -(__int64)((v10 & 4) != 0);
      CVirtualAddressAllocator::FreeVirtualAddressRange(
        CpuVisibleBufferAllocator,
        a3 - *(_QWORD *)(*(_QWORD *)(v11 + 456) + 160LL));
    }
  }
}
