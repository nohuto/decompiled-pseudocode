/*
 * XREFs of ?ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K222PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A3E9C
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0055C00 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0016910 (__security_check_cookie.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0055C00 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z @ 0x1C0056D30 (-SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00575C0 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z @ 0x1C0072E4C (-CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z.c)
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
  __int64 v23; // rcx
  unsigned int v24; // r14d
  __int64 v25; // rax
  __int64 v26; // rcx
  int v27; // eax
  struct VIDMM_ALLOC *v28; // [rsp+20h] [rbp-91h]
  struct VIDMM_ALLOC *v29; // [rsp+20h] [rbp-91h]
  unsigned __int64 v30; // [rsp+28h] [rbp-89h]
  unsigned __int64 v31; // [rsp+28h] [rbp-89h]
  _QWORD v32[10]; // [rsp+50h] [rbp-61h] BYREF

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
    memset(v32, 0, 0x48uLL);
    v20 = *((_BYTE *)a3 + 57);
    v32[0] |= 3uLL;
    BYTE1(v32[7]) = v20;
    LOBYTE(v32[7]) = *((_BYTE *)a3 + 56);
    v32[6] = 0xFFFFFFFE00000006uLL;
    if ( a8 < a6 )
    {
      v21 = *((_QWORD *)this + 4);
      v30 = a6 - a8;
      v28 = (struct VIDMM_ALLOC *)(a8 << 12);
      v22 = (*(_DWORD *)this & 0x20) != 0
          ? VIDMM_PAGE_TABLE::CommitVirtualAddressRange(
              *(VIDMM_PAGE_TABLE **)(v21 + 8 * v10),
              a2,
              (const struct COMMIT_VA_STATE *)v32,
              0LL,
              v28,
              v30,
              0LL,
              0,
              a10)
          : VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
              *(VIDMM_PAGE_DIRECTORY **)(v21 + 8 * v14),
              a2,
              (const struct COMMIT_VA_STATE *)v32,
              0LL,
              (unsigned __int64)v28,
              v30,
              0LL,
              0,
              a10);
      v24 = v22;
      if ( v22 < 0 )
        goto LABEL_10;
    }
    if ( a7 < a9
      && ((v26 = *((_QWORD *)this + 4),
           v31 = a9 - a7,
           v29 = (struct VIDMM_ALLOC *)(a7 << 12),
           (*(_DWORD *)this & 0x20) == 0)
        ? (v27 = VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
                   *(VIDMM_PAGE_DIRECTORY **)(v26 + 8 * v14),
                   a2,
                   (const struct COMMIT_VA_STATE *)v32,
                   0LL,
                   (unsigned __int64)v29,
                   v31,
                   0LL,
                   0,
                   a10))
        : (v27 = VIDMM_PAGE_TABLE::CommitVirtualAddressRange(
                   *(VIDMM_PAGE_TABLE **)(v26 + 8 * v10),
                   a2,
                   (const struct COMMIT_VA_STATE *)v32,
                   0LL,
                   v29,
                   v31,
                   0LL,
                   0,
                   a10)),
          v24 = v27,
          v27 < 0) )
    {
LABEL_10:
      v25 = WdLogNewEntry5_WdWarning(v23);
      WdLogEvent5_WdWarning(v25);
      return v24;
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
    *(_QWORD *)(v18 + 24) = 5093LL;
    WdLogEvent5_WdAssertion(v18);
    return 3221225495LL;
  }
}
