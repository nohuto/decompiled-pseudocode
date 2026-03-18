/*
 * XREFs of ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0053290
 * Callers:
 *     ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL_ALLOC@@0I0PEAU_MDL@@PEAE0@Z @ 0x1C005043C (-MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00573C0 (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C0058C00 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006F354 (-RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C0072D64 (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C00749C4 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0095F3C (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 *     ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x1C009718C (-VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z.c)
 *     ?MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00A2350 (-MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00024B4 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C00025FC (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C00026DC (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?DdiGetRootPageTableSize@ADAPTER_RENDER@@QEAA_KPEAU_DXGKARG_GETROOTPAGETABLESIZE@@@Z @ 0x1C0002818 (-DdiGetRootPageTableSize@ADAPTER_RENDER@@QEAA_KPEAU_DXGKARG_GETROOTPAGETABLESIZE@@@Z.c)
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0013DE4 (-GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     __security_check_cookie @ 0x1C0014430 (__security_check_cookie.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     Template_p @ 0x1C001F4D4 (Template_p.c)
 *     Template_pqxx @ 0x1C0021118 (Template_pqxx.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C0053CE4 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0053FC0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0059548 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z @ 0x1C006D4B0 (-CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z.c)
 *     ?RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006F354 (-RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z @ 0x1C0099D28 (-SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z.c)
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
  __int64 v34; // r9
  bool v35; // zf
  int *v36; // r9
  bool v37; // cl
  unsigned __int64 v38; // r8
  int v39; // eax
  __int64 v40; // r15
  __int64 v41; // rcx
  int v42; // edi
  __int64 v43; // r8
  __int64 result; // rax
  unsigned int v45; // eax
  __int64 v46; // rax
  int RootPageTableSize; // eax
  struct VIDMM_PAGE_DIRECTORY *PageDirectory; // rax
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  _QWORD *v56; // rax
  __int64 v57; // rax
  int v58; // edi
  struct VIDMM_ALLOC **v59; // r8
  __int64 v60; // rdx
  __int64 v61; // rax
  __int64 VidMmGlobalAllocFromOwner; // rax
  int v63; // eax
  int v64; // eax
  char v65; // [rsp+58h] [rbp-B0h]
  int *v66; // [rsp+60h] [rbp-A8h]
  unsigned int v67; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v68; // [rsp+70h] [rbp-98h]
  unsigned int v69; // [rsp+80h] [rbp-88h]
  UINT v70; // [rsp+84h] [rbp-84h]
  _DXGKARG_GETROOTPAGETABLESIZE v71; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v72; // [rsp+90h] [rbp-78h]
  int v73; // [rsp+98h] [rbp-70h]
  __int64 v74; // [rsp+A0h] [rbp-68h]
  __int64 v75; // [rsp+A8h] [rbp-60h]
  struct VIDMM_ALLOC **v76; // [rsp+B0h] [rbp-58h]
  __int64 v77; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v78; // [rsp+C0h] [rbp-48h]
  _QWORD v79[10]; // [rsp+C8h] [rbp-40h] BYREF

  v76 = a8;
  v73 = a3;
  *a8 = 0LL;
  v11 = *((_QWORD *)a2 + 12);
  v12 = (*((_QWORD *)a2 + 13) - v11) >> 12;
  v13 = ((unsigned __int64)*((unsigned int *)a2 + 16) >> 4) & 0x3F;
  v68 = v11;
  v11 >>= 12;
  v14 = (int)(*((_DWORD *)a2 + 16) << 28) >> 28;
  v75 = *((_QWORD *)a2 + 7);
  v15 = *((_QWORD *)a2 + 9);
  v16 = v11 + v12;
  v67 = v13;
  v72 = v12;
  v78 = v15;
  if ( v11 + v12 <= v11 )
  {
    v50 = WdLogNewEntry5_WdAssertion(v15, v16);
    *(_QWORD *)(v50 + 24) = 2554LL;
    WdLogEvent5_WdAssertion(v50);
    return 3221225485LL;
  }
  else if ( v16 > *((_QWORD *)this + 2) >> 12 )
  {
    v51 = WdLogNewEntry5_WdAssertion(v15, v16);
    *(_QWORD *)(v51 + 24) = 2559LL;
    WdLogEvent5_WdAssertion(v51);
    return 3221225485LL;
  }
  else
  {
    if ( (*((_BYTE *)a2 + 88) & 4) != 0 )
      a4 = -2;
    v17 = *((_QWORD *)this + 10);
    v18 = *((_QWORD *)this + 14) + 32LL * v13;
    v77 = 472LL * v13;
    v19 = *(_QWORD *)(v17 + 40168) + v77;
    v74 = v19;
    v20 = *(VIDMM_PAGE_DIRECTORY **)v18;
    v66 = *(int **)(v19 + 440);
    if ( *(_QWORD *)v18 && (*(_DWORD *)v20 & 8) == 0 )
      goto LABEL_10;
    v15 = *(_QWORD *)(v19 + 48LL * *(unsigned int *)(v19 + 428) + 112);
    v21 = (((v16 - 1) & *(_QWORD *)(v19 + 48LL * *(unsigned int *)(v19 + 428) + 104)) >> v15) + 1;
    v70 = *(_DWORD *)(v18 + 16);
    if ( v21 <= v70 && v20 )
    {
      v12 = v72;
LABEL_10:
      v22 = v13;
      goto LABEL_11;
    }
    v45 = *(_DWORD *)(v18 + 20);
    v69 = v45;
    if ( *(_DWORD *)(*(_QWORD *)(v19 + 440) + 16LL) == 2 )
    {
      *(_DWORD *)(v18 + 16) = v21;
      v71 = 0LL;
      v46 = *((_QWORD *)this + 10);
      v71.NumberOfPte = v21;
      v71.PhysicalAdapterIndex = v13;
      RootPageTableSize = ADAPTER_RENDER::DdiGetRootPageTableSize(*(ADAPTER_RENDER **)(v46 + 16), &v71);
      v19 = v74;
      v13 = v67;
      *(_DWORD *)(v18 + 20) = RootPageTableSize;
      *(_DWORD *)(v18 + 16) = v71.NumberOfPte;
      v45 = v69;
    }
    if ( *(_DWORD *)(v18 + 16) < v21 || *(_DWORD *)(v18 + 20) < v45 )
    {
      v52 = WdLogNewEntry5_WdAssertion(v15, v16);
      *(_QWORD *)(v52 + 24) = *(unsigned int *)(v18 + 16);
      WdLogEvent5_WdAssertion(v52);
      v56 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v54, v53, v55);
      v56[3] = 270LL;
      v56[4] = 48LL;
      v56[5] = this;
      v56[6] = 0LL;
      v56[7] = 0LL;
      WdLogEvent5_WdCriticalError(v56);
      v19 = v74;
      v13 = v67;
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
        v58 = *(_DWORD *)(v18 + 16);
        *(_DWORD *)(v18 + 16) = v70;
        VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(v20, this, 0LL);
        v22 = v67;
        v59 = v76;
        *(_DWORD *)(v18 + 16) = v58;
        v42 = CVirtualAddressAllocator::RecommitVirtualAddressRanges(this, 1LL << v67, v59);
        CVirtualAddressAllocator::FlushGpuVaTlb(this, v67, 0LL, 0LL);
        VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 10), v67);
        VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(
          *((VIDMM_PROCESS **)this + 11),
          *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 24LL) + 200LL),
          0);
        if ( v42 < 0 )
        {
          v61 = WdLogNewEntry5_WdAssertion(v15, v60);
          *(_QWORD *)(v61 + 24) = 2649LL;
          WdLogEvent5_WdAssertion(v61);
          return (unsigned int)v42;
        }
        v12 = v72;
      }
      else
      {
        v12 = v72;
        v22 = v67;
      }
LABEL_11:
      v65 = 0;
      if ( *((struct _KTHREAD **)this + 8) != KeGetCurrentThread() )
      {
        DXGPUSHLOCK::AcquireExclusive((CVirtualAddressAllocator *)((char *)this + 56));
        v65 = 1;
      }
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40000) != 0 )
        Template_pqxx(v15, &CommitVirtualAddressStart, v19, v75, v14, v68, v12);
      memset(v79, 0, 0x48uLL);
      v23 = *((_QWORD *)a2 + 15);
      if ( v23 )
      {
        v79[3] = (a5 + *((_QWORD *)a2 + 14) - *((_QWORD *)a2 + 9)) >> 12;
        v79[8] = v23;
      }
      v24 = *((_QWORD *)a2 + 10);
      v25 = v79[0] | 1LL;
      v79[2] = v24;
      v79[0] |= 1uLL;
      if ( a4 == -2 )
      {
        v79[0] = v25 | 2;
        if ( (_WORD)v68 || (v12 & 0xF) != 0 || (v35 = v66[3] == 0, LOBYTE(v79[7]) = 1, v35) )
          LOBYTE(v79[7]) = 0;
        VidMmGlobalAllocFromOwner = GetVidMmGlobalAllocFromOwner(
                                      (int)(*((_DWORD *)a2 + 16) << 28) >> 28,
                                      *((_QWORD *)a2 + 7));
        if ( VidMmGlobalAllocFromOwner )
        {
          v63 = *(_DWORD *)(VidMmGlobalAllocFromOwner + 32);
          if ( !v63 || (_WORD)v63 )
            LOBYTE(v79[7]) = 0;
        }
      }
      else
      {
        if ( a4 == -3 )
        {
          LOBYTE(v79[7]) = 1;
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
          v29 = v66;
          if ( !(_WORD)v68 && v66[3] && (v23 & 0xF) == 0 && !(unsigned __int16)*((_DWORD *)a2 + 28) )
          {
            if ( a4 )
            {
              if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 3712LL)
                                         + 8LL
                                         * (unsigned int)(a4
                                                        + *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 40168LL)
                                                                    + v77
                                                                    + 20)
                                                        - 1))
                             + 400LL) == 0x10000
                && (v12 & 0xF) == 0
                && (unsigned __int16)a5 == 0LL )
              {
                LOBYTE(v79[7]) = 1;
              }
              if ( v26 )
              {
                v30 = *(_DWORD *)(v26 + 32);
                if ( !v30 || (_WORD)v30 )
                  LOBYTE(v79[7]) = 0;
              }
              v29 = v66;
            }
            else if ( !(_WORD)a5 && (*((_DWORD *)this + 34) & 4) == 0 && v26 && (*(_DWORD *)(v26 + 80) & 0x100) != 0 )
            {
              LOBYTE(v79[7]) = 1;
            }
          }
          v79[2] = v24;
          v31 = a6;
          v32 = v25 & 0xFFFFFFFFFFFE041FuLL | (32 * (a4 & 0x1F | ((unsigned __int64)(v73 & 0x3F) << 6)));
          v79[0] = v32;
          if ( a6
            || (*v29 & 0x40) == 0
            || v26 && (v29 = v66, (**(_DWORD **)(v26 + 520) & 0x80u) != 0)
            || (v64 = *((_DWORD *)this + 34), BYTE3(v79[7]) = 1, (v64 & 4) != 0) )
          {
            BYTE3(v79[7]) = 0;
          }
          v33 = *v29;
          if ( (*v29 & 0x10) != 0 && (v14 == 2 || v26 && (**(_DWORD **)(v26 + 520) & 4) != 0) )
          {
            v32 |= 4uLL;
            v79[0] = v32;
          }
          v34 = *((_QWORD *)a2 + 11);
          if ( (v34 & 1) == 0 && (v33 & 1) != 0 )
          {
            v32 |= 8uLL;
            v79[0] = v32;
          }
          v35 = (v34 & 2) == 0;
          v36 = v66;
          v37 = v35;
          v35 = (v33 & 2) == 0;
          v38 = v68;
          if ( v37 && !v35 )
            v79[0] = v32 | 0x10;
          goto LABEL_45;
        }
        v36 = v66;
        v38 = v68;
      }
      v31 = a6;
LABEL_45:
      v39 = *v36;
      HIDWORD(v79[6]) = a4;
      v40 = v75;
      v79[5] = v75;
      v79[4] = v31;
      LODWORD(v79[6]) = v14;
      if ( (v39 & 0x80u) != 0 )
        *(_WORD *)((char *)&v79[7] + 1) = 257;
      v42 = VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
              *(VIDMM_PAGE_DIRECTORY **)v18,
              this,
              (const struct COMMIT_VA_STATE *)v79,
              v78,
              v38,
              v12,
              a5,
              0,
              v76);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40000) != 0 )
        Template_p(v41, &CommitVirtualAddressEnd, v43, v40);
      if ( a7 )
        CVirtualAddressAllocator::FlushGpuVaTlb(this, v22, v68, v68 + (v72 << 12));
      if ( BYTE4(v79[7]) )
      {
        VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 10), v22);
        VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(
          *((VIDMM_PROCESS **)this + 11),
          *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 24LL) + 200LL),
          0);
      }
      if ( v42 < 0 )
        *((_DWORD *)a2 + 16) |= 0x800u;
      else
        *((_DWORD *)a2 + 16) |= 0x400u;
      if ( v65 )
      {
        *((_QWORD *)this + 8) = 0LL;
        ExReleasePushLockExclusiveEx((char *)this + 56, 0LL);
        KeLeaveCriticalRegion();
      }
      return (unsigned int)v42;
    }
    v57 = WdLogNewEntry5_WdAssertion(v15, v49);
    *(_QWORD *)(v57 + 24) = 2603LL;
    WdLogEvent5_WdAssertion(v57);
    *(_DWORD *)(v18 + 16) = v70;
    *(_DWORD *)(v18 + 20) = v69;
    result = 3221225495LL;
    *(_QWORD *)v18 = v20;
  }
  return result;
}
