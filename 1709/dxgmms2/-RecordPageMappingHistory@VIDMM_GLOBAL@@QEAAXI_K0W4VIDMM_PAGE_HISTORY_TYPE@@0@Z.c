/*
 * XREFs of ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x1C009CABC
 * Callers:
 *     ?MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0001330 (-MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C004DD80 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1C004E2FC (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0055C00 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?InvalidatePageTable@VIDMM_PAGE_TABLE@@QEAAEPEAVVIDMM_GLOBAL@@II@Z @ 0x1C0057530 (-InvalidatePageTable@VIDMM_PAGE_TABLE@@QEAAEPEAVVIDMM_GLOBAL@@II@Z.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@1IIPEAU_DXGK_PTE@@4II1W4_DXGK_PAGETABLEUPDATEMODE@@1U_DXGK_UPDATEPAGETABLEFLAGS@@1@Z @ 0x1C005A9B0 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::RecordPageMappingHistory(__int64 a1, int a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v10; // rdi
  __int64 v11; // rdx

  if ( *(_QWORD *)(a1 + 40952) )
  {
    v10 = a1 + 40936;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v10, 0LL);
    *(_QWORD *)(v10 + 8) = KeGetCurrentThread();
    if ( *(_DWORD *)(a1 + 40960) == dword_1C0040340 )
      *(_DWORD *)(a1 + 40960) = 0;
    v11 = *(_QWORD *)(a1 + 40952) + 48LL * *(unsigned int *)(a1 + 40960);
    *(_QWORD *)v11 = MEMORY[0xFFFFF78000000014];
    *(_DWORD *)(v11 + 32) = a5;
    *(_QWORD *)(v11 + 24) = a6;
    *(_DWORD *)(v11 + 36) = a2;
    *(_QWORD *)(v11 + 8) = a3;
    *(_QWORD *)(v11 + 16) = a4;
    *(_DWORD *)(v11 + 40) = *(_DWORD *)(a1 + 40928);
    ++*(_DWORD *)(a1 + 40960);
    *(_QWORD *)(v10 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v10, 0LL);
    KeLeaveCriticalRegion();
  }
}
