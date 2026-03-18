/*
 * XREFs of ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00575C0
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0055C00 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A3CAC (-ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABL.c)
 *     ?ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K222PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A3E9C (-ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_.c)
 * Callees:
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C0057440 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 *     ?InvalidatePageTable@VIDMM_PAGE_TABLE@@QEAAEPEAVVIDMM_GLOBAL@@II@Z @ 0x1C0057530 (-InvalidatePageTable@VIDMM_PAGE_TABLE@@QEAAEPEAVVIDMM_GLOBAL@@II@Z.c)
 *     ?UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C0057C60 (-UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDAT.c)
 *     ?ModifyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K@Z @ 0x1C0057D80 (-ModifyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K@.c)
 *     ?CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0057F84 (-CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@1IIPEAU_DXGK_PTE@@4II1W4_DXGK_PAGETABLEUPDATEMODE@@1U_DXGK_UPDATEPAGETABLEFLAGS@@1@Z @ 0x1C005A9B0 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 *     ?FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAX1@Z @ 0x1C00793E0 (-FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAX1@Z.c)
 *     ?UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@II3U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C0099548 (-UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_.c)
 *     ?SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z @ 0x1C00A2130 (-SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE::CommitVirtualAddressRange(
        VIDMM_PAGE_TABLE *this,
        struct CVirtualAddressAllocator *a2,
        const struct COMMIT_VA_STATE *a3,
        unsigned __int64 a4,
        struct VIDMM_ALLOC *a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        char a8,
        struct VIDMM_ALLOC **a9)
{
  struct VIDMM_ALLOC **v11; // r8
  unsigned __int64 v13; // r10
  struct CVirtualAddressAllocator *v14; // rdx
  unsigned int v15; // ecx
  int v16; // ebp
  unsigned int *v17; // rbx
  __int64 v18; // r9
  __int64 v19; // r11
  unsigned __int64 v20; // rcx
  unsigned int v21; // r15d
  unsigned int v22; // r14d
  __int64 v23; // rax
  struct VIDMM_ALLOC *v24; // r9
  unsigned int v25; // r15d
  unsigned int v26; // eax
  int v28; // eax
  unsigned int v29; // ebx
  unsigned int v30; // r14d
  unsigned int v31; // ebp
  int v32; // r12d
  VIDMM_GLOBAL *v33; // r14
  VIDMM_PAGE_TABLE_BASE *v34; // rcx
  struct VIDMM_ALLOC *v35; // r11
  struct _VIDMM_GLOBAL_ALLOC *v36; // r10
  enum _DXGK_PAGETABLEUPDATEMODE v37; // ecx
  void *v38; // rbx
  __int64 v39; // rdx
  int v40; // eax
  __int64 v42; // rcx
  int v43; // r12d
  struct VIDMM_ALLOC *v44; // r12
  unsigned int v45; // eax
  __int64 v46; // rcx
  int v47; // r14d
  __int64 v48; // rcx
  int v49; // ebx
  __int64 v50; // rax
  __int64 v51; // rax
  int v52; // r8d
  int v53; // eax
  __int64 v54; // r11
  __int64 v55; // r10
  unsigned int v56; // r9d
  __int64 v57; // rbx
  __int64 v58; // rcx
  __int64 v59; // rdx
  unsigned int v60; // edx
  __int64 v61; // rcx
  _QWORD *v62; // rcx
  unsigned int v63; // edx
  unsigned int v64; // r9d
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rcx
  int updated; // ebx
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 *v76; // r8
  __int64 v77; // rcx
  __int64 v78; // rdx
  __int64 **v79; // rax
  void **v80; // [rsp+20h] [rbp-B8h]
  struct _DXGK_UPDATEPAGETABLEFLAGS v81; // [rsp+80h] [rbp-58h]
  __int64 v82; // [rsp+90h] [rbp-48h]
  struct VIDMM_GLOBAL *v83; // [rsp+98h] [rbp-40h]
  void *v84; // [rsp+A0h] [rbp-38h] BYREF
  void *v85; // [rsp+A8h] [rbp-30h] BYREF
  struct VIDMM_ALLOC *v87; // [rsp+100h] [rbp+28h]
  struct VIDMM_ALLOC *v88; // [rsp+100h] [rbp+28h]
  unsigned __int64 v89; // [rsp+108h] [rbp+30h]
  unsigned __int64 v90; // [rsp+110h] [rbp+38h]

  v11 = a9;
  v13 = (unsigned __int64)a5 >> 12;
  v14 = (struct CVirtualAddressAllocator *)(((unsigned __int64)a5 >> 12) + a6);
  *a9 = 0LL;
  if ( (unsigned __int64)v14 <= (unsigned __int64)a5 >> 12 )
  {
    v50 = WdLogNewEntry5_WdAssertion(this, v14);
    *(_QWORD *)(v50 + 24) = 4277LL;
    WdLogEvent5_WdAssertion(v50);
    return 3221225485LL;
  }
  v15 = *(_DWORD *)this;
  v90 = a7 >> 12;
  v16 = 0;
  v83 = (struct VIDMM_GLOBAL *)*((_QWORD *)a2 + 10);
  v17 = (unsigned int *)(*((_QWORD *)v83 + 5021) + 1552LL * ((v15 >> 7) & 0x1F));
  v84 = v17;
  v18 = *(_QWORD *)&v17[12 * (v15 & 7) + 26];
  v19 = *(_QWORD *)&v17[12 * (v15 & 7) + 32];
  v20 = v13 & ~*(_QWORD *)&v17[12 * (v15 & 7) + 30];
  v21 = v17[18];
  v89 = v20;
  v22 = v21 & ((_DWORD)v14 - 1);
  v82 = v19;
  v23 = *((_QWORD *)this + 1);
  v24 = (struct VIDMM_ALLOC *)(v20 & ~v18);
  v25 = v13 & v21;
  v87 = v24;
  if ( !v23 || !*(_QWORD *)(v23 + 136) )
  {
    v43 = VIDMM_PAGE_TABLE::CommitPageTable(this, a2, v11);
    if ( v43 < 0 )
    {
      v51 = WdLogNewEntry5_WdWarning(v42);
      WdLogEvent5_WdWarning(v51);
      return (unsigned int)v43;
    }
    *(_DWORD *)this &= ~0x10000u;
    v20 = v89;
    v24 = v87;
    v19 = v82;
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
            *(_DWORD *)(*((_QWORD *)v83 + 3) + 200LL),
            1);
          v24 = v87;
          *((_BYTE *)a3 + 60) = 1;
        }
        v52 = 16 * v17[20] - 16;
        v53 = v17[20] - 1;
        v54 = v53;
        if ( v53 >= 0 )
        {
          v55 = 16LL * v53;
          do
          {
            if ( (*(_BYTE *)(v55 + *((_QWORD *)this + 3)) & 1) != 0 )
            {
              v56 = 0;
              v57 = 0LL;
              do
              {
                v58 = *((_QWORD *)this + 3);
                v59 = 2LL * (v56 + v52);
                ++v56;
                *(_OWORD *)(v58 + 8 * v59) = *(_OWORD *)(v58 + v55);
                *(_QWORD *)(v58 + 8 * v59 + 8) += v57++;
              }
              while ( v56 < 0x10 );
              *((_DWORD *)this + 1) += 15;
            }
            else
            {
              v60 = 0;
              do
              {
                v61 = 16LL * (v60 + v52);
                ++v60;
                v62 = (_QWORD *)(*((_QWORD *)this + 3) + v61);
                *v62 = 0LL;
                v62[1] = 0LL;
              }
              while ( v60 < 0x10 );
            }
            v52 -= 16;
            v55 -= 16LL;
            --v54;
          }
          while ( v54 >= 0 );
          v17 = (unsigned int *)v84;
          v24 = v87;
        }
        v63 = 0;
        if ( (**((_DWORD **)v17 + 55) & 8) != 0 )
        {
          v80 = (void **)v24;
          v64 = v17[20];
          v85 = (void *)8;
          LODWORD(a9) = VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(
                          this,
                          a2,
                          0,
                          v64,
                          (unsigned __int64)v80,
                          (struct _DXGK_UPDATEPAGETABLEFLAGS)8);
          if ( (int)a9 < 0 )
          {
            v67 = WdLogNewEntry5_WdAssertion(v66, v65);
            *(_QWORD *)(v67 + 24) = 4396LL;
            WdLogEvent5_WdAssertion(v67);
            return (unsigned int)a9;
          }
          v24 = v87;
          v63 = (unsigned int)v85 & 0xFFFFFFF5 | 2;
        }
        updated = VIDMM_PAGE_TABLE::UpdatePageTable(this, a2, a3, 0LL, 0LL, 0, 0, v17[19], v24, v63);
        if ( updated < 0 )
        {
          v70 = WdLogNewEntry5_WdAssertion(v68, v14);
          *(_QWORD *)(v70 + 24) = 4414LL;
          WdLogEvent5_WdAssertion(v70);
          return (unsigned int)updated;
        }
        v20 = v89;
        v19 = v82;
      }
      *(_DWORD *)this &= ~0x40u;
    }
  }
  v28 = (*(_DWORD *)this >> 6) & 1;
  v29 = v16 & 0xFFFFFFF7 | (8 * v28);
  if ( v28 )
  {
    v25 >>= 4;
    v22 >>= 4;
    v82 = 16 * v19;
    v89 = v20 & 0xFFFFFFFFFFFFFFF0uLL;
  }
  v30 = v22 + 1;
  v31 = v30 - v25;
  if ( a8 )
  {
    if ( v25 )
    {
      VIDMM_PAGE_TABLE::InvalidatePageTable(this, v83, 0, v25);
      v44 = v87;
      LODWORD(a9) = VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(
                      this,
                      a2,
                      0,
                      v25,
                      (unsigned __int64)v87,
                      (struct _DXGK_UPDATEPAGETABLEFLAGS)v29);
      if ( (int)a9 < 0 )
      {
        v71 = WdLogNewEntry5_WdAssertion(v48, v14);
        *(_QWORD *)(v71 + 24) = 4456LL;
        WdLogEvent5_WdAssertion(v71);
        return (unsigned int)a9;
      }
    }
    else
    {
      v44 = v87;
    }
    if ( (*(_DWORD *)this & 0x40) != 0 )
      v45 = *((_DWORD *)v84 + 20);
    else
      v45 = *((_DWORD *)v84 + 19);
    if ( v30 < v45 )
    {
      LODWORD(a9) = v45 - v30;
      VIDMM_PAGE_TABLE::InvalidatePageTable(this, v83, v30, v45 - v30);
      v47 = VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(
              this,
              a2,
              v30,
              (unsigned int)a9,
              (unsigned __int64)v44 + v82 * v30,
              (struct _DXGK_UPDATEPAGETABLEFLAGS)v29);
      if ( v47 < 0 )
      {
        v72 = WdLogNewEntry5_WdAssertion(v46, v14);
        *(_QWORD *)(v72 + 24) = 4473LL;
        WdLogEvent5_WdAssertion(v72);
        return (unsigned int)v47;
      }
    }
  }
  if ( ((*((_DWORD *)a3 + 13) + 3) & 0xFFFFFFFD) != 0 )
  {
    VIDMM_PAGE_TABLE::ModifyPageTable(this, v14, a3, v25, v31, v90);
    v32 = *((_DWORD *)a3 + 12);
    v33 = (VIDMM_GLOBAL *)*((_QWORD *)a2 + 10);
    v88 = (struct VIDMM_ALLOC *)*((_QWORD *)a3 + 5);
    if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(
                v34,
                a2,
                (unsigned int *)&a9,
                (unsigned __int64 *)&v85,
                &v84) >= 0 )
    {
      v35 = 0LL;
      v36 = 0LL;
      if ( v32 == 1 )
      {
        v35 = v88;
        v36 = **(struct _VIDMM_GLOBAL_ALLOC ***)v88;
      }
      else if ( v32 == 3 )
      {
        v36 = v88;
      }
      if ( (*((_BYTE *)v33 + 40872) & 8) != 0 )
        v37 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
      else
        v37 = (int)(*(_DWORD *)this << 16) >> 29;
      v81 = (struct _DXGK_UPDATEPAGETABLEFLAGS)v29;
      v38 = v85;
      VIDMM_GLOBAL::UpdatePageTable(
        v33,
        *(_DWORD *)this & 7,
        *((struct VIDMM_PROCESS **)a2 + 11),
        *((_QWORD *)a3 + 2),
        v35,
        v36,
        a4,
        v25,
        v31,
        (struct _DXGK_PTE *)(*((_QWORD *)this + 3) + 16LL * v25),
        0LL,
        (*(_DWORD *)this >> 7) & 0x1F,
        (unsigned int)a9,
        (unsigned __int64)v85,
        v37,
        v89,
        v81,
        *((_QWORD *)a3 + 8));
      v39 = *((_QWORD *)a2 + 10);
      if ( (*(_BYTE *)(v39 + 40872) & 8) != 0 || (v40 = (int)(*(_DWORD *)this << 16) >> 29) == 0 )
      {
        VIDMM_PAGE_TABLE_BASE::FreeCpuVisibleAddress(this, (struct VIDMM_GLOBAL *)v39, v38, v84);
      }
      else if ( v40 == 1
             && *(struct CVirtualAddressAllocator **)(v39
                                                    + 8 * (((unsigned __int64)*(unsigned int *)this >> 7) & 0x1F)
                                                    + 40352) != a2 )
      {
        v75 = *((_QWORD *)this + 2) + 128LL;
        v76 = *(__int64 **)v75;
        if ( *(_QWORD *)(*(_QWORD *)v75 + 8LL) != v75 || (v77 = *v76, *(__int64 **)(*v76 + 8) != v76) )
          __fastfail(3u);
        *(_QWORD *)v75 = v77;
        *(_QWORD *)(v77 + 8) = v75;
        v76[2] = *(_QWORD *)(v39 + 8LL * ((*(_DWORD *)this >> 7) & 0x1F) + 4880);
        v78 = 1552LL * ((*(_DWORD *)this >> 7) & 0x1F) + *(_QWORD *)(v39 + 40168) + 456LL;
        v79 = *(__int64 ***)(v78 + 8);
        if ( *v79 != (__int64 *)v78 )
          __fastfail(3u);
        *v76 = v78;
        v76[1] = (__int64)v79;
        *v79 = v76;
        *(_QWORD *)(v78 + 8) = v76;
      }
      goto LABEL_18;
    }
    v73 = WdLogNewEntry5_WdError();
    *(_QWORD *)(v73 + 24) = 3748LL;
    WdLogEvent5_WdError(v73);
    v49 = -1073741823;
  }
  else
  {
    VIDMM_PAGE_TABLE::InvalidatePageTable(this, v83, v25, v31);
    v49 = VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(this, a2, v25, v31, v89, (struct _DXGK_UPDATEPAGETABLEFLAGS)v29);
    if ( v49 >= 0 )
    {
LABEL_18:
      *(_DWORD *)this |= 0x10000u;
      return 0LL;
    }
  }
  v74 = WdLogNewEntry5_WdError();
  *(_QWORD *)(v74 + 24) = 4513LL;
  WdLogEvent5_WdError(v74);
  return (unsigned int)v49;
}
