/*
 * XREFs of ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C0056EA0
 * Callers:
 *     ?EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z @ 0x1C0015F94 (-EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z.c)
 *     ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C0055950 (-DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0055C00 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C0056EA0 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 * Callees:
 *     ?IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ @ 0x1C0001DF0 (-IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ.c)
 *     ExFreeToPagedLookasideList @ 0x1C0022ED8 (ExFreeToPagedLookasideList.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C0056EA0 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z @ 0x1C00573F0 (-FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C0057440 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 *     ?EvictPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C0057EA8 (-EvictPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@1IIPEAU_DXGK_PTE@@4II1W4_DXGK_PAGETABLEUPDATEMODE@@1U_DXGK_UPDATEPAGETABLEFLAGS@@1@Z @ 0x1C005A9B0 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C005C50C (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_DIRECTORY::EvictPageDirectory(
        struct VIDMM_ALLOC **this,
        struct VIDMM_PROCESS **a2,
        unsigned __int64 a3,
        unsigned __int8 a4,
        char a5)
{
  unsigned __int64 v5; // rdi
  int *v7; // rcx
  char *v8; // r8
  unsigned __int8 v9; // r9
  struct VIDMM_PROCESS **v10; // r11
  int v11; // r10d
  struct _PAGED_LOOKASIDE_LIST *v12; // rbp
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned int v15; // ecx
  __int64 v16; // rbp
  __int64 v17; // rdi
  unsigned int v18; // esi
  struct VIDMM_ALLOC *v19; // rax
  VIDMM_PAGE_TABLE *v20; // rcx
  struct VIDMM_ALLOC *v21; // rax
  VIDMM_PAGE_TABLE *v22; // rcx
  bool v23; // zf
  enum _DXGK_PAGETABLEUPDATEMODE v24; // eax
  unsigned __int64 v25; // rdi
  unsigned int v26; // r8d
  void *v28; // rdx
  void *v29; // rdx
  VIDMM_PAGE_DIRECTORY *v30; // rcx
  __int64 v31; // rax
  unsigned __int64 v32; // [rsp+78h] [rbp-70h]
  unsigned int v33; // [rsp+90h] [rbp-58h]
  unsigned int v34[2]; // [rsp+98h] [rbp-50h] BYREF
  __int64 v35; // [rsp+A0h] [rbp-48h]
  struct _PAGED_LOOKASIDE_LIST *v36; // [rsp+A8h] [rbp-40h]
  __int64 v37; // [rsp+B0h] [rbp-38h]
  void *v38; // [rsp+B8h] [rbp-30h] BYREF
  unsigned __int64 v39[5]; // [rsp+C0h] [rbp-28h] BYREF

  v5 = a3;
  if ( !VIDMM_PAGE_TABLE_BASE::IsResident((VIDMM_PAGE_TABLE_BASE *)this) )
    return 0LL;
  v11 = *v7;
  v12 = (struct _PAGED_LOOKASIDE_LIST *)v10[10];
  v13 = ((unsigned int)*v7 >> 7) & 0x1F;
  v36 = v12;
  v14 = *(_QWORD *)&v12[313].L.Future[4] + 1552 * v13;
  v39[0] = v14;
  if ( (v11 & 0x10) != 0 )
    v15 = *((_DWORD *)v10[14] + 8 * v13 + 4);
  else
    v15 = *(_DWORD *)(v14 + 48LL * (v11 & 7) + 88);
  v33 = v15;
  *(_QWORD *)v34 = v8;
  v38 = *(void **)(v14 + 48LL * (v11 & 7) + 128);
  if ( v15 )
  {
    v16 = 0LL;
    v17 = 0LL;
    v35 = 0LL;
    v37 = v15;
    v18 = v15;
    while ( !v9 )
    {
LABEL_14:
      *(_QWORD *)((char *)this[3] + v17) = 0LL;
      if ( (*(_DWORD *)this & 0x1020) == 0x1020 )
        *((_QWORD *)this[3] + 2 * v18) = 0LL;
      v16 += 8LL;
      v8 = (char *)v38 + *(_QWORD *)v34;
      ++v18;
      v9 = a4;
      v17 += 16LL;
      v23 = v37-- == 1;
      v10 = a2;
      *(_QWORD *)v34 += v38;
      v35 = v16;
      if ( v23 )
      {
        v14 = v39[0];
        v12 = v36;
        v5 = a3;
        goto LABEL_18;
      }
    }
    if ( (*(_DWORD *)this & 0x20) == 0 )
    {
      v30 = *(VIDMM_PAGE_DIRECTORY **)((char *)this[4] + v16);
      if ( v30 )
        VIDMM_PAGE_DIRECTORY::EvictPageDirectory(
          v30,
          (struct CVirtualAddressAllocator *)v10,
          (unsigned __int64)v8,
          v9,
          a5);
      goto LABEL_14;
    }
    v19 = this[4];
    if ( (*(_DWORD *)((_BYTE *)this[3] + v17) & 0x400LL) != 0 )
    {
      v28 = *(void **)((char *)v19 + v16);
      if ( !v28 )
      {
LABEL_10:
        if ( (*(_DWORD *)this & 0x1000) != 0 )
        {
          v21 = this[4];
          if ( (*((_DWORD *)this[3] + 4 * v18) & 0x400LL) != 0 )
          {
            v29 = (void *)*((_QWORD *)v21 + v18);
            if ( v29 )
            {
              ExFreeToPagedLookasideList(v36 + 314, v29);
              *((_QWORD *)this[4] + v18) = 0LL;
            }
            v16 = v35;
          }
          else
          {
            v22 = (VIDMM_PAGE_TABLE *)*((_QWORD *)v21 + v18);
            if ( v22 )
              VIDMM_PAGE_TABLE::EvictPageTable(v22, (struct CVirtualAddressAllocator *)v10, (unsigned __int64)v8, a5);
          }
        }
        goto LABEL_14;
      }
      ExFreeToPagedLookasideList(v36 + 314, v28);
      *(_QWORD *)((char *)this[4] + v16) = 0LL;
    }
    else
    {
      v20 = *(VIDMM_PAGE_TABLE **)((char *)v19 + v16);
      if ( !v20 )
        goto LABEL_10;
      VIDMM_PAGE_TABLE::EvictPageTable(v20, (struct CVirtualAddressAllocator *)v10, (unsigned __int64)v8, a5);
    }
    v10 = a2;
    v8 = *(char **)v34;
    goto LABEL_10;
  }
LABEL_18:
  if ( (**(_DWORD **)(v14 + 440) & 8) == 0 || !a5 )
  {
LABEL_24:
    *((_DWORD *)this[1] + 19) |= 0x100000u;
    *((_BYTE *)this[1] + 97) = 0;
    VIDMM_GLOBAL::EvictOneAllocation((VIDMM_GLOBAL *)v12, this[2], 0);
    *((_DWORD *)this[1] + 19) &= ~0x100000u;
    return 0LL;
  }
  if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(
              (VIDMM_PAGE_TABLE_BASE *)this,
              (struct CVirtualAddressAllocator *)v10,
              v34,
              v39,
              &v38) >= 0 )
  {
    if ( (v12[319].L.Tag & 8) != 0 )
      v24 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
    else
      v24 = (int)(*(_DWORD *)this << 16) >> 29;
    v32 = v5;
    v25 = v39[0];
    VIDMM_GLOBAL::UpdatePageTable(
      (VIDMM_GLOBAL *)v12,
      *(_DWORD *)this & 7,
      a2[11],
      0LL,
      0LL,
      0LL,
      0LL,
      0,
      v33,
      0LL,
      0LL,
      (*(_DWORD *)this >> 7) & 0x1F,
      v34[0],
      v39[0],
      v24,
      v32,
      (struct _DXGK_UPDATEPAGETABLEFLAGS)4,
      0LL);
    VIDMM_PAGE_TABLE_BASE::FreeDriverUpdateAddress(
      (VIDMM_PAGE_TABLE_BASE *)this,
      (struct CVirtualAddressAllocator *)a2,
      v26,
      v25,
      v38);
    goto LABEL_24;
  }
  v31 = WdLogNewEntry5_WdError();
  *(_QWORD *)(v31 + 24) = 6363LL;
  WdLogEvent5_WdError(v31);
  return 3221225473LL;
}
