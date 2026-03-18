/*
 * XREFs of ?RecordVaPagingHistoryUpdatePte@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_DXGK_BUILDPAGINGBUFFER_UPDATEPAGETABLE@@PEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@I@Z @ 0x1C00A5508
 * Callers:
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@1IIPEAU_DXGK_PTE@@4II1W4_DXGK_PAGETABLEUPDATEMODE@@1U_DXGK_UPDATEPAGETABLEFLAGS@@1@Z @ 0x1C005A9B0 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001DC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0002544 (--3@YAXPEAX@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryUpdatePte(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS *a2,
        struct _DXGK_BUILDPAGINGBUFFER_UPDATEPAGETABLE *a3,
        struct VIDMM_ALLOC *a4,
        struct _VIDMM_GLOBAL_ALLOC *a5,
        unsigned int a6)
{
  char *v10; // r14
  UINT NumPageTableEntries; // edi
  SIZE_T v12; // rcx
  _OWORD *v13; // rbp
  void *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int128 v20; // xmm0
  unsigned int v21; // r8d
  __int64 v22; // r9
  __int64 v23; // rcx
  __int128 v24; // xmm0

  if ( *((_QWORD *)this + 5115) )
  {
    v10 = (char *)this + 40936;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v10, 0LL);
    NumPageTableEntries = 1;
    *((_QWORD *)v10 + 1) = KeGetCurrentThread();
    if ( (*(_DWORD *)&a3->Flags & 1) == 0 )
      NumPageTableEntries = a3->NumPageTableEntries;
    v12 = 16LL * (NumPageTableEntries - 1) + 168;
    if ( a3->pPageTableEntries64KB )
      v12 += 16LL * NumPageTableEntries;
    v13 = operator new[](v12, 0x32356956u, PagedPool);
    if ( v13 )
    {
      if ( *((_DWORD *)this + 10232) == dword_1C004033C )
        *((_DWORD *)this + 10232) = 0;
      v14 = *(void **)(*((_QWORD *)this + 5115) + 24LL * *((unsigned int *)this + 10232) + 16);
      if ( v14 )
        operator delete(v14);
      *v13 = *(_OWORD *)&a3->PageTableLevel;
      v13[1] = a3->PageTableAddress;
      v13[2] = *(_OWORD *)&a3->pPageTableEntries;
      v13[3] = *(_OWORD *)&a3->Reserved0;
      v13[4] = *(_OWORD *)&a3->AllocationOffsetInBytes;
      v13[5] = *(_OWORD *)&a3->UpdateMode;
      *((_QWORD *)v13 + 12) = a3->FirstPteVirtualAddress;
      *((_DWORD *)v13 + 36) = a6;
      *((_QWORD *)v13 + 15) = a4;
      *((_QWORD *)v13 + 16) = a5;
      *((_QWORD *)v13 + 13) = *(_QWORD *)a2;
      *((_QWORD *)v13 + 14) = *((_QWORD *)a2 + 4);
      if ( a4 && (v15 = *((_QWORD *)a4 + 2)) != 0 )
      {
        v16 = *(_QWORD *)(v15 + 32);
      }
      else if ( a5 )
      {
        v17 = *((_QWORD *)a5 + 5);
        if ( v17 )
          v16 = *(_QWORD *)(v17 + 16);
        else
          v16 = *((_QWORD *)a5 + 6);
      }
      else
      {
        v16 = 0LL;
      }
      *((_QWORD *)v13 + 17) = v16;
      if ( NumPageTableEntries )
      {
        v18 = 0LL;
        v19 = NumPageTableEntries;
        do
        {
          v20 = *(_OWORD *)&a3->pPageTableEntries[v18++].0;
          *(_OWORD *)((char *)&v13[v18 + 8] + 8) = v20;
          --v19;
        }
        while ( v19 );
      }
      if ( a3->pPageTableEntries64KB )
      {
        v21 = 0;
        if ( NumPageTableEntries )
        {
          v22 = 0LL;
          do
          {
            v23 = v21 + NumPageTableEntries;
            ++v21;
            v24 = *(_OWORD *)&a3->pPageTableEntries64KB[v22++].0;
            *(_OWORD *)((char *)&v13[v23 + 9] + 8) = v24;
          }
          while ( v21 < NumPageTableEntries );
        }
      }
      *(_QWORD *)(*((_QWORD *)this + 5115) + 24LL * *((unsigned int *)this + 10232)) = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)(*((_QWORD *)this + 5115) + 24LL * *((unsigned int *)this + 10232) + 16) = v13;
      *(_DWORD *)(*((_QWORD *)this + 5115) + 24LL * (unsigned int)(*((_DWORD *)this + 10232))++ + 8) = 4;
    }
    *((_QWORD *)v10 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v10, 0LL);
    KeLeaveCriticalRegion();
  }
}
