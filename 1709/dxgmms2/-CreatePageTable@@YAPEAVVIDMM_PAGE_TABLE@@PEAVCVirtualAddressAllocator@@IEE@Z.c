/*
 * XREFs of ?CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z @ 0x1C0072E4C
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0055C00 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A3CAC (-ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABL.c)
 *     ?ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K222PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A3E9C (-ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001DC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C0057A7C (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?InitializePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@IEE@Z @ 0x1C0057B4C (-InitializePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@IEE@Z.c)
 */

struct VIDMM_PAGE_TABLE *__fastcall CreatePageTable(
        struct CVirtualAddressAllocator *a1,
        unsigned int a2,
        char a3,
        unsigned __int8 a4)
{
  __int64 v5; // rsi
  VIDMM_PAGE_TABLE *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  VIDMM_PAGE_TABLE *v11; // rbx
  unsigned int v12; // r8d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v16; // rax
  __int64 v17; // rax

  v5 = a2;
  v8 = (VIDMM_PAGE_TABLE *)operator new[](0x20uLL, 0x33356956u, PagedPool);
  v11 = v8;
  if ( v8 )
  {
    memset(v8, 0, 0x20uLL);
    *(_DWORD *)v11 ^= (*(_DWORD *)v11 ^ ((_DWORD)v5 << 7)) & 0xF80;
  }
  else
  {
    v11 = 0LL;
  }
  if ( v11 )
  {
    v12 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 10) + 40168LL) + 1552 * v5 + 76);
    if ( a3 )
      v12 >>= 4;
    if ( (int)VIDMM_PAGE_TABLE::InitializePageTable(v11, a1, v12, a3, a4) >= 0 )
      return v11;
    v17 = WdLogNewEntry5_WdAssertion(v14, v13);
    *(_QWORD *)(v17 + 24) = 4032LL;
    WdLogEvent5_WdAssertion(v17);
    VIDMM_PAGE_TABLE::DestroyPageTable((struct VIDMM_ALLOC **)v11, a1, 0LL);
  }
  else
  {
    v16 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v16 + 24) = 4017LL;
    WdLogEvent5_WdAssertion(v16);
  }
  return 0LL;
}
