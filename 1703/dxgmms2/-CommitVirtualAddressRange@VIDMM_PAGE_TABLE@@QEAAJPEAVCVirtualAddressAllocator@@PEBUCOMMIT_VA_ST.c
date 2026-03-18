/*
 * XREFs of ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0050850
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0053FC0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C009BA04 (-ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABL.c)
 *     ?ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K222PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C009BBE8 (-ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_.c)
 * Callees:
 *     ?InvalidatePageTable@VIDMM_PAGE_TABLE@@QEAAEPEAVVIDMM_GLOBAL@@II@Z @ 0x1C00507B0 (-InvalidatePageTable@VIDMM_PAGE_TABLE@@QEAAEPEAVVIDMM_GLOBAL@@II@Z.c)
 *     ?UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C0050EDC (-UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDAT.c)
 *     ?ModifyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K@Z @ 0x1C0051000 (-ModifyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K@.c)
 *     ?CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0051210 (-CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C0053A90 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@1IIPEAU_DXGK_PTE@@4II1W4_DXGK_PAGETABLEUPDATEMODE@@1U_DXGK_UPDATEPAGETABLEFLAGS@@1@Z @ 0x1C00579C0 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 *     ?FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAX1@Z @ 0x1C0072F2C (-FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAX1@Z.c)
 *     ?UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@II3U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C0091E2C (-UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_.c)
 *     ?SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z @ 0x1C0099D28 (-SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE::CommitVirtualAddressRange(
        VIDMM_PAGE_TABLE *this,
        struct CVirtualAddressAllocator *a2,
        const struct COMMIT_VA_STATE *a3,
        unsigned __int64 a4,
        struct VIDMM_ALLOC *a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned __int8 a8,
        struct VIDMM_ALLOC **a9)
{
  struct VIDMM_ALLOC **v11; // r8
  unsigned __int64 v13; // r10
  struct CVirtualAddressAllocator *v14; // rdx
  unsigned int v15; // ecx
  int v16; // r12d
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rsi
  unsigned __int64 v20; // r9
  int v21; // r14d
  unsigned int v22; // ebp
  unsigned __int64 v23; // r11
  unsigned int v24; // r14d
  __int64 v25; // rax
  unsigned int v26; // eax
  int v28; // r12d
  unsigned int v29; // ebp
  unsigned int v30; // esi
  int v31; // r13d
  VIDMM_GLOBAL *v32; // rbp
  VIDMM_PAGE_TABLE_BASE *v33; // rcx
  struct VIDMM_ALLOC *v34; // r11
  struct _VIDMM_GLOBAL_ALLOC *v35; // r10
  enum _DXGK_PAGETABLEUPDATEMODE v36; // ecx
  void *v37; // r12
  __int64 v38; // rdx
  int v39; // eax
  __int64 v41; // rcx
  int v42; // r13d
  struct VIDMM_ALLOC *v43; // r13
  unsigned int v44; // eax
  __int64 v45; // rcx
  int v46; // ebp
  __int64 v47; // rcx
  int v48; // edi
  __int64 v49; // rax
  __int64 v50; // rax
  int v51; // r8d
  int v52; // eax
  __int64 v53; // r10
  __int64 v54; // r9
  unsigned int v55; // r11d
  __int64 v56; // rsi
  __int64 v57; // rcx
  __int64 v58; // rdx
  unsigned int v59; // edx
  __int64 v60; // rcx
  _QWORD *v61; // rcx
  unsigned int v62; // edx
  unsigned int v63; // r9d
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rcx
  int updated; // esi
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 **v74; // rax
  __int64 *v75; // r8
  __int64 v76; // rcx
  __int64 v77; // rdx
  __int64 **v78; // rax
  struct _DXGK_UPDATEPAGETABLEFLAGS v79; // [rsp+80h] [rbp-58h]
  struct VIDMM_GLOBAL *v80; // [rsp+90h] [rbp-48h]
  __int64 v81; // [rsp+98h] [rbp-40h]
  void *v82; // [rsp+A0h] [rbp-38h] BYREF
  void *v83; // [rsp+A8h] [rbp-30h] BYREF
  struct VIDMM_ALLOC *v85; // [rsp+100h] [rbp+28h]
  struct VIDMM_ALLOC *v86; // [rsp+100h] [rbp+28h]
  unsigned __int64 v87; // [rsp+108h] [rbp+30h]
  unsigned __int64 v88; // [rsp+110h] [rbp+38h]

  v11 = a9;
  v13 = (unsigned __int64)a5 >> 12;
  v14 = (struct CVirtualAddressAllocator *)(((unsigned __int64)a5 >> 12) + a6);
  *a9 = 0LL;
  if ( (unsigned __int64)v14 <= (unsigned __int64)a5 >> 12 )
  {
    v49 = WdLogNewEntry5_WdAssertion(this, v14);
    *(_QWORD *)(v49 + 24) = 4276LL;
    WdLogEvent5_WdAssertion(v49);
    return 3221225485LL;
  }
  v15 = *(_DWORD *)this;
  v88 = a7 >> 12;
  v16 = 0;
  v17 = (unsigned __int64)v15 >> 7;
  v18 = v15 & 7;
  v80 = (struct VIDMM_GLOBAL *)*((_QWORD *)a2 + 10);
  v19 = *((_QWORD *)v80 + 5021) + 472 * (v17 & 0x1F);
  v81 = v19;
  v20 = v13 & ~*(_QWORD *)(v19 + 48 * v18 + 120);
  v21 = *(_DWORD *)(v19 + 72);
  v22 = v21 & ((_DWORD)v14 - 1);
  v23 = v20 & ~*(_QWORD *)(v19 + 48 * v18 + 104);
  v82 = *(void **)(v19 + 48 * v18 + 128);
  v24 = v13 & v21;
  v25 = *((_QWORD *)this + 1);
  v87 = v20;
  v85 = (struct VIDMM_ALLOC *)v23;
  if ( !v25 || !*(_QWORD *)(v25 + 136) )
  {
    v42 = VIDMM_PAGE_TABLE::CommitPageTable(this, a2, v11);
    if ( v42 < 0 )
    {
      v50 = WdLogNewEntry5_WdWarning(v41, v14);
      WdLogEvent5_WdWarning(v50);
      return (unsigned int)v42;
    }
    *(_DWORD *)this &= ~0x10000u;
    v20 = v87;
    v23 = (unsigned __int64)v85;
  }
  v26 = *(_DWORD *)this;
  if ( (*(_DWORD *)this & 0x10000) == 0 )
  {
    v16 = 2;
    a8 = 1;
  }
  if ( !*((_BYTE *)a3 + 57) )
  {
    if ( *((_BYTE *)a3 + 56) )
    {
      if ( !*((_DWORD *)this + 1) )
        *(_DWORD *)this = v26 | 0x40;
    }
    else
    {
      if ( (v26 & 0x40) != 0 && *((_DWORD *)this + 1) )
      {
        if ( !*((_BYTE *)a3 + 60) )
        {
          VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(
            *((VIDMM_PROCESS **)a2 + 11),
            *(_DWORD *)(*((_QWORD *)v80 + 3) + 200LL),
            1);
          v23 = (unsigned __int64)v85;
          *((_BYTE *)a3 + 60) = 1;
        }
        v51 = 16 * *(_DWORD *)(v19 + 80) - 16;
        v52 = *(_DWORD *)(v19 + 80) - 1;
        v53 = v52;
        if ( v52 >= 0 )
        {
          v54 = 16LL * v52;
          do
          {
            if ( (*(_BYTE *)(v54 + *((_QWORD *)this + 3)) & 1) != 0 )
            {
              v55 = 0;
              v56 = 0LL;
              do
              {
                v57 = *((_QWORD *)this + 3);
                v58 = 2LL * (v55 + v51);
                ++v55;
                *(_OWORD *)(v57 + 8 * v58) = *(_OWORD *)(v57 + v54);
                *(_QWORD *)(v57 + 8 * v58 + 8) += v56++;
              }
              while ( v55 < 0x10 );
              *((_DWORD *)this + 1) += 15;
            }
            else
            {
              v59 = 0;
              do
              {
                v60 = 16LL * (v59 + v51);
                ++v59;
                v61 = (_QWORD *)(*((_QWORD *)this + 3) + v60);
                *v61 = 0LL;
                v61[1] = 0LL;
              }
              while ( v59 < 0x10 );
            }
            v51 -= 16;
            v54 -= 16LL;
            --v53;
          }
          while ( v53 >= 0 );
          v19 = v81;
          v23 = (unsigned __int64)v85;
        }
        v62 = 0;
        if ( (**(_DWORD **)(v19 + 440) & 8) != 0 )
        {
          v63 = *(_DWORD *)(v19 + 80);
          v83 = (void *)8;
          LODWORD(a9) = VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(
                          this,
                          a2,
                          0,
                          v63,
                          v23,
                          (struct _DXGK_UPDATEPAGETABLEFLAGS)8);
          if ( (int)a9 < 0 )
          {
            v66 = WdLogNewEntry5_WdAssertion(v65, v64);
            *(_QWORD *)(v66 + 24) = 4395LL;
            WdLogEvent5_WdAssertion(v66);
            return (unsigned int)a9;
          }
          v23 = (unsigned __int64)v85;
          v62 = (unsigned int)v83 & 0xFFFFFFF5 | 2;
        }
        updated = VIDMM_PAGE_TABLE::UpdatePageTable(this, a2, a3, 0LL, 0LL, 0, 0, *(_DWORD *)(v19 + 76), v23, v62);
        if ( updated < 0 )
        {
          v69 = WdLogNewEntry5_WdAssertion(v67, v14);
          *(_QWORD *)(v69 + 24) = 4413LL;
          WdLogEvent5_WdAssertion(v69);
          return (unsigned int)updated;
        }
        v20 = v87;
      }
      *(_DWORD *)this &= ~0x40u;
    }
  }
  v28 = ((unsigned __int8)v16 ^ (unsigned __int8)(*(_DWORD *)this >> 3)) & 8 ^ v16;
  if ( (*(_DWORD *)this & 0x40) != 0 )
  {
    v24 >>= 4;
    v22 >>= 4;
    v82 = (void *)(16LL * (_QWORD)v82);
    v87 = v20 & 0xFFFFFFFFFFFFFFF0uLL;
  }
  v29 = v22 + 1;
  v30 = v29 - v24;
  if ( a8 )
  {
    if ( v24 )
    {
      VIDMM_PAGE_TABLE::InvalidatePageTable(this, v80, 0, v24);
      v43 = v85;
      LODWORD(a9) = VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(
                      this,
                      a2,
                      0,
                      v24,
                      (unsigned __int64)v85,
                      (struct _DXGK_UPDATEPAGETABLEFLAGS)v28);
      if ( (int)a9 < 0 )
      {
        v70 = WdLogNewEntry5_WdAssertion(v47, v14);
        *(_QWORD *)(v70 + 24) = 4455LL;
        WdLogEvent5_WdAssertion(v70);
        return (unsigned int)a9;
      }
    }
    else
    {
      v43 = v85;
    }
    if ( (*(_DWORD *)this & 0x40) != 0 )
      v44 = *(_DWORD *)(v81 + 80);
    else
      v44 = *(_DWORD *)(v81 + 76);
    if ( v29 < v44 )
    {
      LODWORD(a9) = v44 - v29;
      VIDMM_PAGE_TABLE::InvalidatePageTable(this, v80, v29, v44 - v29);
      v46 = VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(
              this,
              a2,
              v29,
              (unsigned int)a9,
              (unsigned __int64)v43 + (_QWORD)v82 * v29,
              (struct _DXGK_UPDATEPAGETABLEFLAGS)v28);
      if ( v46 < 0 )
      {
        v71 = WdLogNewEntry5_WdAssertion(v45, v14);
        *(_QWORD *)(v71 + 24) = 4472LL;
        WdLogEvent5_WdAssertion(v71);
        return (unsigned int)v46;
      }
    }
  }
  if ( ((*((_DWORD *)a3 + 13) + 3) & 0xFFFFFFFD) != 0 )
  {
    VIDMM_PAGE_TABLE::ModifyPageTable(this, v14, a3, v24, v30, v88);
    v31 = *((_DWORD *)a3 + 12);
    v32 = (VIDMM_GLOBAL *)*((_QWORD *)a2 + 10);
    v86 = (struct VIDMM_ALLOC *)*((_QWORD *)a3 + 5);
    if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(
                v33,
                a2,
                (unsigned int *)&a9,
                (unsigned __int64 *)&v83,
                &v82) >= 0 )
    {
      v34 = 0LL;
      v35 = 0LL;
      if ( v31 == 1 )
      {
        v34 = v86;
        v35 = **(struct _VIDMM_GLOBAL_ALLOC ***)v86;
      }
      else if ( v31 == 3 )
      {
        v35 = v86;
      }
      if ( (*((_BYTE *)v32 + 40872) & 8) != 0 )
        v36 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
      else
        v36 = (int)(*(_DWORD *)this << 16) >> 29;
      v79 = (struct _DXGK_UPDATEPAGETABLEFLAGS)v28;
      v37 = v83;
      VIDMM_GLOBAL::UpdatePageTable(
        v32,
        *(_DWORD *)this & 7,
        *((struct VIDMM_PROCESS **)a2 + 11),
        *((_QWORD *)a3 + 2),
        v34,
        v35,
        a4,
        v24,
        v30,
        (struct _DXGK_PTE *)(*((_QWORD *)this + 3) + 16LL * v24),
        0LL,
        (*(_DWORD *)this >> 7) & 0x1F,
        (unsigned int)a9,
        (unsigned __int64)v83,
        v36,
        v87,
        v79,
        *((_QWORD *)a3 + 8));
      v38 = *((_QWORD *)a2 + 10);
      if ( (*(_BYTE *)(v38 + 40872) & 8) != 0 || (v39 = (int)(*(_DWORD *)this << 16) >> 29) == 0 )
      {
        VIDMM_PAGE_TABLE_BASE::FreeCpuVisibleAddress(this, (struct VIDMM_GLOBAL *)v38, v37, v82);
      }
      else if ( v39 == 1
             && *(struct CVirtualAddressAllocator **)(v38
                                                    + 8 * (((unsigned __int64)*(unsigned int *)this >> 7) & 0x1F)
                                                    + 40352) != a2 )
      {
        v74 = (__int64 **)(*((_QWORD *)this + 2) + 128LL);
        v75 = *v74;
        v76 = **v74;
        if ( (__int64 **)(*v74)[1] != v74 || *(__int64 **)(v76 + 8) != v75 )
          __fastfail(3u);
        *v74 = (__int64 *)v76;
        *(_QWORD *)(v76 + 8) = v74;
        v75[2] = *(_QWORD *)(v38 + 8LL * ((*(_DWORD *)this >> 7) & 0x1F) + 4880);
        v77 = 472LL * ((*(_DWORD *)this >> 7) & 0x1F) + *(_QWORD *)(v38 + 40168) + 456LL;
        v78 = *(__int64 ***)(v77 + 8);
        if ( *v78 != (__int64 *)v77 )
          __fastfail(3u);
        *v75 = v77;
        v75[1] = (__int64)v78;
        *v78 = v75;
        *(_QWORD *)(v77 + 8) = v75;
      }
      goto LABEL_18;
    }
    v72 = WdLogNewEntry5_WdError();
    *(_QWORD *)(v72 + 24) = 3748LL;
    WdLogEvent5_WdError(v72);
    v48 = -1073741823;
  }
  else
  {
    VIDMM_PAGE_TABLE::InvalidatePageTable(this, v80, v24, v30);
    v48 = VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(this, a2, v24, v30, v87, (struct _DXGK_UPDATEPAGETABLEFLAGS)v28);
    if ( v48 >= 0 )
    {
LABEL_18:
      *(_DWORD *)this |= 0x10000u;
      return 0LL;
    }
  }
  v73 = WdLogNewEntry5_WdError();
  *(_QWORD *)(v73 + 24) = 4512LL;
  WdLogEvent5_WdError(v73);
  return (unsigned int)v48;
}
