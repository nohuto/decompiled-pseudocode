/*
 * XREFs of ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005B3D0
 * Callers:
 *     ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL_ALLOC@@0I0PEAU_MDL@@PEAE0@Z @ 0x1C0058200 (-MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005EAB0 (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C0060750 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1C0077E54 (-MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C007E874 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A4774 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 *     ?UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A51E0 (-UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x1C00A5D4C (-VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z.c)
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C00AB7C4 (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00AB9D8 (-RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0004D1C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0004F20 (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C0004FC8 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?DdiGetRootPageTableSize@ADAPTER_RENDER@@QEAA_KPEAU_DXGKARG_GETROOTPAGETABLESIZE@@@Z @ 0x1C0005124 (-DdiGetRootPageTableSize@ADAPTER_RENDER@@QEAA_KPEAU_DXGKARG_GETROOTPAGETABLESIZE@@@Z.c)
 *     __security_check_cookie @ 0x1C00161E0 (__security_check_cookie.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0023B00 (-GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     McTemplateK0p @ 0x1C0023F00 (McTemplateK0p.c)
 *     McTemplateK0pqxx @ 0x1C00259D0 (McTemplateK0pqxx.c)
 *     ?CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z @ 0x1C00567D4 (-CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C005C214 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005C4F0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0060F70 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z @ 0x1C00A8FC4 (-SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z.c)
 *     ?RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00AB9D8 (-RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z.c)
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
  __int64 v12; // rcx
  unsigned __int64 v13; // rdi
  UINT v14; // r9d
  int v15; // esi
  int v16; // esi
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r8
  __int64 v19; // r13
  __int64 v20; // rcx
  __int64 v21; // r10
  int *v22; // rdx
  VIDMM_PAGE_DIRECTORY *v23; // r12
  UINT v24; // eax
  UINT v25; // edi
  unsigned int v26; // r13d
  unsigned __int64 v27; // r12
  __int64 v28; // r11
  __int64 v29; // r10
  __int64 v30; // r8
  __int64 v31; // r9
  int v32; // ecx
  __int64 **VidMmAllocFromOwner; // rax
  int *v34; // rcx
  int v35; // eax
  struct _MDL *v36; // r10
  unsigned __int64 v37; // rdx
  int v38; // r8d
  bool v39; // zf
  int *v40; // r8
  int v41; // eax
  __int64 v42; // r15
  __int64 v43; // rcx
  int v44; // edi
  __int64 v45; // r8
  int v46; // ecx
  __int64 result; // rax
  __int64 v48; // rcx
  unsigned int v49; // r8d
  __int64 v50; // rax
  unsigned int RootPageTableSize; // eax
  UINT NumberOfPte; // ecx
  __int64 v53; // rax
  struct VIDMM_PAGE_DIRECTORY *PageDirectory; // rax
  __int64 v55; // rdx
  __int64 v56; // r13
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  _QWORD *v63; // rax
  __int64 v64; // rax
  int v65; // edi
  struct VIDMM_ALLOC **v66; // r8
  __int64 v67; // rdx
  __int64 v68; // rax
  __int64 VidMmGlobalAllocFromOwner; // rax
  int v70; // eax
  char v71; // [rsp+58h] [rbp-B0h]
  int *v72; // [rsp+60h] [rbp-A8h]
  unsigned int v73; // [rsp+68h] [rbp-A0h]
  unsigned int v74; // [rsp+78h] [rbp-90h]
  UINT v75; // [rsp+7Ch] [rbp-8Ch]
  _DXGKARG_GETROOTPAGETABLESIZE v76; // [rsp+80h] [rbp-88h] BYREF
  __int64 v77; // [rsp+88h] [rbp-80h]
  unsigned __int64 v78; // [rsp+90h] [rbp-78h]
  int v79; // [rsp+98h] [rbp-70h]
  unsigned __int64 v80; // [rsp+A0h] [rbp-68h]
  __int64 v81; // [rsp+A8h] [rbp-60h]
  struct VIDMM_ALLOC **v82; // [rsp+B0h] [rbp-58h]
  __int64 v83; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v84; // [rsp+C0h] [rbp-48h]
  _QWORD v85[10]; // [rsp+C8h] [rbp-40h] BYREF

  v82 = a8;
  v79 = a3;
  *a8 = 0LL;
  v11 = *((_QWORD *)a2 + 12);
  v12 = *((_QWORD *)a2 + 7);
  v13 = (*((_QWORD *)a2 + 13) - v11) >> 12;
  v14 = (*((_DWORD *)a2 + 16) >> 4) & 0x3F;
  v15 = *((_DWORD *)a2 + 16) << 28;
  v80 = v11;
  v11 >>= 12;
  v16 = v15 >> 28;
  v81 = v12;
  v17 = *((_QWORD *)a2 + 9);
  v18 = v11 + v13;
  v73 = v14;
  v78 = v13;
  v84 = v17;
  if ( v11 + v13 <= v11 )
  {
    v57 = WdLogNewEntry5_WdAssertion(v17, a2);
    *(_QWORD *)(v57 + 24) = 2564LL;
    WdLogEvent5_WdAssertion(v57);
    return 3221225485LL;
  }
  else if ( v18 > *((_QWORD *)this + 2) >> 12 )
  {
    v58 = WdLogNewEntry5_WdAssertion(v17, a2);
    *(_QWORD *)(v58 + 24) = 2569LL;
    WdLogEvent5_WdAssertion(v58);
    return 3221225485LL;
  }
  else
  {
    if ( (*((_BYTE *)a2 + 88) & 4) != 0 )
      a4 = -2;
    v19 = 1560LL * v14 + *(_QWORD *)(*((_QWORD *)this + 10) + 40720LL);
    v20 = 32LL * v14;
    v21 = v20 + *((_QWORD *)this + 14);
    v83 = 1560LL * v14;
    v77 = v21;
    v22 = *(int **)(v19 + 440);
    v72 = v22;
    v23 = *(VIDMM_PAGE_DIRECTORY **)v21;
    if ( *(_QWORD *)v21 && (*(_DWORD *)v23 & 8) == 0 )
      goto LABEL_10;
    v20 = *(_QWORD *)(v19 + 48LL * *(unsigned int *)(v19 + 428) + 112);
    v24 = *(_DWORD *)(v21 + 16);
    v25 = (((v18 - 1) & *(_QWORD *)(v19 + 48LL * *(unsigned int *)(v19 + 428) + 104)) >> v20) + 1;
    v75 = v24;
    if ( v25 <= v24 && v23 )
    {
      v13 = v78;
LABEL_10:
      v26 = v14;
      goto LABEL_11;
    }
    v48 = *(unsigned int *)(v21 + 20);
    v49 = *(_DWORD *)(v21 + 20);
    v74 = v49;
    if ( v22[4] == 2 )
    {
      *(_DWORD *)(v21 + 16) = v25;
      v76 = 0LL;
      v50 = *((_QWORD *)this + 10);
      v76.NumberOfPte = v25;
      v76.PhysicalAdapterIndex = v14;
      RootPageTableSize = ADAPTER_RENDER::DdiGetRootPageTableSize(*(ADAPTER_RENDER **)(v50 + 16), &v76);
      NumberOfPte = v76.NumberOfPte;
      v49 = RootPageTableSize;
      v53 = v77;
      v14 = v73;
      *(_DWORD *)(v77 + 16) = v76.NumberOfPte;
      *(_DWORD *)(v53 + 20) = v49;
      v24 = NumberOfPte;
      v48 = v74;
    }
    if ( v24 < v25 || v49 < (unsigned int)v48 )
    {
      v59 = WdLogNewEntry5_WdAssertion(v48, v22);
      *(_QWORD *)(v59 + 24) = *(unsigned int *)(v77 + 16);
      WdLogEvent5_WdAssertion(v59);
      v63 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v61, v60, v62);
      v63[3] = 270LL;
      v63[4] = 48LL;
      v63[5] = this;
      v63[6] = 0LL;
      v63[7] = 0LL;
      WdLogEvent5_WdCriticalError(v63);
      v14 = v73;
    }
    PageDirectory = CreatePageDirectory(this, v14, *(_DWORD *)(v19 + 428));
    v56 = v77;
    *(_QWORD *)v77 = PageDirectory;
    if ( PageDirectory )
    {
      if ( v23 )
      {
        VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(
          *((VIDMM_PROCESS **)this + 11),
          *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 24LL) + 200LL),
          1);
        v65 = *(_DWORD *)(v56 + 16);
        *(_DWORD *)(v56 + 16) = v75;
        VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(v23, this, 0LL);
        v66 = v82;
        *(_DWORD *)(v56 + 16) = v65;
        v26 = v73;
        v44 = CVirtualAddressAllocator::RecommitVirtualAddressRanges(this, 1LL << v73, v66);
        CVirtualAddressAllocator::FlushGpuVaTlb(this, v73, 0LL, 0LL);
        VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 10), v73);
        VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(
          *((VIDMM_PROCESS **)this + 11),
          *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 24LL) + 200LL),
          0);
        if ( v44 < 0 )
        {
          v68 = WdLogNewEntry5_WdAssertion(v20, v67);
          *(_QWORD *)(v68 + 24) = 2659LL;
          WdLogEvent5_WdAssertion(v68);
          return (unsigned int)v44;
        }
        v13 = v78;
      }
      else
      {
        v13 = v78;
        v26 = v73;
      }
LABEL_11:
      if ( *((struct _KTHREAD **)this + 8) == KeGetCurrentThread() )
      {
        v71 = 0;
      }
      else
      {
        DXGPUSHLOCK::AcquireExclusive((CVirtualAddressAllocator *)((char *)this + 56));
        v71 = 1;
      }
      v27 = v80;
      if ( bTracingEnabled && ((unsigned int)Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
        McTemplateK0pqxx(v20, &CommitVirtualAddressStart, v18, v81, v16, v80, v13);
      memset(v85, 0, 0x48uLL);
      v28 = *((_QWORD *)a2 + 15);
      if ( v28 )
      {
        v85[3] = (a5 + *((_QWORD *)a2 + 14) - *((_QWORD *)a2 + 9)) >> 12;
        v85[8] = v28;
      }
      v29 = *((_QWORD *)a2 + 10);
      v30 = v85[0] | 1LL;
      v85[2] = v29;
      v85[0] |= 1uLL;
      if ( a4 == -2 )
      {
        v85[0] = v30 | 2;
        if ( (_WORD)v27 || (v13 & 0xF) != 0 || (v39 = v72[3] == 0, LOBYTE(v85[7]) = 1, v39) )
          LOBYTE(v85[7]) = 0;
        VidMmGlobalAllocFromOwner = GetVidMmGlobalAllocFromOwner(
                                      (int)(*((_DWORD *)a2 + 16) << 28) >> 28,
                                      *((_QWORD *)a2 + 7));
        if ( VidMmGlobalAllocFromOwner )
        {
          v70 = *(_DWORD *)(VidMmGlobalAllocFromOwner + 32);
          if ( !v70 || (_WORD)v70 )
            LOBYTE(v85[7]) = 0;
        }
      }
      else
      {
        if ( a4 == -3 )
        {
          LOBYTE(v85[7]) = 1;
        }
        else if ( a4 != -1 )
        {
          v31 = *((_QWORD *)a2 + 7);
          v32 = (int)(*((_DWORD *)a2 + 16) << 28) >> 28;
          if ( v32 != 3 )
          {
            VidMmAllocFromOwner = (__int64 **)GetVidMmAllocFromOwner(v32, *((_QWORD *)a2 + 7));
            if ( VidMmAllocFromOwner )
              v31 = **VidMmAllocFromOwner;
            else
              v31 = 0LL;
          }
          v34 = v72;
          if ( !(_WORD)v27 && v72[3] && (v28 & 0xF) == 0 && !*((_WORD *)a2 + 56) )
          {
            if ( a4 )
            {
              if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 3712LL)
                                         + 8LL
                                         * (unsigned int)(a4
                                                        + *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 40720LL)
                                                                    + v83
                                                                    + 20)
                                                        - 1))
                             + 376LL) == 0x10000
                && (v13 & 0xF) == 0
                && (unsigned __int16)a5 == 0LL )
              {
                LOBYTE(v85[7]) = 1;
              }
              if ( v31 )
              {
                v35 = *(_DWORD *)(v31 + 32);
                if ( !v35 || (_WORD)v35 )
                  LOBYTE(v85[7]) = 0;
              }
              v34 = v72;
            }
            else if ( !(_WORD)a5 && (*((_DWORD *)this + 34) & 4) == 0 && v31 && (*(_DWORD *)(v31 + 80) & 0x100) != 0 )
            {
              LOBYTE(v85[7]) = 1;
            }
          }
          v85[2] = v29;
          v36 = a6;
          v37 = v30 & 0xFFFFFFFFFFFE041FuLL | (32 * (a4 & 0x1F | ((unsigned __int64)(v79 & 0x3F) << 6)));
          v85[0] = v37;
          if ( a6
            || (v38 = *v34, (*v34 & 0x40) == 0)
            || v31 && (v34 = v72, (**(_DWORD **)(v31 + 504) & 0x80u) != 0)
            || (*((_DWORD *)this + 34) & 4) != 0 )
          {
            v38 = *v34;
            BYTE3(v85[7]) = 0;
          }
          else
          {
            BYTE3(v85[7]) = 1;
          }
          if ( (v38 & 0x10) != 0 && (v16 == 2 || v16 == 7 || v31 && (**(_DWORD **)(v31 + 504) & 4) != 0) )
          {
            v37 |= 4uLL;
            v85[0] = v37;
          }
          if ( (v38 & 1) != 0 && (*((_BYTE *)a2 + 88) & 1) == 0 )
          {
            v37 |= 8uLL;
            v85[0] = v37;
          }
          v39 = (v38 & 2) == 0;
          v40 = v72;
          if ( !v39 && (*((_BYTE *)a2 + 88) & 2) == 0 )
            v85[0] = v37 | 0x10;
          goto LABEL_46;
        }
        v40 = v72;
      }
      v36 = a6;
LABEL_46:
      v41 = *v40;
      HIDWORD(v85[6]) = a4;
      v42 = v81;
      v85[5] = v81;
      v85[4] = v36;
      LODWORD(v85[6]) = v16;
      if ( (v41 & 0x80u) != 0 )
        *(_WORD *)((char *)&v85[7] + 1) = 257;
      v44 = VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
              *(VIDMM_PAGE_DIRECTORY **)v77,
              this,
              (const struct COMMIT_VA_STATE *)v85,
              v84,
              v27,
              v13,
              a5,
              0,
              v82);
      if ( bTracingEnabled && ((unsigned int)Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
        McTemplateK0p(v43, &CommitVirtualAddressEnd, v45, v42);
      if ( a7 )
        CVirtualAddressAllocator::FlushGpuVaTlb(this, v26, v27, v27 + (v78 << 12));
      if ( BYTE4(v85[7]) )
      {
        VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 10), v26);
        VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(
          *((VIDMM_PROCESS **)this + 11),
          *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 24LL) + 200LL),
          0);
      }
      if ( v44 < 0 )
        v46 = 2048;
      else
        v46 = 1024;
      *((_DWORD *)a2 + 16) |= v46;
      if ( v71 )
      {
        *((_QWORD *)this + 8) = 0LL;
        ExReleasePushLockExclusiveEx((char *)this + 56, 0LL);
        KeLeaveCriticalRegion();
      }
      return (unsigned int)v44;
    }
    v64 = WdLogNewEntry5_WdAssertion(v20, v55);
    *(_QWORD *)(v64 + 24) = 2613LL;
    WdLogEvent5_WdAssertion(v64);
    *(_DWORD *)(v56 + 16) = v75;
    *(_DWORD *)(v56 + 20) = v74;
    result = 3221225495LL;
    *(_QWORD *)v56 = v23;
  }
  return result;
}
