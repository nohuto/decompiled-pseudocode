/*
 * XREFs of ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0054DD0
 * Callers:
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005A240 (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C005BE50 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL_ALLOC@@0I0PEAU_MDL@@PEAE0@Z @ 0x1C0072574 (-MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL.c)
 *     ?RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00752EC (-RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C0079218 (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C007B468 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C009E118 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 *     ?UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C009EB3C (-UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x1C009F698 (-VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z.c)
 * Callees:
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0001AB8 (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C0001CCC (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?DdiGetRootPageTableSize@ADAPTER_RENDER@@QEAA_KPEAU_DXGKARG_GETROOTPAGETABLESIZE@@@Z @ 0x1C0001E58 (-DdiGetRootPageTableSize@ADAPTER_RENDER@@QEAA_KPEAU_DXGKARG_GETROOTPAGETABLESIZE@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000F1F0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C00160F8 (-GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     __security_check_cookie @ 0x1C0016910 (__security_check_cookie.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     McTemplateK0p @ 0x1C00215B4 (McTemplateK0p.c)
 *     McTemplateK0pqxx @ 0x1C0023024 (McTemplateK0pqxx.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C0055924 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0055C00 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C005C7E0 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z @ 0x1C007328C (-CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z.c)
 *     ?RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00752EC (-RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z @ 0x1C00A2130 (-SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::CommitVirtualAddressRange(
        CVirtualAddressAllocator *this,
        struct VIDMM_MAPPED_VA_RANGE *a2,
        int a3,
        int a4,
        unsigned __int64 a5,
        struct _MDL *a6,
        unsigned __int8 a7,
        struct VIDMM_ALLOC **a8)
{
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdi
  UINT v13; // r9d
  int v14; // r12d
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // r8
  VIDMM_PAGE_DIRECTORY *v20; // r13
  UINT v21; // edi
  unsigned int v22; // r13d
  __int64 v23; // r11
  __int64 v24; // r10
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // ecx
  __int64 **VidMmAllocFromOwner; // rax
  int *v29; // rcx
  int v30; // eax
  struct _MDL *v31; // r10
  unsigned __int64 v32; // rdx
  int v33; // r8d
  int *v34; // r9
  bool v35; // zf
  unsigned __int64 v36; // r8
  int v37; // eax
  __int64 v38; // r15
  __int64 v39; // rcx
  int v40; // edi
  __int64 v41; // r8
  __int64 result; // rax
  unsigned int v43; // eax
  __int64 v44; // rax
  int RootPageTableSize; // eax
  struct VIDMM_PAGE_DIRECTORY *PageDirectory; // rax
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  _QWORD *v54; // rax
  __int64 v55; // rax
  int v56; // edi
  struct VIDMM_ALLOC **v57; // r8
  __int64 v58; // rdx
  __int64 v59; // rax
  __int64 VidMmGlobalAllocFromOwner; // rax
  int v61; // eax
  int v62; // eax
  char v63; // [rsp+58h] [rbp-B0h]
  int *v64; // [rsp+60h] [rbp-A8h]
  unsigned int v65; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v66; // [rsp+70h] [rbp-98h]
  unsigned int v67; // [rsp+80h] [rbp-88h]
  UINT v68; // [rsp+84h] [rbp-84h]
  _DXGKARG_GETROOTPAGETABLESIZE v69; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v70; // [rsp+90h] [rbp-78h]
  int v71; // [rsp+98h] [rbp-70h]
  __int64 v72; // [rsp+A0h] [rbp-68h]
  __int64 v73; // [rsp+A8h] [rbp-60h]
  struct VIDMM_ALLOC **v74; // [rsp+B0h] [rbp-58h]
  __int64 v75; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v76; // [rsp+C0h] [rbp-48h]
  _QWORD v77[10]; // [rsp+C8h] [rbp-40h] BYREF

  v74 = a8;
  v71 = a3;
  *a8 = 0LL;
  v11 = *((_QWORD *)a2 + 12);
  v12 = (*((_QWORD *)a2 + 13) - v11) >> 12;
  v13 = ((unsigned __int64)*((unsigned int *)a2 + 16) >> 4) & 0x3F;
  v66 = v11;
  v11 >>= 12;
  v14 = (int)(*((_DWORD *)a2 + 16) << 28) >> 28;
  v73 = *((_QWORD *)a2 + 7);
  v15 = *((_QWORD *)a2 + 9);
  v16 = v11 + v12;
  v65 = v13;
  v70 = v12;
  v76 = v15;
  if ( v11 + v12 <= v11 )
  {
    v48 = WdLogNewEntry5_WdAssertion(v15, v16);
    *(_QWORD *)(v48 + 24) = 2554LL;
    WdLogEvent5_WdAssertion(v48);
    return 3221225485LL;
  }
  else if ( v16 > *((_QWORD *)this + 2) >> 12 )
  {
    v49 = WdLogNewEntry5_WdAssertion(v15, v16);
    *(_QWORD *)(v49 + 24) = 2559LL;
    WdLogEvent5_WdAssertion(v49);
    return 3221225485LL;
  }
  else
  {
    if ( (*((_BYTE *)a2 + 88) & 4) != 0 )
      a4 = -2;
    v17 = *((_QWORD *)this + 10);
    v18 = *((_QWORD *)this + 14) + 32LL * v13;
    v75 = 1552LL * v13;
    v19 = *(_QWORD *)(v17 + 40168) + v75;
    v72 = v19;
    v20 = *(VIDMM_PAGE_DIRECTORY **)v18;
    v64 = *(int **)(v19 + 440);
    if ( *(_QWORD *)v18 && (*(_DWORD *)v20 & 8) == 0 )
      goto LABEL_10;
    v15 = *(_QWORD *)(v19 + 48LL * *(unsigned int *)(v19 + 428) + 112);
    v21 = (((v16 - 1) & *(_QWORD *)(v19 + 48LL * *(unsigned int *)(v19 + 428) + 104)) >> v15) + 1;
    v68 = *(_DWORD *)(v18 + 16);
    if ( v21 <= v68 && v20 )
    {
      v12 = v70;
LABEL_10:
      v22 = v13;
      goto LABEL_11;
    }
    v43 = *(_DWORD *)(v18 + 20);
    v67 = v43;
    if ( *(_DWORD *)(*(_QWORD *)(v19 + 440) + 16LL) == 2 )
    {
      *(_DWORD *)(v18 + 16) = v21;
      v69 = 0LL;
      v44 = *((_QWORD *)this + 10);
      v69.NumberOfPte = v21;
      v69.PhysicalAdapterIndex = v13;
      RootPageTableSize = ADAPTER_RENDER::DdiGetRootPageTableSize(*(ADAPTER_RENDER **)(v44 + 16), &v69);
      v19 = v72;
      v13 = v65;
      *(_DWORD *)(v18 + 20) = RootPageTableSize;
      *(_DWORD *)(v18 + 16) = v69.NumberOfPte;
      v43 = v67;
    }
    if ( *(_DWORD *)(v18 + 16) < v21 || *(_DWORD *)(v18 + 20) < v43 )
    {
      v50 = WdLogNewEntry5_WdAssertion(v15, v16);
      *(_QWORD *)(v50 + 24) = *(unsigned int *)(v18 + 16);
      WdLogEvent5_WdAssertion(v50);
      v54 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v52, v51, v53);
      v54[3] = 270LL;
      v54[4] = 48LL;
      v54[5] = this;
      v54[6] = 0LL;
      v54[7] = 0LL;
      WdLogEvent5_WdCriticalError(v54);
      v19 = v72;
      v13 = v65;
    }
    PageDirectory = CreatePageDirectory(this, v13, *(_DWORD *)(v19 + 428));
    *(_QWORD *)v18 = PageDirectory;
    if ( PageDirectory )
    {
      if ( v20 )
      {
        VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(
          *((VIDMM_PROCESS **)this + 11),
          *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 24LL) + 200LL),
          1);
        v56 = *(_DWORD *)(v18 + 16);
        *(_DWORD *)(v18 + 16) = v68;
        VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(v20, this, 0LL);
        v22 = v65;
        v57 = v74;
        *(_DWORD *)(v18 + 16) = v56;
        v40 = CVirtualAddressAllocator::RecommitVirtualAddressRanges(this, 1LL << v65, v57);
        CVirtualAddressAllocator::FlushGpuVaTlb(this, v65, 0LL, 0LL);
        VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 10), v65);
        VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(
          *((VIDMM_PROCESS **)this + 11),
          *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 24LL) + 200LL),
          0);
        if ( v40 < 0 )
        {
          v59 = WdLogNewEntry5_WdAssertion(v15, v58);
          *(_QWORD *)(v59 + 24) = 2649LL;
          WdLogEvent5_WdAssertion(v59);
          return (unsigned int)v40;
        }
        v12 = v70;
      }
      else
      {
        v12 = v70;
        v22 = v65;
      }
LABEL_11:
      v63 = 0;
      if ( *((struct _KTHREAD **)this + 8) != KeGetCurrentThread() )
      {
        DXGPUSHLOCK::AcquireExclusive((CVirtualAddressAllocator *)((char *)this + 56));
        v63 = 1;
      }
      if ( bTracingEnabled && ((unsigned int)Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
        McTemplateK0pqxx(v15, &CommitVirtualAddressStart, v19, v73, v14, v66, v12);
      memset(v77, 0, 0x48uLL);
      v23 = *((_QWORD *)a2 + 15);
      if ( v23 )
      {
        v77[3] = (a5 + *((_QWORD *)a2 + 14) - *((_QWORD *)a2 + 9)) >> 12;
        v77[8] = v23;
      }
      v24 = *((_QWORD *)a2 + 10);
      v25 = v77[0] | 1LL;
      v77[2] = v24;
      v77[0] |= 1uLL;
      if ( a4 == -2 )
      {
        v77[0] = v25 | 2;
        if ( (_WORD)v66 || (v12 & 0xF) != 0 || (v35 = v64[3] == 0, LOBYTE(v77[7]) = 1, v35) )
          LOBYTE(v77[7]) = 0;
        VidMmGlobalAllocFromOwner = GetVidMmGlobalAllocFromOwner(
                                      (int)(*((_DWORD *)a2 + 16) << 28) >> 28,
                                      *((_QWORD *)a2 + 7));
        if ( VidMmGlobalAllocFromOwner )
        {
          v61 = *(_DWORD *)(VidMmGlobalAllocFromOwner + 32);
          if ( !v61 || (_WORD)v61 )
            LOBYTE(v77[7]) = 0;
        }
      }
      else
      {
        if ( a4 == -3 )
        {
          LOBYTE(v77[7]) = 1;
        }
        else if ( a4 != -1 )
        {
          v26 = *((_QWORD *)a2 + 7);
          v27 = (int)(*((_DWORD *)a2 + 16) << 28) >> 28;
          if ( v27 != 3 )
          {
            VidMmAllocFromOwner = (__int64 **)GetVidMmAllocFromOwner(v27, *((_QWORD *)a2 + 7));
            if ( VidMmAllocFromOwner )
              v26 = **VidMmAllocFromOwner;
            else
              v26 = 0LL;
          }
          v29 = v64;
          if ( !(_WORD)v66 && v64[3] && (v23 & 0xF) == 0 && !(unsigned __int16)*((_DWORD *)a2 + 28) )
          {
            if ( a4 )
            {
              if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 3712LL)
                                         + 8LL
                                         * (unsigned int)(a4
                                                        + *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 40168LL)
                                                                    + v75
                                                                    + 20)
                                                        - 1))
                             + 376LL) == 0x10000
                && (v12 & 0xF) == 0
                && (unsigned __int16)a5 == 0LL )
              {
                LOBYTE(v77[7]) = 1;
              }
              if ( v26 )
              {
                v30 = *(_DWORD *)(v26 + 32);
                if ( !v30 || (_WORD)v30 )
                  LOBYTE(v77[7]) = 0;
              }
              v29 = v64;
            }
            else if ( !(_WORD)a5 && (*((_DWORD *)this + 34) & 4) == 0 && v26 && (*(_DWORD *)(v26 + 80) & 0x100) != 0 )
            {
              LOBYTE(v77[7]) = 1;
            }
          }
          v77[2] = v24;
          v31 = a6;
          v32 = v25 & 0xFFFFFFFFFFFE041FuLL | (32 * (a4 & 0x1F | ((unsigned __int64)(v71 & 0x3F) << 6)));
          v77[0] = v32;
          if ( a6
            || (*v29 & 0x40) == 0
            || v26 && (v29 = v64, (**(_DWORD **)(v26 + 504) & 0x80u) != 0)
            || (v62 = *((_DWORD *)this + 34), BYTE3(v77[7]) = 1, (v62 & 4) != 0) )
          {
            BYTE3(v77[7]) = 0;
          }
          v33 = *v29;
          if ( (*v29 & 0x10) != 0 && (v14 == 2 || v26 && (**(_DWORD **)(v26 + 504) & 4) != 0) )
          {
            v32 |= 4uLL;
            v77[0] = v32;
          }
          if ( (v33 & 1) != 0 && (*((_BYTE *)a2 + 88) & 1) == 0 )
          {
            v32 |= 8uLL;
            v77[0] = v32;
          }
          v34 = v64;
          v35 = (v33 & 2) == 0;
          v36 = v66;
          if ( !v35 && (*((_BYTE *)a2 + 88) & 2) == 0 )
            v77[0] = v32 | 0x10;
          goto LABEL_45;
        }
        v36 = v66;
        v34 = v64;
      }
      v31 = a6;
LABEL_45:
      v37 = *v34;
      HIDWORD(v77[6]) = a4;
      v38 = v73;
      v77[5] = v73;
      v77[4] = v31;
      LODWORD(v77[6]) = v14;
      if ( (v37 & 0x80u) != 0 )
        *(_WORD *)((char *)&v77[7] + 1) = 257;
      v40 = VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
              *(VIDMM_PAGE_DIRECTORY **)v18,
              this,
              (const struct COMMIT_VA_STATE *)v77,
              v76,
              v36,
              v12,
              a5,
              0,
              v74);
      if ( bTracingEnabled && ((unsigned int)Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
        McTemplateK0p(v39, &CommitVirtualAddressEnd, v41, v38);
      if ( a7 )
        CVirtualAddressAllocator::FlushGpuVaTlb(this, v22, v66, v66 + (v70 << 12));
      if ( BYTE4(v77[7]) )
      {
        VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 10), v22);
        VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(
          *((VIDMM_PROCESS **)this + 11),
          *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 24LL) + 200LL),
          0);
      }
      if ( v40 < 0 )
        *((_DWORD *)a2 + 16) |= 0x800u;
      else
        *((_DWORD *)a2 + 16) |= 0x400u;
      if ( v63 )
      {
        *((_QWORD *)this + 8) = 0LL;
        ExReleasePushLockExclusiveEx((char *)this + 56, 0LL);
        KeLeaveCriticalRegion();
      }
      return (unsigned int)v40;
    }
    v55 = WdLogNewEntry5_WdAssertion(v15, v47);
    *(_QWORD *)(v55 + 24) = 2603LL;
    WdLogEvent5_WdAssertion(v55);
    *(_DWORD *)(v18 + 16) = v68;
    *(_DWORD *)(v18 + 20) = v67;
    result = 3221225495LL;
    *(_QWORD *)v18 = v20;
  }
  return result;
}
