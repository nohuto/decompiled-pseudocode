/*
 * XREFs of ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C005A980
 * Callers:
 *     ?CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_K@Z @ 0x1C0035524 (-CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_K@Z.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C00573B4 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL_ALLOC@@0I0PEAU_MDL@@PEAE0@Z @ 0x1C0058200 (-MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL.c)
 *     ?VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@E@Z @ 0x1C005F870 (-VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_A.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C006A144 (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1C0077E54 (-MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C007E874 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x1C00A5D4C (-VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z.c)
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C00AB7C4 (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0002BF0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0004C1C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0004DC8 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0004F20 (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     McTemplateK0q @ 0x1C0016834 (McTemplateK0q.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     McTemplateK0pqxx @ 0x1C00259D0 (McTemplateK0pqxx.c)
 *     ?CompareVadAddressInsideAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C00580F8 (-CompareVadAddressInsideAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0059C30 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1C0059EA0 (-AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDM.c)
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C005BAA8 (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEA.c)
 *     ?CompareVadRangeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C005BCEC (-CompareVadRangeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

_DWORD *__fastcall CVirtualAddressAllocator::MapVirtualAddressRange(
        struct VIDMM_VAD **a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int64 a5,
        struct _RTL_BALANCED_NODE *a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        unsigned int a9,
        __int64 a10,
        __int64 a11,
        unsigned int a12,
        void **a13)
{
  struct VIDMM_VAD **v13; // rbp
  struct _RTL_AVL_TREE *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  _DWORD *v18; // r14
  struct _RTL_BALANCED_NODE *v19; // r12
  unsigned __int64 v20; // r15
  int v21; // eax
  unsigned __int64 v22; // rcx
  __int64 v23; // r8
  struct VIDMM_VAD *v24; // rsi
  struct _RTL_BALANCED_NODE *v25; // rdi
  struct _RTL_BALANCED_NODE *v26; // rax
  __int64 v27; // r8
  PVOID v28; // rax
  __int64 v29; // r8
  __int64 **VidMmAllocFromOwner; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  unsigned __int64 v33; // rcx
  unsigned int v34; // ecx
  __int64 v35; // rdx
  __int64 v36; // rcx
  char *v37; // rsi
  char **v38; // rcx
  char *v39; // rax
  int v41; // r9d
  char *v42; // rdi
  int v43; // eax
  unsigned __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rax
  struct VIDMM_MAPPED_VA_RANGE *v54; // [rsp+20h] [rbp-88h]
  struct VIDMM_VAD *v55; // [rsp+50h] [rbp-58h] BYREF
  struct _RTL_BALANCED_NODE *v56; // [rsp+58h] [rbp-50h] BYREF
  char v57; // [rsp+B0h] [rbp+8h]

  v13 = a1 + 7;
  if ( a1 != (struct VIDMM_VAD **)-56LL && a1[8] == KeGetCurrentThread() )
  {
    v45 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v45 + 24) = 1306LL;
    WdLogEvent5_WdAssertion(v45);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v13, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v41 = *((_DWORD *)v13 + 4);
      if ( v41 != -1 && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v16, (__int64)&EventBlockThread, v17, v41);
    }
    ExAcquirePushLockExclusiveEx(v13, 0LL);
  }
  v18 = 0LL;
  v19 = a6;
  v20 = a5;
  v13[1] = KeGetCurrentThread();
  v55 = 0LL;
  v57 = 0;
  if ( a6 )
  {
    v24 = a1[6];
    v42 = (char *)a6 + a5;
    v56 = a6;
    while ( v24 )
    {
      v43 = CompareVadAddressInsideAvl(&v56, (struct _RTL_BALANCED_NODE *)v24);
      if ( v43 < 0 )
      {
        v24 = *(struct VIDMM_VAD **)v24;
      }
      else
      {
        if ( v43 <= 0 )
        {
          v44 = *((unsigned int *)v24 + 18);
          v22 = *((_QWORD *)v24 + 4);
          if ( (v44 & 0x1000) != 0 )
            v22 -= 4096LL;
          if ( v22 < (unsigned __int64)v42 )
          {
            v47 = (_QWORD *)WdLogNewEntry5_WdWarning(v22, v15);
            v47[3] = a6;
            v47[4] = v42;
            v47[5] = v24;
            WdLogEvent5_WdWarning(v47);
          }
          else
          {
            v55 = v24;
            if ( (((unsigned __int8)a10 ^ (unsigned __int8)(v44 >> 7)) & 0x10) == 0 )
              goto LABEL_22;
            v46 = WdLogNewEntry5_WdAssertion(v22, v15);
            *(_QWORD *)(v46 + 24) = 1331LL;
            WdLogEvent5_WdAssertion(v46);
          }
          goto LABEL_44;
        }
        v24 = (struct VIDMM_VAD *)*((_QWORD *)v24 + 1);
      }
    }
  }
  v21 = CVirtualAddressAllocator::AllocateVirtualAddressRange(
          (CVirtualAddressAllocator *)a1,
          v15,
          a5,
          (unsigned __int64)a6,
          a7,
          a8,
          a9,
          &v55,
          1u);
  v24 = v55;
  if ( v21 < 0 )
    goto LABEL_22;
  v25 = (struct _RTL_BALANCED_NODE *)a1[6];
  LOBYTE(v23) = 0;
  v57 = 1;
  if ( !v25 )
    goto LABEL_14;
  while ( (int)CompareVadRangeAvl(v24, v25) < 0 )
  {
    v26 = v25->Children[0];
    if ( !v25->Children[0] )
    {
      LOBYTE(v23) = 0;
      goto LABEL_14;
    }
LABEL_10:
    v25 = v26;
  }
  v26 = v25->Children[1];
  if ( v26 )
    goto LABEL_10;
  LOBYTE(v23) = 1;
LABEL_14:
  RtlAvlInsertNodeEx(a1 + 6, v25, v23, v24);
  if ( (a10 & 0x10) != 0 )
    *((_DWORD *)v24 + 18) |= 0x800u;
  if ( (a10 & 8) != 0 || (a10 & 4) != 0 )
    v22 = *((_DWORD *)v24 + 18) & 0xFFFFFFF0 | 2;
  else
    v22 = *((_DWORD *)v24 + 18) & 0xFFFFFFF0 | 3;
  *((_DWORD *)v24 + 18) = v22;
  if ( ((unsigned int)Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
  {
    LODWORD(v54) = v22;
    McTemplateK0pqxx(v22, &CreateGpuVirtualAddressRange, v27, a1, v54, *((_QWORD *)v24 + 3), *((_QWORD *)v24 + 4));
  }
  v20 = a5;
LABEL_22:
  if ( v24 )
  {
    if ( !a13 || (v28 = operator new[](0x18uLL, 0x39346956u, PagedPool), (*a13 = v28) != 0LL) )
    {
      if ( (*((_BYTE *)v24 + 72) & 0xF) == 3 && ((a10 & 8) != 0 || (a10 & 4) != 0) )
      {
        v48 = WdLogNewEntry5_WdWarning(v22, v15);
        WdLogEvent5_WdWarning(v48);
      }
      else
      {
        if ( v57 )
          v19 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)v24 + 3);
        if ( a4 == 3 )
        {
          v31 = a2;
          goto LABEL_33;
        }
        VidMmAllocFromOwner = (__int64 **)GetVidMmAllocFromOwner(a4, a2);
        if ( VidMmAllocFromOwner )
        {
          v31 = **VidMmAllocFromOwner;
LABEL_33:
          if ( v31 )
            v20 = *(_QWORD *)(v31 + 16);
        }
        v18 = operator new[](0x88uLL, 0x39346956u, PagedPool);
        if ( v18 )
        {
          v33 = 0LL;
          v18[16] = 0;
          *((_QWORD *)v18 + 11) = a10;
          if ( v20 < a5 )
            v33 = (v20 - a3) >> 12;
          *(_QWORD *)v18 = v24;
          *((_QWORD *)v18 + 7) = a2;
          *((_QWORD *)v18 + 10) = a11;
          *((_QWORD *)v18 + 15) = v33;
          *((_QWORD *)v18 + 13) = (char *)v19 + a5;
          v34 = v18[16] & 0xFFFFFC00 | (16 * (a12 & 0x3F));
          *((_QWORD *)v18 + 9) = a3;
          *((_QWORD *)v18 + 12) = v19;
          *((_QWORD *)v18 + 14) = a3;
          v18[32] = 1;
          v18[16] = a4 & 0xF | v34;
          if ( a4 == 6 )
            *((_QWORD *)v18 + 11) |= 4uLL;
          memset(v18 + 2, 0, 0x30uLL);
          if ( (int)CVirtualAddressAllocator::AddVaRangeToVadRangeList(
                      (CVirtualAddressAllocator *)a1,
                      v24,
                      a12,
                      0LL,
                      (struct VIDMM_MAPPED_VA_RANGE *)v18) >= 0 )
          {
            if ( a13 )
            {
              v37 = (char *)v24 + 80;
              *((_QWORD *)*a13 + 2) = v18;
              v38 = (char **)*((_QWORD *)v37 + 1);
              v39 = (char *)*a13;
              if ( *v38 != v37 )
                __fastfail(3u);
              *(_QWORD *)v39 = v37;
              *((_QWORD *)v39 + 1) = v38;
              *v38 = v39;
              *((_QWORD *)v37 + 1) = v39;
            }
            goto LABEL_44;
          }
          v49 = WdLogNewEntry5_WdWarning(v36, v35);
          WdLogEvent5_WdWarning(v49);
          VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v18);
        }
        else
        {
          _InterlockedIncrement(&dword_1C0047690);
          v52 = WdLogNewEntry5_WdLowResource(v32);
          *(_QWORD *)(v52 + 24) = 1859LL;
          WdLogEvent5_WdLowResource(v52);
          v24 = v55;
        }
        v53 = WdLogNewEntry5_WdAssertion(v51, v50);
        *(_QWORD *)(v53 + 24) = 1374LL;
        WdLogEvent5_WdAssertion(v53);
      }
    }
    if ( v57 )
      CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal((CVirtualAddressAllocator *)a1, v24, v29);
    if ( a13 )
    {
      operator delete(*a13);
      *a13 = 0LL;
    }
    v18 = 0LL;
  }
LABEL_44:
  v13[1] = 0LL;
  ExReleasePushLockExclusiveEx(v13, 0LL);
  KeLeaveCriticalRegion();
  return v18;
}
