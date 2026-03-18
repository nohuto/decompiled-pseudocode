/*
 * XREFs of ?RecordVaPagingHistoryUpdatePte@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAU_DXGK_BUILDPAGINGBUFFER_UPDATEPAGETABLE@@PEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@I@Z @ 0x1C009D1F4
 * Callers:
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@1IIPEAU_DXGK_PTE@@4II1W4_DXGK_PAGETABLEUPDATEMODE@@1U_DXGK_UPDATEPAGETABLEFLAGS@@1@Z @ 0x1C00579C0 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001DE4 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002798 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryUpdatePte(
        VIDMM_GLOBAL *this,
        struct _EPROCESS *a2,
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
  D3DGPU_VIRTUAL_ADDRESS FirstPteVirtualAddress; // xmm0_8
  struct _VIDMM_GLOBAL_ALLOC *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int128 v21; // xmm0
  unsigned int v22; // r8d
  __int64 v23; // r9
  __int64 v24; // rcx
  __int128 v25; // xmm0

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
      if ( *((_DWORD *)this + 10232) == dword_1C003C304 )
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
      FirstPteVirtualAddress = a3->FirstPteVirtualAddress;
      *((_DWORD *)v13 + 36) = a6;
      v16 = a5;
      *((_QWORD *)v13 + 16) = a5;
      *((_QWORD *)v13 + 12) = FirstPteVirtualAddress;
      *((_QWORD *)v13 + 15) = a4;
      *((_QWORD *)v13 + 13) = a2;
      if ( a4 && (v17 = *((_QWORD *)a4 + 2)) != 0 )
      {
        v16 = *(struct _VIDMM_GLOBAL_ALLOC **)(v17 + 32);
      }
      else if ( a5 )
      {
        v18 = *((_QWORD *)a5 + 5);
        if ( v18 )
          v16 = *(struct _VIDMM_GLOBAL_ALLOC **)(v18 + 16);
        else
          v16 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a5 + 6);
      }
      *((_QWORD *)v13 + 17) = v16;
      if ( NumPageTableEntries )
      {
        v19 = 0LL;
        v20 = NumPageTableEntries;
        do
        {
          v21 = *(_OWORD *)&a3->pPageTableEntries[v19++].0;
          *(_OWORD *)((char *)&v13[v19 + 8] + 8) = v21;
          --v20;
        }
        while ( v20 );
      }
      if ( a3->pPageTableEntries64KB )
      {
        v22 = 0;
        if ( NumPageTableEntries )
        {
          v23 = 0LL;
          do
          {
            v24 = v22 + NumPageTableEntries;
            ++v22;
            v25 = *(_OWORD *)&a3->pPageTableEntries64KB[v23++].0;
            *(_OWORD *)((char *)&v13[v24 + 9] + 8) = v25;
          }
          while ( v22 < NumPageTableEntries );
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
