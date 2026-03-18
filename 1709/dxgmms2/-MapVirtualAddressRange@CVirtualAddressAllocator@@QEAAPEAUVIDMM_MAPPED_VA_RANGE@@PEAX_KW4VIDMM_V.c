/*
 * XREFs of ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0054380
 * Callers:
 *     ?VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@E@Z @ 0x1C005AF50 (-VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_A.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C0065CE0 (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C00677E0 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAXPEA_KI@Z @ 0x1C006FF8C (-MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@.c)
 *     ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL_ALLOC@@0I0PEAU_MDL@@PEAE0@Z @ 0x1C0072574 (-MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL.c)
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C0079218 (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C007B468 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x1C009F698 (-VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z.c)
 * Callees:
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C00018AC (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0001AB8 (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001DC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0002544 (--3@YAXPEAX@Z.c)
 *     McTemplateK0q @ 0x1C0016F44 (McTemplateK0q.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     McTemplateK0pqxx @ 0x1C0023024 (McTemplateK0pqxx.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0053510 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1C00537D0 (-AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDM.c)
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C00554B0 (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEA.c)
 *     ?CompareVadRangeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C0055734 (-CompareVadRangeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?CompareVadAddressInsideAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C00731D0 (-CompareVadAddressInsideAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

_QWORD *__fastcall CVirtualAddressAllocator::MapVirtualAddressRange(
        struct VIDMM_VAD **a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        unsigned int a9,
        __int64 a10,
        __int64 a11,
        unsigned int a12,
        void **a13)
{
  struct VIDMM_VAD **v13; // r15
  struct _RTL_AVL_TREE *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  _QWORD *v18; // r14
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // rbp
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
  _QWORD *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned __int64 v36; // rbp
  unsigned int v37; // eax
  __int64 v38; // rcx
  char *v39; // rsi
  char **v40; // rcx
  char *v41; // rax
  int v43; // r9d
  unsigned __int64 v44; // rdi
  int v45; // eax
  unsigned __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  _QWORD *v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rax
  struct VIDMM_MAPPED_VA_RANGE *v56; // [rsp+20h] [rbp-88h]
  struct VIDMM_VAD *v57; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v58; // [rsp+58h] [rbp-50h] BYREF
  char v59; // [rsp+B0h] [rbp+8h]

  v13 = a1 + 7;
  if ( a1 != (struct VIDMM_VAD **)-56LL && a1[8] == KeGetCurrentThread() )
  {
    v47 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v47 + 24) = 1214LL;
    WdLogEvent5_WdAssertion(v47);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v13, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v43 = *((_DWORD *)v13 + 4);
      if ( v43 != -1 && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v16, (__int64)&EventBlockThread, v17, v43);
    }
    ExAcquirePushLockExclusiveEx(v13, 0LL);
  }
  v18 = 0LL;
  v19 = a6;
  v20 = a5;
  v13[1] = KeGetCurrentThread();
  v57 = 0LL;
  v59 = 0;
  if ( a6 )
  {
    v24 = a1[6];
    v44 = a6 + a5;
    v58 = a6;
    while ( v24 )
    {
      v45 = CompareVadAddressInsideAvl(&v58, (struct _RTL_BALANCED_NODE *)v24);
      if ( v45 < 0 )
      {
        v24 = *(struct VIDMM_VAD **)v24;
      }
      else
      {
        if ( v45 <= 0 )
        {
          v46 = *((unsigned int *)v24 + 18);
          v22 = *((_QWORD *)v24 + 4);
          if ( (v46 & 0x1000) != 0 )
            v22 -= 4096LL;
          if ( v22 < v44 )
          {
            v49 = (_QWORD *)WdLogNewEntry5_WdWarning(v22);
            v49[3] = a6;
            v49[4] = v44;
            v49[5] = v24;
            WdLogEvent5_WdWarning(v49);
          }
          else
          {
            v57 = v24;
            if ( (((unsigned __int8)a10 ^ (unsigned __int8)(v46 >> 7)) & 0x10) == 0 )
              goto LABEL_20;
            v48 = WdLogNewEntry5_WdAssertion(v22, v15);
            *(_QWORD *)(v48 + 24) = 1331LL;
            WdLogEvent5_WdAssertion(v48);
          }
          goto LABEL_42;
        }
        v24 = (struct VIDMM_VAD *)*((_QWORD *)v24 + 1);
      }
    }
  }
  v21 = CVirtualAddressAllocator::AllocateVirtualAddressRange(
          (CVirtualAddressAllocator *)a1,
          v15,
          a5,
          a6,
          a7,
          a8,
          a9,
          &v57,
          1u);
  v24 = v57;
  if ( v21 < 0 )
    goto LABEL_20;
  v25 = (struct _RTL_BALANCED_NODE *)a1[6];
  LOBYTE(v23) = 0;
  v59 = 1;
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
  RtlAvlInsertNodeEx(a1 + 6, v25, v23, v24);
  if ( (a10 & 0x10) != 0 )
    *((_DWORD *)v24 + 18) |= 0x800u;
  if ( (a10 & 8) != 0 || (a10 & 4) != 0 )
    v28 = *((_DWORD *)v24 + 18) & 0xFFFFFFF0 | 2;
  else
    v28 = *((_DWORD *)v24 + 18) & 0xFFFFFFF0 | 3;
  *((_DWORD *)v24 + 18) = v28;
  if ( ((unsigned int)Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
  {
    LODWORD(v56) = *((_DWORD *)v24 + 18);
    McTemplateK0pqxx(v22, &CreateGpuVirtualAddressRange, v27, a1, v56, *((_QWORD *)v24 + 3), *((_QWORD *)v24 + 4));
  }
  v20 = a5;
LABEL_20:
  if ( v24 )
  {
    if ( !a13 || (v29 = operator new[](0x18uLL, 0x39346956u, PagedPool), (*a13 = v29) != 0LL) )
    {
      if ( (*((_BYTE *)v24 + 72) & 0xF) == 3 && ((a10 & 8) != 0 || (a10 & 4) != 0) )
      {
        v50 = WdLogNewEntry5_WdWarning(v22);
        WdLogEvent5_WdWarning(v50);
      }
      else
      {
        if ( v59 )
          v19 = *((_QWORD *)v24 + 3);
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
        v33 = operator new[](0x88uLL, 0x39346956u, PagedPool);
        v18 = v33;
        if ( v33 )
        {
          if ( v20 < a5 )
            v36 = (v20 - a3) >> 12;
          else
            v36 = 0LL;
          *v33 = v24;
          v33[7] = a2;
          v33[10] = a11;
          v33[13] = v19 + a5;
          *((_DWORD *)v33 + 16) = 0;
          v37 = v33[8] & 0xFFFFFC00;
          v18[11] = a10;
          v18[9] = a3;
          v18[12] = v19;
          v18[14] = a3;
          v18[15] = v36;
          *((_DWORD *)v18 + 32) = 1;
          *((_DWORD *)v18 + 16) = a4 & 0xF | v37 | (16 * (a12 & 0x3F));
          if ( a4 == 6 )
            v18[11] |= 4uLL;
          memset(v18 + 1, 0, 0x30uLL);
          if ( (int)CVirtualAddressAllocator::AddVaRangeToVadRangeList(
                      (CVirtualAddressAllocator *)a1,
                      v24,
                      a12,
                      0LL,
                      (struct VIDMM_MAPPED_VA_RANGE *)v18) >= 0 )
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
            goto LABEL_42;
          }
          v51 = WdLogNewEntry5_WdWarning(v38);
          WdLogEvent5_WdWarning(v51);
          VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((volatile signed __int32 *)v18);
        }
        else
        {
          _InterlockedIncrement(&dword_1C0040690);
          v54 = WdLogNewEntry5_WdLowResource(v35, v34);
          *(_QWORD *)(v54 + 24) = 1850LL;
          WdLogEvent5_WdLowResource(v54);
          v24 = v57;
        }
        v55 = WdLogNewEntry5_WdAssertion(v53, v52);
        *(_QWORD *)(v55 + 24) = 1374LL;
        WdLogEvent5_WdAssertion(v55);
      }
    }
    if ( v59 )
      CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal((CVirtualAddressAllocator *)a1, v24, v30);
    if ( a13 )
    {
      operator delete(*a13);
      *a13 = 0LL;
    }
    v18 = 0LL;
  }
LABEL_42:
  v13[1] = 0LL;
  ExReleasePushLockExclusiveEx(v13, 0LL);
  KeLeaveCriticalRegion();
  return v18;
}
