/*
 * XREFs of ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C0063ED4
 * Callers:
 *     ?AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z @ 0x1C0063BC0 (-AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z.c)
 *     ?Init@VIDMM_DMA_POOL@@QEAAJXZ @ 0x1C006E570 (-Init@VIDMM_DMA_POOL@@QEAAJXZ.c)
 *     ?ResizeBuffersInPool@VIDMM_DMA_POOL@@QEAAJ_KII@Z @ 0x1C009A524 (-ResizeBuffersInPool@VIDMM_DMA_POOL@@QEAAJ_KII@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001DE4 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002798 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     Template_pppxxxp @ 0x1C0020BD0 (Template_pppxxxp.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C004D9A0 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0052860 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAU_MDL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0057614 (-CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUE.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C005EE20 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C005F450 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C005FF10 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5EPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00602A0 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1C0062D50 (-MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C0062DF0 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?LockAllPoolForAddRemove@VIDMM_DMA_POOL@@KAXE@Z @ 0x1C006D728 (-LockAllPoolForAddRemove@VIDMM_DMA_POOL@@KAXE@Z.c)
 *     ?AllocatePagingBufferResources@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C007335C (-AllocatePagingBufferResources@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
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
  int v11; // eax
  int v12; // edx
  __int64 v13; // rcx
  int OneAllocation; // r15d
  __int64 *v15; // r13
  __int64 v16; // rcx
  struct VIDMM_ALLOC *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  struct _VIDSCH_SYNC_OBJECT **v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  VIDMM_GLOBAL *v23; // rcx
  unsigned int v24; // ecx
  SIZE_T v25; // rax
  PVOID v26; // rax
  __int64 v27; // rcx
  SIZE_T v28; // rax
  PVOID v29; // rax
  __int64 v30; // rcx
  unsigned int v31; // eax
  PVOID v32; // rax
  __int64 v33; // rcx
  unsigned int v34; // eax
  unsigned __int64 v35; // rdi
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // rbx
  unsigned int v37; // r8d
  __int64 v38; // r10
  __int64 v39; // r11
  __int64 v40; // rdx
  struct _LIST_ENTRY **v41; // rax
  _QWORD *v42; // r8
  __int64 v43; // rbx
  _QWORD *v44; // rax
  __int64 v45; // rdx
  struct _ERESOURCE *v46; // rcx
  __int64 v47; // rcx
  SIZE_T v49; // rax
  PVOID v50; // rax
  __int64 v51; // rcx
  PVOID v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  struct _KEVENT *v60; // rdx
  struct _VIDMM_GLOBAL_ALLOC *v61; // r8
  void *v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rax
  struct VIDMM_ALLOC **v65; // [rsp+38h] [rbp-69h]
  struct VIDMM_VAD_PENDING_OPERATION *v66; // [rsp+40h] [rbp-61h]
  unsigned __int64 v67; // [rsp+98h] [rbp-9h] BYREF
  unsigned __int64 v68; // [rsp+A0h] [rbp-1h] BYREF
  struct _VIDMM_MULTI_ALLOC *v69; // [rsp+A8h] [rbp+7h] BYREF
  unsigned __int64 v70; // [rsp+B0h] [rbp+Fh] BYREF
  struct _VIDSCH_SYNC_OBJECT *v71; // [rsp+B8h] [rbp+17h] BYREF
  struct _LIST_ENTRY *v72; // [rsp+C0h] [rbp+1Fh]
  unsigned __int8 v73; // [rsp+108h] [rbp+67h] BYREF
  unsigned __int64 v74; // [rsp+110h] [rbp+6Fh]
  unsigned int v75; // [rsp+120h] [rbp+7Fh]

  v75 = a4;
  v74 = a2;
  v4 = a4;
  LODWORD(v5) = a3;
  v6 = a2;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = this;
  if ( *((_DWORD *)this + 23) > VIDMM_DMA_POOL::_NbDmaBufferLimitCompareWatermark )
  {
    v54 = *((_QWORD *)this + 2);
    if ( !v54
      || (v55 = *(_QWORD *)(v54 + 24), *(_DWORD *)(v55 + 328) != 2)
      && !(*(unsigned int (**)(void))(*(_QWORD *)(*(_QWORD *)(v55 + 40) + 72LL) + 216LL))() )
    {
      if ( VIDMM_DMA_POOL::_TotalDmaBufferBytes > VIDMM_DMA_POOL::_MaxDmaBufferBytes
        || VIDMM_DMA_POOL::_TotalAllocationListBytes > VIDMM_DMA_POOL::_MaxAllocationListBytes
        || VIDMM_DMA_POOL::_TotalPatchLocationListBytes > VIDMM_DMA_POOL::_MaxPatchLocationListBytes )
      {
        _InterlockedAdd(&dword_1C003C618, 1u);
        v56 = WdLogNewEntry5_WdLowResource(this);
        *(_QWORD *)(v56 + 24) = 1100LL;
LABEL_63:
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
      _InterlockedAdd(&dword_1C003C580, 1u);
      v56 = WdLogNewEntry5_WdLowResource(v9);
      *(_QWORD *)(v56 + 24) = 1123LL;
      goto LABEL_63;
    }
    memset(v8, 0, 0xB8uLL);
    if ( (*((_BYTE *)this + 32) & 1) != 0 )
      v11 = ((~*(_BYTE *)(472LL * *((unsigned int *)this + 2) + *(_QWORD *)(*(_QWORD *)this + 40168LL) + 436) & 4) << 13) | 0x10000040;
    else
      v11 = ((*(_BYTE *)(*((_QWORD *)this + 3) + 366LL) == 0) << 15) | 0x48;
    v12 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 300LL);
    if ( (v12 & 8) != 0 || (v12 & 0x10) != 0 )
      v11 |= 4u;
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
                      (struct _DXGK_ALLOCATIONINFOFLAGS)v11,
                      0LL,
                      0LL,
                      0LL,
                      0xA0000000,
                      0,
                      0LL,
                      0,
                      (struct _VIDMM_GLOBAL_ALLOC **)v10 + 7);
    if ( OneAllocation < 0 )
    {
      _InterlockedAdd(&dword_1C003C588, 1u);
      v58 = WdLogNewEntry5_WdLowResource(v13);
      *(_QWORD *)(v58 + 24) = 1185LL;
      WdLogEvent5_WdLowResource(v58);
LABEL_68:
      operator delete((void *)v10[22]);
      operator delete((void *)v10[16]);
      operator delete((void *)v10[15]);
      operator delete((void *)v10[14]);
      operator delete((void *)v10[13]);
      v60 = (struct _KEVENT *)v10[8];
      if ( v60 )
        VIDMM_GLOBAL::CloseOneAllocation(*(VIDMM_GLOBAL **)this, v60, 0LL, 0, 0, 0LL);
      v61 = (struct _VIDMM_GLOBAL_ALLOC *)v10[7];
      if ( v61 )
        VIDMM_GLOBAL::DestroyOneAllocation(*(struct _KTHREAD ***)this, *((struct VIDMM_DEVICE **)this + 2), v61, 1);
      v62 = (void *)v10[9];
      if ( v62 )
        MmFreeContiguousMemorySpecifyCache(v62, v6, *((MEMORY_CACHING_TYPE *)v10 + 20));
      operator delete(v10);
      return (unsigned int)OneAllocation;
    }
    v15 = v10 + 8;
    OneAllocation = VIDMM_GLOBAL::OpenOneAllocation(
                      *(DXGADAPTER ***)this,
                      *((struct VIDMM_PROCESS ***)this + 2),
                      (struct _VIDMM_GLOBAL_ALLOC *)v10[7],
                      0LL,
                      0,
                      0LL,
                      (struct VIDMM_ALLOC **)v10 + 8,
                      &v73);
    if ( OneAllocation < 0 )
    {
      _InterlockedAdd(&dword_1C003C58C, 1u);
      v59 = WdLogNewEntry5_WdLowResource(v16);
      *(_QWORD *)(v59 + 24) = 1205LL;
      WdLogEvent5_WdLowResource(v59);
    }
    else
    {
      v17 = (struct VIDMM_ALLOC *)*v15;
      if ( (*(_DWORD *)(*v15 + 28) & 3) != 0 )
        goto LABEL_19;
      if ( (*((_BYTE *)this + 32) & 1) != 0 )
      {
        VIDMM_GLOBAL::AllocatePagingBufferResources(*(VIDMM_GLOBAL **)this, v17);
      }
      else
      {
        v18 = *((_QWORD *)v17 + 1);
        v19 = *((unsigned int *)this + 2);
        v67 = 0LL;
        v68 = 0LL;
        v69 = v17;
        v20 = (struct _VIDSCH_SYNC_OBJECT **)(*(_QWORD *)(v18 + 72) + 160 * v19);
        OneAllocation = VIDMM_GLOBAL::MakeResident(
                          *(VIDMM_GLOBAL **)this,
                          (struct VIDMM_PAGING_QUEUE *)v20,
                          &v69,
                          1LL,
                          3,
                          &v67,
                          &v68);
        if ( OneAllocation == 259 )
        {
          v23 = *(VIDMM_GLOBAL **)this;
          v71 = v20[11];
          v70 = v67;
          VIDMM_GLOBAL::WaitForFences(v23, &v71, &v70, 1u, 0LL);
          OneAllocation = 0;
        }
        v4 = v75;
      }
      if ( OneAllocation >= 0 )
      {
LABEL_19:
        if ( (_DWORD)v5 )
        {
          v24 = 3;
          if ( (unsigned int)v5 > 3 )
            v24 = v5;
          v5 = v24;
          v25 = 8LL * v24;
          if ( !is_mul_ok(v24, 8uLL) )
            v25 = -1LL;
          v26 = operator new[](v25, 0x33326956u, (POOL_TYPE)512);
          v10[13] = v26;
          if ( !v26 )
          {
            _InterlockedAdd(&dword_1C003C59C, 1u);
            v64 = WdLogNewEntry5_WdLowResource(v27);
            *(_QWORD *)(v64 + 24) = 1264LL;
            goto LABEL_78;
          }
          v28 = 24 * v5;
          if ( !is_mul_ok(v5, 0x18uLL) )
            v28 = -1LL;
          v29 = operator new[](v28, 0x34326956u, (POOL_TYPE)512);
          v10[14] = v29;
          if ( !v29 )
          {
            _InterlockedAdd(&dword_1C003C594, 1u);
            v64 = WdLogNewEntry5_WdLowResource(v30);
            *(_QWORD *)(v64 + 24) = 1277LL;
            goto LABEL_78;
          }
          memset(v29, 0, 24 * v5);
        }
        if ( (_DWORD)v4 )
        {
          v49 = 24 * v4;
          if ( !is_mul_ok(v4, 0x18uLL) )
            v49 = -1LL;
          v50 = operator new[](v49, 0x35326956u, PagedPool);
          v10[15] = v50;
          if ( !v50 )
          {
            _InterlockedAdd(&dword_1C003C598, 1u);
            v64 = WdLogNewEntry5_WdLowResource(v51);
            *(_QWORD *)(v64 + 24) = 1294LL;
            goto LABEL_78;
          }
          memset(v50, 0, 24 * v4);
        }
        v31 = *((_DWORD *)this + 22);
        if ( v31 )
        {
          v32 = operator new[](v31, 0x32336956u, (POOL_TYPE)512);
          v10[16] = v32;
          if ( !v32 )
          {
            _InterlockedAdd(&dword_1C003C5F8, 1u);
            v64 = WdLogNewEntry5_WdLowResource(v33);
            *(_QWORD *)(v64 + 24) = 1308LL;
            goto LABEL_78;
          }
          memset(v32, 0, *((unsigned int *)this + 22));
        }
        if ( (*((_BYTE *)this + 32) & 1) == 0 )
          goto LABEL_34;
        v52 = operator new[](0x2000uLL, 0x37336956u, PagedPool);
        v10[22] = v52;
        if ( v52 )
        {
          memset(v52, 0, 0x2000uLL);
          *((_DWORD *)v10 + 42) = 0;
          *((_DWORD *)v10 + 43) = 0;
LABEL_34:
          v34 = v75;
          v10[20] = 0LL;
          v35 = v74;
          v10[5] = v74;
          *((_DWORD *)v10 + 12) = v5;
          *((_DWORD *)v10 + 13) = v34;
          v10[17] = this;
          if ( (*((_DWORD *)this + 8) & 0x10) != 0 )
          {
            if ( !*(_BYTE *)(*((_QWORD *)this + 3) + 367LL) )
            {
              VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                          *(VIDMM_PROCESS **)(*((_QWORD *)this + 2) + 8LL),
                                          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 200LL),
                                          *((_DWORD *)this + 2));
              if ( VirtualAddressAllocator )
              {
                v66 = *(struct VIDMM_VAD_PENDING_OPERATION **)(v39 + 2168);
                v65 = *(struct VIDMM_ALLOC ***)(v39 + 2160);
                v40 = *v15;
                v72 = (struct _LIST_ENTRY *)((*(_DWORD *)(v38 + 32) < 0x6000u) | 0x12LL);
                v41 = CVirtualAddressAllocator::MapVirtualAddressRange(
                        (__int64)VirtualAddressAllocator,
                        v40,
                        0LL,
                        1,
                        v35,
                        0LL,
                        (unsigned __int64)v65,
                        (unsigned __int64)v66,
                        0x1000u,
                        v72,
                        0LL,
                        v37,
                        0LL);
                if ( v41 )
                {
                  v10[12] = v41[12];
                  OneAllocation = VIDMM_GLOBAL::CommitVirtualAddressRange(
                                    *(VIDMM_GLOBAL **)this,
                                    VirtualAddressAllocator,
                                    (struct VIDMM_PAGING_QUEUE *)(*(_QWORD *)(*(_QWORD *)(*v15 + 8) + 72LL)
                                                                + 160LL * *((unsigned int *)this + 2)),
                                    (struct VIDMM_MAPPED_VA_RANGE *)v41,
                                    KeGetCurrentThread() == *(struct _KTHREAD **)(**(_QWORD **)this + 8LL),
                                    0LL,
                                    0LL,
                                    0LL);
                  if ( OneAllocation >= 0 )
                    goto LABEL_39;
                }
                goto LABEL_67;
              }
              goto LABEL_79;
            }
            v10[12] = *(_QWORD *)(*v15 + 144);
          }
LABEL_39:
          *((_DWORD *)this + 8) &= ~8u;
          *((_DWORD *)this + 32) += *((_DWORD *)v10 + 10);
          v42 = (_QWORD *)*((_QWORD *)this + 2);
          *((_DWORD *)this + 33) += 24 * *((_DWORD *)v10 + 12);
          *((_DWORD *)this + 34) += 24 * *((_DWORD *)v10 + 13);
          if ( v42 )
          {
            v43 = *(_QWORD *)(*(_QWORD *)(v42[1] + 16LL) + 8LL * *(unsigned int *)(*(_QWORD *)(*v42 + 24LL) + 200LL));
            KeEnterCriticalRegion();
            ExAcquirePushLockExclusiveEx(v43 + 400, 0LL);
            *(_QWORD *)(v43 + 416) += v10[5];
            ++*(_DWORD *)(v43 + 408);
            *(_DWORD *)(v43 + 424) += 24 * *((_DWORD *)v10 + 12);
            *(_DWORD *)(v43 + 428) += 24 * *((_DWORD *)v10 + 13);
            ExReleasePushLockExclusiveEx(v43 + 400, 0LL);
            KeLeaveCriticalRegion();
          }
          _InterlockedExchangeAdd64(&VIDMM_DMA_POOL::_TotalDmaBufferBytes, v10[5]);
          _InterlockedExchangeAdd64(&VIDMM_DMA_POOL::_TotalAllocationListBytes, 24LL * *((unsigned int *)v10 + 12));
          _InterlockedExchangeAdd64(&VIDMM_DMA_POOL::_TotalPatchLocationListBytes, 24LL * *((unsigned int *)v10 + 13));
          ++*((_DWORD *)this + 23);
          VIDMM_DMA_POOL::LockAllPoolForAddRemove(0);
          v44 = (_QWORD *)((char *)this + 96);
          v45 = *((_QWORD *)this + 12);
          if ( *(VIDMM_DMA_POOL **)(v45 + 8) != (VIDMM_DMA_POOL *)((char *)this + 96) )
            __fastfail(3u);
          v46 = VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock;
          *v10 = v45;
          v10[1] = v44;
          *(_QWORD *)(v45 + 8) = v10;
          *v44 = v10;
          ExReleaseResourceLite(v46);
          if ( g_IsInternalReleaseOrDbg )
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v47) + 24) = v10;
          if ( bTracingEnabled )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              Template_pppxxxp(
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
        _InterlockedAdd(&dword_1C003C5A0, 1u);
        v64 = WdLogNewEntry5_WdLowResource(v53);
        *(_QWORD *)(v64 + 24) = 1326LL;
LABEL_78:
        WdLogEvent5_WdLowResource(v64);
LABEL_79:
        OneAllocation = -1073741801;
        goto LABEL_67;
      }
      v63 = WdLogNewEntry5_WdAssertion(v22, v21);
      *(_QWORD *)(v63 + 24) = *v15;
      WdLogEvent5_WdAssertion(v63);
    }
LABEL_67:
    v6 = v74;
    goto LABEL_68;
  }
  v57 = WdLogNewEntry5_WdAssertion(this, a2);
  *(_QWORD *)(v57 + 24) = 1111LL;
  WdLogEvent5_WdAssertion(v57);
  return 3221225485LL;
}
