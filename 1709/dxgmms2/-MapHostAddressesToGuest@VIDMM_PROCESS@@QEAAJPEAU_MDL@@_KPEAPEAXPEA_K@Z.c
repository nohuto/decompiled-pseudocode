/*
 * XREFs of ?MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@_KPEAPEAXPEA_K@Z @ 0x1C00A1F00
 * Callers:
 *     ?Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJXZ @ 0x1C0070494 (-Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJXZ.c)
 *     ?LockParavirtualizedAllocationOnHost@@YAJPEAUVIDMM_ALLOC@@PEAPEAX@Z @ 0x1C009B6F0 (-LockParavirtualizedAllocationOnHost@@YAJPEAUVIDMM_ALLOC@@PEAPEAX@Z.c)
 * Callees:
 *     MapChildMmioSpace @ 0x1C0020AC8 (MapChildMmioSpace.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1C00541C4 (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C007CD24 (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 *     ?GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ @ 0x1C00A1D1C (-GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ.c)
 */

__int64 __fastcall VIDMM_PROCESS::MapHostAddressesToGuest(
        VIDMM_PROCESS *this,
        struct _MDL *a2,
        unsigned __int64 a3,
        void **a4,
        unsigned __int64 *a5)
{
  __int64 v5; // rbx
  __int64 v9; // rax
  VIDMM_PROCESS *v10; // rcx
  struct _KTHREAD **CpuVisibleBufferAllocator; // rbp
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // esi
  __int64 v16; // rax
  struct _RTL_BALANCED_NODE *v17; // r15
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // [rsp+70h] [rbp+8h] BYREF

  v5 = *((_QWORD *)this + 4);
  if ( (*(_BYTE *)(v5 + 307) & 8) != 0 )
    v5 = *(_QWORD *)(v5 + 440);
  if ( !v5 )
    return 3221225473LL;
  v9 = *(_QWORD *)(v5 + 64);
  v10 = v9 ? *(VIDMM_PROCESS **)(v9 + 8) : 0LL;
  CpuVisibleBufferAllocator = (struct _KTHREAD **)VIDMM_PROCESS::GetCpuVisibleBufferAllocator(v10);
  if ( !CpuVisibleBufferAllocator )
    return 3221225473LL;
  if ( a3 > a2->ByteCount )
    return 3221225485LL;
  v15 = CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(
          CpuVisibleBufferAllocator,
          a3,
          v12,
          0LL,
          0LL,
          0x1000u,
          &v19);
  if ( v15 >= 0 )
  {
    v17 = (struct _RTL_BALANCED_NODE *)v19;
    v18 = v19 + *(_QWORD *)(v5 + 496);
    v15 = MapChildMmioSpace(v5);
    if ( v15 >= 0 )
      *a5 = v18;
    else
      CVirtualAddressAllocator::FreeVirtualAddressRange(CpuVisibleBufferAllocator, v17);
  }
  else
  {
    v16 = WdLogNewEntry5_WdAssertion(v14, v13);
    *(_QWORD *)(v16 + 24) = a3;
    WdLogEvent5_WdAssertion(v16);
  }
  return (unsigned int)v15;
}
