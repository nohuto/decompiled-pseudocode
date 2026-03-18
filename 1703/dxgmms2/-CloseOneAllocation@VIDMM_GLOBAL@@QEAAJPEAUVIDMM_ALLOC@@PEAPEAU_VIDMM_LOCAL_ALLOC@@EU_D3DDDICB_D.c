/*
 * XREFs of ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C005EE20
 * Callers:
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C0050CF8 (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C0053D10 (-DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU2@@Z @ 0x1C00557E0 (-TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_AL.c)
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1C005BAD4 (-OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDM.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C005FF10 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CloseAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@EPEAPEAU_VIDMM_LOCAL_ALLOC@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C0061140 (-CloseAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@EPEAPEAU_VIDMM_LOCAL_ALLOC@@U_D3DDDI.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C0062978 (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C0062C1C (-DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CONTEXT_ALLOC@@@Z.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C0063ED4 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C006E6FC (-RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00017C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0001DE4 (--3@YAXPEAX@Z.c)
 *     Template_q @ 0x1C0014A58 (Template_q.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     Template_pppppppppppp @ 0x1C001F644 (Template_pppppppppppp.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C004D9A0 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0052CB0 (-FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C00594A0 (-xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z @ 0x1C005B98C (-CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z.c)
 *     ?QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGING_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_N@Z @ 0x1C005DF5C (-QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGIN.c)
 *     ?TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C005F230 (-TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@.c)
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
  struct _LIST_ENTRY *Flink; // r12
  __int64 v11; // rbp
  int v13; // ecx
  unsigned int v14; // edi
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  struct _LIST_ENTRY *v18; // rdx
  VIDMM_GLOBAL *v19; // rcx
  __int64 v20; // r13
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  struct _LIST_ENTRY *v29; // rdi
  struct _LIST_ENTRY **p_Blink; // rdi
  __int64 v31; // rcx
  __int64 v32; // r8
  struct _LIST_ENTRY **v33; // rax
  struct _LIST_ENTRY *v34; // rdx
  struct _LIST_ENTRY *v35; // rcx
  __int64 result; // rax
  struct _LIST_ENTRY *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v42; // rcx
  __int64 v43; // rax
  struct _LIST_ENTRY *v44; // rdx
  LIST_ENTRY *p_WaitListHead; // rax
  struct _LIST_ENTRY *v46; // rcx
  struct _KTHREAD **VirtualAddressAllocator; // rax
  _QWORD *v48; // rax
  __int64 v49; // rax
  struct _LIST_ENTRY *v50; // rax
  struct _LIST_ENTRY *v51; // rcx
  struct _LIST_ENTRY *v52; // r14
  struct _LIST_ENTRY *v53; // rdi
  __int64 v54; // r12
  HANDLE CurrentProcessId; // rax
  __int64 v56; // rax
  int v57; // r9d
  __int64 Blink_low; // rdi
  _QWORD *v59; // rax
  __int64 v60; // [rsp+80h] [rbp-A8h]
  __int64 v61; // [rsp+88h] [rbp-A0h]
  _QWORD v62[19]; // [rsp+90h] [rbp-98h] BYREF
  unsigned int v63; // [rsp+138h] [rbp+10h]
  unsigned int v64; // [rsp+140h] [rbp+18h]

  v6 = 0LL;
  Flink = a2->Header.WaitListHead.Flink;
  v64 = 0;
  v63 = 0;
  v11 = **(_QWORD **)&a2->Header.Lock;
  v61 = 0LL;
  v60 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  if ( a3 )
    *a3 = *(struct _VIDMM_LOCAL_ALLOC **)&a2->Header.Lock;
  if ( bTracingEnabled )
  {
    Blink = a2->Header.WaitListHead.Blink;
    if ( Blink )
    {
      v64 = (unsigned int)Blink[1].Flink;
      v42 = Blink[2].Blink;
      if ( v42 )
      {
        v63 = (unsigned int)v42[1].Flink;
        v61 = (__int64)v42[3].Flink;
      }
    }
    if ( (**(_DWORD **)(v11 + 520) & 8) != 0 )
      v43 = *(_QWORD *)(v11 + 368);
    else
      v43 = *(_QWORD *)(*(_QWORD *)&a2->Header.Lock + 16LL);
    v60 = v43;
  }
  v13 = (int)a2[1].Header.WaitListHead.Flink;
  if ( (v13 & 1) == 0 )
  {
    v37 = a2->Header.WaitListHead.Flink;
    if ( v37 && v37[1].Blink || (*(_DWORD *)(v11 + 84) & 4) != 0 )
    {
      if ( (*(_DWORD *)(v11 + 84) & 4) == 0 )
      {
        VIDMM_GLOBAL::TerminateOneAllocation(this, (struct VIDMM_ALLOC *)a2, (unsigned int)a3, a5, 0LL);
        goto LABEL_7;
      }
      a2[1].Header.SignalState |= 4u;
      LODWORD(a2[1].Header.WaitListHead.Flink) = v13 | 1;
    }
    else
    {
      a2[1].Header.SignalState |= 4u;
      if ( (a2[1].Header.SignalState & 3) == 1 )
      {
        v44 = a2[2].Header.WaitListHead.Flink;
        p_WaitListHead = &a2[2].Header.WaitListHead;
        v46 = a2[2].Header.WaitListHead.Blink;
        if ( v44->Blink != &a2[2].Header.WaitListHead || v46->Flink != p_WaitListHead )
          __fastfail(3u);
        v46->Flink = v44;
        v44->Blink = v46;
        a2[1].Header.SignalState &= 0xFFFFFFFC;
        a2[2].Header.WaitListHead.Blink = 0LL;
        p_WaitListHead->Flink = 0LL;
      }
    }
    KeSetEvent(a2 + 3, 0, 0);
  }
LABEL_7:
  if ( a4 && ((__int64)a2[1].Header.WaitListHead.Flink & 1) != 0 && !KeReadStateEvent(a2 + 3) )
  {
    v40 = WdLogNewEntry5_WdEvent(v39, v38);
    *(_QWORD *)(v40 + 24) = a2;
    *(_QWORD *)(v40 + 32) = -1071775486LL;
    WdLogEvent5_WdEvent(v40);
    result = 3223191810LL;
    *a6 = a2 + 3;
  }
  else
  {
    KeWaitForSingleObject(&a2[3], Executive, 0, 0, 0LL);
    v14 = 1;
    VIDMM_GLOBAL::xWaitForAllPagingEngines(
      this,
      (struct _VIDSCH_SYNC_OBJECT **)this + (*(_DWORD *)(v11 + 76) & 0x3F) + 738,
      (const unsigned __int64 *)(v11 + 176),
      1u,
      (const unsigned __int64 *)this + (*(_DWORD *)(v11 + 76) & 0x3F) + 674);
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v15) + 24) = a2;
    v16 = *(_QWORD *)&a2[6].Header.Lock;
    if ( v16 )
    {
      if ( (**(_DWORD **)(v11 + 520) & 0x10000008) != 0 )
        MmUnmapViewOfSection(**(_QWORD **)(*(_QWORD *)&a2->Header.Lock + 8LL), v16);
      *(_QWORD *)&a2[6].Header.Lock = 0LL;
    }
    if ( a2[5].Header.WaitListHead.Flink != &a2[5].Header.WaitListHead )
    {
      if ( KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)this + 8LL) )
      {
        VirtualAddressAllocator = (struct _KTHREAD **)VIDMM_PROCESS::GetVirtualAddressAllocator(
                                                        *(VIDMM_PROCESS **)(*(_QWORD *)&a2->Header.Lock + 8LL),
                                                        *(_DWORD *)(*((_QWORD *)this + 3) + 200LL),
                                                        *(_DWORD *)(v11 + 76) & 0x3F);
        CVirtualAddressAllocator::FreeAllocMappedVaRangeList(VirtualAddressAllocator, (struct VIDMM_ALLOC *)a2);
      }
      else
      {
        memset(v62, 0, 0x58uLL);
        v17 = *((_QWORD *)this + 5041);
        v62[0] = -4294967175LL;
        v62[2] = a2;
        VIDMM_GLOBAL::QueueSystemCommandAndWaitInternal(
          this,
          (struct _VIDMM_SYSTEM_COMMAND *)v62,
          *(struct VIDMM_PAGING_QUEUE **)(v17 + 80),
          *(struct _VIDSCH_SYNC_OBJECT **)(160LL * *(unsigned int *)(*(_QWORD *)(v17 + 80) + 144LL)
                                         + *(_QWORD *)(v17 + 80)
                                         + 152),
          1);
      }
    }
    DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v11 + 320));
    v18 = a2[1].Header.WaitListHead.Blink;
    v19 = *(VIDMM_GLOBAL **)&a2[2].Header.Lock;
    if ( (struct _LIST_ENTRY **)v18->Blink != &a2[1].Header.WaitListHead.Blink
      || *(struct _KEVENT **)v19 != (struct _KEVENT *)&a2[1].Header.WaitListHead.Blink )
    {
      __fastfail(3u);
    }
    *(_QWORD *)v19 = v18;
    v18->Blink = (struct _LIST_ENTRY *)v19;
    v20 = *(_QWORD *)(*(_QWORD *)&a2->Header.Lock + 24LL);
    if ( a3 )
      v14 = 0;
    VIDMM_GLOBAL::CloseLocalAllocation(v19, *(struct _VIDMM_LOCAL_ALLOC **)&a2->Header.Lock, v14);
    v24 = *(_QWORD *)(v11 + 320);
    if ( *(struct _KTHREAD **)(v24 + 8) != KeGetCurrentThread() )
    {
      v48 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v22, v21, v23);
      v48[3] = 275LL;
      v48[4] = 4LL;
      v48[5] = v24;
      v48[6] = 0LL;
      v48[7] = 0LL;
      WdLogEvent5_WdCriticalError(v48);
    }
    if ( *(int *)(v24 + 24) <= 0 )
    {
      v49 = WdLogNewEntry5_WdAssertion(v22, v21);
      *(_QWORD *)(v49 + 24) = 395LL;
      WdLogEvent5_WdAssertion(v49);
    }
    if ( (*(_DWORD *)(v24 + 24))-- == 1 )
    {
      *(_QWORD *)(v24 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v24 + 16, 0LL);
    }
    KeLeaveCriticalRegion();
    if ( bTracingEnabled )
    {
      v50 = a2->Header.WaitListHead.Blink;
      if ( v50 )
      {
        v51 = v50[2].Blink;
        if ( v51 )
          v6 = v51[3].Blink;
        v52 = v50[2].Blink;
      }
      else
      {
        v52 = 0LL;
      }
      if ( Flink )
        v53 = Flink[1].Blink;
      else
        v53 = 0LL;
      v54 = *((_QWORD *)this + 3);
      CurrentProcessId = PsGetCurrentProcessId();
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
        Template_pppppppppppp(
          v63,
          &EventDestroyDeviceAllocation,
          v61,
          CurrentProcessId,
          v53,
          v54,
          a2,
          v11,
          v52,
          v6,
          v64,
          v63,
          v61,
          v60,
          v20);
    }
    *((_QWORD *)this + 956) += *(_QWORD *)(v11 + 16);
    ++*((_DWORD *)this + 1910);
    v29 = a2->Header.WaitListHead.Flink[1].Flink;
    if ( v29 )
    {
      p_Blink = &v29[20].Blink;
      if ( p_Blink && p_Blink[1] == (struct _LIST_ENTRY *)KeGetCurrentThread() )
      {
        v56 = WdLogNewEntry5_WdAssertion(v27, v26);
        *(_QWORD *)(v56 + 24) = 1167LL;
        WdLogEvent5_WdAssertion(v56);
      }
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(p_Blink, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v57 = *((_DWORD *)p_Blink + 4);
          if ( v57 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            Template_q(v31, &EventBlockThread, v32, v57);
        }
        ExAcquirePushLockExclusiveEx(p_Blink, 0LL);
      }
      p_Blink[1] = (struct _LIST_ENTRY *)KeGetCurrentThread();
      v33 = &a2[4].Header.WaitListHead.Blink;
      v34 = a2[4].Header.WaitListHead.Blink;
      v35 = *(struct _LIST_ENTRY **)&a2[5].Header.Lock;
      if ( (struct _LIST_ENTRY **)v34->Blink != &a2[4].Header.WaitListHead.Blink
        || (struct _LIST_ENTRY **)v35->Flink != v33 )
      {
        __fastfail(3u);
      }
      v35->Flink = v34;
      v34->Blink = v35;
      *(_QWORD *)&a2[5].Header.Lock = 0LL;
      *v33 = 0LL;
      p_Blink[1] = 0LL;
      ExReleasePushLockExclusiveEx(p_Blink, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( LODWORD(a2[6].Header.WaitListHead.Blink) )
    {
      Blink_low = SLODWORD(a2[6].Header.WaitListHead.Blink);
      v59 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v27, v26, v28);
      v59[3] = 270LL;
      v59[4] = 56LL;
      v59[5] = a2;
      v59[6] = Blink_low;
      v59[7] = 0LL;
      WdLogEvent5_WdCriticalError(v59);
    }
    operator delete(a2);
    return 0LL;
  }
  return result;
}
