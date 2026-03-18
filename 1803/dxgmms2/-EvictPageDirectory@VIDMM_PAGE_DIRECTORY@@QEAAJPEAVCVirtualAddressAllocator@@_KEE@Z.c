/*
 * XREFs of ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C005D8B0
 * Callers:
 *     ?EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z @ 0x1C0023A18 (-EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z.c)
 *     ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C005C240 (-DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005C4F0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C005D8B0 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 * Callees:
 *     ?IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ @ 0x1C00050BC (-IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ.c)
 *     ExFreeToPagedLookasideList @ 0x1C0025884 (ExFreeToPagedLookasideList.c)
 *     ?EvictPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C0059718 (-EvictPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z @ 0x1C005BF68 (-FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C005BFC0 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C005D8B0 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@1IIPEAU_DXGK_PTE@@4II1W4_DXGK_PAGETABLEUPDATEMODE@@1U_DXGK_UPDATEPAGETABLEFLAGS@@1@Z @ 0x1C005F2A0 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C0060D84 (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_DIRECTORY::EvictPageDirectory(
        struct VIDMM_ALLOC **this,
        struct CVirtualAddressAllocator *a2,
        unsigned __int64 a3,
        unsigned __int8 a4,
        char a5)
{
  unsigned __int64 v5; // rdi
  struct CVirtualAddressAllocator *v6; // rbp
  unsigned int *v8; // rcx
  unsigned __int64 v9; // r8
  unsigned __int8 v10; // r10
  int v11; // eax
  void *v12; // rsi
  unsigned __int64 v13; // r9
  char v14; // cl
  unsigned __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // r11
  __int64 v20; // rdi
  __int64 v21; // rdx
  unsigned int v22; // esi
  struct VIDMM_ALLOC *v23; // rax
  void *v24; // r10
  __int64 v25; // r10
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  enum _DXGK_PAGETABLEUPDATEMODE v30; // eax
  void *v31; // rdi
  __int64 v32; // r8
  VIDMM_PAGE_DIRECTORY *v34; // rcx
  __int64 v35; // rax
  unsigned __int64 v36; // [rsp+78h] [rbp-70h]
  unsigned int v37; // [rsp+90h] [rbp-58h]
  unsigned int v38[2]; // [rsp+98h] [rbp-50h] BYREF
  __int64 v39; // [rsp+A0h] [rbp-48h]
  __int64 v40; // [rsp+A8h] [rbp-40h]
  __int64 v41; // [rsp+B0h] [rbp-38h]
  void *v42; // [rsp+B8h] [rbp-30h] BYREF
  unsigned __int64 v43[5]; // [rsp+C0h] [rbp-28h] BYREF

  v5 = a3;
  v6 = a2;
  if ( !VIDMM_PAGE_TABLE_BASE::IsResident((VIDMM_PAGE_TABLE_BASE *)this) )
    return 0LL;
  v11 = *v8;
  v12 = (void *)*((_QWORD *)v6 + 10);
  v13 = (unsigned __int64)*v8 >> 7;
  v14 = *v8;
  v15 = v13 & 0x1F;
  v42 = v12;
  v16 = v14 & 7;
  v17 = *((_QWORD *)v12 + 5090) + 1560 * v15;
  v43[0] = v17;
  if ( (v11 & 0x10) != 0 )
    v18 = *(unsigned int *)(32 * v15 + *((_QWORD *)v6 + 14) + 16);
  else
    v18 = *(unsigned int *)(v17 + 48 * v16 + 88);
  v37 = v18;
  *(_QWORD *)v38 = v9;
  v19 = *(_QWORD *)(v17 + 48 * v16 + 128);
  v41 = v19;
  if ( (_DWORD)v18 )
  {
    v20 = 0LL;
    v40 = v18;
    v21 = 0LL;
    v22 = v18;
    v39 = 0LL;
    while ( 1 )
    {
      if ( !v10 )
        goto LABEL_13;
      v23 = this[4];
      if ( (*(_DWORD *)this & 0x20) == 0 )
      {
        v34 = *(VIDMM_PAGE_DIRECTORY **)((char *)v23 + v21);
        if ( v34 )
        {
          VIDMM_PAGE_DIRECTORY::EvictPageDirectory(v34, v6, v9, v10, a5);
          goto LABEL_35;
        }
        goto LABEL_13;
      }
      v24 = *(void **)((char *)v23 + v21);
      if ( (*(_DWORD *)((_BYTE *)this[3] + v20) & 0x400LL) != 0 )
      {
        if ( !v24 )
          goto LABEL_10;
        ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)v42 + 40768), v24);
        v21 = v39;
        *(_QWORD *)((char *)this[4] + v39) = 0LL;
      }
      else
      {
        if ( !v24 )
          goto LABEL_10;
        VIDMM_PAGE_TABLE::EvictPageTable((struct VIDMM_ALLOC **)v24, v6);
        v21 = v39;
      }
      v19 = v41;
      v18 = v40;
      v9 = *(_QWORD *)v38;
LABEL_10:
      if ( (*(_DWORD *)this & 0x1000) != 0 )
      {
        v25 = *((_QWORD *)this[4] + v22);
        if ( (*((_DWORD *)this[3] + 4 * v22) & 0x400LL) != 0 )
        {
          if ( v25 )
          {
            ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)v42 + 40768), *((PVOID *)this[4] + v22));
            *((_QWORD *)this[4] + v22) = 0LL;
LABEL_35:
            v21 = v39;
            v9 = *(_QWORD *)v38;
            v18 = v40;
            v19 = v41;
          }
        }
        else if ( v25 )
        {
          VIDMM_PAGE_TABLE::EvictPageTable(*((struct VIDMM_ALLOC ***)this[4] + v22), a2);
          goto LABEL_35;
        }
      }
LABEL_13:
      *(_QWORD *)((char *)this[3] + v20) = 0LL;
      if ( (*(_DWORD *)this & 0x1020) == 0x1020 )
        *((_QWORD *)this[3] + 2 * v22) = 0LL;
      v10 = a4;
      v9 += v19;
      v6 = a2;
      v21 += 8LL;
      ++v22;
      *(_QWORD *)v38 = v9;
      v20 += 16LL;
      v39 = v21;
      v40 = --v18;
      if ( !v18 )
      {
        v17 = v43[0];
        v12 = v42;
        v5 = a3;
        break;
      }
    }
  }
  if ( (**(_DWORD **)(v17 + 440) & 8) == 0 || !a5 )
  {
LABEL_23:
    *((_DWORD *)this[1] + 19) |= 0x100000u;
    *((_BYTE *)this[1] + 97) = 0;
    VIDMM_GLOBAL::EvictOneAllocation((VIDMM_GLOBAL *)v12, this[2], 0);
    *((_DWORD *)this[1] + 19) &= ~0x100000u;
    return 0LL;
  }
  if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress((VIDMM_PAGE_TABLE_BASE *)this, v6, v38, v43, &v42) >= 0 )
  {
    if ( (*((_BYTE *)v12 + 41448) & 0x10) != 0 )
      v30 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
    else
      v30 = (__int16)*(_DWORD *)this >> 13;
    v36 = v5;
    v31 = (void *)v43[0];
    VIDMM_GLOBAL::UpdatePageTable(
      (VIDMM_GLOBAL *)v12,
      *(_DWORD *)this & 7,
      *((struct VIDMM_PROCESS **)v6 + 11),
      0LL,
      0LL,
      0LL,
      0LL,
      0,
      v37,
      0LL,
      0LL,
      (*(_DWORD *)this >> 7) & 0x1F,
      v38[0],
      v43[0],
      v30,
      v36,
      (struct _DXGK_UPDATEPAGETABLEFLAGS)4,
      0LL);
    VIDMM_PAGE_TABLE_BASE::FreeDriverUpdateAddress((VIDMM_PAGE_TABLE_BASE *)this, v6, v32, v31, (struct _MDL *)v42);
    goto LABEL_23;
  }
  v35 = WdLogNewEntry5_WdError(v27, v26, v28, v29);
  *(_QWORD *)(v35 + 24) = 6374LL;
  WdLogEvent5_WdError(v35);
  return 3221225473LL;
}
