/*
 * XREFs of ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C00573B4
 * Callers:
 *     ?AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z @ 0x1C00570A0 (-AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z.c)
 *     ?Init@VIDMM_DMA_POOL@@QEAAJXZ @ 0x1C007B10C (-Init@VIDMM_DMA_POOL@@QEAAJXZ.c)
 *     ?ResizeBuffersInPool@VIDMM_DMA_POOL@@QEAAJ_KII@Z @ 0x1C00A9808 (-ResizeBuffersInPool@VIDMM_DMA_POOL@@QEAAJ_KII@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0002BF0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0004C1C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     McTemplateK0pppxxxp @ 0x1C00255B4 (McTemplateK0pppxxxp.c)
 *     ?LockAllPoolForAddRemove@VIDMM_DMA_POOL@@KAXE@Z @ 0x1C0056DD4 (-LockAllPoolForAddRemove@VIDMM_DMA_POOL@@KAXE@Z.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C005A980 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAU_MDL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C005ECE4 (-CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUE.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C0065EE0 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00665C0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0067090 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0067620 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1C006A520 (-MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C006AA20 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C0074864 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?AllocatePagingBufferResources@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C007D378 (-AllocatePagingBufferResources@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
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
  __int64 v9; // rcx
  _QWORD *v10; // rsi
  VIDMM_GLOBAL *v11; // r10
  __int64 v12; // rdx
  int v13; // eax
  int v14; // r8d
  __int64 v15; // rcx
  int OneAllocation; // r15d
  struct VIDMM_ALLOC **v17; // r13
  __int64 v18; // rcx
  struct VIDMM_ALLOC *v19; // rcx
  __int64 v20; // rax
  PVOID *v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rcx
  VIDMM_GLOBAL *v24; // rcx
  unsigned int v25; // ecx
  SIZE_T v26; // rax
  PVOID v27; // rax
  __int64 v28; // rcx
  SIZE_T v29; // rax
  PVOID v30; // rax
  __int64 v31; // rcx
  SIZE_T v32; // rax
  PVOID v33; // rax
  __int64 v34; // rcx
  unsigned int v35; // eax
  PVOID v36; // rax
  __int64 v37; // rcx
  unsigned __int64 v38; // rax
  __int64 v39; // rdi
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // rbx
  __int64 v41; // r10
  int v42; // r11d
  struct VIDMM_ALLOC *v43; // rdx
  struct VIDMM_MAPPED_VA_RANGE *v44; // rax
  _QWORD *v45; // r8
  __int64 v46; // rbx
  _QWORD *v47; // rax
  __int64 v48; // rdx
  struct _ERESOURCE *v49; // rcx
  __int64 v50; // rcx
  PVOID v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  struct VIDMM_ALLOC *v60; // rdx
  struct _VIDMM_GLOBAL_ALLOC *v61; // r8
  void *v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rax
  struct VIDMM_ALLOC **v65; // [rsp+38h] [rbp-89h]
  struct VIDMM_VAD_PENDING_OPERATION *v66; // [rsp+40h] [rbp-81h]
  struct _MDL v67; // [rsp+B0h] [rbp-11h] BYREF
  unsigned __int8 v68; // [rsp+128h] [rbp+67h] BYREF
  unsigned __int64 v69; // [rsp+130h] [rbp+6Fh]
  unsigned int v70; // [rsp+140h] [rbp+7Fh]

  v70 = a4;
  v69 = a2;
  v4 = a4;
  LODWORD(v5) = a3;
  v6 = a2;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = this;
  if ( *((_DWORD *)this + 23) > VIDMM_DMA_POOL::_NbDmaBufferLimitCompareWatermark )
  {
    v54 = *((_QWORD *)this + 2);
    if ( !v54
      || (v55 = *(_QWORD *)(v54 + 24), *(_DWORD *)(v55 + 328) != 2) && !*(_BYTE *)(*(_QWORD *)(v55 + 40) + 322LL) )
    {
      if ( VIDMM_DMA_POOL::_TotalDmaBufferBytes > VIDMM_DMA_POOL::_MaxDmaBufferBytes
        || VIDMM_DMA_POOL::_TotalAllocationListBytes > VIDMM_DMA_POOL::_MaxAllocationListBytes
        || VIDMM_DMA_POOL::_TotalPatchLocationListBytes > VIDMM_DMA_POOL::_MaxPatchLocationListBytes )
      {
        _InterlockedAdd(&dword_1C0047628, 1u);
        v56 = WdLogNewEntry5_WdLowResource(this);
        *(_QWORD *)(v56 + 24) = 1100LL;
LABEL_65:
        WdLogEvent5_WdLowResource(v56);
        return 3221225495LL;
      }
    }
  }
  if ( (*((_BYTE *)this + 32) & 1) != 0 || (_DWORD)v5 )
  {
    v8 = operator new[](0xB8uLL, 0x32326956u, (POOL_TYPE)512);
    v10 = v8;
    if ( !v8 )
    {
      _InterlockedAdd(&dword_1C0047590, 1u);
      v56 = WdLogNewEntry5_WdLowResource(v9);
      *(_QWORD *)(v56 + 24) = 1123LL;
      goto LABEL_65;
    }
    memset(v8, 0, 0xB8uLL);
    v11 = *(VIDMM_GLOBAL **)this;
    if ( (*((_BYTE *)this + 32) & 1) != 0 )
    {
      v12 = *((unsigned int *)this + 2);
      v13 = ((~*(_BYTE *)(1560 * v12 + *((_QWORD *)v11 + 5090) + 436) & 4) << 13) | 0x10000040;
    }
    else
    {
      LODWORD(v12) = *((_DWORD *)this + 2);
      v13 = *(_BYTE *)(*((_QWORD *)this + 3) + 398LL) != 0 ? 72 : 32840;
    }
    v14 = *(_DWORD *)(*((_QWORD *)v11 + 3) + 300LL);
    if ( (v14 & 8) != 0 || (v14 & 0x10) != 0 )
      v13 |= 4u;
    OneAllocation = VIDMM_GLOBAL::CreateOneAllocation(
                      v11,
                      *((struct VIDMM_DEVICE **)this + 2),
                      v12,
                      v6,
                      v6,
                      0,
                      *((_DWORD *)this + 9),
                      0,
                      0,
                      (struct _DXGK_ALLOCATIONINFOFLAGS)v13,
                      0LL,
                      0LL,
                      0LL,
                      0xA0000000,
                      0,
                      0LL,
                      0,
                      0LL,
                      (struct _VIDMM_GLOBAL_ALLOC **)v10 + 7);
    if ( OneAllocation < 0 )
    {
      _InterlockedAdd(&dword_1C0047598, 1u);
      v58 = WdLogNewEntry5_WdLowResource(v15);
      *(_QWORD *)(v58 + 24) = 1186LL;
      WdLogEvent5_WdLowResource(v58);
LABEL_70:
      operator delete((void *)v10[22]);
      operator delete((void *)v10[16]);
      operator delete((void *)v10[15]);
      operator delete((void *)v10[14]);
      operator delete((void *)v10[13]);
      v60 = (struct VIDMM_ALLOC *)v10[8];
      if ( v60 )
        VIDMM_GLOBAL::CloseOneAllocation(*(VIDMM_GLOBAL **)this, v60, 0LL, 0, 0, 0LL);
      v61 = (struct _VIDMM_GLOBAL_ALLOC *)v10[7];
      if ( v61 )
        VIDMM_GLOBAL::DestroyOneAllocation(*(VIDMM_GLOBAL **)this, *((struct VIDMM_DEVICE **)this + 2), v61, 1);
      v62 = (void *)v10[9];
      if ( v62 )
        MmFreeContiguousMemorySpecifyCache(v62, v6, *((MEMORY_CACHING_TYPE *)v10 + 20));
      operator delete(v10);
      return (unsigned int)OneAllocation;
    }
    v17 = (struct VIDMM_ALLOC **)(v10 + 8);
    OneAllocation = VIDMM_GLOBAL::OpenOneAllocation(
                      *(VIDMM_GLOBAL **)this,
                      *((struct VIDMM_DEVICE **)this + 2),
                      (struct _VIDMM_GLOBAL_ALLOC *)v10[7],
                      0LL,
                      0,
                      0LL,
                      (struct VIDMM_ALLOC **)v10 + 8,
                      &v68);
    if ( OneAllocation < 0 )
    {
      _InterlockedAdd(&dword_1C004759C, 1u);
      v59 = WdLogNewEntry5_WdLowResource(v18);
      *(_QWORD *)(v59 + 24) = 1206LL;
      WdLogEvent5_WdLowResource(v59);
    }
    else
    {
      v19 = *v17;
      if ( (*((_DWORD *)*v17 + 7) & 3) != 0 )
        goto LABEL_19;
      if ( (*((_BYTE *)this + 32) & 1) != 0 )
      {
        VIDMM_GLOBAL::AllocatePagingBufferResources(*(VIDMM_GLOBAL **)this, *v17);
      }
      else
      {
        v20 = *((unsigned int *)this + 2);
        v67.Next = 0LL;
        *(_QWORD *)&v67.Size = 0LL;
        v67.Process = v19;
        v21 = (PVOID *)(*(_QWORD *)(*((_QWORD *)v19 + 1) + 72LL) + 160 * v20);
        OneAllocation = VIDMM_GLOBAL::MakeResident(
                          *(VIDMM_GLOBAL **)this,
                          (struct VIDMM_PAGING_QUEUE *)v21,
                          &v67.Process,
                          1uLL,
                          3u,
                          (unsigned __int64 *)&v67,
                          (unsigned __int64 *)&v67.Size);
        if ( OneAllocation == 259 )
        {
          v24 = *(VIDMM_GLOBAL **)this;
          v67.StartVa = v21[11];
          v67.MappedSystemVa = v67.Next;
          VIDMM_GLOBAL::WaitForFences(
            v24,
            (struct _VIDSCH_SYNC_OBJECT **)&v67.StartVa,
            (const unsigned __int64 *)&v67.MappedSystemVa,
            1u,
            0LL);
          OneAllocation = 0;
        }
        v4 = v70;
      }
      if ( OneAllocation >= 0 )
      {
LABEL_19:
        if ( (_DWORD)v5 )
        {
          v25 = 3;
          if ( (unsigned int)v5 > 3 )
            v25 = v5;
          v5 = v25;
          v26 = 8LL * v25;
          if ( !is_mul_ok(v25, 8uLL) )
            v26 = -1LL;
          v27 = operator new[](v26, 0x33326956u, (POOL_TYPE)512);
          v10[13] = v27;
          if ( !v27 )
          {
            _InterlockedAdd(&dword_1C00475AC, 1u);
            v64 = WdLogNewEntry5_WdLowResource(v28);
            *(_QWORD *)(v64 + 24) = 1265LL;
            goto LABEL_80;
          }
          v29 = 24 * v5;
          if ( !is_mul_ok(v5, 0x18uLL) )
            v29 = -1LL;
          v30 = operator new[](v29, 0x34326956u, (POOL_TYPE)512);
          v10[14] = v30;
          if ( !v30 )
          {
            _InterlockedAdd(&dword_1C00475A4, 1u);
            v64 = WdLogNewEntry5_WdLowResource(v31);
            *(_QWORD *)(v64 + 24) = 1278LL;
            goto LABEL_80;
          }
          memset(v30, 0, 24 * v5);
        }
        if ( (_DWORD)v4 )
        {
          v32 = 24 * v4;
          if ( !is_mul_ok(v4, 0x18uLL) )
            v32 = -1LL;
          v33 = operator new[](v32, 0x35326956u, PagedPool);
          v10[15] = v33;
          if ( !v33 )
          {
            _InterlockedAdd(&dword_1C00475A8, 1u);
            v64 = WdLogNewEntry5_WdLowResource(v34);
            *(_QWORD *)(v64 + 24) = 1295LL;
            goto LABEL_80;
          }
          memset(v33, 0, 24 * v4);
          LODWORD(v4) = v70;
        }
        v35 = *((_DWORD *)this + 22);
        if ( v35 )
        {
          v36 = operator new[](v35, 0x32336956u, (POOL_TYPE)512);
          v10[16] = v36;
          if ( !v36 )
          {
            _InterlockedAdd(&dword_1C0047608, 1u);
            v64 = WdLogNewEntry5_WdLowResource(v37);
            *(_QWORD *)(v64 + 24) = 1309LL;
            goto LABEL_80;
          }
          memset(v36, 0, *((unsigned int *)this + 22));
        }
        if ( (*((_BYTE *)this + 32) & 1) == 0 )
          goto LABEL_38;
        v52 = operator new[](0x2000uLL, 0x37336956u, PagedPool);
        v10[22] = v52;
        if ( v52 )
        {
          memset(v52, 0, 0x2000uLL);
          *((_DWORD *)v10 + 42) = 0;
          *((_DWORD *)v10 + 43) = 0;
LABEL_38:
          v38 = v69;
          v10[20] = 0LL;
          v10[5] = v38;
          *((_DWORD *)v10 + 12) = v5;
          *((_DWORD *)v10 + 13) = v4;
          v10[17] = this;
          if ( (*((_DWORD *)this + 8) & 0x10) != 0 )
          {
            if ( !*(_BYTE *)(*((_QWORD *)this + 3) + 399LL) )
            {
              v39 = *(_QWORD *)this;
              VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                          *(VIDMM_PROCESS **)(*((_QWORD *)this + 2) + 8LL),
                                          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 200LL),
                                          *((_DWORD *)this + 2));
              if ( VirtualAddressAllocator )
              {
                v66 = *(struct VIDMM_VAD_PENDING_OPERATION **)(v41 + 2328);
                v65 = *(struct VIDMM_ALLOC ***)(v41 + 2320);
                v43 = *v17;
                *(_QWORD *)&v67.ByteCount = (*(_DWORD *)(v39 + 32) < 0x6000u) + 18LL;
                v44 = (struct VIDMM_MAPPED_VA_RANGE *)CVirtualAddressAllocator::MapVirtualAddressRange(
                                                        VirtualAddressAllocator,
                                                        v43,
                                                        0LL,
                                                        1LL,
                                                        v69,
                                                        0LL,
                                                        v65,
                                                        v66,
                                                        4096,
                                                        *(_QWORD *)&v67.ByteCount,
                                                        0LL,
                                                        v42,
                                                        0LL);
                if ( v44 )
                {
                  v10[12] = *((_QWORD *)v44 + 12);
                  OneAllocation = VIDMM_GLOBAL::CommitVirtualAddressRange(
                                    *(VIDMM_GLOBAL **)this,
                                    VirtualAddressAllocator,
                                    (struct VIDMM_PAGING_QUEUE *)(*(_QWORD *)(*((_QWORD *)*v17 + 1) + 72LL)
                                                                + 160LL * *((unsigned int *)this + 2)),
                                    v44,
                                    KeGetCurrentThread() == *(struct _KTHREAD **)(**(_QWORD **)this + 8LL),
                                    0LL,
                                    0LL,
                                    0LL);
                  if ( OneAllocation >= 0 )
                    goto LABEL_43;
                }
                goto LABEL_69;
              }
              goto LABEL_81;
            }
            v10[12] = *((_QWORD *)*v17 + 18);
          }
LABEL_43:
          *((_DWORD *)this + 8) &= ~8u;
          *((_DWORD *)this + 32) += *((_DWORD *)v10 + 10);
          v45 = (_QWORD *)*((_QWORD *)this + 2);
          *((_DWORD *)this + 33) += 24 * *((_DWORD *)v10 + 12);
          *((_DWORD *)this + 34) += 24 * *((_DWORD *)v10 + 13);
          if ( v45 )
          {
            v46 = *(_QWORD *)(*(_QWORD *)(v45[1] + 16LL) + 8LL * *(unsigned int *)(*(_QWORD *)(*v45 + 24LL) + 200LL));
            KeEnterCriticalRegion();
            ExAcquirePushLockExclusiveEx(v46 + 432, 0LL);
            *(_QWORD *)(v46 + 448) += v10[5];
            ++*(_DWORD *)(v46 + 440);
            *(_DWORD *)(v46 + 456) += 24 * *((_DWORD *)v10 + 12);
            *(_DWORD *)(v46 + 460) += 24 * *((_DWORD *)v10 + 13);
            ExReleasePushLockExclusiveEx(v46 + 432, 0LL);
            KeLeaveCriticalRegion();
          }
          _InterlockedExchangeAdd64(&VIDMM_DMA_POOL::_TotalDmaBufferBytes, v10[5]);
          _InterlockedExchangeAdd64(&VIDMM_DMA_POOL::_TotalAllocationListBytes, 24LL * *((unsigned int *)v10 + 12));
          _InterlockedExchangeAdd64(&VIDMM_DMA_POOL::_TotalPatchLocationListBytes, 24LL * *((unsigned int *)v10 + 13));
          ++*((_DWORD *)this + 23);
          VIDMM_DMA_POOL::LockAllPoolForAddRemove(0);
          v47 = (_QWORD *)((char *)this + 96);
          v48 = *((_QWORD *)this + 12);
          if ( *(VIDMM_DMA_POOL **)(v48 + 8) != (VIDMM_DMA_POOL *)((char *)this + 96) )
            __fastfail(3u);
          v49 = VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock;
          *v10 = v48;
          v10[1] = v47;
          *(_QWORD *)(v48 + 8) = v10;
          *v47 = v10;
          ExReleaseResourceLite(v49);
          if ( g_IsInternalReleaseOrDbg )
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v50) + 24) = v10;
          if ( bTracingEnabled )
          {
            if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0pppxxxp(
                *((unsigned int *)v10 + 13),
                *((unsigned int *)v10 + 12),
                *(_QWORD *)this,
                *((_QWORD *)this + 3),
                *(_QWORD *)(*(_QWORD *)this + 24LL),
                v10,
                v10[5],
                *((unsigned int *)v10 + 12),
                *((unsigned int *)v10 + 13),
                v10[7]);
          }
          return (unsigned int)OneAllocation;
        }
        _InterlockedAdd(&dword_1C00475B0, 1u);
        v64 = WdLogNewEntry5_WdLowResource(v53);
        *(_QWORD *)(v64 + 24) = 1327LL;
LABEL_80:
        WdLogEvent5_WdLowResource(v64);
LABEL_81:
        OneAllocation = -1073741801;
        goto LABEL_69;
      }
      v63 = WdLogNewEntry5_WdAssertion(v23, v22);
      *(_QWORD *)(v63 + 24) = *v17;
      WdLogEvent5_WdAssertion(v63);
    }
LABEL_69:
    v6 = v69;
    goto LABEL_70;
  }
  v57 = WdLogNewEntry5_WdAssertion(this, a2);
  *(_QWORD *)(v57 + 24) = 1111LL;
  WdLogEvent5_WdAssertion(v57);
  return 3221225485LL;
}
