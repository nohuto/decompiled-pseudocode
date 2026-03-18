/*
 * XREFs of ?ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A3CAC
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0055C00 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C00160F8 (-GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     ExFreeToPagedLookasideList @ 0x1C0022ED8 (ExFreeToPagedLookasideList.c)
 *     ?SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z @ 0x1C0056D30 (-SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00575C0 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C0057A7C (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z @ 0x1C0072E4C (-CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z.c)
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
  __int64 v13; // r9
  int v14; // r10d
  unsigned __int64 v15; // r8
  __int64 v16; // rax
  unsigned __int64 v17; // rbx
  __int64 VidMmGlobalAllocFromOwner; // rax
  unsigned __int8 v19; // r8
  __int64 v20; // r9
  unsigned int v21; // r10d
  unsigned __int8 v22; // r11
  unsigned __int8 v23; // r9
  VIDMM_PAGE_TABLE *PageTable; // rsi
  __int64 v26; // rcx
  int v27; // ebx
  __int64 v28; // rax
  _QWORD v29[10]; // [rsp+50h] [rbp-68h] BYREF

  v11 = *(_QWORD *)(*((_QWORD *)this + 4) + 8LL * a6);
  memset(v29, 0, 0x48uLL);
  v12 = *(_QWORD *)v11;
  v13 = *((_QWORD *)this + 3);
  v14 = *(_DWORD *)this;
  LODWORD(v29[6]) = *(_DWORD *)(v11 + 8);
  v29[5] = v12;
  v15 = *(_QWORD *)(v13 + 16LL * a6);
  BYTE1(v29[7]) = a4;
  v29[0] = v15 & 0xFFFFFFFFFFFFFBFFuLL;
  v16 = *(_QWORD *)(v11 + 16);
  v17 = 0LL;
  v29[2] = v16;
  HIDWORD(v29[6]) = (v15 >> 5) & 0x1F;
  LOBYTE(v29[7]) = (v14 & 0x40) != 0;
  VidMmGlobalAllocFromOwner = GetVidMmGlobalAllocFromOwner(v29[6], v12);
  if ( VidMmGlobalAllocFromOwner )
    v17 = (*(_QWORD *)(v20 + 16LL * a6 + 8) << 12) - *(_QWORD *)(VidMmGlobalAllocFromOwner + 144);
  if ( (v19 & v22) == 0 || a4 )
    v23 = 0;
  else
    v23 = v22;
  PageTable = CreatePageTable(a2, (v21 >> 7) & 0x1F, v22 & v19, v23);
  if ( !PageTable )
    return 3221225495LL;
  v27 = VIDMM_PAGE_TABLE::CommitVirtualAddressRange(
          PageTable,
          a2,
          (const struct COMMIT_VA_STATE *)v29,
          v17,
          a5,
          *((_QWORD *)a3 + 5),
          *(_QWORD *)(*((_QWORD *)this + 3) + 16LL * a6 + 8) << 12,
          0,
          a7);
  if ( v27 >= 0 )
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
    v28 = WdLogNewEntry5_WdWarning(v26);
    WdLogEvent5_WdWarning(v28);
    VIDMM_PAGE_TABLE::DestroyPageTable((struct VIDMM_ALLOC **)PageTable, a2, (unsigned __int64)a5);
    return (unsigned int)v27;
  }
}
