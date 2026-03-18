/*
 * XREFs of ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C0053A90
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0050850 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C0050EDC (-UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDAT.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0053FC0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C0055260 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@II3U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C0091E2C (-UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_.c)
 * Callees:
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C00026DC (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?GetSegmentAddressMdl@VIDMM_PAGE_TABLE_BASE@@QEAAPEAU_MDL@@XZ @ 0x1C0013EAC (-GetSegmentAddressMdl@VIDMM_PAGE_TABLE_BASE@@QEAAPEAU_MDL@@XZ.c)
 *     ?GetSegmentOffsetInPages@VIDMM_PAGE_TABLE_BASE@@QEBA_KXZ @ 0x1C0013EE0 (-GetSegmentOffsetInPages@VIDMM_PAGE_TABLE_BASE@@QEBA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL_ALLOC@@0I0PEAU_MDL@@PEAE0@Z @ 0x1C005043C (-MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0059548 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0059F28 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?GetGpuVirtualAddress@VIDMM_ALLOC@@QEAA_KI@Z @ 0x1C006D398 (-GetGpuVirtualAddress@VIDMM_ALLOC@@QEAA_KI@Z.c)
 *     ?GetCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAPEAX@Z @ 0x1C0072FD4 (-GetCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAPEAX@Z.c)
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
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  int v14; // eax
  void *CpuVisibleAddress; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  VIDMM_ALLOC *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned int v25; // r13d
  int v26; // r12d
  __int64 v27; // rbx
  __int64 SegmentOffsetInPages; // rax
  struct _MDL *v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  struct VIDMM_MAPPED_VA_RANGE *v32; // rbx
  __int64 v33; // r8
  _QWORD *v34; // rax
  __int64 *v35; // rcx
  __int64 v36; // rax
  __int64 **v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rax
  void *v40; // [rsp+90h] [rbp+8h] BYREF
  CVirtualAddressAllocator *v41; // [rsp+98h] [rbp+10h]

  v5 = (_BYTE *)*((_QWORD *)a2 + 10);
  v6 = 0LL;
  v40 = 0LL;
  v8 = *((_QWORD *)this + 1);
  v12 = *(_QWORD *)(v8 + 136);
  if ( (v5[40872] & 8) == 0 )
  {
    v13 = *(unsigned int *)this;
    v14 = (int)(*(_DWORD *)this << 16) >> 29;
    if ( v14 )
    {
      if ( v14 == 1 )
      {
        *a3 = 0;
        v21 = (v13 >> 7) & 0x1F;
        *a4 = 0LL;
        v41 = *(CVirtualAddressAllocator **)&v5[8 * v21 + 40352];
        if ( v41 == a2 )
        {
          v22 = (VIDMM_ALLOC *)*((_QWORD *)this + 2);
          *a3 = 0;
          *a4 = VIDMM_ALLOC::GetGpuVirtualAddress(v22, ((unsigned int)v13 >> 7) & 0x1F);
        }
        else
        {
          v23 = *((_QWORD *)a2 + 14);
          v24 = 32 * v21;
          if ( (v13 & 7) != 0 )
            v25 = *(_DWORD *)(v24 + v23 + 24);
          else
            v25 = *(_DWORD *)(v24 + v23 + 28);
          v26 = 0;
          while ( 1 )
          {
            v27 = *((_QWORD *)this + 1);
            VIDMM_PAGE_TABLE_BASE::GetSegmentAddressMdl(this);
            SegmentOffsetInPages = VIDMM_PAGE_TABLE_BASE::GetSegmentOffsetInPages(this);
            v32 = VIDMM_PAGING_PROCESS::MapScratchAreaVaRange(
                    (VIDMM_PAGING_PROCESS *)(v5 + 40320),
                    (*(_DWORD *)this >> 7) & 0x1F,
                    *(_QWORD *)(v27 + 16),
                    (struct _VIDMM_GLOBAL_ALLOC *)v27,
                    0LL,
                    v25,
                    SegmentOffsetInPages << 12,
                    v29,
                    (struct VIDMM_ALLOC *)&v40,
                    0LL);
            if ( v32 )
              break;
            if ( !v26 )
            {
              VIDMM_GLOBAL::WaitForAllPagingEnginesIdle((VIDMM_GLOBAL *)v5, (*(_DWORD *)this >> 7) & 0x1F);
              VIDMM_GLOBAL::FlushScratchGpuVaRanges((VIDMM_GLOBAL *)v5, (*(_DWORD *)this >> 7) & 0x1F);
            }
            if ( (unsigned int)++v26 >= 2 )
            {
              v34 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v31, v30, v33);
              v34[3] = 270LL;
              v34[4] = 48LL;
              v34[5] = this;
              v34[6] = 1LL;
              v34[7] = 0LL;
              WdLogEvent5_WdCriticalError(v34);
              break;
            }
          }
          CVirtualAddressAllocator::FlushGpuVaTlb(
            v41,
            (*(_DWORD *)this >> 7) & 0x1F,
            *((_QWORD *)v32 + 12),
            *((_QWORD *)v32 + 13));
          v35 = (__int64 *)((char *)v32 + 24);
          v36 = *((_QWORD *)this + 2) + 128LL;
          v37 = *(__int64 ***)(*((_QWORD *)this + 2) + 136LL);
          if ( *v37 != (__int64 *)v36 )
            __fastfail(3u);
          *v35 = v36;
          *((_QWORD *)v32 + 4) = v37;
          *v37 = v35;
          *(_QWORD *)(v36 + 8) = v35;
          *a4 = *((_QWORD *)v32 + 12);
          *a3 = v25;
        }
      }
      else if ( (*(_DWORD *)(v12 + 80) & 0x1000) != 0 )
      {
        v38 = *(_QWORD *)(v8 + 104);
        *a3 = 0;
        *a4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct CVirtualAddressAllocator *))(**(_QWORD **)(*(_QWORD *)(v38 + 8) + 24LL)
                                                                                           + 104LL))(
                *(_QWORD *)(*(_QWORD *)(v38 + 8) + 24LL),
                *(_QWORD *)(v38 + 24),
                a2);
      }
      else
      {
        *a3 = *(_DWORD *)(v12 + 16) + 1;
        *a4 = *(_QWORD *)(***((_QWORD ***)this + 2) + 144LL);
      }
      goto LABEL_6;
    }
  }
  CpuVisibleAddress = VIDMM_PAGE_TABLE_BASE::GetCpuVisibleAddress(this, (struct VIDMM_GLOBAL *)v5, &v40);
  *a4 = (unsigned __int64)CpuVisibleAddress;
  *a3 = 0;
  if ( CpuVisibleAddress )
  {
    v6 = v40;
LABEL_6:
    *a5 = v6;
    return 0LL;
  }
  v39 = WdLogNewEntry5_WdError(v18, v17, v19, v20);
  *(_QWORD *)(v39 + 24) = this;
  WdLogEvent5_WdError(v39);
  return 3221225495LL;
}
