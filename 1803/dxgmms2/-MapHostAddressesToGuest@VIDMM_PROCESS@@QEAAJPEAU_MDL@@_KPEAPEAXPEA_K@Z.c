/*
 * XREFs of ?MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@_KPEAPEAXPEA_K@Z @ 0x1C00A8AB0
 * Callers:
 *     ?Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_PROCESS@@@Z @ 0x1C0078488 (-Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_PROCESS@@@Z.c)
 *     ?LockParavirtualizedAllocationOnHost@@YAJPEAUVIDMM_ALLOC@@PEAPEAX@Z @ 0x1C00A1598 (-LockParavirtualizedAllocationOnHost@@YAJPEAUVIDMM_ALLOC@@PEAPEAX@Z.c)
 * Callees:
 *     MapChildMmioSpace @ 0x1C002313C (MapChildMmioSpace.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1C005A7D4 (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 *     ?GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ @ 0x1C00A887C (-GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C00AB19C (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 */

__int64 __fastcall VIDMM_PROCESS::MapHostAddressesToGuest(
        VIDMM_PROCESS *this,
        struct _MDL *a2,
        unsigned __int64 a3,
        void **a4,
        unsigned __int64 *a5)
{
  __int64 v5; // r10
  char v8; // al
  __int64 v9; // rbx
  __int64 v11; // rax
  VIDMM_PROCESS *v12; // rcx
  struct _KTHREAD **CpuVisibleBufferAllocator; // rsi
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // edi
  __int64 v18; // rax
  char v19; // al
  __int64 v20; // rax
  unsigned __int64 v21; // r15
  unsigned __int64 v22; // r14
  unsigned __int64 v23; // [rsp+70h] [rbp+8h] BYREF

  v5 = *((_QWORD *)this + 4);
  v8 = *(_BYTE *)(v5 + 323);
  if ( (v8 & 8) != 0 )
    v9 = *(_QWORD *)(v5 + 456);
  else
    v9 = v5 & -(__int64)((v8 & 4) != 0);
  if ( !v9 )
    return 3221225473LL;
  v11 = *(_QWORD *)(v9 + 72);
  v12 = v11 ? *(VIDMM_PROCESS **)(v11 + 8) : 0LL;
  CpuVisibleBufferAllocator = (struct _KTHREAD **)VIDMM_PROCESS::GetCpuVisibleBufferAllocator(v12);
  if ( !CpuVisibleBufferAllocator )
    return 3221225473LL;
  if ( a3 > a2->ByteCount )
    return 3221225485LL;
  v17 = CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(
          CpuVisibleBufferAllocator,
          a3,
          v14,
          0LL,
          0LL,
          0x1000u,
          &v23);
  if ( v17 >= 0 )
  {
    v19 = *(_BYTE *)(v9 + 323);
    if ( (v19 & 8) != 0 )
      v20 = *(_QWORD *)(v9 + 456);
    else
      v20 = v9 & -(__int64)((v19 & 4) != 0);
    v21 = v23;
    v22 = v23 + *(_QWORD *)(*(_QWORD *)(v20 + 456) + 160LL);
    v17 = MapChildMmioSpace(v9);
    if ( v17 >= 0 )
      *a5 = v22;
    else
      CVirtualAddressAllocator::FreeVirtualAddressRange((CVirtualAddressAllocator *)CpuVisibleBufferAllocator, v21);
  }
  else
  {
    v18 = WdLogNewEntry5_WdAssertion(v16, v15);
    *(_QWORD *)(v18 + 24) = a3;
    WdLogEvent5_WdAssertion(v18);
  }
  return (unsigned int)v17;
}
