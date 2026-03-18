/*
 * XREFs of ?ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K222PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C009BBE8
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0053FC0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014430 (__security_check_cookie.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     ?CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z @ 0x1C0050268 (-CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0050850 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0053FC0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z @ 0x1C00550E4 (-SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_DIRECTORY::ExpandZeroPte(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2,
        const struct COMMIT_VA_STATE *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        unsigned __int64 a9,
        struct VIDMM_ALLOC **a10)
{
  __int64 v10; // r12
  __int64 v14; // r13
  struct VIDMM_PAGE_TABLE *PageTable; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  char v20; // al
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned int v25; // r14d
  __int64 v26; // rax
  __int64 v27; // rcx
  int v28; // eax
  struct VIDMM_ALLOC *v29; // [rsp+20h] [rbp-91h]
  struct VIDMM_ALLOC *v30; // [rsp+20h] [rbp-91h]
  unsigned __int64 v31; // [rsp+28h] [rbp-89h]
  unsigned __int64 v32; // [rsp+28h] [rbp-89h]
  _QWORD v33[10]; // [rsp+50h] [rbp-61h] BYREF

  v10 = a5;
  v14 = a4;
  if ( (*(_BYTE *)(*((_QWORD *)this + 3) + 16LL * a4) & 2) != 0 )
    v10 = a4;
  if ( *(_QWORD *)(*((_QWORD *)this + 4) + 8 * v10)
    || (PageTable = CreatePageTable(a2, (*(_DWORD *)this >> 7) & 0x1F, (unsigned int)v10 > a4, 0),
        v17 = *((_QWORD *)this + 4),
        *(_QWORD *)(v17 + 8 * v10) = PageTable,
        *(_QWORD *)(*((_QWORD *)this + 4) + 8 * v10)) )
  {
    memset(v33, 0, 0x48uLL);
    v20 = *((_BYTE *)a3 + 57);
    v33[0] |= 3uLL;
    BYTE1(v33[7]) = v20;
    LOBYTE(v33[7]) = *((_BYTE *)a3 + 56);
    v33[6] = 0xFFFFFFFE00000006uLL;
    if ( a8 < a6 )
    {
      v21 = *((_QWORD *)this + 4);
      v31 = a6 - a8;
      v29 = (struct VIDMM_ALLOC *)(a8 << 12);
      v22 = (*(_DWORD *)this & 0x20) != 0
          ? VIDMM_PAGE_TABLE::CommitVirtualAddressRange(
              *(VIDMM_PAGE_TABLE **)(v21 + 8 * v10),
              a2,
              (const struct COMMIT_VA_STATE *)v33,
              0LL,
              v29,
              v31,
              0LL,
              0,
              a10)
          : VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
              *(VIDMM_PAGE_DIRECTORY **)(v21 + 8 * v14),
              a2,
              (const struct COMMIT_VA_STATE *)v33,
              0LL,
              (unsigned __int64)v29,
              v31,
              0LL,
              0,
              a10);
      v25 = v22;
      if ( v22 < 0 )
        goto LABEL_10;
    }
    if ( a7 < a9
      && ((v27 = *((_QWORD *)this + 4),
           v32 = a9 - a7,
           v30 = (struct VIDMM_ALLOC *)(a7 << 12),
           (*(_DWORD *)this & 0x20) == 0)
        ? (v28 = VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
                   *(VIDMM_PAGE_DIRECTORY **)(v27 + 8 * v14),
                   a2,
                   (const struct COMMIT_VA_STATE *)v33,
                   0LL,
                   (unsigned __int64)v30,
                   v32,
                   0LL,
                   0,
                   a10))
        : (v28 = VIDMM_PAGE_TABLE::CommitVirtualAddressRange(
                   *(VIDMM_PAGE_TABLE **)(v27 + 8 * v10),
                   a2,
                   (const struct COMMIT_VA_STATE *)v33,
                   0LL,
                   v30,
                   v32,
                   0LL,
                   0,
                   a10)),
          v25 = v28,
          v28 < 0) )
    {
LABEL_10:
      v26 = WdLogNewEntry5_WdWarning(v24, v23);
      WdLogEvent5_WdWarning(v26);
      return v25;
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 3) + 16LL * (unsigned int)v10) &= ~2uLL;
      VIDMM_PAGE_DIRECTORY::SetPageTableInPde(this, a2, v10);
      return 0LL;
    }
  }
  else
  {
    v18 = WdLogNewEntry5_WdAssertion(v17, v16);
    *(_QWORD *)(v18 + 24) = 5092LL;
    WdLogEvent5_WdAssertion(v18);
    return 3221225495LL;
  }
}
