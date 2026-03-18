/*
 * XREFs of ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0052860
 * Callers:
 *     ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAXPEA_KI@Z @ 0x1C004F33C (-MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@.c)
 *     ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL_ALLOC@@0I0PEAU_MDL@@PEAE0@Z @ 0x1C005043C (-MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL.c)
 *     ?VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@E@Z @ 0x1C0057E60 (-VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_A.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C0062978 (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C0063ED4 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C0072D64 (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C00749C4 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x1C009718C (-VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001DE4 (--3@YAXPEAX@Z.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0002550 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C00025FC (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002798 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     Template_q @ 0x1C0014A58 (Template_q.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     Template_pqxx @ 0x1C0021118 (Template_pqxx.c)
 *     ?CompareVadAddressInsideAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C0050330 (-CompareVadAddressInsideAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C0051460 (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEA.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C00519B0 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1C0051C60 (-AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDM.c)
 *     ?CompareVadRangeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C00537D8 (-CompareVadRangeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

struct _LIST_ENTRY **__fastcall CVirtualAddressAllocator::MapVirtualAddressRange(
        __int64 a1,
        __int64 a2,
        struct _LIST_ENTRY *a3,
        int a4,
        unsigned __int64 a5,
        struct _RTL_BALANCED_NODE *a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        unsigned int a9,
        struct _LIST_ENTRY *a10,
        struct _LIST_ENTRY *a11,
        unsigned int a12,
        void **a13)
{
  __int64 v13; // rbp
  struct _RTL_AVL_TREE *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  struct _LIST_ENTRY **v18; // r15
  struct _RTL_BALANCED_NODE *v19; // r12
  unsigned __int64 v20; // r14
  int v21; // eax
  unsigned __int64 v22; // rcx
  __int64 v23; // r8
  struct VIDMM_VAD *v24; // rsi
  struct _RTL_BALANCED_NODE *v25; // rdi
  struct _RTL_BALANCED_NODE *v26; // rax
  __int64 v27; // r8
  unsigned int v28; // eax
  PVOID v29; // rax
  __int64 v30; // r8
  __int64 **VidMmAllocFromOwner; // rax
  __int64 v32; // rcx
  struct _LIST_ENTRY **v33; // rax
  __int64 v34; // rcx
  struct _LIST_ENTRY *v35; // r14
  unsigned int v36; // ecx
  __int64 v37; // rdx
  __int64 v38; // rcx
  char *v39; // rsi
  char **v40; // rcx
  char *v41; // rax
  char *v43; // rdi
  int v44; // eax
  unsigned __int64 v45; // rax
  __int64 v46; // rax
  int v47; // r9d
  __int64 v48; // rax
  _QWORD *v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rax
  struct VIDMM_MAPPED_VA_RANGE *v56; // [rsp+20h] [rbp-A8h]
  struct VIDMM_VAD *v57; // [rsp+50h] [rbp-78h] BYREF
  struct _RTL_BALANCED_NODE *v58[3]; // [rsp+58h] [rbp-70h] BYREF
  int v59; // [rsp+70h] [rbp-58h]
  char v60; // [rsp+D0h] [rbp+8h]

  v13 = a1 + 56;
  v58[2] = (struct _RTL_BALANCED_NODE *)(a1 + 56);
  if ( a1 != -56 && *(struct _KTHREAD **)(a1 + 64) == KeGetCurrentThread() )
  {
    v46 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v46 + 24) = 1167LL;
    WdLogEvent5_WdAssertion(v46);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v13, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v47 = *(_DWORD *)(v13 + 16);
      if ( v47 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v16, &EventBlockThread, v17, v47);
    }
    ExAcquirePushLockExclusiveEx(v13, 0LL);
  }
  v18 = 0LL;
  v19 = a6;
  v20 = a5;
  *(_QWORD *)(v13 + 8) = KeGetCurrentThread();
  v59 = 2;
  v57 = 0LL;
  v60 = 0;
  if ( a6 )
  {
    v24 = *(struct VIDMM_VAD **)(a1 + 48);
    v43 = (char *)a6 + a5;
    v58[0] = a6;
    while ( v24 )
    {
      v44 = CompareVadAddressInsideAvl(v58, (struct _RTL_BALANCED_NODE *)v24);
      if ( v44 < 0 )
      {
        v24 = *(struct VIDMM_VAD **)v24;
      }
      else
      {
        if ( v44 <= 0 )
        {
          v45 = *((unsigned int *)v24 + 18);
          v22 = *((_QWORD *)v24 + 4);
          if ( (v45 & 0x1000) != 0 )
            v22 -= 4096LL;
          if ( v22 < (unsigned __int64)v43 )
          {
            v49 = (_QWORD *)WdLogNewEntry5_WdWarning(v22, v15);
            v49[3] = a6;
            v49[4] = v43;
            v49[5] = v24;
            WdLogEvent5_WdWarning(v49);
          }
          else
          {
            v57 = v24;
            if ( (((unsigned __int8)a10 ^ (unsigned __int8)(v45 >> 7)) & 0x10) == 0 )
              goto LABEL_20;
            v48 = WdLogNewEntry5_WdAssertion(v22, v15);
            *(_QWORD *)(v48 + 24) = 1331LL;
            WdLogEvent5_WdAssertion(v48);
          }
          goto LABEL_40;
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
          &v57,
          1u);
  v24 = v57;
  if ( v21 < 0 )
    goto LABEL_20;
  v25 = *(struct _RTL_BALANCED_NODE **)(a1 + 48);
  LOBYTE(v23) = 0;
  v60 = 1;
  if ( !v25 )
    goto LABEL_12;
  while ( (int)CompareVadRangeAvl(v24, v25) >= 0 )
  {
    v26 = v25->Children[1];
    if ( !v26 )
    {
      LOBYTE(v23) = 1;
      goto LABEL_12;
    }
LABEL_10:
    v25 = v26;
  }
  v26 = v25->Children[0];
  if ( v25->Children[0] )
    goto LABEL_10;
  LOBYTE(v23) = 0;
LABEL_12:
  RtlAvlInsertNodeEx(a1 + 48, v25, v23, v24);
  if ( ((unsigned __int8)a10 & 0x10) != 0 )
    *((_DWORD *)v24 + 18) |= 0x800u;
  if ( ((unsigned __int8)a10 & 8) != 0 || ((unsigned __int8)a10 & 4) != 0 )
    v28 = *((_DWORD *)v24 + 18) & 0xFFFFFFF0 | 2;
  else
    v28 = *((_DWORD *)v24 + 18) & 0xFFFFFFF0 | 3;
  *((_DWORD *)v24 + 18) = v28;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40000) != 0 )
  {
    LODWORD(v56) = *((_DWORD *)v24 + 18);
    Template_pqxx(v22, &CreateGpuVirtualAddressRange, v27, a1, v56, *((_QWORD *)v24 + 3), *((_QWORD *)v24 + 4));
  }
  v20 = a5;
LABEL_20:
  if ( v24 )
  {
    if ( !a13 || (v29 = operator new[](0x18uLL, 0x39346956u, PagedPool), (*a13 = v29) != 0LL) )
    {
      if ( (*((_BYTE *)v24 + 72) & 0xF) == 3 && (((unsigned __int8)a10 & 8) != 0 || ((unsigned __int8)a10 & 4) != 0) )
      {
        v50 = WdLogNewEntry5_WdWarning(v22, v15);
        WdLogEvent5_WdWarning(v50);
      }
      else
      {
        if ( v60 )
          v19 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)v24 + 3);
        if ( a4 == 3 )
        {
          v32 = a2;
          goto LABEL_31;
        }
        VidMmAllocFromOwner = (__int64 **)GetVidMmAllocFromOwner(a4, a2);
        if ( VidMmAllocFromOwner )
        {
          v32 = **VidMmAllocFromOwner;
LABEL_31:
          if ( v32 )
            v20 = *(_QWORD *)(v32 + 16);
        }
        v33 = (struct _LIST_ENTRY **)operator new[](0x88uLL, 0x39346956u, PagedPool);
        v18 = v33;
        if ( v33 )
        {
          if ( v20 < a5 )
            v35 = (struct _LIST_ENTRY *)((v20 - (unsigned __int64)a3) >> 12);
          else
            v35 = 0LL;
          *v33 = (struct _LIST_ENTRY *)v24;
          v33[7] = (struct _LIST_ENTRY *)a2;
          v33[10] = a11;
          v33[13] = (struct _LIST_ENTRY *)((char *)v19 + a5);
          *((_DWORD *)v33 + 16) = 0;
          v36 = (_DWORD)v33[8] & 0xFFFFFC00 | (16 * (a12 & 0x3F));
          v33[9] = a3;
          v33[14] = a3;
          v33[11] = a10;
          *((_DWORD *)v33 + 16) = a4 & 0xF | v36;
          v33[12] = (struct _LIST_ENTRY *)v19;
          v33[15] = v35;
          *((_DWORD *)v33 + 32) = 1;
          memset(v33 + 1, 0, 0x30uLL);
          if ( (int)CVirtualAddressAllocator::AddVaRangeToVadRangeList((struct _KTHREAD **)a1, v24, a12, 0LL, v18) >= 0 )
          {
            if ( a13 )
            {
              v39 = (char *)v24 + 80;
              *((_QWORD *)*a13 + 2) = v18;
              v40 = (char **)*((_QWORD *)v39 + 1);
              v41 = (char *)*a13;
              if ( *v40 != v39 )
                __fastfail(3u);
              *(_QWORD *)v41 = v39;
              *((_QWORD *)v41 + 1) = v40;
              *v40 = v41;
              *((_QWORD *)v39 + 1) = v41;
            }
            goto LABEL_40;
          }
          v51 = WdLogNewEntry5_WdWarning(v38, v37);
          WdLogEvent5_WdWarning(v51);
          VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((volatile signed __int32 *)v18);
        }
        else
        {
          _InterlockedIncrement(&dword_1C003C680);
          v54 = WdLogNewEntry5_WdLowResource(v34);
          *(_QWORD *)(v54 + 24) = 1850LL;
          WdLogEvent5_WdLowResource(v54);
          v24 = v57;
        }
        v55 = WdLogNewEntry5_WdAssertion(v53, v52);
        *(_QWORD *)(v55 + 24) = 1374LL;
        WdLogEvent5_WdAssertion(v55);
      }
    }
    if ( v60 )
      CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal((CVirtualAddressAllocator *)a1, v24, v30);
    if ( a13 )
    {
      operator delete(*a13);
      *a13 = 0LL;
    }
    v18 = 0LL;
  }
LABEL_40:
  *(_QWORD *)(v13 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v13, 0LL);
  KeLeaveCriticalRegion();
  return v18;
}
