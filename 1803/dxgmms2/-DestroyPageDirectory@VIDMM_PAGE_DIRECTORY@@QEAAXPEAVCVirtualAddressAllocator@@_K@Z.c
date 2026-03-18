/*
 * XREFs of ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C005C214
 * Callers:
 *     ?DestroyPdePageTableData@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I_K@Z @ 0x1C0053584 (-DestroyPdePageTableData@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I_K@Z.c)
 *     ?CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z @ 0x1C00567D4 (-CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z.c)
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C005B0C0 (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005B3D0 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C005C240 (-DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005C4F0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ @ 0x1C00AACD4 (-DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0002BF0 (--3@YAXPEAX@Z.c)
 *     ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C005C240 (-DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 */

void __fastcall VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2,
        unsigned __int64 a3,
        unsigned __int8 a4)
{
  VIDMM_PAGE_DIRECTORY::DestroyPageDirectoryObjects(this, a2, a3, a4);
  if ( this )
    operator delete(this);
}
