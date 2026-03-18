/*
 * XREFs of ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C0065EE0
 * Callers:
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C00573B4 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C00592D8 (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C005C240 (-DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1C00634E8 (-OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDM.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0067090 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CloseAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@EPEAPEAU_VIDMM_LOCAL_ALLOC@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C006873C (-CloseAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@EPEAPEAU_VIDMM_LOCAL_ALLOC@@U_D3DDDI.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C006A144 (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C006A3E4 (-DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CONTEXT_ALLOC@@@Z.c)
 *     ?TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU2@@Z @ 0x1C006BE24 (-TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_AL.c)
 *     ?RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C007AAF8 (-RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0002BF0 (--3@YAXPEAX@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005720 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00057D8 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0016834 (McTemplateK0q.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     McTemplateK0pppppppppppp @ 0x1C0024068 (McTemplateK0pppppppppppp.c)
 *     ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C005ADD0 (-FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C0060EC0 (-xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z @ 0x1C0063330 (-CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z.c)
 *     ?QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGING_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_N@Z @ 0x1C006511C (-QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGIN.c)
 *     ?TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C0066390 (-TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C0074864 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CloseOneAllocation(
        VIDMM_GLOBAL *this,
        struct _KEVENT *a2,
        struct _VIDMM_LOCAL_ALLOC **a3,
        char a4,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a5,
        struct _KEVENT **a6)
{
  struct _LIST_ENTRY *v6; // r15
  struct _LIST_ENTRY *Flink; // r13
  __int64 v11; // rsi
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v14; // rcx
  __int64 v15; // rax
  int v16; // ecx
  unsigned int v17; // ebp
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // r9
  struct _KEVENT **v22; // rdx
  struct VIDMM_ALLOC **v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  struct _LIST_ENTRY *v29; // rax
  struct _LIST_ENTRY *v30; // rcx
  struct _LIST_ENTRY *v31; // r12
  struct _LIST_ENTRY *v32; // rbp
  __int64 v33; // r14
  HANDLE CurrentProcessId; // rax
  struct _LIST_ENTRY *v35; // rdi
  struct _LIST_ENTRY **p_Blink; // rdi
  __int64 v37; // rcx
  __int64 v38; // r8
  struct _LIST_ENTRY **v39; // rax
  struct _LIST_ENTRY *v40; // rdx
  struct _LIST_ENTRY *v41; // rcx
  __int64 result; // rax
  struct _LIST_ENTRY *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  int v47; // r9d
  struct _LIST_ENTRY *v48; // rdx
  LIST_ENTRY *p_WaitListHead; // rax
  struct _LIST_ENTRY *v50; // rcx
  CVirtualAddressAllocator *VirtualAddressAllocator; // rax
  __int64 v52; // rax
  __int64 Blink_low; // rdi
  _QWORD *v54; // rax
  __int64 v55; // [rsp+80h] [rbp-B8h]
  __int64 v56; // [rsp+88h] [rbp-B0h]
  __int64 v57; // [rsp+90h] [rbp-A8h]
  _QWORD v58[19]; // [rsp+A0h] [rbp-98h] BYREF
  unsigned int v59; // [rsp+148h] [rbp+10h]
  unsigned int v60; // [rsp+150h] [rbp+18h]

  v6 = 0LL;
  Flink = a2->Header.WaitListHead.Flink;
  v60 = 0;
  v59 = 0;
  v11 = **(_QWORD **)&a2->Header.Lock;
  v56 = 0LL;
  v55 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  if ( a3 )
    *a3 = *(struct _VIDMM_LOCAL_ALLOC **)&a2->Header.Lock;
  if ( bTracingEnabled )
  {
    Blink = a2->Header.WaitListHead.Blink;
    if ( Blink )
    {
      v60 = (unsigned int)Blink[1].Flink;
      v14 = Blink[2].Blink;
      if ( v14 )
      {
        v59 = (unsigned int)v14[1].Flink;
        v56 = (__int64)v14[3].Flink;
      }
    }
    if ( (**(_DWORD **)(v11 + 504) & 8) != 0 )
      v15 = *(_QWORD *)(v11 + 368);
    else
      v15 = *(_QWORD *)(*(_QWORD *)&a2->Header.Lock + 16LL);
    v55 = v15;
  }
  v16 = (int)a2[1].Header.WaitListHead.Flink;
  if ( (v16 & 1) == 0 )
  {
    v43 = a2->Header.WaitListHead.Flink;
    if ( v43 && v43[1].Blink || (*(_DWORD *)(v11 + 84) & 4) != 0 )
    {
      if ( (*(_DWORD *)(v11 + 84) & 4) == 0 )
      {
        VIDMM_GLOBAL::TerminateOneAllocation(this, (struct VIDMM_ALLOC *)a2, (unsigned int)a3, a5, 0LL);
        goto LABEL_13;
      }
      a2[1].Header.SignalState |= 4u;
      LODWORD(a2[1].Header.WaitListHead.Flink) = v16 | 1;
    }
    else
    {
      a2[1].Header.SignalState |= 4u;
      if ( (a2[1].Header.SignalState & 3) == 1 )
      {
        v48 = a2[2].Header.WaitListHead.Flink;
        p_WaitListHead = &a2[2].Header.WaitListHead;
        if ( v48->Blink != &a2[2].Header.WaitListHead
          || (v50 = a2[2].Header.WaitListHead.Blink, v50->Flink != p_WaitListHead) )
        {
          __fastfail(3u);
        }
        v50->Flink = v48;
        v48->Blink = v50;
        a2[1].Header.SignalState &= 0xFFFFFFFC;
        a2[2].Header.WaitListHead.Blink = 0LL;
        p_WaitListHead->Flink = 0LL;
      }
    }
    KeSetEvent(a2 + 3, 0, 0);
  }
LABEL_13:
  if ( a4 && ((__int64)a2[1].Header.WaitListHead.Flink & 1) != 0 && !KeReadStateEvent(a2 + 3) )
  {
    v46 = WdLogNewEntry5_WdEvent(v45, v44);
    *(_QWORD *)(v46 + 24) = a2;
    *(_QWORD *)(v46 + 32) = -1071775486LL;
    WdLogEvent5_WdEvent(v46);
    result = 3223191810LL;
    *a6 = a2 + 3;
  }
  else
  {
    KeWaitForSingleObject(&a2[3], Executive, 0, 0, 0LL);
    v17 = 1;
    VIDMM_GLOBAL::xWaitForAllPagingEngines(
      this,
      (struct _VIDSCH_SYNC_OBJECT **)this + (*(_DWORD *)(v11 + 76) & 0x3F) + 746,
      (const unsigned __int64 *)(v11 + 176),
      1u,
      (const unsigned __int64 *)this + (*(_DWORD *)(v11 + 76) & 0x3F) + 682);
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v18) + 24) = a2;
    v19 = *(_QWORD *)&a2[6].Header.Lock;
    if ( v19 )
    {
      if ( (**(_DWORD **)(v11 + 504) & 0x10000008) != 0 )
        MmUnmapViewOfSection(**(_QWORD **)(*(_QWORD *)&a2->Header.Lock + 8LL), v19);
      *(_QWORD *)&a2[6].Header.Lock = 0LL;
    }
    if ( a2[5].Header.WaitListHead.Flink != &a2[5].Header.WaitListHead )
    {
      if ( KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)this + 8LL) )
      {
        VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                    *(VIDMM_PROCESS **)(*(_QWORD *)&a2->Header.Lock + 8LL),
                                    *(_DWORD *)(*((_QWORD *)this + 3) + 200LL),
                                    *(_DWORD *)(v11 + 76) & 0x3F);
        CVirtualAddressAllocator::FreeAllocMappedVaRangeList(VirtualAddressAllocator, (struct VIDMM_ALLOC *)a2);
      }
      else
      {
        memset(v58, 0, 0x58uLL);
        v20 = *((_QWORD *)this + 5113);
        v58[0] = -4294967175LL;
        v58[2] = a2;
        VIDMM_GLOBAL::QueueSystemCommandAndWaitInternal(
          this,
          (struct _VIDMM_SYSTEM_COMMAND *)v58,
          *(struct VIDMM_PAGING_QUEUE **)(v20 + 80),
          *(struct _VIDSCH_SYNC_OBJECT **)(160LL * *(unsigned int *)(*(_QWORD *)(v20 + 80) + 144LL)
                                         + *(_QWORD *)(v20 + 80)
                                         + 152),
          1);
      }
    }
    DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v11 + 320));
    v22 = (struct _KEVENT **)a2[1].Header.WaitListHead.Blink;
    if ( v22[1] != (struct _KEVENT *)&a2[1].Header.WaitListHead.Blink
      || (v23 = *(struct VIDMM_ALLOC ***)&a2[2].Header.Lock,
          *v23 != (struct VIDMM_ALLOC *)&a2[1].Header.WaitListHead.Blink) )
    {
      __fastfail(3u);
    }
    *v23 = (struct VIDMM_ALLOC *)v22;
    v22[1] = (struct _KEVENT *)v23;
    v57 = *(_QWORD *)(*(_QWORD *)&a2->Header.Lock + 24LL);
    if ( a3 )
      v17 = 0;
    VIDMM_GLOBAL::CloseLocalAllocation(
      this,
      *(struct _VIDMM_LOCAL_ALLOC **)&a2->Header.Lock,
      (struct _VIDMM_LOCAL_ALLOC *)v17,
      v21);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v11 + 320), v24, v25);
    if ( bTracingEnabled )
    {
      v29 = a2->Header.WaitListHead.Blink;
      if ( v29 && (v30 = v29[2].Blink) != 0LL )
        v31 = v30[3].Blink;
      else
        v31 = 0LL;
      if ( v29 )
        v6 = v29[2].Blink;
      if ( Flink )
        v32 = Flink[1].Blink;
      else
        v32 = 0LL;
      v33 = *((_QWORD *)this + 3);
      CurrentProcessId = PsGetCurrentProcessId();
      if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
        McTemplateK0pppppppppppp(
          v59,
          &EventDestroyDeviceAllocation,
          v56,
          CurrentProcessId,
          v32,
          v33,
          a2,
          v11,
          v6,
          v31,
          v60,
          v59,
          v56,
          v55,
          v57);
    }
    *((_QWORD *)this + 1028) += *(_QWORD *)(v11 + 16);
    ++*((_DWORD *)this + 2054);
    v35 = a2->Header.WaitListHead.Flink[1].Flink;
    if ( v35 )
    {
      p_Blink = &v35[22].Blink;
      if ( p_Blink && p_Blink[1] == (struct _LIST_ENTRY *)KeGetCurrentThread() )
      {
        v52 = WdLogNewEntry5_WdAssertion(v27, v26);
        *(_QWORD *)(v52 + 24) = 1306LL;
        WdLogEvent5_WdAssertion(v52);
      }
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(p_Blink, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v47 = *((_DWORD *)p_Blink + 4);
          if ( v47 != -1 && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v37, (__int64)&EventBlockThread, v38, v47);
        }
        ExAcquirePushLockExclusiveEx(p_Blink, 0LL);
      }
      p_Blink[1] = (struct _LIST_ENTRY *)KeGetCurrentThread();
      v39 = &a2[4].Header.WaitListHead.Blink;
      v40 = a2[4].Header.WaitListHead.Blink;
      if ( (struct _LIST_ENTRY **)v40->Blink != &a2[4].Header.WaitListHead.Blink
        || (v41 = *(struct _LIST_ENTRY **)&a2[5].Header.Lock, (struct _LIST_ENTRY **)v41->Flink != v39) )
      {
        __fastfail(3u);
      }
      v41->Flink = v40;
      v40->Blink = v41;
      *(_QWORD *)&a2[5].Header.Lock = 0LL;
      *v39 = 0LL;
      p_Blink[1] = 0LL;
      ExReleasePushLockExclusiveEx(p_Blink, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( LODWORD(a2[6].Header.WaitListHead.Blink) )
    {
      Blink_low = SLODWORD(a2[6].Header.WaitListHead.Blink);
      v54 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v27, v26, v28);
      v54[3] = 270LL;
      v54[4] = 56LL;
      v54[5] = a2;
      v54[6] = Blink_low;
      v54[7] = 0LL;
      WdLogEvent5_WdCriticalError(v54);
    }
    operator delete(a2);
    return 0LL;
  }
  return result;
}
