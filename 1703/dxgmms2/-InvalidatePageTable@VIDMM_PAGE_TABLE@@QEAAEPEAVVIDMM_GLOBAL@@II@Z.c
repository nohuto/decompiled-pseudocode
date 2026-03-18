/*
 * XREFs of ?InvalidatePageTable@VIDMM_PAGE_TABLE@@QEAAEPEAVVIDMM_GLOBAL@@II@Z @ 0x1C00507B0
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0050850 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 * Callees:
 *     ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x1C0094B6C (-RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE::InvalidatePageTable(
        VIDMM_PAGE_TABLE *this,
        struct VIDMM_GLOBAL *a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v4; // r15
  __int64 v8; // rdi
  unsigned __int8 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // r8
  _QWORD *v12; // rdx
  __int64 v14; // r14
  __int64 v15; // r15
  __int64 v16; // r8
  unsigned __int64 v17; // rax
  __int64 v18; // [rsp+30h] [rbp-18h]

  v8 = a3;
  if ( *((_QWORD *)a2 + 5119) && a3 < a3 + a4 )
  {
    v14 = 16LL * a3;
    v18 = v4;
    v15 = a4;
    do
    {
      v16 = *((_QWORD *)this + 3);
      v17 = *(_QWORD *)(v16 + v14);
      if ( (v17 & 1) != 0 )
        VIDMM_GLOBAL::RecordPageMappingHistory(a2, (v17 >> 5) & 0x1F, *(_QWORD *)(v16 + v14 + 8), 1LL, 1, 0LL, v18);
      v14 += 16LL;
      --v15;
    }
    while ( v15 );
  }
  v9 = 0;
  if ( (unsigned int)v8 < (unsigned int)v8 + a4 )
  {
    v10 = 16 * v8;
    v11 = a4;
    do
    {
      v12 = (_QWORD *)(v10 + *((_QWORD *)this + 3));
      if ( (*(_BYTE *)v12 & 1) != 0 )
      {
        --*((_DWORD *)this + 1);
        v9 = 1;
        *v12 = 0LL;
        *(_QWORD *)(v10 + *((_QWORD *)this + 3) + 8) = 0LL;
      }
      v10 += 16LL;
      --v11;
    }
    while ( v11 );
  }
  return v9;
}
