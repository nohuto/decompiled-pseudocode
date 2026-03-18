/*
 * XREFs of ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C00677E0
 * Callers:
 *     ?AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z @ 0x1C00674D0 (-AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z.c)
 *     ?Init@VIDMM_DMA_POOL@@QEAAJXZ @ 0x1C0073D84 (-Init@VIDMM_DMA_POOL@@QEAAJXZ.c)
 *     ?ResizeBuffersInPool@VIDMM_DMA_POOL@@QEAAJ_KII@Z @ 0x1C00A293C (-ResizeBuffersInPool@VIDMM_DMA_POOL@@QEAAJ_KII@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001DC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0002544 (--3@YAXPEAX@Z.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     McTemplateK0pppxxxp @ 0x1C0022C6C (McTemplateK0pppxxxp.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C0052448 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0054380 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAU_MDL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C005A4A8 (-CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUE.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C0061B40 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00622B0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0062D60 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00632F0 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1C00660F4 (-MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C0066190 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?LockAllPoolForAddRemove@VIDMM_DMA_POOL@@KAXE@Z @ 0x1C0073498 (-LockAllPoolForAddRemove@VIDMM_DMA_POOL@@KAXE@Z.c)
 *     ?AllocatePagingBufferResources@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00797CC (-AllocatePagingBufferResources@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_DMA_POOL::AddDmaBufferToPool(
        VIDMM_DMA_POOL *this,
        unsigned __int64 a2,
        int a3,
        unsigned int a4)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r13
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rsi
  int v12; // eax
  int v13; // edx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int OneAllocation; // r15d
  struct VIDMM_ALLOC **v17; // r13
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct VIDMM_ALLOC *v20; // rcx
  __int64 v21; // rax
  struct _VIDSCH_SYNC_OBJECT **v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rcx
  VIDMM_GLOBAL *v25; // rcx
  unsigned int v26; // ecx
  SIZE_T v27; // rax
  PVOID v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  SIZE_T v31; // rax
  PVOID v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  SIZE_T v35; // rax
  PVOID v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  unsigned int v39; // eax
  PVOID v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  unsigned int v43; // eax
  unsigned __int64 v44; // rdi
  struct VIDMM_VAD **VirtualAddressAllocator; // rbx
  unsigned int v46; // r8d
  __int64 v47; // r10
  __int64 v48; // r11
  struct VIDMM_ALLOC *v49; // rdx
  struct VIDMM_MAPPED_VA_RANGE *v50; // rax
  _QWORD *v51; // r8
  __int64 v52; // rbx
  _QWORD *v53; // rax
  __int64 v54; // rdx
  struct _ERESOURCE *v55; // rcx
  __int64 v56; // rcx
  PVOID v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  struct _KEVENT *v67; // rdx
  struct _VIDMM_GLOBAL_ALLOC *v68; // r8
  void *v69; // rcx
  __int64 v70; // rax
  __int64 v71; // rax
  struct VIDMM_ALLOC **v72; // [rsp+38h] [rbp-79h]
  struct VIDMM_VAD_PENDING_OPERATION *v73; // [rsp+40h] [rbp-71h]
  unsigned __int64 v74; // [rsp+A8h] [rbp-9h] BYREF
  unsigned __int64 v75; // [rsp+B0h] [rbp-1h] BYREF
  struct _VIDMM_MULTI_ALLOC *v76; // [rsp+B8h] [rbp+7h] BYREF
  unsigned __int64 v77; // [rsp+C0h] [rbp+Fh] BYREF
  struct _VIDSCH_SYNC_OBJECT *v78; // [rsp+C8h] [rbp+17h] BYREF
  __int64 v79; // [rsp+D0h] [rbp+1Fh]
  unsigned __int8 v80; // [rsp+118h] [rbp+67h] BYREF
  unsigned __int64 v81; // [rsp+120h] [rbp+6Fh]
  unsigned int v82; // [rsp+130h] [rbp+7Fh]

  v82 = a4;
  v81 = a2;
  v4 = a4;
  LODWORD(v5) = a3;
  v6 = a2;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = this;
  if ( *((_DWORD *)this + 23) > VIDMM_DMA_POOL::_NbDmaBufferLimitCompareWatermark )
  {
    v61 = *((_QWORD *)this + 2);
    if ( !v61
      || (v62 = *(_QWORD *)(v61 + 24), *(_DWORD *)(v62 + 328) != 2) && !*(_BYTE *)(*(_QWORD *)(v62 + 40) + 306LL) )
    {
      if ( VIDMM_DMA_POOL::_TotalDmaBufferBytes > VIDMM_DMA_POOL::_MaxDmaBufferBytes
        || VIDMM_DMA_POOL::_TotalAllocationListBytes > VIDMM_DMA_POOL::_MaxAllocationListBytes
        || VIDMM_DMA_POOL::_TotalPatchLocationListBytes > VIDMM_DMA_POOL::_MaxPatchLocationListBytes )
      {
        _InterlockedAdd(&dword_1C0040628, 1u);
        v63 = WdLogNewEntry5_WdLowResource(this, a2);
        *(_QWORD *)(v63 + 24) = 1100LL;
LABEL_66:
        WdLogEvent5_WdLowResource(v63);
        return 3221225495LL;
      }
    }
  }
  if ( (*((_BYTE *)this + 32) & 1) != 0 || (_DWORD)v5 )
  {
    v8 = operator new[](0xB8uLL, 0x32326956u, (POOL_TYPE)512);
    v11 = v8;
    if ( !v8 )
    {
      _InterlockedAdd(&dword_1C0040590, 1u);
      v63 = WdLogNewEntry5_WdLowResource(v10, v9);
      *(_QWORD *)(v63 + 24) = 1123LL;
      goto LABEL_66;
    }
    memset(v8, 0, 0xB8uLL);
    if ( (*((_BYTE *)this + 32) & 1) != 0 )
      v12 = ((~*(_BYTE *)(1552LL * *((unsigned int *)this + 2) + *(_QWORD *)(*(_QWORD *)this + 40168LL) + 436) & 4) << 13) | 0x10000040;
    else
      v12 = ((*(_BYTE *)(*((_QWORD *)this + 3) + 398LL) == 0) << 15) | 0x48;
    v13 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 300LL);
    if ( (v13 & 8) != 0 || (v13 & 0x10) != 0 )
      v12 |= 4u;
    OneAllocation = VIDMM_GLOBAL::CreateOneAllocation(
                      *(VIDMM_GLOBAL **)this,
                      *((struct VIDMM_DEVICE **)this + 2),
                      *((_DWORD *)this + 2),
                      v6,
                      v6,
                      0,
                      *((_DWORD *)this + 9),
                      0,
                      0,
                      (struct _DXGK_ALLOCATIONINFOFLAGS)v12,
                      0LL,
                      0LL,
                      0LL,
                      0xA0000000,
                      0,
                      0LL,
                      0,
                      0LL,
                      (struct _D3DDDI_SEGMENTPREFERENCE **)v11 + 7);
    if ( OneAllocation < 0 )
    {
      _InterlockedAdd(&dword_1C0040598, 1u);
      v65 = WdLogNewEntry5_WdLowResource(v15, v14);
      *(_QWORD *)(v65 + 24) = 1186LL;
      WdLogEvent5_WdLowResource(v65);
LABEL_71:
      operator delete((void *)v11[22]);
      operator delete((void *)v11[16]);
      operator delete((void *)v11[15]);
      operator delete((void *)v11[14]);
      operator delete((void *)v11[13]);
      v67 = (struct _KEVENT *)v11[8];
      if ( v67 )
        VIDMM_GLOBAL::CloseOneAllocation(*(VIDMM_GLOBAL **)this, v67, 0LL, 0, 0, 0LL);
      v68 = (struct _VIDMM_GLOBAL_ALLOC *)v11[7];
      if ( v68 )
        VIDMM_GLOBAL::DestroyOneAllocation(*(struct _KTHREAD ***)this, *((struct VIDMM_DEVICE **)this + 2), v68, 1);
      v69 = (void *)v11[9];
      if ( v69 )
        MmFreeContiguousMemorySpecifyCache(v69, v6, *((MEMORY_CACHING_TYPE *)v11 + 20));
      operator delete(v11);
      return (unsigned int)OneAllocation;
    }
    v17 = (struct VIDMM_ALLOC **)(v11 + 8);
    OneAllocation = VIDMM_GLOBAL::OpenOneAllocation(
                      *(VIDMM_GLOBAL **)this,
                      *((struct VIDMM_PROCESS ***)this + 2),
                      (struct _VIDMM_GLOBAL_ALLOC *)v11[7],
                      0LL,
                      0,
                      0LL,
                      (struct VIDMM_ALLOC **)v11 + 8,
                      &v80);
    if ( OneAllocation < 0 )
    {
      _InterlockedAdd(&dword_1C004059C, 1u);
      v66 = WdLogNewEntry5_WdLowResource(v19, v18);
      *(_QWORD *)(v66 + 24) = 1206LL;
      WdLogEvent5_WdLowResource(v66);
    }
    else
    {
      v20 = *v17;
      if ( (*((_DWORD *)*v17 + 7) & 3) != 0 )
        goto LABEL_19;
      if ( (*((_BYTE *)this + 32) & 1) != 0 )
      {
        VIDMM_GLOBAL::AllocatePagingBufferResources(*(VIDMM_GLOBAL **)this, *v17);
      }
      else
      {
        v21 = *((unsigned int *)this + 2);
        v74 = 0LL;
        v75 = 0LL;
        v76 = v20;
        v22 = (struct _VIDSCH_SYNC_OBJECT **)(*(_QWORD *)(*((_QWORD *)v20 + 1) + 72LL) + 160 * v21);
        OneAllocation = VIDMM_GLOBAL::MakeResident(
                          *(VIDMM_GLOBAL **)this,
                          (struct VIDMM_PAGING_QUEUE *)v22,
                          &v76,
                          1LL,
                          3,
                          &v74,
                          &v75);
        if ( OneAllocation == 259 )
        {
          v25 = *(VIDMM_GLOBAL **)this;
          v78 = v22[11];
          v77 = v74;
          VIDMM_GLOBAL::WaitForFences(v25, &v78, (char *)&v77, 1u, 0LL);
          OneAllocation = 0;
        }
        v4 = v82;
      }
      if ( OneAllocation >= 0 )
      {
LABEL_19:
        if ( (_DWORD)v5 )
        {
          v26 = 3;
          if ( (unsigned int)v5 > 3 )
            v26 = v5;
          v5 = v26;
          v27 = 8LL * v26;
          if ( !is_mul_ok(v26, 8uLL) )
            v27 = -1LL;
          v28 = operator new[](v27, 0x33326956u, (POOL_TYPE)512);
          v11[13] = v28;
          if ( !v28 )
          {
            _InterlockedAdd(&dword_1C00405AC, 1u);
            v71 = WdLogNewEntry5_WdLowResource(v30, v29);
            *(_QWORD *)(v71 + 24) = 1265LL;
            goto LABEL_81;
          }
          v31 = 24 * v5;
          if ( !is_mul_ok(v5, 0x18uLL) )
            v31 = -1LL;
          v32 = operator new[](v31, 0x34326956u, (POOL_TYPE)512);
          v11[14] = v32;
          if ( !v32 )
          {
            _InterlockedAdd(&dword_1C00405A4, 1u);
            v71 = WdLogNewEntry5_WdLowResource(v34, v33);
            *(_QWORD *)(v71 + 24) = 1278LL;
            goto LABEL_81;
          }
          memset(v32, 0, 24 * v5);
        }
        if ( (_DWORD)v4 )
        {
          v35 = 24 * v4;
          if ( !is_mul_ok(v4, 0x18uLL) )
            v35 = -1LL;
          v36 = operator new[](v35, 0x35326956u, PagedPool);
          v11[15] = v36;
          if ( !v36 )
          {
            _InterlockedAdd(&dword_1C00405A8, 1u);
            v71 = WdLogNewEntry5_WdLowResource(v38, v37);
            *(_QWORD *)(v71 + 24) = 1295LL;
            goto LABEL_81;
          }
          memset(v36, 0, 24 * v4);
        }
        v39 = *((_DWORD *)this + 22);
        if ( v39 )
        {
          v40 = operator new[](v39, 0x32336956u, (POOL_TYPE)512);
          v11[16] = v40;
          if ( !v40 )
          {
            _InterlockedAdd(&dword_1C0040608, 1u);
            v71 = WdLogNewEntry5_WdLowResource(v42, v41);
            *(_QWORD *)(v71 + 24) = 1309LL;
            goto LABEL_81;
          }
          memset(v40, 0, *((unsigned int *)this + 22));
        }
        if ( (*((_BYTE *)this + 32) & 1) == 0 )
          goto LABEL_38;
        v58 = operator new[](0x2000uLL, 0x37336956u, PagedPool);
        v11[22] = v58;
        if ( v58 )
        {
          memset(v58, 0, 0x2000uLL);
          *((_DWORD *)v11 + 42) = 0;
          *((_DWORD *)v11 + 43) = 0;
LABEL_38:
          v43 = v82;
          v11[20] = 0LL;
          v44 = v81;
          v11[5] = v81;
          *((_DWORD *)v11 + 12) = v5;
          *((_DWORD *)v11 + 13) = v43;
          v11[17] = this;
          if ( (*((_DWORD *)this + 8) & 0x10) != 0 )
          {
            if ( !*(_BYTE *)(*((_QWORD *)this + 3) + 399LL) )
            {
              VirtualAddressAllocator = (struct VIDMM_VAD **)VIDMM_PROCESS::GetVirtualAddressAllocator(
                                                               *(VIDMM_PROCESS **)(*((_QWORD *)this + 2) + 8LL),
                                                               *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 200LL),
                                                               *((_DWORD *)this + 2));
              if ( VirtualAddressAllocator )
              {
                v73 = *(struct VIDMM_VAD_PENDING_OPERATION **)(v48 + 2192);
                v72 = *(struct VIDMM_ALLOC ***)(v48 + 2184);
                v49 = *v17;
                v79 = (*(_DWORD *)(v47 + 32) < 0x6000u) | 0x12LL;
                v50 = (struct VIDMM_MAPPED_VA_RANGE *)CVirtualAddressAllocator::MapVirtualAddressRange(
                                                        VirtualAddressAllocator,
                                                        (__int64)v49,
                                                        0LL,
                                                        1,
                                                        v44,
                                                        0LL,
                                                        (unsigned __int64)v72,
                                                        (unsigned __int64)v73,
                                                        0x1000u,
                                                        v79,
                                                        0LL,
                                                        v46,
                                                        0LL);
                if ( v50 )
                {
                  v11[12] = *((_QWORD *)v50 + 12);
                  OneAllocation = VIDMM_GLOBAL::CommitVirtualAddressRange(
                                    *(VIDMM_GLOBAL **)this,
                                    (struct CVirtualAddressAllocator *)VirtualAddressAllocator,
                                    (struct VIDMM_PAGING_QUEUE *)(*(_QWORD *)(*((_QWORD *)*v17 + 1) + 72LL)
                                                                + 160LL * *((unsigned int *)this + 2)),
                                    v50,
                                    KeGetCurrentThread() == *(struct _KTHREAD **)(**(_QWORD **)this + 8LL),
                                    0LL,
                                    0LL,
                                    0LL);
                  if ( OneAllocation >= 0 )
                    goto LABEL_43;
                }
                goto LABEL_70;
              }
              goto LABEL_82;
            }
            v11[12] = *((_QWORD *)*v17 + 18);
          }
LABEL_43:
          *((_DWORD *)this + 8) &= ~8u;
          *((_DWORD *)this + 32) += *((_DWORD *)v11 + 10);
          v51 = (_QWORD *)*((_QWORD *)this + 2);
          *((_DWORD *)this + 33) += 24 * *((_DWORD *)v11 + 12);
          *((_DWORD *)this + 34) += 24 * *((_DWORD *)v11 + 13);
          if ( v51 )
          {
            v52 = *(_QWORD *)(*(_QWORD *)(v51[1] + 16LL) + 8LL * *(unsigned int *)(*(_QWORD *)(*v51 + 24LL) + 200LL));
            KeEnterCriticalRegion();
            ExAcquirePushLockExclusiveEx(v52 + 432, 0LL);
            *(_QWORD *)(v52 + 448) += v11[5];
            ++*(_DWORD *)(v52 + 440);
            *(_DWORD *)(v52 + 456) += 24 * *((_DWORD *)v11 + 12);
            *(_DWORD *)(v52 + 460) += 24 * *((_DWORD *)v11 + 13);
            ExReleasePushLockExclusiveEx(v52 + 432, 0LL);
            KeLeaveCriticalRegion();
          }
          _InterlockedExchangeAdd64(&VIDMM_DMA_POOL::_TotalDmaBufferBytes, v11[5]);
          _InterlockedExchangeAdd64(&VIDMM_DMA_POOL::_TotalAllocationListBytes, 24LL * *((unsigned int *)v11 + 12));
          _InterlockedExchangeAdd64(&VIDMM_DMA_POOL::_TotalPatchLocationListBytes, 24LL * *((unsigned int *)v11 + 13));
          ++*((_DWORD *)this + 23);
          VIDMM_DMA_POOL::LockAllPoolForAddRemove(0);
          v53 = (_QWORD *)((char *)this + 96);
          v54 = *((_QWORD *)this + 12);
          if ( *(VIDMM_DMA_POOL **)(v54 + 8) != (VIDMM_DMA_POOL *)((char *)this + 96) )
            __fastfail(3u);
          v55 = VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock;
          *v11 = v54;
          v11[1] = v53;
          *(_QWORD *)(v54 + 8) = v11;
          *v53 = v11;
          ExReleaseResourceLite(v55);
          if ( g_IsInternalReleaseOrDbg )
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v56) + 24) = v11;
          if ( bTracingEnabled )
          {
            if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0pppxxxp(
                *((unsigned int *)v11 + 13),
                *((unsigned int *)v11 + 12),
                *(_QWORD *)this,
                *((_QWORD *)this + 3),
                *(_QWORD *)(*(_QWORD *)this + 24LL),
                v11,
                v11[5],
                *((unsigned int *)v11 + 12),
                *((unsigned int *)v11 + 13),
                v11[7]);
          }
          return (unsigned int)OneAllocation;
        }
        _InterlockedAdd(&dword_1C00405B0, 1u);
        v71 = WdLogNewEntry5_WdLowResource(v60, v59);
        *(_QWORD *)(v71 + 24) = 1327LL;
LABEL_81:
        WdLogEvent5_WdLowResource(v71);
LABEL_82:
        OneAllocation = -1073741801;
        goto LABEL_70;
      }
      v70 = WdLogNewEntry5_WdAssertion(v24, v23);
      *(_QWORD *)(v70 + 24) = *v17;
      WdLogEvent5_WdAssertion(v70);
    }
LABEL_70:
    v6 = v81;
    goto LABEL_71;
  }
  v64 = WdLogNewEntry5_WdAssertion(this, a2);
  *(_QWORD *)(v64 + 24) = 1111LL;
  WdLogEvent5_WdAssertion(v64);
  return 3221225485LL;
}
