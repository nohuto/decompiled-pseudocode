/*
 * XREFs of ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0058E60
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005C4F0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00AADA4 (-ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABL.c)
 *     ?ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K222PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00AAF98 (-ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_.c)
 * Callees:
 *     ?FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAX1@Z @ 0x1C005302C (-FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAX1@Z.c)
 *     ?InvalidatePageTable@VIDMM_PAGE_TABLE@@QEAAEPEAVVIDMM_GLOBAL@@II@Z @ 0x1C0058DF0 (-InvalidatePageTable@VIDMM_PAGE_TABLE@@QEAAEPEAVVIDMM_GLOBAL@@II@Z.c)
 *     ?UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C00594C0 (-UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDAT.c)
 *     ?ModifyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K@Z @ 0x1C00595E0 (-ModifyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K@.c)
 *     ?CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00597F4 (-CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C005BFC0 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@1IIPEAU_DXGK_PTE@@4II1W4_DXGK_PAGETABLEUPDATEMODE@@1U_DXGK_UPDATEPAGETABLEFLAGS@@1@Z @ 0x1C005F2A0 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 *     ?UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@II3U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C009E6BC (-UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_.c)
 *     ?SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z @ 0x1C00A8FC4 (-SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE::CommitVirtualAddressRange(
        VIDMM_PAGE_TABLE *this,
        struct VIDMM_GLOBAL **a2,
        const struct COMMIT_VA_STATE *a3,
        unsigned __int64 a4,
        struct VIDMM_ALLOC *a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned __int8 a8,
        struct VIDMM_ALLOC **a9)
{
  struct VIDMM_ALLOC **v10; // r11
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // r8
  struct VIDMM_GLOBAL *v15; // r9
  unsigned int v16; // edx
  char v17; // cl
  int v18; // ebp
  unsigned int *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // r9
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // r9
  unsigned int v24; // r15d
  unsigned int v25; // r14d
  __int64 v26; // rax
  unsigned int v27; // r15d
  struct CVirtualAddressAllocator *v29; // rdx
  struct _DXGK_UPDATEPAGETABLEFLAGS v30; // ebx
  unsigned int v31; // r14d
  unsigned int v32; // ebp
  int v33; // r12d
  VIDMM_GLOBAL *v34; // r14
  VIDMM_PAGE_TABLE_BASE *v35; // rcx
  struct VIDMM_ALLOC *v36; // r11
  struct _VIDMM_GLOBAL_ALLOC *v37; // r10
  enum _DXGK_PAGETABLEUPDATEMODE v38; // ecx
  void *v39; // rbx
  struct VIDMM_GLOBAL *v40; // rdx
  int v41; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  int v45; // r12d
  unsigned int v46; // r12d
  unsigned int v47; // r12d
  __int64 v48; // rcx
  int v49; // r14d
  __int64 v50; // rcx
  int v51; // r12d
  __int64 v52; // rax
  __int64 v53; // rax
  int v54; // r8d
  int v55; // eax
  __int64 v56; // r11
  __int64 v57; // r10
  unsigned int v58; // r9d
  __int64 v59; // rbx
  __int64 v60; // rcx
  __int64 v61; // rdx
  unsigned int v62; // edx
  __int64 v63; // rcx
  _QWORD *v64; // rcx
  int v65; // edx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  int updated; // ebx
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  int v76; // ebx
  __int64 v77; // rax
  __int64 *v78; // r8
  __int64 v79; // rcx
  __int64 v80; // rdx
  __int64 **v81; // rax
  __int64 v82; // rax
  struct _DXGK_UPDATEPAGETABLEFLAGS v83; // [rsp+80h] [rbp-58h]
  struct VIDMM_GLOBAL *v84; // [rsp+90h] [rbp-48h]
  void *v85; // [rsp+98h] [rbp-40h] BYREF
  void *v86; // [rsp+A0h] [rbp-38h] BYREF
  struct VIDMM_ALLOC *v88; // [rsp+100h] [rbp+28h]
  struct VIDMM_ALLOC *v89; // [rsp+100h] [rbp+28h]
  unsigned __int64 v90; // [rsp+108h] [rbp+30h]
  unsigned __int64 v91; // [rsp+110h] [rbp+38h]

  v10 = a9;
  v13 = (unsigned __int64)a5 >> 12;
  v14 = ((unsigned __int64)a5 >> 12) + a6;
  *a9 = 0LL;
  if ( v14 <= (unsigned __int64)a5 >> 12 )
  {
    v52 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v52 + 24) = 4288LL;
    WdLogEvent5_WdAssertion(v52);
    return 3221225485LL;
  }
  v15 = a2[10];
  v16 = *(_DWORD *)this;
  v91 = a7 >> 12;
  v17 = *(_DWORD *)this;
  v18 = 0;
  v84 = v15;
  v19 = (unsigned int *)(*((_QWORD *)v15 + 5090) + 1560LL * ((v16 >> 7) & 0x1F));
  v20 = 6LL * (v17 & 7);
  v85 = v19;
  v21 = *(_QWORD *)&v19[12 * (v17 & 7) + 26];
  v22 = v13 & ~*(_QWORD *)&v19[12 * (v17 & 7) + 30];
  v86 = *(void **)&v19[2 * v20 + 32];
  v23 = v22 & ~v21;
  v24 = v19[18];
  v90 = v22;
  v25 = v24 & (v14 - 1);
  v88 = (struct VIDMM_ALLOC *)v23;
  v26 = *((_QWORD *)this + 1);
  v27 = v13 & v24;
  if ( !v26 || !*(_QWORD *)(v26 + 136) )
  {
    v45 = VIDMM_PAGE_TABLE::CommitPageTable(this, (struct CVirtualAddressAllocator *)a2, v10);
    if ( v45 < 0 )
    {
      v53 = WdLogNewEntry5_WdWarning(v44, v43);
      WdLogEvent5_WdWarning(v53);
      return (unsigned int)v45;
    }
    *(_DWORD *)this &= ~0x10000u;
    v16 = *(_DWORD *)this;
    v22 = v90;
    v23 = (unsigned __int64)v88;
  }
  if ( (v16 & 0x10000) == 0 )
  {
    v18 = 2;
    a8 = 1;
  }
  if ( !*((_BYTE *)a3 + 57) )
  {
    if ( *((_BYTE *)a3 + 56) )
    {
      if ( !*((_DWORD *)this + 1) )
      {
        v16 |= 0x40u;
        *(_DWORD *)this = v16;
      }
    }
    else
    {
      if ( (v16 & 0x40) != 0 && *((_DWORD *)this + 1) )
      {
        if ( !*((_BYTE *)a3 + 60) )
        {
          VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(a2[11], *(_DWORD *)(*((_QWORD *)v84 + 3) + 200LL), 1);
          v23 = (unsigned __int64)v88;
          *((_BYTE *)a3 + 60) = 1;
        }
        v54 = 16 * v19[20] - 16;
        v55 = v19[20] - 1;
        v56 = v55;
        if ( v55 >= 0 )
        {
          v57 = 16LL * v55;
          do
          {
            if ( (*(_BYTE *)(v57 + *((_QWORD *)this + 3)) & 1) != 0 )
            {
              v58 = 0;
              v59 = 0LL;
              do
              {
                v60 = *((_QWORD *)this + 3);
                v61 = 2LL * (v58 + v54);
                ++v58;
                *(_OWORD *)(v60 + 8 * v61) = *(_OWORD *)(v60 + v57);
                *(_QWORD *)(v60 + 8 * v61 + 8) += v59++;
              }
              while ( v58 < 0x10 );
              *((_DWORD *)this + 1) += 15;
            }
            else
            {
              v62 = 0;
              do
              {
                v63 = 16LL * (v62 + v54);
                ++v62;
                v64 = (_QWORD *)(*((_QWORD *)this + 3) + v63);
                *v64 = 0LL;
                v64[1] = 0LL;
              }
              while ( v62 < 0x10 );
            }
            v54 -= 16;
            v57 -= 16LL;
            --v56;
          }
          while ( v56 >= 0 );
          v19 = (unsigned int *)v85;
          v23 = (unsigned __int64)v88;
        }
        v65 = 0;
        if ( (**((_DWORD **)v19 + 55) & 8) != 0 )
        {
          LODWORD(a9) = VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(
                          this,
                          (struct CVirtualAddressAllocator *)a2,
                          0,
                          v19[20],
                          v23,
                          (struct _DXGK_UPDATEPAGETABLEFLAGS)8);
          if ( (int)a9 < 0 )
          {
            v68 = WdLogNewEntry5_WdAssertion(v67, v66);
            *(_QWORD *)(v68 + 24) = 4407LL;
            WdLogEvent5_WdAssertion(v68);
            return (unsigned int)a9;
          }
          v23 = (unsigned __int64)v88;
          v65 = 2;
        }
        updated = VIDMM_PAGE_TABLE::UpdatePageTable(this, a2, a3, 0LL, 0LL, 0, 0, v19[19], v23, v65);
        if ( updated < 0 )
        {
          v72 = WdLogNewEntry5_WdAssertion(v70, v69);
          *(_QWORD *)(v72 + 24) = 4425LL;
          WdLogEvent5_WdAssertion(v72);
          return (unsigned int)updated;
        }
        v22 = v90;
      }
      *(_DWORD *)this &= ~0x40u;
      v16 = *(_DWORD *)this;
    }
  }
  v29 = (struct CVirtualAddressAllocator *)((v16 >> 6) & 1);
  v30 = (struct _DXGK_UPDATEPAGETABLEFLAGS)(v18 & 0xFFFFFFF7 | (8 * (_DWORD)v29));
  if ( (_DWORD)v29 )
  {
    v27 >>= 4;
    v25 >>= 4;
    v86 = (void *)(16LL * (_QWORD)v86);
    v90 = v22 & 0xFFFFFFFFFFFFFFF0uLL;
  }
  v31 = v25 + 1;
  v32 = v31 - v27;
  if ( a8 )
  {
    if ( v27 )
    {
      VIDMM_PAGE_TABLE::InvalidatePageTable(this, v84, 0, v27);
      v51 = VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(
              this,
              (struct CVirtualAddressAllocator *)a2,
              0,
              v27,
              (unsigned __int64)v88,
              v30);
      if ( v51 < 0 )
      {
        v73 = WdLogNewEntry5_WdAssertion(v50, v29);
        *(_QWORD *)(v73 + 24) = 4467LL;
        WdLogEvent5_WdAssertion(v73);
        return (unsigned int)v51;
      }
    }
    if ( (*(_DWORD *)this & 0x40) != 0 )
      v46 = *((_DWORD *)v85 + 20);
    else
      v46 = *((_DWORD *)v85 + 19);
    if ( v31 < v46 )
    {
      v47 = v46 - v31;
      VIDMM_PAGE_TABLE::InvalidatePageTable(this, v84, v31, v47);
      v49 = VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(
              this,
              (struct CVirtualAddressAllocator *)a2,
              v31,
              v47,
              (unsigned __int64)v88 + (_QWORD)v86 * v31,
              v30);
      if ( v49 < 0 )
      {
        v74 = WdLogNewEntry5_WdAssertion(v48, v29);
        *(_QWORD *)(v74 + 24) = 4484LL;
        WdLogEvent5_WdAssertion(v74);
        return (unsigned int)v49;
      }
    }
  }
  if ( ((*((_DWORD *)a3 + 13) + 3) & 0xFFFFFFFD) != 0 )
  {
    VIDMM_PAGE_TABLE::ModifyPageTable(this, v29, a3, v27, v32, v91);
    v33 = *((_DWORD *)a3 + 12);
    v34 = a2[10];
    v89 = (struct VIDMM_ALLOC *)*((_QWORD *)a3 + 5);
    if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(
                v35,
                (struct CVirtualAddressAllocator *)a2,
                (unsigned int *)&a9,
                (unsigned __int64 *)&v86,
                &v85) >= 0 )
    {
      v36 = 0LL;
      v37 = 0LL;
      if ( v33 == 1 )
      {
        v36 = v89;
        v37 = **(struct _VIDMM_GLOBAL_ALLOC ***)v89;
      }
      else if ( v33 == 3 )
      {
        v37 = v89;
      }
      if ( (*((_BYTE *)v34 + 41448) & 0x10) != 0 )
        v38 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
      else
        v38 = (__int16)*(_DWORD *)this >> 13;
      v83 = v30;
      v39 = v86;
      VIDMM_GLOBAL::UpdatePageTable(
        v34,
        *(_DWORD *)this & 7,
        a2[11],
        *((_QWORD *)a3 + 2),
        v36,
        v37,
        a4,
        v27,
        v32,
        (struct _DXGK_PTE *)(*((_QWORD *)this + 3) + 16LL * v27),
        0LL,
        (*(_DWORD *)this >> 7) & 0x1F,
        (unsigned int)a9,
        (unsigned __int64)v86,
        v38,
        v90,
        v83,
        *((_QWORD *)a3 + 8));
      v40 = a2[10];
      if ( (*((_BYTE *)v40 + 41448) & 0x10) != 0 || (v41 = (int)(*(_DWORD *)this << 16) >> 29) == 0 )
      {
        VIDMM_PAGE_TABLE_BASE::FreeCpuVisibleAddress(this, v40, v39, (struct _MDL *)v85);
      }
      else if ( v41 == 1
             && *((struct VIDMM_GLOBAL ***)v40 + (((unsigned __int64)*(unsigned int *)this >> 7) & 0x1F) + 5116) != a2 )
      {
        v77 = *((_QWORD *)this + 2) + 128LL;
        v78 = *(__int64 **)v77;
        if ( *(_QWORD *)(*(_QWORD *)v77 + 8LL) != v77 || (v79 = *v78, *(__int64 **)(*v78 + 8) != v78) )
          __fastfail(3u);
        *(_QWORD *)v77 = v79;
        *(_QWORD *)(v79 + 8) = v77;
        v78[2] = *((_QWORD *)v40 + ((*(_DWORD *)this >> 7) & 0x1F) + 618);
        v80 = 1560LL * ((*(_DWORD *)this >> 7) & 0x1F) + *((_QWORD *)v40 + 5090) + 464LL;
        v81 = *(__int64 ***)(v80 + 8);
        if ( *v81 != (__int64 *)v80 )
          __fastfail(3u);
        *v78 = v80;
        v78[1] = (__int64)v81;
        *v81 = v78;
        *(_QWORD *)(v80 + 8) = v78;
      }
      goto LABEL_18;
    }
    v75 = WdLogNewEntry5_WdError();
    *(_QWORD *)(v75 + 24) = 3759LL;
    WdLogEvent5_WdError(v75);
    v76 = -1073741823;
  }
  else
  {
    VIDMM_PAGE_TABLE::InvalidatePageTable(this, v84, v27, v32);
    v76 = VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(this, (struct CVirtualAddressAllocator *)a2, v27, v32, v90, v30);
    if ( v76 >= 0 )
    {
LABEL_18:
      *(_DWORD *)this |= 0x10000u;
      return 0LL;
    }
  }
  v82 = WdLogNewEntry5_WdError();
  *(_QWORD *)(v82 + 24) = 4524LL;
  WdLogEvent5_WdError(v82);
  return (unsigned int)v76;
}
