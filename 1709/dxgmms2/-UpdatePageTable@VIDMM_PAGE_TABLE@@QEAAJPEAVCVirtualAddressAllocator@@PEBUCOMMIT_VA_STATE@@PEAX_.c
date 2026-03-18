/*
 * XREFs of ?UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@II3U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C0099548
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00575C0 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 * Callees:
 *     ?FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z @ 0x1C00573F0 (-FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C0057440 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@1IIPEAU_DXGK_PTE@@4II1W4_DXGK_PAGETABLEUPDATEMODE@@1U_DXGK_UPDATEPAGETABLEFLAGS@@1@Z @ 0x1C005A9B0 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE::UpdatePageTable(
        VIDMM_PAGE_TABLE_BASE *a1,
        VIDMM_GLOBAL **a2,
        __int64 a3,
        struct _VIDMM_GLOBAL_ALLOC ***a4,
        unsigned __int64 a5,
        int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned __int64 a9,
        struct _DXGK_UPDATEPAGETABLEFLAGS a10)
{
  VIDMM_GLOBAL *v10; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  struct VIDMM_ALLOC *v21; // rbp
  struct _VIDMM_GLOBAL_ALLOC *v22; // r11
  enum _DXGK_PAGETABLEUPDATEMODE v23; // ecx
  void *v24; // rbx
  __int64 v25; // r8
  unsigned __int64 v26; // [rsp+90h] [rbp-28h] BYREF
  void *v27; // [rsp+98h] [rbp-20h] BYREF
  unsigned int v28; // [rsp+C8h] [rbp+10h] BYREF

  v10 = a2[10];
  if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(a1, (struct CVirtualAddressAllocator *)a2, &v28, &v26, &v27) >= 0 )
  {
    v21 = 0LL;
    if ( a6 == 1 )
    {
      v21 = (struct VIDMM_ALLOC *)a4;
      v22 = **a4;
    }
    else
    {
      v22 = 0LL;
      if ( a6 == 3 )
        v22 = (struct _VIDMM_GLOBAL_ALLOC *)a4;
    }
    if ( (*((_BYTE *)v10 + 40872) & 8) != 0 )
      v23 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
    else
      v23 = (int)(*(_DWORD *)a1 << 16) >> 29;
    v24 = (void *)v26;
    VIDMM_GLOBAL::UpdatePageTable(
      v10,
      *(_DWORD *)a1 & 7,
      a2[11],
      *(_QWORD *)(a3 + 16),
      v21,
      v22,
      a5,
      a7,
      a8,
      (struct _DXGK_PTE *)(*((_QWORD *)a1 + 3) + 16LL * a7),
      0LL,
      (*(_DWORD *)a1 >> 7) & 0x1F,
      v28,
      v26,
      v23,
      a9,
      *(_DWORD *)&a10,
      *(_QWORD *)(a3 + 64));
    VIDMM_PAGE_TABLE_BASE::FreeDriverUpdateAddress(a1, (struct CVirtualAddressAllocator *)a2, v25, v24, v27);
    return 0LL;
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(v16, v15, v17, v18);
    *(_QWORD *)(v19 + 24) = 3748LL;
    WdLogEvent5_WdError(v19);
    return 3221225473LL;
  }
}
