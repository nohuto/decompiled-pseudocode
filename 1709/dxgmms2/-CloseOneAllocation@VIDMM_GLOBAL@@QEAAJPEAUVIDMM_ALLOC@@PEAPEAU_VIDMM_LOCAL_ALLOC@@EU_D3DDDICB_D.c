/*
 * XREFs of ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C0061B40
 * Callers:
 *     ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C0055950 (-DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C0057A7C (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU2@@Z @ 0x1C0058318 (-TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_AL.c)
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1C005EEF8 (-OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDM.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0062D60 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CloseAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@EPEAPEAU_VIDMM_LOCAL_ALLOC@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C006433C (-CloseAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@EPEAPEAU_VIDMM_LOCAL_ALLOC@@U_D3DDDI.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C0065CE0 (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C0065F84 (-DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CONTEXT_ALLOC@@@Z.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C00677E0 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C0073F10 (-RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002440 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0002544 (--3@YAXPEAX@Z.c)
 *     McTemplateK0q @ 0x1C0016F44 (McTemplateK0q.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     McTemplateK0pppppppppppp @ 0x1C002171C (McTemplateK0pppppppppppp.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C0052448 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00547D0 (-FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C005C730 (-xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z @ 0x1C005ED4C (-CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z.c)
 *     ?QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGING_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_N@Z @ 0x1C0060CFC (-QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGIN.c)
 *     ?TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C0062030 (-TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CloseOneAllocation(
        VIDMM_GLOBAL *this,
        struct _KEVENT *a2,
        struct _VIDMM_LOCAL_ALLOC **a3,
        char a4,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a5,
        struct _KEVENT **a6)
{
  struct _LIST_ENTRY *v6; // r12
  struct _LIST_ENTRY *Flink; // r13
  __int64 v11; // rbp
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v14; // rcx
  __int64 v15; // rax
  int v16; // ecx
  unsigned int v17; // edi
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // r9
  struct _KEVENT **v22; // rdx
  struct VIDMM_ALLOC **v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  struct _LIST_ENTRY *v32; // rax
  struct _LIST_ENTRY *v33; // rcx
  struct _LIST_ENTRY *v34; // r15
  struct _LIST_ENTRY *v35; // rdi
  __int64 v36; // r14
  HANDLE CurrentProcessId; // rax
  struct _LIST_ENTRY *v38; // rdi
  struct _LIST_ENTRY **p_Blink; // rdi
  __int64 v40; // rcx
  __int64 v41; // r8
  struct _LIST_ENTRY **v42; // rax
  struct _LIST_ENTRY *v43; // rdx
  struct _LIST_ENTRY *v44; // rcx
  __int64 result; // rax
  struct _LIST_ENTRY *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rax
  int v50; // r9d
  struct _LIST_ENTRY *v51; // rdx
  LIST_ENTRY *p_WaitListHead; // rax
  struct _LIST_ENTRY *v53; // rcx
  struct _KTHREAD **VirtualAddressAllocator; // rax
  _QWORD *v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 Blink_low; // rdi
  _QWORD *v59; // rax
  __int64 v60; // [rsp+80h] [rbp-B8h]
  __int64 v61; // [rsp+88h] [rbp-B0h]
  __int64 v62; // [rsp+90h] [rbp-A8h]
  _QWORD v63[19]; // [rsp+A0h] [rbp-98h] BYREF
  unsigned int v64; // [rsp+148h] [rbp+10h]
  unsigned int v65; // [rsp+150h] [rbp+18h]

  v6 = 0LL;
  Flink = a2->Header.WaitListHead.Flink;
  v65 = 0;
  v64 = 0;
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
      v65 = (unsigned int)Blink[1].Flink;
      v14 = Blink[2].Blink;
      if ( v14 )
      {
        v64 = (unsigned int)v14[1].Flink;
        v61 = (__int64)v14[3].Flink;
      }
    }
    if ( (**(_DWORD **)(v11 + 504) & 8) != 0 )
      v15 = *(_QWORD *)(v11 + 368);
    else
      v15 = *(_QWORD *)(*(_QWORD *)&a2->Header.Lock + 16LL);
    v60 = v15;
  }
  v16 = (int)a2[1].Header.WaitListHead.Flink;
  if ( (v16 & 1) == 0 )
  {
    v46 = a2->Header.WaitListHead.Flink;
    if ( v46 && v46[1].Blink || (*(_DWORD *)(v11 + 84) & 4) != 0 )
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
        v51 = a2[2].Header.WaitListHead.Flink;
        p_WaitListHead = &a2[2].Header.WaitListHead;
        if ( v51->Blink != &a2[2].Header.WaitListHead
          || (v53 = a2[2].Header.WaitListHead.Blink, v53->Flink != p_WaitListHead) )
        {
          __fastfail(3u);
        }
        v53->Flink = v51;
        v51->Blink = v53;
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
    v49 = WdLogNewEntry5_WdEvent(v48, v47);
    *(_QWORD *)(v49 + 24) = a2;
    *(_QWORD *)(v49 + 32) = -1071775486LL;
    WdLogEvent5_WdEvent(v49);
    result = 3223191810LL;
    *a6 = a2 + 3;
  }
  else
  {
    KeWaitForSingleObject(&a2[3], Executive, 0, 0, 0LL);
    v17 = 1;
    VIDMM_GLOBAL::xWaitForAllPagingEngines(
      this,
      (struct _VIDSCH_SYNC_OBJECT **)this + (*(_DWORD *)(v11 + 76) & 0x3F) + 738,
      (const unsigned __int64 *)(v11 + 176),
      1u,
      (const unsigned __int64 *)this + (*(_DWORD *)(v11 + 76) & 0x3F) + 674);
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
        VirtualAddressAllocator = (struct _KTHREAD **)VIDMM_PROCESS::GetVirtualAddressAllocator(
                                                        *(VIDMM_PROCESS **)(*(_QWORD *)&a2->Header.Lock + 8LL),
                                                        *(_DWORD *)(*((_QWORD *)this + 3) + 200LL),
                                                        *(_DWORD *)(v11 + 76) & 0x3F);
        CVirtualAddressAllocator::FreeAllocMappedVaRangeList(VirtualAddressAllocator, (struct VIDMM_ALLOC *)a2);
      }
      else
      {
        memset(v63, 0, 0x58uLL);
        v20 = *((_QWORD *)this + 5041);
        v63[0] = -4294967175LL;
        v63[2] = a2;
        VIDMM_GLOBAL::QueueSystemCommandAndWaitInternal(
          this,
          (struct _VIDMM_SYSTEM_COMMAND *)v63,
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
    v62 = *(_QWORD *)(*(_QWORD *)&a2->Header.Lock + 24LL);
    if ( a3 )
      v17 = 0;
    VIDMM_GLOBAL::CloseLocalAllocation(
      this,
      *(struct _VIDMM_LOCAL_ALLOC **)&a2->Header.Lock,
      (struct _VIDMM_LOCAL_ALLOC *)v17,
      v21);
    v27 = *(_QWORD *)(v11 + 320);
    if ( *(struct _KTHREAD **)(v27 + 8) != KeGetCurrentThread() )
    {
      v55 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v25, v24, v26);
      v55[3] = 275LL;
      v55[4] = 4LL;
      v55[5] = v27;
      v55[6] = 0LL;
      v55[7] = 0LL;
      WdLogEvent5_WdCriticalError(v55);
    }
    if ( *(int *)(v27 + 24) <= 0 )
    {
      v56 = WdLogNewEntry5_WdAssertion(v25, v24);
      *(_QWORD *)(v56 + 24) = 406LL;
      WdLogEvent5_WdAssertion(v56);
    }
    if ( (*(_DWORD *)(v27 + 24))-- == 1 )
    {
      *(_QWORD *)(v27 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v27 + 16, 0LL);
    }
    KeLeaveCriticalRegion();
    if ( bTracingEnabled )
    {
      v32 = a2->Header.WaitListHead.Blink;
      if ( v32 && (v33 = v32[2].Blink) != 0LL )
        v34 = v33[3].Blink;
      else
        v34 = 0LL;
      if ( v32 )
        v6 = v32[2].Blink;
      if ( Flink )
        v35 = Flink[1].Blink;
      else
        v35 = 0LL;
      v36 = *((_QWORD *)this + 3);
      CurrentProcessId = PsGetCurrentProcessId();
      if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
        McTemplateK0pppppppppppp(
          v64,
          &EventDestroyDeviceAllocation,
          v61,
          CurrentProcessId,
          v35,
          v36,
          a2,
          v11,
          v6,
          v34,
          v65,
          v64,
          v61,
          v60,
          v62);
    }
    *((_QWORD *)this + 956) += *(_QWORD *)(v11 + 16);
    ++*((_DWORD *)this + 1910);
    v38 = a2->Header.WaitListHead.Flink[1].Flink;
    if ( v38 )
    {
      p_Blink = &v38[22].Blink;
      if ( p_Blink && p_Blink[1] == (struct _LIST_ENTRY *)KeGetCurrentThread() )
      {
        v57 = WdLogNewEntry5_WdAssertion(v30, v29);
        *(_QWORD *)(v57 + 24) = 1214LL;
        WdLogEvent5_WdAssertion(v57);
      }
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(p_Blink, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v50 = *((_DWORD *)p_Blink + 4);
          if ( v50 != -1 && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v40, (__int64)&EventBlockThread, v41, v50);
        }
        ExAcquirePushLockExclusiveEx(p_Blink, 0LL);
      }
      p_Blink[1] = (struct _LIST_ENTRY *)KeGetCurrentThread();
      v42 = &a2[4].Header.WaitListHead.Blink;
      v43 = a2[4].Header.WaitListHead.Blink;
      if ( (struct _LIST_ENTRY **)v43->Blink != &a2[4].Header.WaitListHead.Blink
        || (v44 = *(struct _LIST_ENTRY **)&a2[5].Header.Lock, (struct _LIST_ENTRY **)v44->Flink != v42) )
      {
        __fastfail(3u);
      }
      v44->Flink = v43;
      v43->Blink = v44;
      *(_QWORD *)&a2[5].Header.Lock = 0LL;
      *v42 = 0LL;
      p_Blink[1] = 0LL;
      ExReleasePushLockExclusiveEx(p_Blink, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( LODWORD(a2[6].Header.WaitListHead.Blink) )
    {
      Blink_low = SLODWORD(a2[6].Header.WaitListHead.Blink);
      v59 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v30, v29, v31);
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
