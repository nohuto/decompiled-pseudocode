/*
 * XREFs of ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C005BFC0
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0058E60 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C00594C0 (-UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDAT.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005C4F0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C005D8B0 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@II3U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C009E6BC (-UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_.c)
 * Callees:
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C0004FC8 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     ?GetSegmentAddressMdl@VIDMM_PAGE_TABLE_BASE@@QEAAPEAU_MDL@@XZ @ 0x1C00257E4 (-GetSegmentAddressMdl@VIDMM_PAGE_TABLE_BASE@@QEAAPEAU_MDL@@XZ.c)
 *     ?GetSegmentOffsetInPages@VIDMM_PAGE_TABLE_BASE@@QEBA_KXZ @ 0x1C002581C (-GetSegmentOffsetInPages@VIDMM_PAGE_TABLE_BASE@@QEBA_KXZ.c)
 *     ?GetCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAPEAX@Z @ 0x1C00530BC (-GetCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAPEAX@Z.c)
 *     ?GetGpuVirtualAddress@VIDMM_ALLOC@@QEAA_KI@Z @ 0x1C0056744 (-GetGpuVirtualAddress@VIDMM_ALLOC@@QEAA_KI@Z.c)
 *     ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL_ALLOC@@0I0PEAU_MDL@@PEAE0@Z @ 0x1C0058200 (-MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0060F70 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0079BF4 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(
        VIDMM_PAGE_TABLE_BASE *this,
        struct CVirtualAddressAllocator *a2,
        unsigned int *a3,
        unsigned __int64 *a4,
        void **a5)
{
  _BYTE *v5; // rbp
  void *v6; // rdi
  __int64 v7; // r10
  __int64 v11; // r11
  unsigned int v12; // ecx
  int v13; // eax
  PVOID CpuVisibleAddress; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // r8d
  __int64 v21; // rax
  VIDMM_ALLOC *v22; // rcx
  __int64 GpuVirtualAddress; // rax
  __int64 *v24; // r9
  __int64 v25; // rax
  unsigned int v26; // r13d
  int v27; // r12d
  __int64 *v28; // rbx
  __int64 SegmentOffsetInPages; // rax
  struct _MDL *v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  struct VIDMM_MAPPED_VA_RANGE *v33; // rbx
  __int64 v34; // r8
  _QWORD *v35; // rax
  __int64 *v36; // rcx
  __int64 v37; // rax
  __int64 **v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rax
  void *v41; // [rsp+90h] [rbp+8h] BYREF
  CVirtualAddressAllocator *v42; // [rsp+98h] [rbp+10h]

  v5 = (_BYTE *)*((_QWORD *)a2 + 10);
  v6 = 0LL;
  v7 = *((_QWORD *)this + 1);
  v41 = 0LL;
  v11 = *(_QWORD *)(v7 + 136);
  if ( (v5[41448] & 0x10) == 0 )
  {
    v12 = *(_DWORD *)this;
    v13 = (__int16)v12 >> 13;
    if ( v13 )
    {
      if ( v13 == 1 )
      {
        *a3 = 0;
        v20 = v12;
        *a4 = 0LL;
        v21 = (v12 >> 7) & 0x1F;
        v42 = *(CVirtualAddressAllocator **)&v5[8 * v21 + 40928];
        if ( v42 == a2 )
        {
          v22 = (VIDMM_ALLOC *)*((_QWORD *)this + 2);
          *a3 = 0;
          GpuVirtualAddress = VIDMM_ALLOC::GetGpuVirtualAddress(v22, (v20 >> 7) & 0x1F);
          *v24 = GpuVirtualAddress;
        }
        else
        {
          v25 = *((_QWORD *)a2 + 14) + 32 * v21;
          if ( (v12 & 7) != 0 )
            v26 = *(_DWORD *)(v25 + 24);
          else
            v26 = *(_DWORD *)(v25 + 28);
          v27 = 0;
          while ( 1 )
          {
            v28 = (__int64 *)*((_QWORD *)this + 1);
            VIDMM_PAGE_TABLE_BASE::GetSegmentAddressMdl(this);
            SegmentOffsetInPages = VIDMM_PAGE_TABLE_BASE::GetSegmentOffsetInPages(this);
            v33 = VIDMM_PAGING_PROCESS::MapScratchAreaVaRange(
                    (VIDMM_PAGING_PROCESS *)(v5 + 40896),
                    (*(_DWORD *)this >> 7) & 0x1F,
                    v28[2],
                    (struct _VIDMM_GLOBAL_ALLOC *)v28,
                    0LL,
                    v26,
                    SegmentOffsetInPages << 12,
                    v30,
                    (struct VIDMM_ALLOC *)&v41,
                    0LL);
            if ( v33 )
              break;
            if ( !v27 )
            {
              VIDMM_GLOBAL::WaitForAllPagingEnginesIdle((VIDMM_GLOBAL *)v5, (*(_DWORD *)this >> 7) & 0x1F);
              VIDMM_GLOBAL::FlushScratchGpuVaRanges((VIDMM_GLOBAL *)v5, (*(_DWORD *)this >> 7) & 0x1F);
            }
            if ( (unsigned int)++v27 >= 2 )
            {
              v35 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v32, v31, v34);
              v35[3] = 270LL;
              v35[4] = 48LL;
              v35[5] = this;
              v35[6] = 1LL;
              v35[7] = 0LL;
              WdLogEvent5_WdCriticalError(v35);
              break;
            }
          }
          CVirtualAddressAllocator::FlushGpuVaTlb(
            v42,
            (*(_DWORD *)this >> 7) & 0x1F,
            *((_QWORD *)v33 + 12),
            *((_QWORD *)v33 + 13));
          v36 = (__int64 *)((char *)v33 + 24);
          v37 = *((_QWORD *)this + 2) + 128LL;
          v38 = *(__int64 ***)(*((_QWORD *)this + 2) + 136LL);
          if ( *v38 != (__int64 *)v37 )
            __fastfail(3u);
          *v36 = v37;
          *((_QWORD *)v33 + 4) = v38;
          *v38 = v36;
          *(_QWORD *)(v37 + 8) = v36;
          *a4 = *((_QWORD *)v33 + 12);
          *a3 = v26;
        }
      }
      else if ( (*(_DWORD *)(v11 + 80) & 0x1000) != 0 )
      {
        v39 = *(_QWORD *)(v7 + 104);
        *a3 = 0;
        *a4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v39 + 8) + 24LL) + 104LL))(
                *(_QWORD *)(*(_QWORD *)(v39 + 8) + 24LL),
                *(_QWORD *)(v39 + 24));
      }
      else
      {
        *a3 = *(_DWORD *)(v11 + 16) + 1;
        *a4 = *(_QWORD *)(***((_QWORD ***)this + 2) + 144LL);
      }
      goto LABEL_6;
    }
  }
  CpuVisibleAddress = VIDMM_PAGE_TABLE_BASE::GetCpuVisibleAddress(this, (struct VIDMM_GLOBAL *)v5, (PMDL *)&v41);
  *a4 = (unsigned __int64)CpuVisibleAddress;
  *a3 = 0;
  if ( CpuVisibleAddress )
  {
    v6 = v41;
LABEL_6:
    *a5 = v6;
    return 0LL;
  }
  v40 = WdLogNewEntry5_WdError(v17, v16, v18, v19);
  *(_QWORD *)(v40 + 24) = this;
  WdLogEvent5_WdError(v40);
  return 3221225495LL;
}
