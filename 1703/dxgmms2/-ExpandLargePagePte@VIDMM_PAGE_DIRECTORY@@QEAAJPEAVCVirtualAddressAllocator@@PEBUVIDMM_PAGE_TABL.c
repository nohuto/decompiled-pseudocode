/*
 * XREFs of ?ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C009BA04
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0053FC0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0013DE4 (-GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     ExFreeToPagedLookasideList @ 0x1C0020FC4 (ExFreeToPagedLookasideList.c)
 *     ?CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z @ 0x1C0050268 (-CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0050850 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C0050CF8 (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z @ 0x1C00550E4 (-SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_DIRECTORY::ExpandLargePagePte(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2,
        const struct VIDMM_PAGE_TABLE_LEVEL_DESC *a3,
        char a4,
        struct VIDMM_ALLOC *a5,
        unsigned int a6,
        struct VIDMM_ALLOC **a7)
{
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r11
  int v14; // r10d
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r8
  __int64 v17; // rax
  unsigned __int64 v18; // rbx
  __int64 VidMmGlobalAllocFromOwner; // rax
  unsigned __int8 v20; // r8
  char v21; // r9
  unsigned int v22; // r10d
  __int64 v23; // r11
  VIDMM_PAGE_TABLE *PageTable; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // ebx
  __int64 v29; // rax
  _QWORD v30[10]; // [rsp+50h] [rbp-68h] BYREF

  v11 = *(_QWORD *)(*((_QWORD *)this + 4) + 8LL * a6);
  memset(v30, 0, 0x48uLL);
  v12 = *(_QWORD *)v11;
  v13 = *((_QWORD *)this + 3);
  v14 = *(_DWORD *)this;
  LODWORD(v30[6]) = *(_DWORD *)(v11 + 8);
  v30[5] = v12;
  v15 = *(_QWORD *)(v13 + 16LL * a6);
  BYTE1(v30[7]) = a4;
  v16 = v15 >> 5;
  v30[0] = v15 & 0xFFFFFFFFFFFFFBFFuLL;
  v17 = *(_QWORD *)(v11 + 16);
  v18 = 0LL;
  HIDWORD(v30[6]) = v16 & 0x1F;
  v30[2] = v17;
  LOBYTE(v30[7]) = (v14 & 0x40) != 0;
  VidMmGlobalAllocFromOwner = GetVidMmGlobalAllocFromOwner(v30[6], v12);
  if ( VidMmGlobalAllocFromOwner )
    v18 = (*(_QWORD *)(v23 + 16LL * a6 + 8) << 12) - *(_QWORD *)(VidMmGlobalAllocFromOwner + 144);
  if ( (v22 & 0x40) == 0 || a4 )
    v21 = 0;
  PageTable = CreatePageTable(a2, (v22 >> 7) & 0x1F, v20, v21);
  if ( !PageTable )
    return 3221225495LL;
  v28 = VIDMM_PAGE_TABLE::CommitVirtualAddressRange(
          PageTable,
          a2,
          (const struct COMMIT_VA_STATE *)v30,
          v18,
          a5,
          *((_QWORD *)a3 + 5),
          *(_QWORD *)(*((_QWORD *)this + 3) + 16LL * a6 + 8) << 12,
          0,
          a7);
  if ( v28 >= 0 )
  {
    ExFreeToPagedLookasideList(
      (PPAGED_LOOKASIDE_LIST)(*((_QWORD *)a2 + 10) + 40192LL),
      *(PVOID *)(*((_QWORD *)this + 4) + 8LL * a6));
    *(_QWORD *)(*((_QWORD *)this + 4) + 8LL * a6) = 0LL;
    *(_QWORD *)(*((_QWORD *)this + 4) + 8LL * a6) = PageTable;
    *(_QWORD *)(*((_QWORD *)this + 3) + 16LL * a6) &= ~0x400uLL;
    VIDMM_PAGE_DIRECTORY::SetPageTableInPde(this, a2, a6);
    return 0LL;
  }
  else
  {
    v29 = WdLogNewEntry5_WdWarning(v27, v26);
    WdLogEvent5_WdWarning(v29);
    VIDMM_PAGE_TABLE::DestroyPageTable((struct VIDMM_ALLOC **)PageTable, a2, (unsigned __int64)a5);
    return (unsigned int)v28;
  }
}
