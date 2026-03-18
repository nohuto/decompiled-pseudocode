/*
 * XREFs of ?CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z @ 0x1C006D4B0
 * Callers:
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0053290 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0053FC0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002798 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?InitializePageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C0053B5C (-InitializePageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C0053CE4 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ??0VIDMM_PAGE_DIRECTORY@@QEAA@III@Z @ 0x1C00551AC (--0VIDMM_PAGE_DIRECTORY@@QEAA@III@Z.c)
 */

struct VIDMM_PAGE_DIRECTORY *__fastcall CreatePageDirectory(
        struct CVirtualAddressAllocator *a1,
        unsigned int a2,
        int a3)
{
  __int16 v4; // si
  __int64 v6; // rbx
  VIDMM_PAGE_DIRECTORY *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  VIDMM_PAGE_DIRECTORY *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int8 v16; // r9

  v4 = a2;
  v6 = *(_QWORD *)(*((_QWORD *)a1 + 10) + 40168LL) + 472LL * a2;
  v7 = (VIDMM_PAGE_DIRECTORY *)operator new[](0x28uLL, 0x36356956u, PagedPool);
  if ( v7 )
    v10 = VIDMM_PAGE_DIRECTORY::VIDMM_PAGE_DIRECTORY(v7, v4, *(_DWORD *)(v6 + 428), a3);
  else
    v10 = 0LL;
  if ( v10 )
  {
    if ( (int)VIDMM_PAGE_DIRECTORY::InitializePageDirectory(v10, a1) >= 0 )
      return v10;
    v15 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v15 + 24) = 4160LL;
    WdLogEvent5_WdAssertion(v15);
    VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(v10, a1, 0LL, v16);
  }
  else
  {
    v14 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v14 + 24) = 4154LL;
    WdLogEvent5_WdAssertion(v14);
  }
  return 0LL;
}
