/*
 * XREFs of ?DestroyPdePageTableData@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I_K@Z @ 0x1C00A3C10
 * Callers:
 *     ?HandleFullPageTableCoverage@VIDMM_PAGE_DIRECTORY@@QEAAEPEAVCVirtualAddressAllocator@@PEBU_DXGK_GPUMMUCAPS@@PEBUCOMMIT_VA_STATE@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@III_KPEAE@Z @ 0x1C00A45DC (-HandleFullPageTableCoverage@VIDMM_PAGE_DIRECTORY@@QEAAEPEAVCVirtualAddressAllocator@@PEBU_DXGK_.c)
 * Callees:
 *     ExFreeToPagedLookasideList @ 0x1C0022ED8 (ExFreeToPagedLookasideList.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C0055924 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C0057A7C (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 */

void __fastcall VIDMM_PAGE_DIRECTORY::DestroyPdePageTableData(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2,
        unsigned int a3,
        unsigned __int64 a4)
{
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rcx
  struct VIDMM_ALLOC **v8; // rcx
  __int64 v9; // rax

  v5 = 2LL * a3;
  v6 = a3;
  v7 = *(_QWORD *)(*((_QWORD *)this + 3) + 16LL * a3);
  if ( (v7 & 2) == 0 )
  {
    if ( (v7 & 0x400) != 0 )
    {
      ExFreeToPagedLookasideList(
        (PPAGED_LOOKASIDE_LIST)(*((_QWORD *)a2 + 10) + 40192LL),
        *(PVOID *)(*((_QWORD *)this + 4) + 8LL * a3));
    }
    else
    {
      v8 = *(struct VIDMM_ALLOC ***)(*((_QWORD *)this + 4) + 8LL * a3);
      if ( (*(_DWORD *)this & 0x20) != 0 )
        VIDMM_PAGE_TABLE::DestroyPageTable(v8, a2, a4);
      else
        VIDMM_PAGE_DIRECTORY::DestroyPageDirectory((VIDMM_PAGE_DIRECTORY *)v8, a2, a4, a4);
    }
    *(_QWORD *)(*((_QWORD *)this + 4) + 8 * v6) = 0LL;
  }
  v9 = *((_QWORD *)this + 3);
  *(_QWORD *)(v9 + 8 * v5) = 0LL;
  *(_QWORD *)(v9 + 8 * v5 + 8) = 0LL;
  --*((_DWORD *)this + 1);
}
