/*
 * XREFs of ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C004DD80
 * Callers:
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C004E7C0 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?SaveResourceCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C009D060 (-SaveResourceCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001DC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0002544 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0016910 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0016F44 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00180C0 (memmove.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     ?GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEAAJXZ @ 0x1C0020054 (-GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEAAJXZ.c)
 *     ?DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C00206F8 (-DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     McTemplateK0pqqt @ 0x1C0021BD0 (McTemplateK0pqqt.c)
 *     ?QueueWorkItem@DXG_DEFERRED_WORK_QUEUE@@QEAAXPEAUDXG_DEFERRED_QUEUE_WORK_ITEM@@@Z @ 0x1C0023740 (-QueueWorkItem@DXG_DEFERRED_WORK_QUEUE@@QEAAXPEAUDXG_DEFERRED_QUEUE_WORK_ITEM@@@Z.c)
 *     McTemplateK0qqqxxp @ 0x1C00237DC (McTemplateK0qqqxxp.c)
 *     ?VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z @ 0x1C004C388 (-VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z.c)
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1C004C5EC (-VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z.c)
 *     ?VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z @ 0x1C004C664 (-VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z.c)
 *     ?LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004EE1C (-LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0058120 (-Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MD.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1C00599B8 (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C005B3AC (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1C005B3FC (-ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 *     ?ReleaseTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005C5E8 (-ReleaseTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?AllocateTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005C644 (-AllocateTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C005C7E0 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005C818 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005D294 (-DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C005D61C (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C005E2B0 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 *     ?NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005EA5C (-NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0060FE8 (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0066C00 (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z @ 0x1C0074DDC (-FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z.c)
 *     ?EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00799E4 (-EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?DecrementBytesCommitted@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K@Z @ 0x1C007BF24 (-DecrementBytesCommitted@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K@Z.c)
 *     ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x1C009CABC (-RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z.c)
 *     ?Use64KbPagesForTransfer@@YAEPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C00A9510 (-Use64KbPagesForTransfer@@YAEPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_SEGMENT@@@Z.c)
 *     ?CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C00A9CB4 (-CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     ?DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P8VIDMM_SEGMENT@@EAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@ZPEAV3@4PEAPEAU4@3@Z @ 0x1C00B1E3C (-DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@.c)
 *     ?MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX_K1@Z @ 0x1C00B2408 (-MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX_K1@Z.c)
 */

void __fastcall VIDMM_MEMORY_SEGMENT::TransferToSystem(
        VIDMM_MEMORY_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        unsigned __int8 a3,
        struct _VIDMM_LOCAL_ALLOC *a4,
        bool a5)
{
  struct _VIDMM_LOCAL_ALLOC *v5; // r13
  VIDMM_GLOBAL *v9; // rcx
  __int64 v10; // rcx
  VIDMM_GLOBAL *v11; // rcx
  unsigned __int8 v12; // bl
  int v13; // eax
  int v14; // r8d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  char v18; // bl
  __int64 v19; // rdx
  __int64 v20; // rax
  unsigned int v21; // r12d
  __int64 (__fastcall *v22)(struct _MDL *, struct _MDL *, void *); // rbx
  int v23; // eax
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rbx
  __int64 v29; // rdx
  int TemporaryResourcesForAllocation; // r10d
  bool v31; // r12
  int v32; // ebx
  unsigned __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 *v38; // r12
  NTSTATUS v39; // ebx
  __int64 v40; // r8
  char v41; // al
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rax
  _QWORD *v49; // rax
  _QWORD *v50; // rax
  __int64 v51; // rcx
  _QWORD *v52; // rax
  __int64 v53; // rax
  __int64 v54; // r12
  __int64 v55; // rbx
  unsigned int v56; // r13d
  unsigned __int64 v57; // rbx
  int v58; // eax
  unsigned __int64 v59; // r9
  unsigned __int64 v60; // r8
  int v61; // r8d
  unsigned __int8 v62; // al
  int v63; // r8d
  unsigned __int64 v64; // r12
  unsigned __int64 v65; // r12
  unsigned int v66; // ecx
  unsigned int v67; // eax
  unsigned int v68; // ebx
  char *v69; // rax
  SIZE_T v70; // rbx
  char v71; // r12
  unsigned __int64 v72; // r8
  __int64 v73; // rcx
  unsigned __int64 v74; // rdx
  __int64 v75; // rcx
  SIZE_T v76; // rcx
  char *v77; // rbx
  _QWORD *v78; // rax
  _QWORD *v79; // r13
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // rdx
  __int64 v83; // r8
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  _QWORD *v87; // rax
  signed __int32 v88[8]; // [rsp+0h] [rbp-188h] BYREF
  ULONG AllocationType[2]; // [rsp+20h] [rbp-168h]
  ULONG Protect[2]; // [rsp+28h] [rbp-160h]
  struct _MDL *p_MDLForRange; // [rsp+30h] [rbp-158h]
  struct VIDMM_SEGMENT *v92; // [rsp+38h] [rbp-150h]
  union _LARGE_INTEGER *v93; // [rsp+40h] [rbp-148h]
  struct _MDL *v94; // [rsp+48h] [rbp-140h]
  struct _DXGK_TRANSFERFLAGS v95; // [rsp+50h] [rbp-138h]
  bool v96; // [rsp+60h] [rbp-128h] BYREF
  char v97; // [rsp+61h] [rbp-127h] BYREF
  char v98; // [rsp+62h] [rbp-126h]
  int v99; // [rsp+64h] [rbp-124h]
  SIZE_T v100; // [rsp+68h] [rbp-120h] BYREF
  size_t Size; // [rsp+70h] [rbp-118h]
  struct _MDL *MDLForRange; // [rsp+78h] [rbp-110h] BYREF
  int v103; // [rsp+80h] [rbp-108h]
  void *v104; // [rsp+88h] [rbp-100h] BYREF
  union _LARGE_INTEGER v105; // [rsp+90h] [rbp-F8h] BYREF
  struct _VIDMM_GLOBAL_ALLOC *v106; // [rsp+98h] [rbp-F0h] BYREF
  PVOID BaseAddress; // [rsp+A0h] [rbp-E8h] BYREF
  void *v108[3]; // [rsp+A8h] [rbp-E0h] BYREF
  _QWORD v109[5]; // [rsp+C0h] [rbp-C8h] BYREF
  _DXGKARG_SETVIDEOPROTECTEDREGION v110; // [rsp+E8h] [rbp-A0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+118h] [rbp-70h] BYREF

  v5 = a4;
  v104 = a4;
  v108[2] = this;
  v106 = a2;
  v108[1] = a4;
  v97 = 0;
  v98 = 0;
  v99 = -1073741823;
  v9 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
  v96 = (*(_BYTE *)(1552LL * *((unsigned int *)this + 95) + *((_QWORD *)v9 + 5021) + 436) & 4) != 0;
  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(v9, a2, 0);
  v10 = *((_QWORD *)this + 1);
  if ( *(_QWORD *)(v10 + 40952) )
  {
    if ( (*((_DWORD *)this + 20) & 0x1000) != 0 )
      v36 = 0LL;
    else
      v36 = (unsigned int)(*((_DWORD *)this + 4) + 1);
    VIDMM_GLOBAL::RecordPageMappingHistory(
      v10,
      v36,
      *((__int64 *)a2 + 18) >> 12,
      *((_QWORD *)a2 + 2) >> 12,
      4,
      a2,
      p_MDLForRange);
  }
  v11 = (VIDMM_GLOBAL *)*((unsigned int *)a2 + 19);
  v12 = 0;
  if ( ((unsigned __int16)v11 & 0x100) == 0 )
    v12 = a3;
  if ( ((unsigned int)v11 & 0x8000000) != 0 )
    VIDMM_GLOBAL::NotifyContextAllocationEviction(v11, a2);
  v13 = **((_DWORD **)a2 + 63);
  LODWORD(Size) = 0x10000;
  if ( (v13 & 0x10000) != 0 )
    VIDMM_GLOBAL::NotifyResidency(*((VIDMM_GLOBAL **)this + 1), a2, 0);
  if ( (**((_DWORD **)a2 + 63) & 0x20000) != 0 && (*((_DWORD *)this + 20) & 0x40000) == 0 )
    *((_DWORD *)a2 + 19) |= 0x100000u;
  v14 = 0;
  if ( (*((_DWORD *)a2 + 19) & 0x100000) == 0 )
    v14 = v12;
  LODWORD(v100) = v14;
  if ( VIDMM_GLOBAL::IsTdrPending(*((VIDMM_GLOBAL **)this + 1)) )
  {
    v37 = WdLogNewEntry5_WdEvent(v16, v15);
    *(_QWORD *)(v37 + 24) = a2;
    WdLogEvent5_WdEvent(v37);
    LOBYTE(v17) = 0;
    LODWORD(v100) = v17;
  }
  if ( (VIDMM_GLOBAL::_Config & 8) == 0 && (*((_DWORD *)a2 + 21) & 8) != 0 )
    *((_BYTE *)a2 + 98) = 1;
  if ( (_BYTE)v17 && (*((_DWORD *)a2 + 21) & 8) != 0 && !*((_BYTE *)a2 + 98) && v5 )
  {
    KeStackAttachProcess(**((PRKPROCESS **)v5 + 1), &ApcState);
    v38 = (__int64 *)((char *)a2 + 8);
    BaseAddress = VidMmMapViewOfAllocation(v5, 0LL, *((_QWORD *)a2 + 1), v108, 1);
    if ( BaseAddress )
    {
      v39 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, (PSIZE_T)a2 + 1, 0x1000000u, 4u);
      VidMmUnmapViewOfAllocation(v5, v108[0]);
      v41 = bTracingEnabled;
      if ( v39 < 0 )
      {
        *((_BYTE *)a2 + 98) = 1;
        if ( v41 )
        {
          v45 = (unsigned __int64)*v38 >> 12;
          if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            LODWORD(p_MDLForRange) = 0;
            Protect[0] = v45;
            AllocationType[0] = 0;
            McTemplateK0pqqt(v45, &EventUnreset, v40, a2, *(_QWORD *)AllocationType, *(_QWORD *)Protect, p_MDLForRange);
          }
        }
        v46 = *v38;
        v47 = *((_QWORD *)this + 1);
        ++*(_DWORD *)(v47 + 7384);
        *(_QWORD *)(v47 + 7392) += v46;
      }
      else
      {
        if ( bTracingEnabled )
        {
          v42 = (unsigned __int64)*v38 >> 12;
          if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            LODWORD(p_MDLForRange) = 1;
            Protect[0] = v42;
            AllocationType[0] = 0;
            McTemplateK0pqqt(v42, &EventUnreset, v40, a2, *(_QWORD *)AllocationType, *(_QWORD *)Protect, p_MDLForRange);
          }
        }
        v43 = *v38;
        v44 = *((_QWORD *)this + 1);
        ++*(_DWORD *)(v44 + 7368);
        *(_QWORD *)(v44 + 7376) += v43;
      }
    }
    KeUnstackDetachProcess(&ApcState);
    v17 = (unsigned int)v100;
  }
  v18 = *((_BYTE *)a2 + 98) != 0 ? v17 : 0;
  v19 = *((unsigned int *)a2 + 21);
  if ( (v19 & 8) == 0 && (*((_DWORD *)a2 + 20) & 0x8000) != 0 )
  {
    if ( v5 )
    {
      LOBYTE(v16) = ((v19 & 2) == 0) & ~*((_BYTE *)v5 + 32);
      if ( (_BYTE)v16 )
      {
        if ( !*((_QWORD *)a2 + 33) )
        {
          if ( (*((_DWORD *)a2 + 19) & 0x4000000) == 0 )
          {
            v48 = WdLogNewEntry5_WdAssertion(v16, v19);
            *(_QWORD *)(v48 + 24) = 1725LL;
            WdLogEvent5_WdAssertion(v48);
          }
          if ( !v18 )
            goto LABEL_17;
          VIDMM_GLOBAL::ResetBackingStore(*((VIDMM_GLOBAL **)this + 1), a2);
        }
      }
    }
  }
  if ( v18 && (**((_DWORD **)a2 + 63) & 0x8000000) != 0 )
  {
    if ( !v5 )
      goto LABEL_19;
    LOBYTE(v16) = ((*((_BYTE *)a2 + 84) & 2) == 0) & ~*((_BYTE *)v5 + 32);
    if ( (_BYTE)v16
      && (int)VIDMM_GLOBAL::ChargePinnedBackingStore(*((VIDMM_GLOBAL **)this + 1), *((_QWORD *)a2 + 1)) >= 0 )
    {
      if ( (int)VIDMM_SEGMENT::LockAllocationBackingStore(this, a2) < 0 )
        VIDMM_GLOBAL::ReturnPinnedBackingStore(*((VIDMM_GLOBAL **)this + 1), *((_QWORD *)a2 + 1));
      else
        *((_DWORD *)a2 + 21) |= 2u;
    }
  }
LABEL_17:
  if ( v5 && (*((_BYTE *)v5 + 32) & 1) != 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v16);
    memset(v109, 0, sizeof(v109));
    v21 = 3;
    if ( v18 )
    {
      if ( *((_BYTE *)a2 + 289) )
      {
        VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), a2);
        *(_QWORD *)AllocationType = VidMmGetMDLForRange(a2, *((_QWORD *)a2 + 34), *((_QWORD *)a2 + 35));
        _guard_dispatch_icall_fptr();
        _guard_dispatch_icall_fptr();
      }
      v109[0] = a2;
      v109[1] = this;
      v109[2] = *((_QWORD *)a2 + 18);
      LODWORD(v109[3]) = 0;
      v22 = VIDMM_MEMORY_SEGMENT::RotateCopyCallback;
      v21 = 2;
    }
    else
    {
      v22 = 0LL;
    }
    KeStackAttachProcess(**((PRKPROCESS **)v5 + 1), &ApcState);
    if ( !a5 || (v23 = 2, (*((_DWORD *)a2 + 21) & 0x20) == 0) )
      v23 = 0;
    v103 = v23 | 1;
    v24 = VIDMM_GLOBAL::Rotate(
            *((_QWORD *)this + 1),
            *(_QWORD *)(*((_QWORD *)v5 + 1) + 24LL),
            *((_QWORD *)v5 + 3),
            v21,
            0LL,
            0LL,
            v22,
            v109,
            v23 | 1u,
            a2);
    v28 = v24;
    if ( v24 == -1073741558 )
    {
      *((_DWORD *)a2 + 19) |= 0x100000u;
    }
    else if ( v24 < 0 )
    {
      v49 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v26, v25, v27);
      v49[3] = 270LL;
      v49[4] = 4LL;
      v49[5] = v21;
      v49[6] = v28;
      v49[7] = 0LL;
      WdLogEvent5_WdCriticalError(v49);
    }
    *((_BYTE *)v5 + 32) &= ~1u;
    KeUnstackDetachProcess(&ApcState);
    goto LABEL_25;
  }
LABEL_19:
  if ( !v18 )
  {
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v16);
    if ( (*((_DWORD *)a2 + 19) & 0x100) == 0 )
      VIDMM_GLOBAL::DiscardAllocation(*((VIDMM_GLOBAL **)this + 1), a2);
    goto LABEL_24;
  }
  if ( !*((_DWORD *)a2 + 16) )
    goto LABEL_72;
  if ( g_IsInternalReleaseOrDbg )
    WdLogNewEntry5_WdTrace(v16);
  TemporaryResourcesForAllocation = VIDMM_GLOBAL::AllocateTemporaryResourcesForAllocation(
                                      *((VIDMM_GLOBAL **)this + 1),
                                      a2);
  v99 = TemporaryResourcesForAllocation;
  v31 = v96;
  if ( TemporaryResourcesForAllocation < 0 && v96 )
  {
    v50 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16, v29, v17);
    v50[3] = 270LL;
    v50[4] = 9LL;
    v50[5] = a2;
    v50[6] = v99;
    v50[7] = 0LL;
    WdLogEvent5_WdCriticalError(v50);
    TemporaryResourcesForAllocation = v99;
  }
  if ( TemporaryResourcesForAllocation < 0 )
    goto LABEL_72;
  MDLForRange = 0LL;
  if ( (*(_DWORD *)(*((_QWORD *)this + 1) + 6464LL) & 0x400) != 0 )
    goto LABEL_104;
  p_MDLForRange = (struct _MDL *)&MDLForRange;
  *(_QWORD *)Protect = &v97;
  LOBYTE(AllocationType[0]) = 0;
  v32 = _guard_dispatch_icall_fptr();
  if ( v32 >= 0 )
  {
    MDLForRange = VidMmGetMDLForRange(a2, 0LL, *((_QWORD *)a2 + 1));
    if ( !MDLForRange )
    {
      _guard_dispatch_icall_fptr();
LABEL_104:
      v32 = -1071775487;
    }
  }
  if ( v32 < 0 )
  {
    v54 = 0LL;
    v55 = *((_QWORD *)a2 + 1) >> 1;
    if ( !v96 || (v56 = 0x10000, !Use64KbPagesForTransfer(a2, this)) )
      v56 = 4096;
    while ( 1 )
    {
      if ( v54 == *((_QWORD *)a2 + 1) || VIDMM_GLOBAL::IsTdrPending(*((VIDMM_GLOBAL **)this + 1)) )
      {
        v5 = (struct _VIDMM_LOCAL_ALLOC *)v104;
LABEL_130:
        v98 = 1;
        goto LABEL_72;
      }
      MDLForRange = 0LL;
      v16 = ~(v56 - 1);
      v57 = v16 & (v56 + v55 - 1);
      if ( (*(_DWORD *)(v17 + 6464) & 0x800) != 0 && v56 != v57 )
        goto LABEL_116;
      p_MDLForRange = (struct _MDL *)&MDLForRange;
      *(_QWORD *)Protect = &v97;
      LOBYTE(AllocationType[0]) = v56 == v57;
      v58 = _guard_dispatch_icall_fptr();
      LODWORD(v100) = v58;
      if ( v58 < 0 )
        goto LABEL_124;
      if ( !MDLForRange )
        break;
LABEL_121:
      if ( v58 < 0 )
      {
LABEL_124:
        v55 = v57 >> 1;
      }
      else
      {
        if ( !v97 )
        {
          *(_QWORD *)AllocationType = MDLForRange;
          _guard_dispatch_icall_fptr();
        }
        v95.0 = 0;
        if ( v96 )
        {
          v94 = MDLForRange;
          v93 = 0LL;
          v92 = 0LL;
          v59 = v54;
          v60 = v57;
        }
        else
        {
          v94 = 0LL;
          v93 = (union _LARGE_INTEGER *)((char *)a2 + 256);
          v92 = (struct VIDMM_SEGMENT *)*((_QWORD *)a2 + 33);
          v59 = 0LL;
          v60 = *((_QWORD *)a2 + 1);
        }
        VIDMM_GLOBAL::MemoryTransfer(
          *((VIDMM_GLOBAL **)this + 1),
          a2,
          v60,
          v59,
          this,
          (union _LARGE_INTEGER *)a2 + 18,
          0LL,
          v92,
          v93,
          v94,
          v95);
        VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), a2);
        *(_QWORD *)AllocationType = MDLForRange;
        _guard_dispatch_icall_fptr();
        _guard_dispatch_icall_fptr();
        v54 += v57;
        v55 = *((_QWORD *)a2 + 1) - v54;
      }
    }
    MDLForRange = VidMmGetMDLForRange(a2, v54, v57);
    if ( MDLForRange )
    {
      v58 = v100;
      goto LABEL_121;
    }
    _guard_dispatch_icall_fptr();
LABEL_116:
    v58 = -1071775487;
    goto LABEL_121;
  }
  if ( !v97 )
  {
    *(_QWORD *)AllocationType = VidMmGetMDLForRange(a2, 0LL, *((_QWORD *)a2 + 1));
    _guard_dispatch_icall_fptr();
  }
  if ( g_IsInternalReleaseOrDbg )
  {
    WdLogNewEntry5_WdTrace(v16);
    v52 = (_QWORD *)WdLogNewEntry5_WdTrace(v51);
    v52[3] = *((_QWORD *)a2 + 33);
    v52[4] = *((_QWORD *)a2 + 31);
    v52[5] = *((int *)a2 + 65);
    v52[6] = *((unsigned int *)a2 + 64);
  }
  v33 = *((_QWORD *)a2 + 1);
  v95.0 = 0;
  if ( v31 )
  {
    v94 = VidMmGetMDLForRange(a2, 0LL, v33);
    v93 = 0LL;
    v92 = 0LL;
    v33 = *((_QWORD *)a2 + 1);
  }
  else
  {
    v94 = 0LL;
    v93 = (union _LARGE_INTEGER *)((char *)a2 + 256);
    v92 = (struct VIDMM_SEGMENT *)*((_QWORD *)a2 + 33);
  }
  VIDMM_GLOBAL::MemoryTransfer(
    *((VIDMM_GLOBAL **)this + 1),
    a2,
    v33,
    0LL,
    this,
    (union _LARGE_INTEGER *)a2 + 18,
    0LL,
    v92,
    v93,
    v94,
    v95);
  if ( (*((_DWORD *)a2 + 21) & 4) != 0 )
  {
    v53 = WdLogNewEntry5_WdEvent(v35, v34);
    *(_QWORD *)(v53 + 24) = a2;
    WdLogEvent5_WdEvent(v53);
    goto LABEL_130;
  }
  VIDMM_GLOBAL::ReleaseTemporaryResourcesForAllocation(*((VIDMM_GLOBAL **)this + 1), a2);
LABEL_72:
  if ( v99 < 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v16);
    if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q(v16, (__int64)&EventPerformanceWarning, v17, 2);
    v61 = 0;
    v99 = 0;
    if ( (**((_DWORD **)a2 + 63) & 8) == 0 && v5 )
    {
      KeStackAttachProcess(**((PRKPROCESS **)v5 + 1), &ApcState);
      v61 = 1;
      v99 = 1;
    }
    v103 = v61;
    v62 = Use64KbPagesForTransfer(a2, *((struct VIDMM_SEGMENT **)a2 + 17));
    v64 = *((_QWORD *)a2 + 1);
    if ( v62 )
    {
      v65 = v64 >> 16;
      v66 = 0x10000;
    }
    else
    {
      v66 = 4096;
      LODWORD(Size) = 4096;
      v65 = v64 >> 12;
    }
    v105 = *(union _LARGE_INTEGER *)((char *)a2 + 144);
    v67 = 0;
    while ( 1 )
    {
      LODWORD(v100) = v67;
      if ( v67 >= (unsigned int)v65 )
        break;
      v68 = v66 * v67;
      VIDMM_GLOBAL::MemoryTransfer(
        *((VIDMM_GLOBAL **)this + 1),
        a2,
        v66,
        v66 * v67,
        this,
        &v105,
        0LL,
        0LL,
        0LL,
        *(struct _MDL **)(*((_QWORD *)this + 33) + 8LL),
        0);
      VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), a2);
      v105.QuadPart += (unsigned int)Size;
      v69 = VidMmMapViewOfAllocation(v5, v68, (unsigned int)Size, &v104, 0);
      if ( v69 )
      {
        memmove(v69, *((const void **)this + 32), (unsigned int)Size);
        VidMmUnmapViewOfAllocation(v5, v104);
      }
      else
      {
        *((_DWORD *)a2 + 19) |= 0x100000u;
      }
      v67 = v100 + 1;
      v63 = v99;
      v66 = Size;
    }
    if ( v63 )
      KeUnstackDetachProcess(&ApcState);
  }
LABEL_24:
  if ( (**((_DWORD **)a2 + 63) & 0x20000) != 0 && *((_QWORD *)a2 + 19) )
  {
    v70 = ~*((_QWORD *)this + 50) & (*((_QWORD *)this + 50) + *((_QWORD *)a2 + 2));
    memset(&v110, 0, sizeof(v110));
    v110.PhysicalAdapterIndex = *((_DWORD *)this + 95);
    v110.SegmentIndex = (*((_DWORD *)this + 20) & 0x1000) != 0 ? 0 : *((_DWORD *)this + 4) + 1;
    v71 = 1;
    if ( *((_DWORD *)this + 103) )
    {
      v71 = 0;
      v100 = 0LL;
      if ( (unsigned int)VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
                           *((_QWORD *)this + 19),
                           *((_QWORD *)this + 52),
                           *((_QWORD *)this + 53),
                           0,
                           (__int64)VIDMM_SEGMENT::CheckLowestAddress,
                           (__int64)this,
                           (__int64)&v100,
                           (__int64)&v106,
                           (__int64)&v96) == -1073741823
        && v100 == *((_QWORD *)a2 + 18) )
      {
        v72 = *((_QWORD *)this + 53);
        v73 = *((_QWORD *)a2 + 19);
        v74 = *(_QWORD *)v73 + *(_QWORD *)(v73 + 8);
        if ( v74 >= v72 )
        {
LABEL_162:
          v74 = *((_QWORD *)this + 53);
        }
        else
        {
          while ( 1 )
          {
            v75 = *(_QWORD *)(v73 + 40);
            if ( v75 == *((_QWORD *)this + 19) + 72LL )
              break;
            v73 = v75 - 40;
            if ( *(_BYTE *)(v73 + 56) != 2 )
              break;
            v74 = *(_QWORD *)v73 + *(_QWORD *)(v73 + 8);
            if ( v74 >= v72 )
              goto LABEL_162;
          }
        }
        v76 = v74 & ~*((_QWORD *)this + 50);
        v100 = v76;
        if ( v76 > *((_QWORD *)this + 52) )
        {
          v110.CurrentStartOffset = *((_QWORD *)this + 52);
          v110.CurrentSize = *((_QWORD *)this + 54);
          v110.NewStartOffset = v76;
          v110.NewSize = v72 - v76;
          *((_QWORD *)this + 54) = v72 - v76;
          *((_QWORD *)this + 52) = v76;
          v71 = 1;
        }
      }
    }
    else
    {
      v110.CurrentStartOffset = *((_QWORD *)a2 + 18);
      v110.CurrentSize = v70;
    }
    if ( v71 )
    {
      v77 = (char *)operator new[](0x68uLL, 0x31356956u, PagedPool);
      v78 = operator new[](0x28uLL, 0x38356956u, PagedPool);
      v79 = v78;
      if ( v77 )
      {
        if ( v78 )
        {
          memset(v77, 0, 0x68uLL);
          *((_QWORD *)v77 + 2) = DeferredSetVprCallback;
          *((_QWORD *)v77 + 4) = DeferredSetVprCompletionCallback;
          *(_DXGKARG_SETVIDEOPROTECTEDREGION *)(v77 + 56) = v110;
          *((_QWORD *)v77 + 5) = *((_QWORD *)this + 1);
          *((_QWORD *)v77 + 6) = v79;
          v79[2] = this;
          v79[3] = *((_QWORD *)a2 + 19);
          v79[4] = *((_QWORD *)a2 + 2);
          *((_QWORD *)v77 + 3) = v77;
          VIDMM_GLOBAL::EvictAllReclaimedAllocation(*((VIDMM_GLOBAL **)this + 1));
          VIDMM_GLOBAL::FlushPagingBuffer(*((VIDMM_GLOBAL **)this + 1), 0, 0LL, 0LL);
          VIDMM_LINEAR_POOL::MarkBlockAsAllocatedScrubPending(
            *((VIDMM_LINEAR_POOL **)this + 19),
            *((void **)a2 + 19),
            v110.CurrentStartOffset,
            v110.NewStartOffset);
          DXG_DEFERRED_WORK_QUEUE::QueueWorkItem(
            (DXG_DEFERRED_WORK_QUEUE *)(*((_QWORD *)this + 1) + 41024LL),
            (struct DXG_DEFERRED_QUEUE_WORK_ITEM *)v77);
          *((_QWORD *)a2 + 19) = 0LL;
          if ( *((_DWORD *)a2 + 32) != 1 )
          {
            VIDMM_SEGMENT::DecrementBytesCommitted(this, **((struct VIDMM_PARTITION ***)a2 + 61), *((_QWORD *)a2 + 2));
            --*((_DWORD *)this + 80);
          }
          goto LABEL_25;
        }
        operator delete(v77);
      }
      if ( v79 )
        operator delete(v79);
      if ( (unsigned int)DXG_DEFERRED_WORK_QUEUE::GetNumWorkItems((DXG_DEFERRED_WORK_QUEUE *)(*((_QWORD *)this + 1)
                                                                                            + 41024LL)) )
      {
        if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v80, (__int64)&EventPerformanceWarning, v81, 24);
        KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 1) + 41064LL), Executive, 0, 0, 0LL);
      }
      VIDMM_GLOBAL::EvictAllReclaimedAllocation(*((VIDMM_GLOBAL **)this + 1));
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 95));
      VIDMM_SEGMENT::CheckFreeVPRReserve(this, &v110);
      if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqqxxp(
          *(_QWORD *)(*((_QWORD *)this + 1) + 24LL),
          v82,
          v83,
          v110.PhysicalAdapterIndex,
          v110.SegmentIndex,
          v110.VprIndex,
          v110.NewStartOffset,
          v110.NewSize,
          *(_QWORD *)(*((_QWORD *)this + 1) + 24LL));
      if ( (int)ADAPTER_RENDER::DdiSetVideoProtectedRegion(
                  *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 2312LL),
                  &v110) < 0
        && g_IsInternalRelease )
      {
        v87 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v85, v84, v86);
        v87[3] = 270LL;
        v87[4] = 9LL;
        v87[5] = 0LL;
        v87[6] = 0LL;
        v87[7] = 0LL;
        WdLogEvent5_WdCriticalError(v87);
      }
    }
  }
LABEL_25:
  *((_DWORD *)a2 + 19) &= ~0x4000000u;
  *(_WORD *)(*((_QWORD *)a2 + 63) + 6LL) = 0;
  *(_QWORD *)(*((_QWORD *)a2 + 63) + 24LL) = 0LL;
  *((_QWORD *)a2 + 17) = 0LL;
  if ( v98 )
    _guard_dispatch_icall_fptr();
  v20 = *((_QWORD *)this + 1);
  _InterlockedOr(v88, 0);
  ++*(_QWORD *)(v20 + 40);
}
