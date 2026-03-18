/*
 * XREFs of ?MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@IPEAPEAXPEA_K@Z @ 0x1C0099AF8
 * Callers:
 *     ?Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJXZ @ 0x1C004F844 (-Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJXZ.c)
 *     ?CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0055FAC (-CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     MapChildMmioSpace @ 0x1C001EC10 (MapChildMmioSpace.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1C00526A4 (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C0075568 (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 *     ?GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ @ 0x1C0099910 (-GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ.c)
 */

__int64 __fastcall VIDMM_PROCESS::MapHostAddressesToGuest(
        VIDMM_PROCESS *this,
        struct _MDL *a2,
        unsigned int a3,
        void **a4,
        unsigned __int64 *a5)
{
  __int64 v5; // rbx
  unsigned __int64 v6; // rbp
  __int64 v9; // rax
  VIDMM_PROCESS *v10; // rcx
  struct _KTHREAD **CpuVisibleBufferAllocator; // rdi
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // esi
  __int64 v16; // rax
  struct _RTL_BALANCED_NODE *v17; // r15
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // [rsp+70h] [rbp+8h] BYREF

  v5 = *((_QWORD *)this + 4);
  v6 = a3;
  if ( (*(_BYTE *)(v5 + 275) & 4) != 0 )
    v5 = *(_QWORD *)(v5 + 400);
  if ( !v5 )
    return 3221225473LL;
  v9 = *(_QWORD *)(v5 + 64);
  v10 = v9 ? *(VIDMM_PROCESS **)(v9 + 8) : 0LL;
  CpuVisibleBufferAllocator = (struct _KTHREAD **)VIDMM_PROCESS::GetCpuVisibleBufferAllocator(v10);
  if ( !CpuVisibleBufferAllocator )
    return 3221225473LL;
  if ( (unsigned int)v6 > a2->ByteCount )
    return 3221225485LL;
  v15 = CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(
          CpuVisibleBufferAllocator,
          v6,
          v12,
          0LL,
          0LL,
          0x1000u,
          &v19);
  if ( v15 >= 0 )
  {
    v17 = (struct _RTL_BALANCED_NODE *)v19;
    v18 = v19 + *(_QWORD *)(v5 + 448);
    v15 = MapChildMmioSpace(v5);
    if ( v15 >= 0 )
      *a5 = v18;
    else
      CVirtualAddressAllocator::FreeVirtualAddressRange(CpuVisibleBufferAllocator, v17);
  }
  else
  {
    v16 = WdLogNewEntry5_WdAssertion(v14, v13);
    *(_QWORD *)(v16 + 24) = v6;
    WdLogEvent5_WdAssertion(v16);
  }
  return (unsigned int)v15;
}
