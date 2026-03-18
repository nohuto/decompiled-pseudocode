/*
 * XREFs of ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C00592D8
 * Callers:
 *     ?DestroyPdePageTableData@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I_K@Z @ 0x1C0053584 (-DestroyPdePageTableData@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I_K@Z.c)
 *     ?CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z @ 0x1C0058118 (-CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z.c)
 *     ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C005C240 (-DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005C4F0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00AADA4 (-ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABL.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0002BF0 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00161E0 (__security_check_cookie.c)
 *     ?EvictPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C0059718 (-EvictPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C0065EE0 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0067090 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 */

void __fastcall VIDMM_PAGE_TABLE::DestroyPageTable(
        struct VIDMM_ALLOC **this,
        struct CVirtualAddressAllocator *a2,
        unsigned __int64 a3)
{
  VIDMM_GLOBAL *v3; // rdi
  struct _VIDMM_GLOBAL_ALLOC *v6; // r8
  struct VIDMM_ALLOC *v7; // rcx
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-48h] BYREF

  v3 = (VIDMM_GLOBAL *)*((_QWORD *)a2 + 10);
  VIDMM_PAGE_TABLE::EvictPageTable((VIDMM_PAGE_TABLE *)this, a2, a3, 1u);
  if ( this[2] )
  {
    KeStackAttachProcess(**((PRKPROCESS **)a2 + 11), &ApcState);
    VIDMM_GLOBAL::CloseOneAllocation(v3, this[2], 0LL, 0, (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1, 0LL);
    KeUnstackDetachProcess(&ApcState);
    this[2] = 0LL;
  }
  v6 = this[1];
  if ( v6 )
  {
    VIDMM_GLOBAL::DestroyOneAllocation(v3, 0LL, v6, 0);
    this[1] = 0LL;
  }
  v7 = this[3];
  if ( v7 )
  {
    operator delete(v7);
    this[3] = 0LL;
  }
  operator delete(this);
}
