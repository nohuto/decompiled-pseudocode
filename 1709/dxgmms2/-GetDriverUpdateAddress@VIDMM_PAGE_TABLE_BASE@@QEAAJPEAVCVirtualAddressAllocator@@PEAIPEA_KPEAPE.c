/*
 * XREFs of ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C0057440
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0055C00 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C0056EA0 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00575C0 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C0057C60 (-UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDAT.c)
 *     ?UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@II3U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C0099548 (-UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_.c)
 * Callees:
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C0001CCC (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?GetSegmentAddressMdl@VIDMM_PAGE_TABLE_BASE@@QEAAPEAU_MDL@@XZ @ 0x1C0016460 (-GetSegmentAddressMdl@VIDMM_PAGE_TABLE_BASE@@QEAAPEAU_MDL@@XZ.c)
 *     ?GetSegmentOffsetInPages@VIDMM_PAGE_TABLE_BASE@@QEBA_KXZ @ 0x1C0016494 (-GetSegmentOffsetInPages@VIDMM_PAGE_TABLE_BASE@@QEBA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C005C7E0 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C005D1C4 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL_ALLOC@@0I0PEAU_MDL@@PEAE0@Z @ 0x1C0072574 (-MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL.c)
 *     ?GetGpuVirtualAddress@VIDMM_ALLOC@@QEAA_KI@Z @ 0x1C007315C (-GetGpuVirtualAddress@VIDMM_ALLOC@@QEAA_KI@Z.c)
 *     ?GetCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAPEAX@Z @ 0x1C0079488 (-GetCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAPEAX@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(
        VIDMM_PAGE_TABLE_BASE *this,
        struct CVirtualAddressAllocator *a2,
        unsigned int *a3,
        unsigned __int64 *a4,
        void **a5)
{
  _BYTE *v5; // rbp
  void *v6; // rsi
  __int64 v8; // r9
  __int64 v11; // rcx
  unsigned int v12; // r8d
  int v13; // eax
  void *CpuVisibleAddress; // rax
  __int64 v16; // rcx
  VIDMM_ALLOC *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rax
  unsigned int v20; // r13d
  int v21; // r12d
  unsigned __int64 *v22; // rbx
  __int64 SegmentOffsetInPages; // rax
  struct _MDL *v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  struct VIDMM_MAPPED_VA_RANGE *v27; // rbx
  __int64 v28; // r8
  _QWORD *v29; // rax
  __int64 *v30; // rcx
  __int64 v31; // rax
  __int64 **v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rax
  void *v35; // [rsp+90h] [rbp+8h] BYREF
  CVirtualAddressAllocator *v36; // [rsp+98h] [rbp+10h]

  v5 = (_BYTE *)*((_QWORD *)a2 + 10);
  v6 = 0LL;
  v35 = 0LL;
  v8 = *((_QWORD *)this + 1);
  v11 = *(_QWORD *)(v8 + 136);
  if ( (v5[40872] & 8) == 0 )
  {
    v12 = *(_DWORD *)this;
    v13 = (int)(*(_DWORD *)this << 16) >> 29;
    if ( v13 )
    {
      if ( v13 == 1 )
      {
        *a3 = 0;
        *a4 = 0LL;
        v16 = (v12 >> 7) & 0x1F;
        v36 = *(CVirtualAddressAllocator **)&v5[8 * v16 + 40352];
        if ( v36 == a2 )
        {
          v17 = (VIDMM_ALLOC *)*((_QWORD *)this + 2);
          *a3 = 0;
          *a4 = VIDMM_ALLOC::GetGpuVirtualAddress(v17, (v12 >> 7) & 0x1F);
        }
        else
        {
          v18 = 32 * v16;
          v19 = *((_QWORD *)a2 + 14);
          if ( (v12 & 7) != 0 )
            v20 = *(_DWORD *)(v18 + v19 + 24);
          else
            v20 = *(_DWORD *)(v18 + v19 + 28);
          v21 = 0;
          while ( 1 )
          {
            v22 = (unsigned __int64 *)*((_QWORD *)this + 1);
            VIDMM_PAGE_TABLE_BASE::GetSegmentAddressMdl(this);
            SegmentOffsetInPages = VIDMM_PAGE_TABLE_BASE::GetSegmentOffsetInPages(this);
            v27 = VIDMM_PAGING_PROCESS::MapScratchAreaVaRange(
                    (VIDMM_PAGING_PROCESS *)(v5 + 40320),
                    (*(_DWORD *)this >> 7) & 0x1F,
                    v22[2],
                    (struct _VIDMM_GLOBAL_ALLOC *)v22,
                    0LL,
                    v20,
                    SegmentOffsetInPages << 12,
                    v24,
                    (unsigned __int8 *)&v35,
                    0LL);
            if ( v27 )
              break;
            if ( !v21 )
            {
              VIDMM_GLOBAL::WaitForAllPagingEnginesIdle((VIDMM_GLOBAL *)v5, (*(_DWORD *)this >> 7) & 0x1F);
              VIDMM_GLOBAL::FlushScratchGpuVaRanges((VIDMM_GLOBAL *)v5, (*(_DWORD *)this >> 7) & 0x1F);
            }
            if ( (unsigned int)++v21 >= 2 )
            {
              v29 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v26, v25, v28);
              v29[3] = 270LL;
              v29[4] = 48LL;
              v29[5] = this;
              v29[6] = 1LL;
              v29[7] = 0LL;
              WdLogEvent5_WdCriticalError(v29);
              break;
            }
          }
          CVirtualAddressAllocator::FlushGpuVaTlb(
            v36,
            (*(_DWORD *)this >> 7) & 0x1F,
            *((_QWORD *)v27 + 12),
            *((_QWORD *)v27 + 13));
          v30 = (__int64 *)((char *)v27 + 24);
          v31 = *((_QWORD *)this + 2) + 128LL;
          v32 = *(__int64 ***)(*((_QWORD *)this + 2) + 136LL);
          if ( *v32 != (__int64 *)v31 )
            __fastfail(3u);
          *v30 = v31;
          *((_QWORD *)v27 + 4) = v32;
          *v32 = v30;
          *(_QWORD *)(v31 + 8) = v30;
          *a4 = *((_QWORD *)v27 + 12);
          *a3 = v20;
        }
      }
      else if ( (*(_DWORD *)(v11 + 80) & 0x1000) != 0 )
      {
        v33 = *(_QWORD *)(v8 + 104);
        *a3 = 0;
        *a4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v33 + 8) + 24LL) + 104LL))(
                *(_QWORD *)(*(_QWORD *)(v33 + 8) + 24LL),
                *(_QWORD *)(v33 + 24));
      }
      else
      {
        *a3 = *(_DWORD *)(v11 + 16) + 1;
        *a4 = *(_QWORD *)(***((_QWORD ***)this + 2) + 144LL);
      }
      goto LABEL_6;
    }
  }
  CpuVisibleAddress = VIDMM_PAGE_TABLE_BASE::GetCpuVisibleAddress(this, (struct VIDMM_GLOBAL *)v5, &v35);
  *a4 = (unsigned __int64)CpuVisibleAddress;
  *a3 = 0;
  if ( CpuVisibleAddress )
  {
    v6 = v35;
LABEL_6:
    *a5 = v6;
    return 0LL;
  }
  v34 = WdLogNewEntry5_WdError();
  *(_QWORD *)(v34 + 24) = this;
  WdLogEvent5_WdError(v34);
  return 3221225495LL;
}
