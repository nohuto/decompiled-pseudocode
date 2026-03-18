/*
 * XREFs of ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C0054DD4
 * Callers:
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00548C0 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?SaveResourceCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00A36C0 (-SaveResourceCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0002BF0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0004C1C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00161E0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0016834 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0017A80 (memmove.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     ?GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEAAJXZ @ 0x1C0022578 (-GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEAAJXZ.c)
 *     ?DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C0022C8C (-DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     McTemplateK0pqqt @ 0x1C002451C (McTemplateK0pqqt.c)
 *     ?QueueWorkItem@DXG_DEFERRED_WORK_QUEUE@@QEAAXPEAUDXG_DEFERRED_QUEUE_WORK_ITEM@@@Z @ 0x1C00260F0 (-QueueWorkItem@DXG_DEFERRED_WORK_QUEUE@@QEAAXPEAUDXG_DEFERRED_QUEUE_WORK_ITEM@@@Z.c)
 *     McTemplateK0qqqxxp @ 0x1C002618C (McTemplateK0qqqxxp.c)
 *     ?Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005DCA0 (-Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MD.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1C005E3CC (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C005FCC4 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1C005FD14 (-ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0060F70 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0060FAC (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00619A0 (-DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0061D04 (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C0062910 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 *     ?NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0063038 (-NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00653C0 (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C006B4F4 (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0072694 (-LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1C0078A44 (-VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z.c)
 *     ?VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z @ 0x1C0078B70 (-VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z.c)
 *     ?TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@PEAVVIDMM_SEGMENT@@T_LARGE_INTEGER@@PEA_N4@Z @ 0x1C00799F8 (-TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRE.c)
 *     ?VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z @ 0x1C007A6B4 (-VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z.c)
 *     ?FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z @ 0x1C009DF14 (-FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z.c)
 *     ?EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C009DF90 (-EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?DecrementBytesCommitted@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K@Z @ 0x1C009E568 (-DecrementBytesCommitted@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K@Z.c)
 *     ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x1C00A2FD4 (-RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z.c)
 *     ?Use64KbPagesForTransfer@@YAEPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C00B1634 (-Use64KbPagesForTransfer@@YAEPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_SEGMENT@@@Z.c)
 *     ?CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C00B1DE0 (-CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     ?DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P8VIDMM_SEGMENT@@EAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@ZPEAV3@4PEAPEAU4@3@Z @ 0x1C00BA7A8 (-DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@.c)
 *     ?MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX_K1@Z @ 0x1C00BADD4 (-MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX_K1@Z.c)
 */

void __fastcall VIDMM_MEMORY_SEGMENT::TransferToSystem(
        VIDMM_MEMORY_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        char a3,
        PRKPROCESS **a4,
        bool a5)
{
  __int64 v9; // rcx
  VIDMM_GLOBAL *v10; // rcx
  char v11; // bl
  int *v12; // rdx
  int v13; // eax
  char v14; // r13
  __int64 v15; // rdx
  __int64 v16; // rcx
  char v17; // bl
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // r12d
  unsigned int v21; // r13d
  __int64 (__fastcall *v22)(struct _MDL *, struct _MDL *, void *); // rbx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 *v30; // r12
  NTSTATUS v31; // ebx
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  _QWORD *v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r8
  int v43; // r8d
  unsigned __int8 v44; // al
  int v45; // r8d
  unsigned __int64 v46; // r12
  unsigned __int64 v47; // r12
  unsigned int v48; // r13d
  unsigned int v49; // eax
  unsigned int v50; // ebx
  void *v51; // rax
  SIZE_T v52; // rbx
  char v53; // r15
  unsigned __int64 v54; // r8
  __int64 v55; // rcx
  unsigned __int64 v56; // rdx
  __int64 v57; // rcx
  SIZE_T v58; // rcx
  char *v59; // rbx
  _QWORD *v60; // rax
  _QWORD *v61; // r15
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  _QWORD *v69; // rax
  signed __int32 v70[8]; // [rsp+0h] [rbp-188h] BYREF
  ULONG AllocationType[2]; // [rsp+20h] [rbp-168h]
  ULONG Protect[2]; // [rsp+28h] [rbp-160h]
  struct _MDL *v73; // [rsp+30h] [rbp-158h]
  bool v74; // [rsp+60h] [rbp-128h] BYREF
  _BYTE v75[7]; // [rsp+61h] [rbp-127h] BYREF
  SIZE_T v76; // [rsp+68h] [rbp-120h] BYREF
  unsigned int v77; // [rsp+70h] [rbp-118h]
  int v78; // [rsp+74h] [rbp-114h]
  union _LARGE_INTEGER v79; // [rsp+78h] [rbp-110h] BYREF
  struct _DXGK_TRANSFERFLAGS v80[2]; // [rsp+80h] [rbp-108h]
  void *v81; // [rsp+88h] [rbp-100h] BYREF
  struct _VIDMM_GLOBAL_ALLOC *v82; // [rsp+90h] [rbp-F8h] BYREF
  int v83; // [rsp+98h] [rbp-F0h]
  PVOID BaseAddress; // [rsp+A0h] [rbp-E8h] BYREF
  void *v85[3]; // [rsp+A8h] [rbp-E0h] BYREF
  _QWORD v86[5]; // [rsp+C0h] [rbp-C8h] BYREF
  _DXGKARG_SETVIDEOPROTECTEDREGION v87; // [rsp+E8h] [rbp-A0h] BYREF
  _KAPC_STATE ApcState; // [rsp+118h] [rbp-70h] BYREF

  v85[2] = this;
  v82 = a2;
  v85[1] = a4;
  *(_QWORD *)&v80[0].0 = 0LL;
  v83 = 0;
  v74 = 0;
  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(*((VIDMM_GLOBAL **)this + 1), a2, 0);
  v9 = *((_QWORD *)this + 1);
  if ( *(_QWORD *)(v9 + 41528) )
  {
    if ( (*((_DWORD *)this + 20) & 0x1000) != 0 )
      v28 = 0LL;
    else
      v28 = (unsigned int)(*((_DWORD *)this + 4) + 1);
    VIDMM_GLOBAL::RecordPageMappingHistory(v9, v28, *((__int64 *)a2 + 18) >> 12, *((_QWORD *)a2 + 2) >> 12, 4, a2, v73);
  }
  v10 = (VIDMM_GLOBAL *)*((unsigned int *)a2 + 19);
  v11 = 0;
  if ( ((unsigned __int16)v10 & 0x100) == 0 )
    v11 = a3;
  if ( ((unsigned int)v10 & 0x8000000) != 0 )
    VIDMM_GLOBAL::NotifyContextAllocationEviction(v10, a2);
  v12 = (int *)*((_QWORD *)a2 + 63);
  v13 = *v12;
  if ( (*v12 & 0x10000) != 0 )
  {
    VIDMM_GLOBAL::NotifyResidency(*((VIDMM_GLOBAL **)this + 1), a2, 0);
    v12 = (int *)*((_QWORD *)a2 + 63);
    v13 = *v12;
  }
  if ( (v13 & 0x20000) != 0 && (*((_DWORD *)this + 20) & 0x40000) == 0 )
  {
    *((_DWORD *)a2 + 19) |= 0x100000u;
    v13 = *v12;
  }
  if ( (v13 & 0x20000000) == 0 && (unsigned __int8)PsIsProcessCommitRelinquished(*a4[1]) )
    *((_DWORD *)a2 + 19) |= 0x100000u;
  v14 = 0;
  if ( (*((_DWORD *)a2 + 19) & 0x100000) == 0 )
    v14 = v11;
  if ( VIDMM_GLOBAL::IsTdrPending(*((VIDMM_GLOBAL **)this + 1)) )
  {
    v29 = WdLogNewEntry5_WdEvent(v16, v15);
    *(_QWORD *)(v29 + 24) = a2;
    WdLogEvent5_WdEvent(v29);
    v14 = 0;
  }
  if ( (VIDMM_GLOBAL::_Config & 8) == 0 && (*((_DWORD *)a2 + 21) & 8) != 0 )
    *((_BYTE *)a2 + 98) = 1;
  if ( v14 && (*((_DWORD *)a2 + 21) & 8) != 0 && !*((_BYTE *)a2 + 98) && a4 )
  {
    KeStackAttachProcess(*a4[1], &ApcState);
    v30 = (__int64 *)((char *)a2 + 8);
    BaseAddress = VidMmMapViewOfAllocation((struct _VIDMM_LOCAL_ALLOC *)a4, 0LL, *((_QWORD *)a2 + 1), v85, 1);
    if ( BaseAddress )
    {
      v31 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, (PSIZE_T)a2 + 1, 0x1000000u, 4u);
      VidMmUnmapViewOfAllocation((struct _VIDMM_LOCAL_ALLOC *)a4, v85[0]);
      if ( v31 < 0 )
      {
        *((_BYTE *)a2 + 98) = 1;
        if ( bTracingEnabled )
        {
          v36 = (unsigned __int64)*v30 >> 12;
          if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            LODWORD(v73) = 0;
            Protect[0] = v36;
            AllocationType[0] = 0;
            McTemplateK0pqqt(v36, &EventUnreset, v32, a2, *(_QWORD *)AllocationType, *(_QWORD *)Protect, v73);
          }
        }
        v37 = *v30;
        v38 = *((_QWORD *)this + 1);
        ++*(_DWORD *)(v38 + 7960);
        *(_QWORD *)(v38 + 7968) += v37;
      }
      else
      {
        if ( bTracingEnabled )
        {
          v33 = (unsigned __int64)*v30 >> 12;
          if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            LODWORD(v73) = 1;
            Protect[0] = v33;
            AllocationType[0] = 0;
            McTemplateK0pqqt(v33, &EventUnreset, v32, a2, *(_QWORD *)AllocationType, *(_QWORD *)Protect, v73);
          }
        }
        v34 = *v30;
        v35 = *((_QWORD *)this + 1);
        ++*(_DWORD *)(v35 + 7944);
        *(_QWORD *)(v35 + 7952) += v34;
      }
    }
    KeUnstackDetachProcess(&ApcState);
  }
  v17 = *((_BYTE *)a2 + 98) != 0 ? v14 : 0;
  v18 = *((unsigned int *)a2 + 21);
  if ( (v18 & 8) == 0 && (*((_DWORD *)a2 + 20) & 0x10000) != 0 )
  {
    if ( a4 )
    {
      LOBYTE(v16) = ((v18 & 2) == 0) & ~*((_BYTE *)a4 + 32);
      if ( (_BYTE)v16 )
      {
        if ( !*((_QWORD *)a2 + 33) )
        {
          if ( (*((_DWORD *)a2 + 19) & 0x4000000) == 0 )
          {
            v39 = WdLogNewEntry5_WdAssertion(v16, v18);
            *(_QWORD *)(v39 + 24) = 1519LL;
            WdLogEvent5_WdAssertion(v39);
          }
          if ( !v17 )
            goto LABEL_28;
          VIDMM_GLOBAL::ResetBackingStore(*((VIDMM_GLOBAL **)this + 1), a2);
        }
      }
    }
  }
  if ( v17 && (**((_DWORD **)a2 + 63) & 0x8000000) != 0 )
  {
    if ( !a4 )
      goto LABEL_30;
    LOBYTE(v16) = ((*((_BYTE *)a2 + 84) & 2) == 0) & ~*((_BYTE *)a4 + 32);
    if ( (_BYTE)v16
      && (int)VIDMM_GLOBAL::ChargePinnedBackingStore(*((VIDMM_GLOBAL **)this + 1), *((_QWORD *)a2 + 1)) >= 0 )
    {
      if ( (int)VIDMM_SEGMENT::LockAllocationBackingStore(this, a2) < 0 )
        VIDMM_GLOBAL::ReturnPinnedBackingStore(*((VIDMM_GLOBAL **)this + 1), *((_QWORD *)a2 + 1));
      else
        *((_DWORD *)a2 + 21) |= 2u;
    }
  }
LABEL_28:
  if ( a4 && ((_BYTE)a4[4] & 1) != 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v16);
    memset(v86, 0, sizeof(v86));
    v20 = 3;
    v21 = 3;
    if ( v17 )
    {
      if ( *((_BYTE *)a2 + 289) )
      {
        VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), a2);
        *(_QWORD *)AllocationType = VidMmGetMDLForRange(a2, *((_QWORD *)a2 + 34), *((_QWORD *)a2 + 35));
        _guard_dispatch_icall_fptr();
        _guard_dispatch_icall_fptr();
      }
      v86[0] = a2;
      v86[1] = this;
      v86[2] = *((_QWORD *)a2 + 18);
      LODWORD(v86[3]) = v80[0];
      v22 = VIDMM_MEMORY_SEGMENT::RotateCopyCallback;
      v21 = 2;
    }
    else
    {
      v22 = 0LL;
    }
    KeStackAttachProcess(*a4[1], &ApcState);
    if ( !a5 || (*((_DWORD *)a2 + 21) & 0x20) == 0 )
      v20 = 1;
    v78 = v20;
    v23 = VIDMM_GLOBAL::Rotate(*((_QWORD *)this + 1), a4[1][3], a4[3], v21, 0LL, 0LL, v22, v86, v20, a2);
    v27 = v23;
    if ( v23 == -1073741558 )
    {
      *((_DWORD *)a2 + 19) |= 0x100000u;
    }
    else if ( v23 < 0 )
    {
      v40 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v25, v24, v26);
      v40[3] = 270LL;
      v40[4] = 4LL;
      v40[5] = v21;
      v40[6] = v27;
      v40[7] = 0LL;
      WdLogEvent5_WdCriticalError(v40);
    }
    *((_BYTE *)a4 + 32) &= ~1u;
    KeUnstackDetachProcess(&ApcState);
    goto LABEL_36;
  }
LABEL_30:
  if ( v17 )
  {
    if ( (int)VIDMM_MEMORY_SEGMENT::TransferMemory(
                this,
                a2,
                DXGK_MEMORY_TRANSFER_LOCAL_TO_SYSTEM,
                *((struct VIDMM_SEGMENT **)a2 + 17),
                *(union _LARGE_INTEGER *)((char *)a2 + 144),
                &v74,
                0LL) < 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v41);
      if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v41, (__int64)&EventPerformanceWarning, v42, 2);
      v43 = 0;
      LODWORD(v76) = 0;
      if ( (**((_DWORD **)a2 + 63) & 8) == 0 && a4 )
      {
        KeStackAttachProcess(*a4[1], &ApcState);
        v43 = 1;
        LODWORD(v76) = 1;
      }
      v78 = v43;
      v44 = Use64KbPagesForTransfer(a2, *((struct VIDMM_SEGMENT **)a2 + 17));
      v46 = *((_QWORD *)a2 + 1);
      if ( v44 )
        v47 = v46 >> 16;
      else
        v47 = v46 >> 12;
      v48 = v44 != 0 ? 0x10000 : 4096;
      v79 = *(union _LARGE_INTEGER *)((char *)a2 + 144);
      v49 = 0;
      while ( 1 )
      {
        v77 = v49;
        if ( v49 >= (unsigned int)v47 )
          break;
        v50 = v48 * v49;
        VIDMM_GLOBAL::MemoryTransfer(
          *((VIDMM_GLOBAL **)this + 1),
          a2,
          v48,
          v48 * v49,
          this,
          &v79,
          0LL,
          0LL,
          0LL,
          *(struct _MDL **)(*((_QWORD *)this + 33) + 8LL),
          v80[0]);
        VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), a2);
        v79.QuadPart += v48;
        v51 = VidMmMapViewOfAllocation((struct _VIDMM_LOCAL_ALLOC *)a4, v50, v48, &v81, 0);
        if ( v51 )
        {
          memmove(v51, *((const void **)this + 32), v48);
          VidMmUnmapViewOfAllocation((struct _VIDMM_LOCAL_ALLOC *)a4, v81);
        }
        else
        {
          *((_DWORD *)a2 + 19) |= 0x100000u;
        }
        v49 = v77 + 1;
        v45 = v76;
      }
      if ( v45 )
        KeUnstackDetachProcess(&ApcState);
    }
  }
  else
  {
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v16);
    if ( (*((_DWORD *)a2 + 19) & 0x100) == 0 )
      VIDMM_GLOBAL::DiscardAllocation(*((VIDMM_GLOBAL **)this + 1), a2);
  }
  if ( (**((_DWORD **)a2 + 63) & 0x20000) != 0 && *((_QWORD *)a2 + 19) )
  {
    v52 = ~*((_QWORD *)this + 50) & (*((_QWORD *)this + 50) + *((_QWORD *)a2 + 2));
    memset(&v87, 0, sizeof(v87));
    v87.PhysicalAdapterIndex = *((_DWORD *)this + 95);
    v87.SegmentIndex = (*((_DWORD *)this + 20) & 0x1000) != 0 ? 0 : *((_DWORD *)this + 4) + 1;
    v53 = 1;
    if ( *((_DWORD *)this + 103) )
    {
      v53 = 0;
      v76 = 0LL;
      if ( (unsigned int)VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
                           *((_QWORD *)this + 19),
                           *((_QWORD *)this + 52),
                           *((_QWORD *)this + 53),
                           0,
                           (__int64)VIDMM_SEGMENT::CheckLowestAddress,
                           (__int64)this,
                           (__int64)&v76,
                           (__int64)&v82,
                           (__int64)v75) == -1073741823
        && v76 == *((_QWORD *)a2 + 18) )
      {
        v54 = *((_QWORD *)this + 53);
        v55 = *((_QWORD *)a2 + 19);
        v56 = *(_QWORD *)v55 + *(_QWORD *)(v55 + 8);
        if ( v56 >= v54 )
        {
LABEL_117:
          v56 = *((_QWORD *)this + 53);
        }
        else
        {
          while ( 1 )
          {
            v57 = *(_QWORD *)(v55 + 40);
            if ( v57 == *((_QWORD *)this + 19) + 72LL )
              break;
            v55 = v57 - 40;
            if ( *(_BYTE *)(v55 + 56) != 2 )
              break;
            v56 = *(_QWORD *)v55 + *(_QWORD *)(v55 + 8);
            if ( v56 >= v54 )
              goto LABEL_117;
          }
        }
        v58 = v56 & ~*((_QWORD *)this + 50);
        v76 = v58;
        if ( v58 > *((_QWORD *)this + 52) )
        {
          v87.CurrentStartOffset = *((_QWORD *)this + 52);
          v87.CurrentSize = *((_QWORD *)this + 54);
          v87.NewStartOffset = v58;
          v87.NewSize = v54 - v58;
          *((_QWORD *)this + 54) = v54 - v58;
          *((_QWORD *)this + 52) = v58;
          v53 = 1;
        }
      }
    }
    else
    {
      v87.CurrentStartOffset = *((_QWORD *)a2 + 18);
      v87.CurrentSize = v52;
    }
    if ( v53 )
    {
      v59 = (char *)operator new[](0x68uLL, 0x31356956u, PagedPool);
      v60 = operator new[](0x28uLL, 0x38356956u, PagedPool);
      v61 = v60;
      if ( v59 )
      {
        if ( v60 )
        {
          memset(v59, 0, 0x68uLL);
          *((_QWORD *)v59 + 2) = DeferredSetVprCallback;
          *((_QWORD *)v59 + 4) = DeferredSetVprCompletionCallback;
          *(_DXGKARG_SETVIDEOPROTECTEDREGION *)(v59 + 56) = v87;
          *((_QWORD *)v59 + 5) = *((_QWORD *)this + 1);
          *((_QWORD *)v59 + 6) = v61;
          v61[2] = this;
          v61[3] = *((_QWORD *)a2 + 19);
          v61[4] = *((_QWORD *)a2 + 2);
          *((_QWORD *)v59 + 3) = v59;
          VIDMM_GLOBAL::EvictAllReclaimedAllocation(*((VIDMM_GLOBAL **)this + 1));
          VIDMM_GLOBAL::FlushPagingBuffer(*((VIDMM_GLOBAL **)this + 1), 0, 0LL, 0LL);
          VIDMM_LINEAR_POOL::MarkBlockAsAllocatedScrubPending(
            *((VIDMM_LINEAR_POOL **)this + 19),
            *((void **)a2 + 19),
            v87.CurrentStartOffset,
            v87.NewStartOffset);
          DXG_DEFERRED_WORK_QUEUE::QueueWorkItem(
            (DXG_DEFERRED_WORK_QUEUE *)(*((_QWORD *)this + 1) + 41600LL),
            (struct DXG_DEFERRED_QUEUE_WORK_ITEM *)v59);
          *((_QWORD *)a2 + 19) = 0LL;
          if ( *((_DWORD *)a2 + 32) != 1 )
          {
            VIDMM_SEGMENT::DecrementBytesCommitted(this, **((struct VIDMM_PARTITION ***)a2 + 61), *((_QWORD *)a2 + 2));
            --*((_DWORD *)this + 80);
          }
          goto LABEL_36;
        }
        operator delete(v59);
      }
      if ( v61 )
        operator delete(v61);
      if ( (unsigned int)DXG_DEFERRED_WORK_QUEUE::GetNumWorkItems((DXG_DEFERRED_WORK_QUEUE *)(*((_QWORD *)this + 1)
                                                                                            + 41600LL)) )
      {
        if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v62, (__int64)&EventPerformanceWarning, v63, 24);
        KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 1) + 41640LL), Executive, 0, 0, 0LL);
      }
      VIDMM_GLOBAL::EvictAllReclaimedAllocation(*((VIDMM_GLOBAL **)this + 1));
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 95));
      VIDMM_SEGMENT::CheckFreeVPRReserve(this, &v87);
      if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqqxxp(
          *(_QWORD *)(*((_QWORD *)this + 1) + 24LL),
          v64,
          v65,
          v87.PhysicalAdapterIndex,
          v87.SegmentIndex,
          v87.VprIndex,
          v87.NewStartOffset,
          v87.NewSize,
          *(_QWORD *)(*((_QWORD *)this + 1) + 24LL));
      if ( (int)ADAPTER_RENDER::DdiSetVideoProtectedRegion(
                  *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 2464LL),
                  &v87) < 0
        && g_IsInternalRelease )
      {
        v69 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v67, v66, v68);
        v69[3] = 270LL;
        v69[4] = 9LL;
        v69[5] = 0LL;
        v69[6] = 0LL;
        v69[7] = 0LL;
        WdLogEvent5_WdCriticalError(v69);
      }
    }
  }
LABEL_36:
  *((_DWORD *)a2 + 19) &= ~0x4000000u;
  *(_WORD *)(*((_QWORD *)a2 + 63) + 6LL) = 0;
  *(_QWORD *)(*((_QWORD *)a2 + 63) + 24LL) = 0LL;
  *((_QWORD *)a2 + 17) = 0LL;
  if ( v74 )
    _guard_dispatch_icall_fptr();
  v19 = *((_QWORD *)this + 1);
  _InterlockedOr(v70, 0);
  ++*(_QWORD *)(v19 + 40);
}
