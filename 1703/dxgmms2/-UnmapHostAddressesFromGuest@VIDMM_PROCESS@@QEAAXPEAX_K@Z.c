/*
 * XREFs of ?UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K@Z @ 0x1C0099E00
 * Callers:
 *     ?FreeStorage@VIDMM_FENCE_STORAGE_PAGE@@AEAAXXZ @ 0x1C004F184 (-FreeStorage@VIDMM_FENCE_STORAGE_PAGE@@AEAAXXZ.c)
 *     ?UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0055C08 (-UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 * Callees:
 *     UnmapChildMmioSpace @ 0x1C001EC40 (UnmapChildMmioSpace.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C0075568 (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 *     ?GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ @ 0x1C0099910 (-GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ.c)
 */

void __fastcall VIDMM_PROCESS::UnmapHostAddressesFromGuest(VIDMM_PROCESS *this, void *a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rax
  VIDMM_PROCESS *v6; // rcx
  struct _KTHREAD **CpuVisibleBufferAllocator; // rdi

  v3 = *((_QWORD *)this + 4);
  if ( (*(_BYTE *)(v3 + 275) & 4) != 0 )
    v3 = *(_QWORD *)(v3 + 400);
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
        (struct _RTL_BALANCED_NODE *)(a3 - *(_QWORD *)(v3 + 448)));
    }
  }
}
